/*
 * XREFs of PspSendJobNotification @ 0x140117780
 * Callers:
 *     PspSendProcessNotificationToJobChain @ 0x1403E8DC0 (PspSendProcessNotificationToJobChain.c)
 *     PspAddProcessToJobChain @ 0x1403E8E64 (PspAddProcessToJobChain.c)
 *     PspValidateJobLimitsDuringAssignment @ 0x1403E9050 (PspValidateJobLimitsDuringAssignment.c)
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1403EB244 (PspEnforceLimitsJobPostCallback.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140417EB0 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReportProcessMemoryLimitViolation @ 0x140641CA8 (PsReportProcessMemoryLimitViolation.c)
 *     PspAssociateCompletionPortCallback @ 0x140641F90 (PspAssociateCompletionPortCallback.c)
 *     PspSendSiloTerminationNotification @ 0x140642548 (PspSendSiloTerminationNotification.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1404F5440 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
