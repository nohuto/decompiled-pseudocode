/*
 * XREFs of NtWaitForSingleObject @ 0x1800A5140
 * Callers:
 *     WaitForWerSvc @ 0x180002FD4 (WaitForWerSvc.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     RtlpWaitOnCriticalSection @ 0x18002FD78 (RtlpWaitOnCriticalSection.c)
 *     RtlWaitForWnfMetaNotification @ 0x18004EFC0 (RtlWaitForWnfMetaNotification.c)
 *     RtlReportSilentProcessExit @ 0x18005B560 (RtlReportSilentProcessExit.c)
 *     EtwpLogger @ 0x18005BCF0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x18005C7A8 (EtwpStopUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x18005C8BC (EtwpSynchronizeWithLogger.c)
 *     RtlQueryProcessDebugInformation @ 0x18006C270 (RtlQueryProcessDebugInformation.c)
 *     RtlAcquireResourceShared @ 0x18006F2D0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006F420 (RtlAcquireResourceExclusive.c)
 *     RtlCreateProcessReflection @ 0x18008C990 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x18008D1C0 (RtlpProcessReflectionStartup.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800C9B14 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlSetProcessDebugInformation @ 0x1800CD370 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D0350 (RtlWow64SuspendThreadEx.c)
 *     RtlReportSqmEscalation @ 0x1800D0F90 (RtlReportSqmEscalation.c)
 *     LdrpResReadFile @ 0x1800D5054 (LdrpResReadFile.c)
 *     RtlBarrier @ 0x1800DBBA0 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x1800DBCE0 (RtlBarrierForDelete.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800E1180 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800E3640 (RtlDequeueUmsCompletionListItems.c)
 *     _ResReadFile @ 0x1800FA374 (_ResReadFile.c)
 *     _ResWaitForSingleObject @ 0x1800FA4A0 (_ResWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 4;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
