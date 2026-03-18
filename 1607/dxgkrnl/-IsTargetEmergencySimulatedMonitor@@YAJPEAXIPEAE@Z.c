/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00BA098
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00BA784 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00C5DC0 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     MonitorGetMonitorType @ 0x1C00B7244 (MonitorGetMonitorType.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00BA4C0 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00BA610 (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall IsTargetEmergencySimulatedMonitor(DXGADAPTER *this, unsigned int a2, bool *a3)
{
  int MonitorHandle; // ebx
  __int64 v6; // r9
  int v8; // [rsp+50h] [rbp+18h] BYREF
  struct HDXGMONITOR__ *v9; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  MonitorHandle = MonitorGetMonitorHandle(this, a2, 0, (void *)0x4D495044, (__int64)&v9);
  if ( MonitorHandle >= 0 )
  {
    v8 = 0;
    MonitorHandle = MonitorGetMonitorType(this, v9, &v8, v6);
    if ( MonitorHandle >= 0 )
      *a3 = v8 == 5;
    MonitorReleaseMonitorHandle(this, v9, (PVOID)0x4D495044);
  }
  return (unsigned int)MonitorHandle;
}
