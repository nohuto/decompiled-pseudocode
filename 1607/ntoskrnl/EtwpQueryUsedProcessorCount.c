/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x14008560C
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140085490 (EtwpAdjustTraceBuffers.c)
 *     EtwpSwitchBuffer @ 0x1400ED3E0 (EtwpSwitchBuffer.c)
 *     EtwpReenableCompression @ 0x14022AD60 (EtwpReenableCompression.c)
 *     EtwpAdjustFreeBuffers @ 0x1404901C0 (EtwpAdjustFreeBuffers.c)
 *     EtwpFinalizeHeader @ 0x140492C74 (EtwpFinalizeHeader.c)
 *     EtwpAllocateTraceBufferPool @ 0x140493074 (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x1404931B0 (EtwpInitLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1404936AC (EtwpFreeTraceBufferPool.c)
 *     EtwpAddLogHeader @ 0x140493E48 (EtwpAddLogHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404947D4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveState @ 0x1404F1370 (EtwpRealtimeSaveState.c)
 *     EtwpFlushActiveBuffers @ 0x140510490 (EtwpFlushActiveBuffers.c)
 *     EtwpUpdateTrace @ 0x14053F1B8 (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x14057A480 (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x1406A6710 (EtwpBufferingModeFlush.c)
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
