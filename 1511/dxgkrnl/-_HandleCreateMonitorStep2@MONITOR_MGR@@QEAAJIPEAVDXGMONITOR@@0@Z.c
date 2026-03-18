/*
 * XREFs of ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00DF420
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00DF4EC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00E15E8 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0185894 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 * Callees:
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C002C6F8 (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DEE8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0185894 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0185938 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateMonitorStep2(
        struct _FAST_MUTEX *this,
        int a2,
        struct DXGMONITOR *a3,
        struct DXGMONITOR *a4)
{
  int v4; // esi
  struct DXGMONITOR *v9; // r14
  int v10; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax

  v4 = 0;
  if ( a2 == -1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  v9 = 0LL;
  if ( a3 && *((_DWORD *)a3 + 7) != a2 )
  {
    if ( *((_DWORD *)a3 + 94) != 5 )
    {
      v13 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v13);
    }
    v9 = a3;
    a3 = 0LL;
  }
  if ( a4 )
  {
    *((_QWORD *)a4 + 52) = 0LL;
    v10 = a3 ? 3 : *((_BYTE *)a4 + 508) != 0 ? 4 : 1;
    MONITOR_MGR::_IssueMonitorEvent(
      this,
      *((_DWORD *)a4 + 7),
      (*((_BYTE *)a4 + 24) & 0x40) == 0 ? 7 : 0,
      v10,
      *((_DWORD *)a4 + 94));
    if ( *((_BYTE *)a4 + 408) )
    {
      *((_BYTE *)a4 + 408) = 0;
      MONITOR_MGR::_LeaveMonitorPendingState((MONITOR_MGR *)this);
    }
  }
  if ( a3 )
  {
    if ( *((_DWORD *)a3 + 94) == 1 )
      v14 = MONITOR_MGR::_DestroyPhysicalMonitor((MONITOR_MGR *)this, a3);
    else
      v14 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, a3);
    v4 = v14;
  }
  if ( v9 )
  {
    MONITOR_MGR::_IssueMonitorEvent(this, *((_DWORD *)v9 + 7), 0, 2LL, *((_DWORD *)v9 + 94));
    v4 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v9);
  }
  if ( v4 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v15 + 32) = v4;
    *(_QWORD *)(v15 + 24) = a3;
    WdLogEvent5_WdError(v15);
  }
  return 0LL;
}
