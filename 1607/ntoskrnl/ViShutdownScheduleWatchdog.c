/*
 * XREFs of ViShutdownScheduleWatchdog @ 0x140711980
 * Callers:
 *     VfShutdownScheduleWatchdog @ 0x140223914 (VfShutdownScheduleWatchdog.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1407119FC (ViShutdownWatchdogExecuteDpc.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x14000D6DC (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1400F0C50 (KeInitializeTimerEx.c)
 */

__int64 ViShutdownScheduleWatchdog()
{
  if ( !*(_QWORD *)&VfShutdownThread )
    *(_QWORD *)&VfShutdownThread = KeGetCurrentThread();
  KeInitializeDpc(&ViShutdownWatchdogDpc, ViShutdownWatchdogExecuteDpc, 0LL);
  KeInitializeTimerEx(&ViShutdownWatchdogTimer, NotificationTimer);
  return KiSetTimerEx((__int64)&ViShutdownWatchdogTimer, -6000000000LL, 0, 0, (__int64)&ViShutdownWatchdogDpc);
}
