/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x14009CFC8
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14009BAD0 (EtwpAdjustTraceBuffers.c)
 *     EtwpSwitchBuffer @ 0x14009D01C (EtwpSwitchBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x14046E540 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x140471024 (EtwpFlushActiveBuffers.c)
 *     EtwpFreeTraceBufferPool @ 0x14049D7EC (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeSaveState @ 0x1404C65B4 (EtwpRealtimeSaveState.c)
 *     EtwpFinalizeHeader @ 0x1404C75B0 (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x1404C79EC (EtwpAddLogHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404C9CA4 (EtwpUpdateFileHeader.c)
 *     EtwpInitLoggerContext @ 0x1404CA828 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x1404CABF0 (EtwpAllocateTraceBufferPool.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x1405457B0 (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x140664ED8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpQueryUsedProcessorCount(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
    return (unsigned int)KeNumberProcessors_0;
  return result;
}
