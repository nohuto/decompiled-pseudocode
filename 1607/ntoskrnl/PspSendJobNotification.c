/*
 * XREFs of PspSendJobNotification @ 0x1400AA5A8
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140467790 (PspEnforceLimitsJobPostCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     PspAddProcessToJobChain @ 0x140469188 (PspAddProcessToJobChain.c)
 *     PspValidateJobLimitsDuringAssignment @ 0x140469360 (PspValidateJobLimitsDuringAssignment.c)
 *     PspSendProcessNotificationToJobChain @ 0x1404BF458 (PspSendProcessNotificationToJobChain.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1404EA6E0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E48C (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1406801D0 (PsReportProcessMemoryLimitViolation.c)
 *     PspAssociateCompletionPortCallback @ 0x1406804B8 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1404BF508 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
