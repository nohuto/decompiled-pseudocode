/*
 * XREFs of SmcCacheDereference @ 0x140658B10
 * Callers:
 *     SmcProcessCreateRequest @ 0x1406581B8 (SmcProcessCreateRequest.c)
 *     SmcGetCacheStats @ 0x1406590D0 (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x140659274 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1406594B0 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x1406597BC (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x140659DD4 (SmcVolumePnpNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall SmcCacheDereference(__int64 a1, char a2)
{
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (a2 & 0xF) + a1 + 8));
}
