/*
 * XREFs of VfShutdownScheduleWatchdog @ 0x14020BE58
 * Callers:
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 * Callees:
 *     ViShutdownScheduleWatchdog @ 0x1406C5940 (ViShutdownScheduleWatchdog.c)
 */

__int64 VfShutdownScheduleWatchdog()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return ViShutdownScheduleWatchdog();
  return result;
}
