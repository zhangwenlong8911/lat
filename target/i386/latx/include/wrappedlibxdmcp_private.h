#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

GO(XdmcpWriteARRAY16, iFpp)
GO(XdmcpWriteARRAY32, iFpp)
GO(XdmcpWriteARRAY8, iFpp)
GO(XdmcpWriteARRAYofARRAY8, iFpp)
GO(XdmcpWriteCARD16, iFpu)
GO(XdmcpWriteCARD32, iFpu)
GO(XdmcpWriteCARD8, iFpu)
GO(XdmcpWriteHeader, iFpp)
GO(XdmcpFlush, iFippi)
GO(XdmcpReadARRAY16, iFpp)
GO(XdmcpReadARRAY32, iFpp)
GO(XdmcpReadARRAY8, iFpp)
GO(XdmcpReadARRAYofARRAY8, iFpp)
GO(XdmcpReadCARD16, iFpp)
GO(XdmcpReadCARD32, iFpp)
GO(XdmcpReadCARD8, iFpp)
GO(XdmcpReadHeader, iFpp)
GO(XdmcpFill, iFippp)
GO(XdmcpReadRemaining, iFp)
GO(XdmcpDisposeARRAY8, vFp)
GO(XdmcpDisposeARRAY16, vFp)
GO(XdmcpDisposeARRAY32, vFp)
GO(XdmcpDisposeARRAYofARRAY8, vFp)
GO(XdmcpCopyARRAY8, iFpp)
GO(XdmcpARRAY8Equal, iFpp)
GO(XdmcpGenerateKey, vFp)
GO(XdmcpIncrementKey, vFp)
GO(XdmcpDecrementKey, vFp)
GO(XdmcpWrap, vFpppi)
GO(XdmcpUnwrap, vFpppi)
GO(XdmcpCompareKeys, iFpp)
GO(XdmcpAllocARRAY16, iFpi)
GO(XdmcpAllocARRAY32, iFpi)
GO(XdmcpAllocARRAY8, iFpi)
GO(XdmcpAllocARRAYofARRAY8, iFpi)
GO(XdmcpReallocARRAY16, iFpi)
GO(XdmcpReallocARRAY32, iFpi)
GO(XdmcpReallocARRAY8, iFpi)
GO(XdmcpReallocARRAYofARRAY8, iFpi)

GO(_XdmcpAuthDoIt, vFpppi)
GO(_XdmcpAuthSetup, vFpp)
GO(_XdmcpWrapperToOddParity, vFpp)
