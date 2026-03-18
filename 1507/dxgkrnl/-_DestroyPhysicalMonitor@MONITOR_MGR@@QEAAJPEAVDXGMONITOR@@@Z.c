/*
 * XREFs of ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01813A0
 * Callers:
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00CB510 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z.c)
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C0180D24 (--1MONITOR_MGR@@QEAA@XZ.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C01817EC (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C002CBC4 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C002CCE8 (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00CB510 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z.c)
 *     ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z @ 0x1C0181AB4 (-_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0185988 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyPhysicalMonitor(
        struct _FAST_MUTEX *this,
        struct DXGMONITOR **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  struct DXGMONITOR *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)a2 + 94) != 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_BYTE *)a2 + 392) )
  {
    v8 = a2[50];
    if ( v8 )
      MONITOR_MGR::_HandleCreateMonitorStep2(this, *((unsigned int *)a2 + 7), v8, 0LL);
    MONITOR_MGR::_LeaveMonitorPendingState((MONITOR_MGR *)this);
  }
  DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)a2);
  if ( MONITOR_MGR::_IsMonitorInMonitorList((MONITOR_MGR *)this, (struct DXGMONITOR *)a2) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v13);
  }
  DXGMONITOR::`scalar deleting destructor'((DXGMONITOR *)a2);
  return 0LL;
}
