/*
 * XREFs of PspUnlockJobMemoryLimitsExclusive @ 0x140463A60
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x1404C5D4C (PspJobClose.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1404EA6E0 (PspChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall PspUnlockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rbx
  unsigned __int64 result; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 1016;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1016), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1016));
    result = KeAbPostRelease(v4);
  }
  if ( a3 )
    return KiLeaveGuardedRegionUnsafe(a3);
  return result;
}
