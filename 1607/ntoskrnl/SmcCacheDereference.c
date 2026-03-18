/*
 * XREFs of SmcCacheDereference @ 0x140699F04
 * Callers:
 *     SmcProcessCreateRequest @ 0x140697464 (SmcProcessCreateRequest.c)
 *     SmcGetCacheStats @ 0x14069A3EC (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x14069A590 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x14069A7CC (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x14069AAD8 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x14069B0F0 (SmcVolumePnpNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall SmcCacheDereference(__int64 a1, char a2)
{
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(32LL * (a2 & 0xF) + a1 + 8));
}
