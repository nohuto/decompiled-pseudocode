/*
 * XREFs of ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF038
 * Callers:
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F37CC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C01AE934 (--1MONITOR_MGR@@QEAA@XZ.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF4DC (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0034E04 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C0034F28 (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F37CC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z @ 0x1C01AF7EC (-_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C01B3C24 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyPhysicalMonitor(
        struct _FAST_MUTEX *this,
        struct DXGMONITOR *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  struct DXGMONITOR *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)a2 + 94) != 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_BYTE *)a2 + 416) )
  {
    v8 = (struct DXGMONITOR *)*((_QWORD *)a2 + 53);
    if ( v8 )
      MONITOR_MGR::_HandleCreateMonitorStep2(this, *((_DWORD *)a2 + 7), v8, 0LL, a3);
    MONITOR_MGR::_LeaveMonitorPendingState((MONITOR_MGR *)this);
  }
  DXGMONITOR::_UnregisterPnPTargetDeviceNotification(a2);
  if ( MONITOR_MGR::_IsMonitorInMonitorList((MONITOR_MGR *)this, a2) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  DXGMONITOR::`scalar deleting destructor'(a2);
  return 0LL;
}
