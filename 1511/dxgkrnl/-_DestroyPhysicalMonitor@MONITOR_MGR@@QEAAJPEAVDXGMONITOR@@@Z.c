/*
 * XREFs of ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0185894
 * Callers:
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00DF420 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z.c)
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C0185218 (--1MONITOR_MGR@@QEAA@XZ.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C0185CE8 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C002C5D4 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C002C6F8 (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00DF420 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z.c)
 *     ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z @ 0x1C0185FC4 (-_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C018A198 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyPhysicalMonitor(struct _FAST_MUTEX *this, struct DXGMONITOR *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  struct DXGMONITOR *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)a2 + 94) != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_BYTE *)a2 + 408) )
  {
    v6 = (struct DXGMONITOR *)*((_QWORD *)a2 + 52);
    if ( v6 )
      MONITOR_MGR::_HandleCreateMonitorStep2(this, *((_DWORD *)a2 + 7), v6, 0LL);
    MONITOR_MGR::_LeaveMonitorPendingState((MONITOR_MGR *)this);
  }
  DXGMONITOR::_UnregisterPnPTargetDeviceNotification(a2);
  if ( MONITOR_MGR::_IsMonitorInMonitorList((MONITOR_MGR *)this, a2) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  DXGMONITOR::`scalar deleting destructor'(a2);
  return 0LL;
}
