/*
 * XREFs of NtWaitForSingleObject @ 0x1800A64A0
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180007300 (RtlReportSilentProcessExit.c)
 *     WaitForWerSvc @ 0x180008B04 (WaitForWerSvc.c)
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x180051DF8 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x180052AE0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x1800533F0 (EtwpStopUmLogger.c)
 *     RtlWaitForWnfMetaNotification @ 0x180065890 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWaitOnCriticalSection @ 0x18006673C (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x18006CEB0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006CFA0 (RtlAcquireResourceExclusive.c)
 *     RtlQueryProcessDebugInformation @ 0x18006D3A0 (RtlQueryProcessDebugInformation.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D1054 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D2FE0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D35A0 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x1800D53B0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D82C0 (RtlWow64SuspendThreadEx.c)
 *     RtlReportSqmEscalation @ 0x1800D8B20 (RtlReportSqmEscalation.c)
 *     LdrpResReadFile @ 0x1800DD4C4 (LdrpResReadFile.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA3FC (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800EC7A0 (RtlDequeueUmsCompletionListItems.c)
 *     _ResReadFile @ 0x180104C60 (_ResReadFile.c)
 *     _ResWaitForSingleObject @ 0x180104D8C (_ResWaitForSingleObject.c)
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
