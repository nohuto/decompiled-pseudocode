/*
 * XREFs of PspUnlockJobMemoryLimitsShared @ 0x1404683A0
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140467790 (PspEnforceLimitsJobPostCallback.c)
 *     PspApplyJobLimitsToProcess @ 0x1404690A0 (PspApplyJobLimitsToProcess.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1406801D0 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 */

unsigned __int64 __fastcall PspUnlockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 result; // rax

  v2 = a1 + 1016;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1016), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1016));
  result = KeAbPostRelease(v2);
  if ( a2 )
    return KiLeaveGuardedRegionUnsafe(a2);
  return result;
}
