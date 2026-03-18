/*
 * XREFs of ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C003826C
 * Callers:
 *     PhysicalToLogicalDPIPoint @ 0x1C0037BE0 (PhysicalToLogicalDPIPoint.c)
 *     OriginFromMonFlags @ 0x1C0037C70 (OriginFromMonFlags.c)
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C0037CB0 (PhysicalToLogicalDPIMonitorPoint.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0037DE0 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0038010 (PhysicalToLogicalDPIRect.c)
 *     ?DpiAwarenessContextFromMonitorFlags@@YAKK@Z @ 0x1C00B91F4 (-DpiAwarenessContextFromMonitorFlags@@YAKK@Z.c)
 *     LogicalToPhysicalDPIMonitorPoint @ 0x1C00B9420 (LogicalToPhysicalDPIMonitorPoint.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MonitorFlagsFromDpiAwarenessContext @ 0x1C0037BB0 (MonitorFlagsFromDpiAwarenessContext.c)
 */

__int64 __fastcall ValidateMonFlags(unsigned int *a1)
{
  char CurrentThreadDpiAwarenessContext; // al

  if ( (*a1 & 0xE0) == 0 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    *a1 |= MonitorFlagsFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  }
  if ( (*a1 & 3) == 0 )
    *a1 |= 2u;
  return ((unsigned __int8)~*(_BYTE *)a1 >> 5) & 1;
}
