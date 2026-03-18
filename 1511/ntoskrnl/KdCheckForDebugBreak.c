/*
 * XREFs of KdCheckForDebugBreak @ 0x140119A78
 * Callers:
 *     KeAccumulateTicks @ 0x140048FA0 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x1401B87D0 (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1401D5D2C (MiAddRangeToCrashDump.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x1403A2AD0 (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x1403A3128 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x1401C28BC (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
