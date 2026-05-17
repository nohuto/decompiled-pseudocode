/*
 * XREFs of ZwSetEvent @ 0x1800A65E0
 * Callers:
 *     LdrpProcessWork @ 0x18000E19C (LdrpProcessWork.c)
 *     TppCallbackEpilog @ 0x18001FBD0 (TppCallbackEpilog.c)
 *     EtwpSynchronizeWithLogger @ 0x180051E08 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x180052AF0 (EtwpLogger.c)
 *     EtwpSwitchBuffer @ 0x18005CE98 (EtwpSwitchBuffer.c)
 *     RtlpTpTimerRundown @ 0x180064E50 (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x180064EF0 (RtlpTpWaitRundown.c)
 *     RtlpTpTimerQueueRundown @ 0x180065028 (RtlpTpTimerQueueRundown.c)
 *     RtlpUnWaitCriticalSection @ 0x1800664C0 (RtlpUnWaitCriticalSection.c)
 *     RtlpWnfMetaCallbackProc @ 0x180066E30 (RtlpWnfMetaCallbackProc.c)
 *     LdrpDropLastInProgressCount @ 0x18007A61C (LdrpDropLastInProgressCount.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D34E0 (RtlpProcessReflectionStartup.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800D3CB8 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800F0304 (RtlpHeapTrkSyncWithDiagnoser.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetEvent()
{
  __int64 result; // rax

  result = 14LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
