/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C0165028
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIPEAI@Z @ 0x1C00ACC74 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIPEAI@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00ADA04 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     MonitorGetMonitorType @ 0x1C00A6338 (MonitorGetMonitorType.c)
 *     MonitorGetMonitorHandle @ 0x1C00C2E0C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3374 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall IsTargetEmergencySimulatedMonitor(DXGADAPTER *this, __int64 a2, bool *a3)
{
  int MonitorHandle; // ebx
  __int64 v6; // r9
  __int64 v7; // r9
  int v9; // [rsp+50h] [rbp+18h] BYREF
  struct HDXGMONITOR__ *v10; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  MonitorHandle = MonitorGetMonitorHandle(this, a2, 0LL, (void *)0x4D495044, &v10);
  if ( MonitorHandle >= 0 )
  {
    v9 = 0;
    MonitorHandle = MonitorGetMonitorType(this, v10, &v9, v6);
    if ( MonitorHandle >= 0 )
      *a3 = v9 == 5;
    MonitorReleaseMonitorHandle(this, v10, (PVOID)0x4D495044, v7);
  }
  return (unsigned int)MonitorHandle;
}
