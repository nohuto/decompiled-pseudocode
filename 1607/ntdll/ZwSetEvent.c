/*
 * XREFs of ZwSetEvent @ 0x1800A65E0
 * Callers:
 *     LdrpProcessWork @ 0x18000E18C (LdrpProcessWork.c)
 *     TppCallbackEpilog @ 0x18001FBC0 (TppCallbackEpilog.c)
 *     EtwpSynchronizeWithLogger @ 0x180051DF8 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x180052AE0 (EtwpLogger.c)
 *     EtwpSwitchBuffer @ 0x18005CE88 (EtwpSwitchBuffer.c)
 *     RtlpTpTimerRundown @ 0x180064E40 (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x180064EE0 (RtlpTpWaitRundown.c)
 *     RtlpTpTimerQueueRundown @ 0x180065018 (RtlpTpTimerQueueRundown.c)
 *     RtlpUnWaitCriticalSection @ 0x1800664B0 (RtlpUnWaitCriticalSection.c)
 *     RtlpWnfMetaCallbackProc @ 0x180066E20 (RtlpWnfMetaCallbackProc.c)
 *     LdrpDropLastInProgressCount @ 0x18007A60C (LdrpDropLastInProgressCount.c)
 *     RtlCreateProcessReflection @ 0x1800D2FE0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D35A0 (RtlpProcessReflectionStartup.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800D3D78 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800F0304 (RtlpHeapTrkSyncWithDiagnoser.c)
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
