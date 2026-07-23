/*
 * XREFs of PspUnlockQuotaListExclusive @ 0x14014C90C
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x1404BB054 (PspLookupProcessQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x14067D044 (PspRemoveQuotaBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockQuotaListExclusive(__int64 a1, volatile signed __int64 *a2)
{
  if ( (_InterlockedExchangeAdd64(a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread(a1);
}
