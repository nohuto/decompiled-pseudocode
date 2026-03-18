/*
 * XREFs of KdCheckForDebugBreak @ 0x1401140F8
 * Callers:
 *     IoWriteCrashDump @ 0x1401C65BC (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1401E763C (MiAddRangeToCrashDump.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x1403CE3B0 (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x1403CEA18 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x1400DF790 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
