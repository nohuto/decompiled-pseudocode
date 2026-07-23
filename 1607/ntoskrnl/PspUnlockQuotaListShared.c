/*
 * XREFs of PspUnlockQuotaListShared @ 0x1400A8B50
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x1404BAE98 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x1404BB054 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockQuotaListShared(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KiLeaveCriticalRegionUnsafe(a1, v4, v5, v6);
}
