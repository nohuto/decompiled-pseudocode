/*
 * XREFs of ViShutdownScheduleWatchdog @ 0x1407475AC
 * Callers:
 *     VfShutdownScheduleWatchdog @ 0x14025B230 (VfShutdownScheduleWatchdog.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140747628 (ViShutdownWatchdogExecuteDpc.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 */

char ViShutdownScheduleWatchdog()
{
  if ( !*(_QWORD *)&VfShutdownThread )
    *(_QWORD *)&VfShutdownThread = KeGetCurrentThread();
  KeInitializeDpc(&ViShutdownWatchdogDpc, ViShutdownWatchdogExecuteDpc, 0LL);
  KeInitializeTimerEx(&ViShutdownWatchdogTimer, NotificationTimer);
  return KiSetTimerEx((__int64)&ViShutdownWatchdogTimer, -6000000000LL, 0, 0, (__int64)&ViShutdownWatchdogDpc);
}
