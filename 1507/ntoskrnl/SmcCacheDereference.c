/*
 * XREFs of SmcCacheDereference @ 0x1406DAF84
 * Callers:
 *     SmcProcessCreateRequest @ 0x1406DA5E4 (SmcProcessCreateRequest.c)
 *     SmcGetCacheStats @ 0x1406DB60C (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x1406DB7E4 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1406DBA20 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x1406DBDB4 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x1406DC518 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 */

void __fastcall SmcCacheDereference(__int64 a1, char a2)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  unsigned __int64 v3; // rtt

  v2 = (struct _EX_RUNDOWN_REF *)(32LL * (a2 & 0xF) + a1 + 8);
  _m_prefetchw(v2);
  v3 = v2->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v3 - 2, v3) )
    ExfReleaseRundownProtection(v2);
}
