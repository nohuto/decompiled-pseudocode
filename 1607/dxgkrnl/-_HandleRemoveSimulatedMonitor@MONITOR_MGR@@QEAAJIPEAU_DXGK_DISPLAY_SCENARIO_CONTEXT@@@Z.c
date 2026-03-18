/*
 * XREFs of ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF644
 * Callers:
 *     MonitorDestroySimulatedMonitor @ 0x1C01B00BC (MonitorDestroySimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C00F2140 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3320 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00F3548 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00F35EC (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01AEF48 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01AF0EC (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemoveSimulatedMonitor(
        struct _FAST_MUTEX *this,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  int MonitorInstance; // ebx
  struct DXGMONITOR *v9; // rbx
  __int64 v10; // rax
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // edx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct DXGMONITOR *v26; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 == -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v26 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v3, 0, (ULONG **)&v26);
  if ( MonitorInstance < 0 )
  {
    if ( v26 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v22);
    }
    if ( MonitorInstance != -1073741275 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v23);
    }
    v24 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v24 + 24) = v3;
    *(_QWORD *)(v24 + 32) = this;
    WdLogEvent5_WdError(v24);
  }
  else
  {
    v9 = v26;
    if ( !v26 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = *((_DWORD *)v9 + 94);
    if ( v11 == 1 )
    {
      v12 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v12 + 24) = v3;
      WdLogEvent5_WdError(v12);
      return (unsigned int)-1073741275;
    }
    else
    {
      MONITOR_MGR::_RemoveMonitorFromList(this, v9);
      v14 = *((_QWORD *)v9 + 48);
      if ( v14 )
      {
        if ( *(_DWORD *)(v14 + 376) != 1 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v15);
        }
        MONITOR_MGR::_InsertMonitorToList(this, *((struct DXGMONITOR **)v9 + 48));
        if ( MONITOR_MGR::_UsingCCDNameForTTM || *((_QWORD *)v9 + 8) )
          DXGMONITOR::_CreateTtmDevice(*((DXGMONITOR **)v9 + 48), v16, v17, v18);
      }
      v19 = *((_DWORD *)v9 + 7);
      if ( *((_QWORD *)v9 + 48) )
        MONITOR_MGR::_IssueMonitorEvent(this, v19, 0, 3LL, *((_DWORD *)v9 + 94), (__int64)a3);
      else
        MONITOR_MGR::_IssueMonitorEvent(this, v19, 0, 2LL, v11, (__int64)a3);
      *((_QWORD *)v9 + 48) = 0LL;
      if ( *((_DWORD *)v9 + 94) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry((MONITOR_MGR *)this, (unsigned int)v3, v20, v21);
      return (unsigned int)MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v9);
    }
  }
  return (unsigned int)MonitorInstance;
}
