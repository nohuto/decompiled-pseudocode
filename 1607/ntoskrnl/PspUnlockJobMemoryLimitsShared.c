/*
 * XREFs of PspUnlockJobMemoryLimitsShared @ 0x1404694D0
 * Callers:
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1404688C0 (PspEnforceLimitsJobPostCallback.c)
 *     PspApplyJobLimitsToProcess @ 0x14046A1D0 (PspApplyJobLimitsToProcess.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1406800EC (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
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
