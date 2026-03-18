/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x140469570
 * Callers:
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1404688C0 (PspEnforceLimitsJobPostCallback.c)
 *     PspApplyJobLimitsToProcess @ 0x14046A1D0 (PspApplyJobLimitsToProcess.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1406800EC (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rbx
  signed __int64 result; // rax

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  v2 = (volatile signed __int64 *)(a1 + 1016);
  v3 = KeAbPreAcquire(a1 + 1016, 0LL, 0);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((unsigned __int64 *)v2, v3, (ULONG_PTR)v2);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}
