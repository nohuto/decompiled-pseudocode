/*
 * XREFs of SmcCacheReference @ 0x140658D24
 * Callers:
 *     SmcGetCacheStats @ 0x1406590D0 (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x140659274 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1406594B0 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x1406597BC (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x140659DD4 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 */

struct _EX_RUNDOWN_REF __fastcall SmcCacheReference(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rbx
  BOOLEAN v5; // dl

  v3.Count = 0LL;
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 32LL * (a2 & 0xF));
  v5 = ExAcquireRundownProtection(v4 + 1);
  if ( v5 )
  {
    if ( (v4[3].Count & 0xFFF) == a2 >> 4 )
    {
      v3.Count = v4->Count;
      v5 = 0;
    }
    if ( v5 )
      ExReleaseRundownProtection_0(v4 + 1);
  }
  return v3;
}
