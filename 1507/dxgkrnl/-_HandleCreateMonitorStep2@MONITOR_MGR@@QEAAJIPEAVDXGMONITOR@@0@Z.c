/*
 * XREFs of ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00CB510
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00C9B50 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00CB5D8 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01813A0 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 * Callees:
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C002CCE8 (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAFBC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01813A0 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0181444 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateMonitorStep2(
        struct _FAST_MUTEX *this,
        __int64 a2,
        struct DXGMONITOR *a3,
        struct DXGMONITOR *a4)
{
  int v4; // edi
  struct DXGMONITOR *v6; // rbx
  int v7; // r15d
  struct DXGMONITOR *v9; // rbp
  int v10; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax

  v4 = 0;
  v6 = a3;
  v7 = a2;
  if ( (_DWORD)a2 == -1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v9 = 0LL;
  if ( v6 && *((_DWORD *)v6 + 7) != v7 )
  {
    if ( *((_DWORD *)v6 + 94) != 5 )
    {
      v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v13);
    }
    v9 = v6;
    v6 = 0LL;
  }
  if ( a4 )
  {
    *((_QWORD *)a4 + 50) = 0LL;
    v10 = 3;
    if ( !v6 )
      v10 = 1;
    MONITOR_MGR::_IssueMonitorEvent(
      this,
      *((unsigned int *)a4 + 7),
      (*((_BYTE *)a4 + 24) & 0x40) != 0 ? 0 : 7,
      (const GUID *)v10,
      *((_DWORD *)a4 + 94));
    if ( *((_BYTE *)a4 + 392) )
    {
      *((_BYTE *)a4 + 392) = 0;
      MONITOR_MGR::_LeaveMonitorPendingState((MONITOR_MGR *)this);
    }
  }
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 94) == 1 )
      v14 = MONITOR_MGR::_DestroyPhysicalMonitor((MONITOR_MGR *)this, v6);
    else
      v14 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v6);
    v4 = v14;
  }
  if ( v9 )
  {
    MONITOR_MGR::_IssueMonitorEvent(this, *((unsigned int *)v9 + 7), 0LL, (const GUID *)2, *((_DWORD *)v9 + 94));
    v4 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v9);
  }
  if ( v4 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v15 + 32) = v4;
    *(_QWORD *)(v15 + 24) = v6;
    WdLogEvent5_WdError(v15);
  }
  return 0LL;
}
