/*
 * XREFs of DrvSetMonitorPowerState @ 0x1C00857B0
 * Callers:
 *     PowerOnMonitor @ 0x1C000A870 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C0084F80 (PowerOffMonitor.c)
 * Callees:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00857D4 (DrvSetWddmDeviceMonitorPowerState.c)
 */

__int64 DrvSetMonitorPowerState()
{
  if ( gProtocolType )
    return 3221225473LL;
  DrvSetWddmDeviceMonitorPowerState(0LL);
  return 0LL;
}
