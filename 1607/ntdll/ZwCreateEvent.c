/*
 * XREFs of ZwCreateEvent @ 0x1800A6D20
 * Callers:
 *     WerpCreateCompletionEvent @ 0x180006BDC (WerpCreateCompletionEvent.c)
 *     EtwpInitLoggerContext @ 0x1800550D0 (EtwpInitLoggerContext.c)
 *     RtlWaitForWnfMetaNotification @ 0x180065890 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180066D18 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081520 (EtwpRegisterTpNotificationOnce.c)
 *     LdrpCreateLoaderEvents @ 0x180081C80 (LdrpCreateLoaderEvents.c)
 *     RtlpWnfRegisterTpNotification @ 0x180082A84 (RtlpWnfRegisterTpNotification.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D1054 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D2FE0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D35A0 (RtlpProcessReflectionStartup.c)
 *     RtlCreateUmsCompletionList @ 0x1800EC4B0 (RtlCreateUmsCompletionList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  NTSTATUS result; // eax

  result = 72;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
