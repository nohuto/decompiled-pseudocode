/*
 * XREFs of ZwSetEvent @ 0x1800A5280
 * Callers:
 *     LdrpDropLastInProgressCount @ 0x1800052EC (LdrpDropLastInProgressCount.c)
 *     RtlpTpWaitRundown @ 0x180006DA0 (RtlpTpWaitRundown.c)
 *     RtlpTpTimerRundown @ 0x180008088 (RtlpTpTimerRundown.c)
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 *     TppCallbackEpilog @ 0x18002C870 (TppCallbackEpilog.c)
 *     RtlpUnWaitCriticalSection @ 0x1800301D0 (RtlpUnWaitCriticalSection.c)
 *     EtwpSwitchBuffer @ 0x18004B028 (EtwpSwitchBuffer.c)
 *     EtwpLogger @ 0x18005BCF0 (EtwpLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x18005C8BC (EtwpSynchronizeWithLogger.c)
 *     RtlpTpTimerQueueRundown @ 0x180081F9C (RtlpTpTimerQueueRundown.c)
 *     RtlpWnfMetaCallbackProc @ 0x180085DB0 (RtlpWnfMetaCallbackProc.c)
 *     RtlCreateProcessReflection @ 0x18008C990 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x18008D1C0 (RtlpProcessReflectionStartup.c)
 *     RtlBarrier @ 0x1800DBBA0 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x1800DBCE0 (RtlBarrierForDelete.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800E7124 (RtlpHeapTrkSyncWithDiagnoser.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 14;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
