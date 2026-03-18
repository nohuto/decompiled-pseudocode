/*
 * XREFs of PspSendJobNotification @ 0x14013A2C4
 * Callers:
 *     PspChangeJobMemoryUsageByProcess @ 0x14041AEA0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspAddProcessToJobChain @ 0x14041B3E0 (PspAddProcessToJobChain.c)
 *     PspValidateJobLimitsDuringAssignment @ 0x14041B608 (PspValidateJobLimitsDuringAssignment.c)
 *     PspRemoveProcessFromJobChain @ 0x140505F18 (PspRemoveProcessFromJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140506F48 (PspEnforceLimitsJobPostCallback.c)
 *     PspSendProcessNotificationToJobChain @ 0x140544944 (PspSendProcessNotificationToJobChain.c)
 *     PspAssociateCompletionPortCallback @ 0x140560780 (PspAssociateCompletionPortCallback.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1406C41C8 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     IoSetIoCompletion @ 0x14042D0C8 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
