/*
 * XREFs of PspUnlockQuotaListExclusive @ 0x14014C39C
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x1404D7A50 (PspLookupProcessQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x14067CF60 (PspRemoveQuotaBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockQuotaListExclusive(__int64 a1, volatile signed __int64 *a2)
{
  if ( (_InterlockedExchangeAdd64(a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread(a1);
}
