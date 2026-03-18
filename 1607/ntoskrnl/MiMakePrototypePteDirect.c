/*
 * XREFs of MiMakePrototypePteDirect @ 0x1401F2758
 * Callers:
 *     MmMapViewInSystemCache @ 0x140018A20 (MmMapViewInSystemCache.c)
 *     MiResolveSharedZeroFault @ 0x140042000 (MiResolveSharedZeroFault.c)
 *     MiTrimSystemImagePages @ 0x140084004 (MiTrimSystemImagePages.c)
 *     MiFillPteWithProto @ 0x1400A0F24 (MiFillPteWithProto.c)
 *     MiExpandSharedZeroCluster @ 0x1400B9458 (MiExpandSharedZeroCluster.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x1400C02F0 (MiWriteSharedDemandZeroPte.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiHandleForkTransitionPte @ 0x1401F71F0 (MiHandleForkTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 *     MiAddMappedPtes @ 0x140526020 (MiAddMappedPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  return MiSwizzleInvalidPte((a1 << 16) | 0x400);
}
