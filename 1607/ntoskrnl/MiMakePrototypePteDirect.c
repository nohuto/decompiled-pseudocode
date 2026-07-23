/*
 * XREFs of MiMakePrototypePteDirect @ 0x1401F2584
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MiResolveSharedZeroFault @ 0x140041B80 (MiResolveSharedZeroFault.c)
 *     MiTrimSystemImagePages @ 0x140082164 (MiTrimSystemImagePages.c)
 *     MiFillPteWithProto @ 0x14009F84C (MiFillPteWithProto.c)
 *     MiExpandSharedZeroCluster @ 0x1400B72E8 (MiExpandSharedZeroCluster.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x1400BE180 (MiWriteSharedDemandZeroPte.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiHandleForkTransitionPte @ 0x1401F701C (MiHandleForkTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F8EE8 (MiConvertStandbyToProto.c)
 *     MiAddMappedPtes @ 0x140509080 (MiAddMappedPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  return MiSwizzleInvalidPte((a1 << 16) | 0x400);
}
