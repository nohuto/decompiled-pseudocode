/*
 * XREFs of NtWaitForSingleObject @ 0x1800A64A0
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180007310 (RtlReportSilentProcessExit.c)
 *     WaitForWerSvc @ 0x180008B14 (WaitForWerSvc.c)
 *     LdrpDrainWorkQueue @ 0x18000D61C (LdrpDrainWorkQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x180051E08 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x180052AF0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x180053400 (EtwpStopUmLogger.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800658A0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWaitOnCriticalSection @ 0x18006674C (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x18006CEC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006CFB0 (RtlAcquireResourceExclusive.c)
 *     RtlQueryProcessDebugInformation @ 0x18006D3B0 (RtlQueryProcessDebugInformation.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D0F94 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D34E0 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x1800D52F0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D8200 (RtlWow64SuspendThreadEx.c)
 *     RtlReportSqmEscalation @ 0x1800D8A60 (RtlReportSqmEscalation.c)
 *     LdrpResReadFile @ 0x1800DD404 (LdrpResReadFile.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA33C (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800EC6E0 (RtlDequeueUmsCompletionListItems.c)
 *     _ResReadFile @ 0x180104D20 (_ResReadFile.c)
 *     _ResWaitForSingleObject @ 0x180104E4C (_ResWaitForSingleObject.c)
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
