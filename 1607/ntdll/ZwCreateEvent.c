/*
 * XREFs of ZwCreateEvent @ 0x1800A6D20
 * Callers:
 *     WerpCreateCompletionEvent @ 0x180006BEC (WerpCreateCompletionEvent.c)
 *     EtwpInitLoggerContext @ 0x1800550E0 (EtwpInitLoggerContext.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800658A0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180066D28 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081530 (EtwpRegisterTpNotificationOnce.c)
 *     LdrpCreateLoaderEvents @ 0x180081C90 (LdrpCreateLoaderEvents.c)
 *     RtlpWnfRegisterTpNotification @ 0x180082A94 (RtlpWnfRegisterTpNotification.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D0F94 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D34E0 (RtlpProcessReflectionStartup.c)
 *     RtlCreateUmsCompletionList @ 0x1800EC3F0 (RtlCreateUmsCompletionList.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateEvent()
{
  __int64 result; // rax

  result = 72LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
