/*
 * XREFs of KdCheckForDebugBreak @ 0x14014E92C
 * Callers:
 *     KeAccumulateTicks @ 0x1400A9AB0 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x1401F3B80 (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1402180C8 (MiAddRangeToCrashDump.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x1403F5960 (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x1403F5FEC (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x1401FE5E0 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
