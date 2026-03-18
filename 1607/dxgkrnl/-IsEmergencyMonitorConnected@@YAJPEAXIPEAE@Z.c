/*
 * XREFs of ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00C5DC0
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00C5BF0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00BA098 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00C3B08 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C00C5E10 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00C5E88 (MonitorIsUsingSimulatedMonitor.c)
 */

__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *this, __int64 a2, unsigned __int8 *a3)
{
  *a3 = 0;
  MonitorIsUsingSimulatedMonitor(this);
  MonitorGetNumConnectedMonitor(this);
  return 0LL;
}
