/*
 * XREFs of PspSendJobNotification @ 0x1400AC040
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x1404688C0 (PspEnforceLimitsJobPostCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x140469654 (PspRemoveProcessFromJobChain.c)
 *     PspAddProcessToJobChain @ 0x14046A2B8 (PspAddProcessToJobChain.c)
 *     PspValidateJobLimitsDuringAssignment @ 0x14046A490 (PspValidateJobLimitsDuringAssignment.c)
 *     PspSendProcessNotificationToJobChain @ 0x1404DBE54 (PspSendProcessNotificationToJobChain.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140507750 (PspChangeJobMemoryUsageByProcess.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E3A8 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1406800EC (PsReportProcessMemoryLimitViolation.c)
 *     PspAssociateCompletionPortCallback @ 0x1406803D4 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1404DBF04 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
