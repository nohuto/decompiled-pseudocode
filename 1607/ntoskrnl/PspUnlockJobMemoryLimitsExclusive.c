/*
 * XREFs of PspUnlockJobMemoryLimitsExclusive @ 0x140464B90
 * Callers:
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x1404E2DE8 (PspJobClose.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140507750 (PspChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
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
