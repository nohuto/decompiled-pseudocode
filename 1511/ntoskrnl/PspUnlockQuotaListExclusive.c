/*
 * XREFs of PspUnlockQuotaListExclusive @ 0x140142608
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x1403BD32C (PspLookupProcessQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x14063E5B0 (PspRemoveQuotaBlock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockQuotaListExclusive(__int64 a1, volatile signed __int64 *a2)
{
  if ( (_InterlockedExchangeAdd64(a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread(a1);
}
