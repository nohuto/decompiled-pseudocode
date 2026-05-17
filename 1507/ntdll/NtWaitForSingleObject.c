/*
 * XREFs of NtWaitForSingleObject @ 0x180093940
 * Callers:
 *     WaitForWerSvc @ 0x180002094 (WaitForWerSvc.c)
 *     EtwpLogger @ 0x1800096B0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x18000A520 (EtwpStopUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x18000A6EC (EtwpSynchronizeWithLogger.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     RtlpWaitOnCriticalSection @ 0x180035D54 (RtlpWaitOnCriticalSection.c)
 *     RtlReportSilentProcessExit @ 0x180044890 (RtlReportSilentProcessExit.c)
 *     RtlAcquireResourceShared @ 0x180061BC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180061D10 (RtlAcquireResourceExclusive.c)
 *     RtlQueryProcessDebugInformation @ 0x180068A40 (RtlQueryProcessDebugInformation.c)
 *     RtlWaitForWnfMetaNotification @ 0x180076F20 (RtlWaitForWnfMetaNotification.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800BCDF4 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800C1540 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800C1B00 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x1800C3D20 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendThreadEx @ 0x1800C7020 (RtlWow64SuspendThreadEx.c)
 *     RtlReportSqmEscalation @ 0x1800C7C60 (RtlReportSqmEscalation.c)
 *     LdrpResReadFile @ 0x1800CC814 (LdrpResReadFile.c)
 *     RtlBarrier @ 0x1800D38B0 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x1800D39F0 (RtlBarrierForDelete.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800D92B4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800DDE90 (RtlDequeueUmsCompletionListItems.c)
 *     _ResReadFile @ 0x1800FAA5C (_ResReadFile.c)
 *     _ResWaitForSingleObject @ 0x1800FAB88 (_ResWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 4;
  __asm { syscall; Low latency system call }
  return result;
}
