/*
 * XREFs of ViShutdownScheduleWatchdog @ 0x1406C5940
 * Callers:
 *     VfShutdownScheduleWatchdog @ 0x14020BE58 (VfShutdownScheduleWatchdog.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1406C59AC (ViShutdownWatchdogExecuteDpc.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 */

BOOLEAN ViShutdownScheduleWatchdog()
{
  if ( !*(_QWORD *)&VfShutdownThread )
    *(_QWORD *)&VfShutdownThread = KeGetCurrentThread();
  KeInitializeDpc(&ViShutdownWatchdogDpc, ViShutdownWatchdogExecuteDpc, 0LL);
  KeInitializeTimerEx(&ViShutdownWatchdogTimer, NotificationTimer);
  return KeSetTimer(&ViShutdownWatchdogTimer, (LARGE_INTEGER)-6000000000LL, &ViShutdownWatchdogDpc);
}
