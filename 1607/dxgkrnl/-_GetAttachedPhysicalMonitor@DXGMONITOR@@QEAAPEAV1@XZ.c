/*
 * XREFs of ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0034EF8
 * Callers:
 *     MonitorGetCCDMonitorID @ 0x1C00B62B8 (MonitorGetCCDMonitorID.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C00EE40C (MonitorNotifyDeviceNodeReady.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00F30A8 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 * Callees:
 *     <none>
 */

struct DXGMONITOR *__fastcall DXGMONITOR::_GetAttachedPhysicalMonitor(DXGMONITOR *this)
{
  __int64 v2; // rax

  if ( *((_DWORD *)this + 94) == 1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  return (struct DXGMONITOR *)*((_QWORD *)this + 48);
}
