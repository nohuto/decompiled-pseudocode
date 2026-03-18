/*
 * XREFs of DrvSetMonitorPowerState @ 0x1C00871A8
 * Callers:
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C0086340 (PowerOffMonitor.c)
 * Callees:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00871CC (DrvSetWddmDeviceMonitorPowerState.c)
 */

__int64 DrvSetMonitorPowerState()
{
  if ( gProtocolType )
    return 3221225473LL;
  DrvSetWddmDeviceMonitorPowerState(0LL);
  return 0LL;
}
