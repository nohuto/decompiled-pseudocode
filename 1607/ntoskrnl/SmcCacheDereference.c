/*
 * XREFs of SmcCacheDereference @ 0x140699FE8
 * Callers:
 *     SmcProcessCreateRequest @ 0x140697548 (SmcProcessCreateRequest.c)
 *     SmcGetCacheStats @ 0x14069A4D0 (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x14069A674 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x14069A8B0 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x14069ABBC (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x14069B1D4 (SmcVolumePnpNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall SmcCacheDereference(__int64 a1, char a2)
{
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(32LL * (a2 & 0xF) + a1 + 8));
}
