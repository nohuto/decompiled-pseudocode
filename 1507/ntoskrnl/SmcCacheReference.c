/*
 * XREFs of SmcCacheReference @ 0x1406DB1DC
 * Callers:
 *     SmcGetCacheStats @ 0x1406DB60C (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x1406DB7E4 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1406DBA20 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x1406DBDB4 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x1406DC518 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 */

struct _EX_RUNDOWN_REF __fastcall SmcCacheReference(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF *v3; // rdi
  struct _EX_RUNDOWN_REF v4; // rbp
  struct _EX_RUNDOWN_REF *v5; // rbx
  unsigned __int64 v6; // rtt
  BOOLEAN v7; // cl
  unsigned __int64 v8; // rtt

  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 32LL * (a2 & 0xF));
  v4.Count = 0LL;
  v5 = v3 + 1;
  _m_prefetchw(&v3[1]);
  v6 = v3[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)&v3[1], v6 + 2, v6) )
  {
    v7 = 1;
  }
  else
  {
    v7 = ExfAcquireRundownProtection(v3 + 1);
    if ( !v7 )
      return v4;
  }
  if ( (v3[3].Count & 0xFFF) == a2 >> 4 )
  {
    v4.Count = v3->Count;
    v7 = 0;
  }
  if ( v7 )
  {
    _m_prefetchw(v5);
    v8 = v5->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v8 - 2, v8) )
      ExfReleaseRundownProtection(v3 + 1);
  }
  return v4;
}
