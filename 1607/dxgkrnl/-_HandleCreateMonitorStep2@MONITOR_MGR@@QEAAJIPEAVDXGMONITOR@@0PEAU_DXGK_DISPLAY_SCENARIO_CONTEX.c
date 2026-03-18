/*
 * XREFs of ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F37CC
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F1C7C (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F38CC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF038 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 * Callees:
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C0034F28 (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C00F2140 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3320 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF038 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01AF0EC (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateMonitorStep2(
        struct _FAST_MUTEX *this,
        int a2,
        struct DXGMONITOR *a3,
        struct DXGMONITOR *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v5; // ebp
  struct DXGMONITOR *v10; // r14
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // r15
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  struct DXGMONITOR *v21; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  if ( a2 == -1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v17);
  }
  v10 = 0LL;
  if ( a3 && *((_DWORD *)a3 + 7) != a2 )
  {
    if ( *((_DWORD *)a3 + 94) != 5 )
    {
      v18 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v18);
    }
    v10 = a3;
    a3 = 0LL;
  }
  v11 = a5;
  if ( a4 )
  {
    *((_QWORD *)a4 + 53) = 0LL;
    v12 = a3 ? 3 : *((_BYTE *)a4 + 524) != 0 ? 4 : 1;
    MONITOR_MGR::_IssueMonitorEvent(
      this,
      *((_DWORD *)a4 + 7),
      (*((_BYTE *)a4 + 24) & 0x40) == 0 ? 7 : 0,
      v12,
      *((_DWORD *)a4 + 94),
      (__int64)v11);
    if ( *((_BYTE *)a4 + 416) )
    {
      *((_BYTE *)a4 + 416) = 0;
      MONITOR_MGR::_LeaveMonitorPendingState((MONITOR_MGR *)this);
    }
  }
  if ( a3 )
  {
    if ( *((_DWORD *)a3 + 94) == 1 )
      v19 = MONITOR_MGR::_DestroyPhysicalMonitor((MONITOR_MGR *)this, a3, v11);
    else
      v19 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, a3);
    v5 = v19;
  }
  if ( v10 )
  {
    MONITOR_MGR::_IssueMonitorEvent(this, *((_DWORD *)v10 + 7), 0, 2LL, *((_DWORD *)v10 + 94), (__int64)v11);
    v5 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v10);
  }
  if ( v5 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v20 + 32) = v5;
    *(_QWORD *)(v20 + 24) = a3;
    WdLogEvent5_WdError(v20);
  }
  if ( a4
    && (int)MONITOR_MGR::_GetMonitorInstance(this, *((_DWORD *)a4 + 7), 0, (ULONG **)&v21) >= 0
    && MONITOR_MGR::_UsingCCDNameForTTM
    && v21 == a4 )
  {
    DXGMONITOR::_CreateTtmDevice(a4, v13, v14, v15);
  }
  return 0LL;
}
