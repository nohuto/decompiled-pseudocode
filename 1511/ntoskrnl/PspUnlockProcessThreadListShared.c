/*
 * XREFs of PspUnlockProcessThreadListShared @ 0x140014364
 * Callers:
 *     PspNotifyProcessBackgroundTransition @ 0x1400EAFBC (PspNotifyProcessBackgroundTransition.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1403B4B54 (PsQueryTotalCycleTimeProcess.c)
 *     PsQueryRuntimeProcess @ 0x1403CB688 (PsQueryRuntimeProcess.c)
 *     PsQueryProcessEnergyValues @ 0x1403F1B44 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockProcessThreadListShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  v2 = a1 + 1696;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1696), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease(v2);
  return KeLeaveCriticalRegionThread(a2);
}
