/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x140086EF8
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140086D7C (EtwpAdjustTraceBuffers.c)
 *     EtwpSwitchBuffer @ 0x1400EB250 (EtwpSwitchBuffer.c)
 *     EtwpReenableCompression @ 0x14022AB8C (EtwpReenableCompression.c)
 *     EtwpAdjustFreeBuffers @ 0x140490C50 (EtwpAdjustFreeBuffers.c)
 *     EtwpFinalizeHeader @ 0x140493704 (EtwpFinalizeHeader.c)
 *     EtwpAllocateTraceBufferPool @ 0x140493B04 (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x140493C40 (EtwpInitLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x14049413C (EtwpFreeTraceBufferPool.c)
 *     EtwpAddLogHeader @ 0x1404948D8 (EtwpAddLogHeader.c)
 *     EtwpUpdateFileHeader @ 0x140495264 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveState @ 0x1404D3464 (EtwpRealtimeSaveState.c)
 *     EtwpFlushActiveBuffers @ 0x1404F3420 (EtwpFlushActiveBuffers.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x14057A9C0 (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x1406A6848 (EtwpBufferingModeFlush.c)
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
