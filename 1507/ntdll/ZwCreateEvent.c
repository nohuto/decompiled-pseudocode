/*
 * XREFs of ZwCreateEvent @ 0x180093D80
 * Callers:
 *     LdrpInitParallelLoadingSupport @ 0x18000489C (LdrpInitParallelLoadingSupport.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180073144 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     EtwpInitLoggerContext @ 0x1800769B4 (EtwpInitLoggerContext.c)
 *     RtlWaitForWnfMetaNotification @ 0x180076F20 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007AFA4 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007B4F0 (EtwpRegisterTpNotificationOnce.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800BCDF4 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800C1540 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800C1B00 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800C7660 (RtlReportExceptionEx.c)
 *     RtlInitBarrier @ 0x1800D3B90 (RtlInitBarrier.c)
 *     RtlCreateUmsCompletionList @ 0x1800DDBA0 (RtlCreateUmsCompletionList.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateEvent()
{
  __int64 result; // rax

  result = 72LL;
  __asm { syscall; Low latency system call }
  return result;
}
