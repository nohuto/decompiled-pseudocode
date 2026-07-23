/*
 * XREFs of SmcCacheReference @ 0x14069A1EC
 * Callers:
 *     SmcGetCacheStats @ 0x14069A4D0 (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x14069A674 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x14069A8B0 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x14069ABBC (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x14069B1D4 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
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
      ExReleaseRundownProtection(v4 + 1);
  }
  return v3;
}
