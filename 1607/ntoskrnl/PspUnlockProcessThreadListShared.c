/*
 * XREFs of PspUnlockProcessThreadListShared @ 0x140095C98
 * Callers:
 *     PspNotifyProcessBackgroundTransition @ 0x140095BBC (PspNotifyProcessBackgroundTransition.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1404B9E68 (PsQueryTotalCycleTimeProcess.c)
 *     PsQueryRuntimeProcess @ 0x1404B9F30 (PsQueryRuntimeProcess.c)
 *     PsQueryProcessEnergyValues @ 0x1405160D0 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockProcessThreadListShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  v2 = a1 + 1712;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1712), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease(v2);
  return KeLeaveCriticalRegionThread(a2);
}
