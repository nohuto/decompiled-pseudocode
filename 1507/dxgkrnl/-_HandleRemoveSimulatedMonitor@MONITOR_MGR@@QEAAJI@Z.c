/*
 * XREFs of ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C018192C
 * Callers:
 *     MonitorDestroySimulatedMonitor @ 0x1C01822FC (MonitorDestroySimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAFBC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00CB294 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00CB338 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01812B0 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0181444 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemoveSimulatedMonitor(
        struct _FAST_MUTEX *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int MonitorInstance; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGMONITOR *v12; // rbx
  __int64 v13; // rax
  int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct DXGMONITOR *v29; // [rsp+50h] [rbp+18h] BYREF

  v4 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v29 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, (unsigned int)v4, 0LL, (ULONG **)&v29);
  if ( MonitorInstance < 0 )
  {
    if ( v29 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v8, v7, v10, v11);
      WdLogEvent5_WdAssertion(v25);
    }
    if ( MonitorInstance != -1073741275 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v8, v7, v10, v11);
      WdLogEvent5_WdAssertion(v26);
    }
    v27 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v27 + 24) = v4;
    *(_QWORD *)(v27 + 32) = this;
    WdLogEvent5_WdError(v27);
  }
  else
  {
    v12 = v29;
    if ( !v29 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8, v7, v10, v11);
      WdLogEvent5_WdAssertion(v13);
    }
    v14 = *((_DWORD *)v12 + 94);
    if ( v14 == 1 )
    {
      v15 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v15 + 24) = v4;
      WdLogEvent5_WdError(v15);
      return (unsigned int)-1073741275;
    }
    else
    {
      MONITOR_MGR::_RemoveMonitorFromList(this, v12, v10, v11);
      v20 = *((_QWORD *)v12 + 48);
      if ( v20 )
      {
        if ( *(_DWORD *)(v20 + 376) != 1 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
          WdLogEvent5_WdAssertion(v21);
        }
        MONITOR_MGR::_InsertMonitorToList(this, *((struct DXGMONITOR **)v12 + 48), v18, v19);
      }
      v22 = *((unsigned int *)v12 + 7);
      if ( *((_QWORD *)v12 + 48) )
        MONITOR_MGR::_IssueMonitorEvent(this, v22, 0LL, (const GUID *)3, *((_DWORD *)v12 + 94));
      else
        MONITOR_MGR::_IssueMonitorEvent(this, v22, 0LL, (const GUID *)2, v14);
      *((_QWORD *)v12 + 48) = 0LL;
      if ( *((_DWORD *)v12 + 94) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry((MONITOR_MGR *)this, (unsigned int)v4, v23, v24);
      return (unsigned int)MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v12, v23, v24);
    }
  }
  return (unsigned int)MonitorInstance;
}
