/*
 * XREFs of PspUnlockQuotaListShared @ 0x140003178
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x1403BD170 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x1403BD32C (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockQuotaListShared(__int64 a1, volatile signed __int64 *a2)
{
  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KiLeaveCriticalRegionUnsafe(a1);
}
