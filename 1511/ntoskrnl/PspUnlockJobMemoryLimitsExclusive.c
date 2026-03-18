/*
 * XREFs of PspUnlockJobMemoryLimitsExclusive @ 0x140486708
 * Callers:
 *     PspChangeJobMemoryUsageByProcess @ 0x140417EB0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspJobClose @ 0x140485508 (PspJobClose.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 */

void __fastcall PspUnlockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rbx

  if ( a1 != a2 )
  {
    v4 = a1 + 1024;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1024));
    KeAbPostRelease(v4);
  }
  if ( a3 )
    KiLeaveGuardedRegionUnsafe(a3);
}
