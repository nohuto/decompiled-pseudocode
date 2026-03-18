/*
 * XREFs of ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C002C6C8
 * Callers:
 *     MonitorGetCCDMonitorID @ 0x1C00A0070 (MonitorGetCCDMonitorID.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00DF080 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C00E372C (MonitorNotifyDeviceNodeReady.c)
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
