/*
 * XREFs of MiMakePrototypePteDirect @ 0x140225C38
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x1400039D0 (MiWriteSharedDemandZeroPte.c)
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiTrimSystemImagePages @ 0x1400D41D4 (MiTrimSystemImagePages.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiAddMappedPtes @ 0x14051C0C0 (MiAddMappedPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  return MiSwizzleInvalidPte((a1 << 16) | 0x400);
}
