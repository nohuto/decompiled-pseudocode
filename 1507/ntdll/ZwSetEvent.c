/*
 * XREFs of ZwSetEvent @ 0x1800939E0
 * Callers:
 *     EtwpLogger @ 0x1800096B0 (EtwpLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x18000A6EC (EtwpSynchronizeWithLogger.c)
 *     EtwpSwitchBuffer @ 0x180011254 (EtwpSwitchBuffer.c)
 *     RtlpUnWaitCriticalSection @ 0x180036780 (RtlpUnWaitCriticalSection.c)
 *     LdrpDropLastInProgressCount @ 0x18003815C (LdrpDropLastInProgressCount.c)
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     RtlpWnfMetaCallbackProc @ 0x1800794F0 (RtlpWnfMetaCallbackProc.c)
 *     RtlpTpWaitRundown @ 0x18007B920 (RtlpTpWaitRundown.c)
 *     RtlpTpTimerRundown @ 0x18007CC1C (RtlpTpTimerRundown.c)
 *     RtlpTpTimerQueueRundown @ 0x18007D82C (RtlpTpTimerQueueRundown.c)
 *     RtlCreateProcessReflection @ 0x1800C1540 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800C1B00 (RtlpProcessReflectionStartup.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800C22F4 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBarrier @ 0x1800D38B0 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x1800D39F0 (RtlBarrierForDelete.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800E1CE4 (RtlpHeapTrkSyncWithDiagnoser.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 14;
  __asm { syscall; Low latency system call }
  return result;
}
