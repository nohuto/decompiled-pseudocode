/*
 * XREFs of PspUnlockJobMemoryLimitsShared @ 0x1403EC7C8
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x1403E9118 (PspApplyJobLimitsToProcess.c)
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1403EB244 (PspEnforceLimitsJobPostCallback.c)
 *     PsReportProcessMemoryLimitViolation @ 0x140641CA8 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 */

void __fastcall PspUnlockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  v2 = a1 + 1024;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1024));
  KeAbPostRelease(v2);
  if ( a2 )
    KiLeaveGuardedRegionUnsafe(a2);
}
