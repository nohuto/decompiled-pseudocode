/*
 * XREFs of PspUnlockProcessThreadListShared @ 0x140095498
 * Callers:
 *     PspNotifyProcessBackgroundTransition @ 0x1400953BC (PspNotifyProcessBackgroundTransition.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1404A5B98 (PsQueryTotalCycleTimeProcess.c)
 *     PsQueryRuntimeProcess @ 0x1404A5C60 (PsQueryRuntimeProcess.c)
 *     PsQueryProcessEnergyValues @ 0x1404F94C0 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
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
