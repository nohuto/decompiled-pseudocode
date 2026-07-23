/*
 * XREFs of ZwCreateEvent @ 0x1800A59C0
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800472B8 (EtwpInitLoggerContext.c)
 *     RtlWaitForWnfMetaNotification @ 0x18004EFC0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWnfRegisterTpNotification @ 0x180051338 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180051D60 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18007F950 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlCreateProcessReflection @ 0x18008C990 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x18008D1C0 (RtlpProcessReflectionStartup.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800C9B14 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpCreateLoaderEvents @ 0x1800CB424 (LdrpCreateLoaderEvents.c)
 *     RtlReportExceptionEx @ 0x1800D0990 (RtlReportExceptionEx.c)
 *     RtlInitBarrier @ 0x1800DBE80 (RtlInitBarrier.c)
 *     RtlCreateUmsCompletionList @ 0x1800E3350 (RtlCreateUmsCompletionList.c)
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
