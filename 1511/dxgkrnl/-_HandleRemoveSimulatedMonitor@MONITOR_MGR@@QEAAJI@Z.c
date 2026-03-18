/*
 * XREFs of ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C0185E3C
 * Callers:
 *     MonitorDestroySimulatedMonitor @ 0x1C018694C (MonitorDestroySimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DEE8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00DF14C (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00DF1F0 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01857A4 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0185938 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemoveSimulatedMonitor(struct _FAST_MUTEX *this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  int MonitorInstance; // ebx
  struct DXGMONITOR *v7; // rbx
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct DXGMONITOR *v21; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  if ( a2 == -1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v21 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v2, 0, (ULONG **)&v21);
  if ( MonitorInstance < 0 )
  {
    if ( v21 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v17);
    }
    if ( MonitorInstance != -1073741275 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v18);
    }
    v19 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v19 + 24) = v2;
    *(_QWORD *)(v19 + 32) = this;
    WdLogEvent5_WdError(v19);
  }
  else
  {
    v7 = v21;
    if ( !v21 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = *((_DWORD *)v7 + 94);
    if ( v9 == 1 )
    {
      v10 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v10 + 24) = v2;
      WdLogEvent5_WdError(v10);
      return (unsigned int)-1073741275;
    }
    else
    {
      MONITOR_MGR::_RemoveMonitorFromList(this, v7);
      v12 = *((_QWORD *)v7 + 48);
      if ( v12 )
      {
        if ( *(_DWORD *)(v12 + 376) != 1 )
        {
          v13 = WdLogNewEntry5_WdAssertion(v11);
          WdLogEvent5_WdAssertion(v13);
        }
        MONITOR_MGR::_InsertMonitorToList(this, *((struct DXGMONITOR **)v7 + 48));
      }
      v14 = *((_DWORD *)v7 + 7);
      if ( *((_QWORD *)v7 + 48) )
        MONITOR_MGR::_IssueMonitorEvent(this, v14, 0, 3LL, *((_DWORD *)v7 + 94));
      else
        MONITOR_MGR::_IssueMonitorEvent(this, v14, 0, 2LL, v9);
      *((_QWORD *)v7 + 48) = 0LL;
      if ( *((_DWORD *)v7 + 94) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry((MONITOR_MGR *)this, (unsigned int)v2, v15, v16);
      return (unsigned int)MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v7);
    }
  }
  return (unsigned int)MonitorInstance;
}
