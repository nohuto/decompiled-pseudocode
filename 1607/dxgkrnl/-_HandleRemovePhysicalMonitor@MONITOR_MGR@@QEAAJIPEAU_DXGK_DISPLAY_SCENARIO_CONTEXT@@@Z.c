/*
 * XREFs of ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF4DC
 * Callers:
 *     MonitorRemovePhysicalMonitor @ 0x1C01B09A4 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3320 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00F3548 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF038 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemovePhysicalMonitor(
        struct _FAST_MUTEX *this,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  char v3; // r15
  __int64 v4; // rdi
  __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // rcx
  int MonitorInstance; // r14d
  __int64 v11; // rax
  struct DXGMONITOR *v13; // rbx
  __int64 v14; // rax
  int v15; // ebp
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  struct DXGMONITOR *v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( a2 == -1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v20 = 0LL;
  v8 = 0;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v4, 0, (ULONG **)&v20);
  if ( MonitorInstance < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v4;
    *(_QWORD *)(v11 + 32) = this;
    WdLogEvent5_WdError(v11);
    return (unsigned int)MonitorInstance;
  }
  v13 = v20;
  if ( !v20 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = 1;
  if ( *((_DWORD *)v13 + 94) == 1 )
  {
    MonitorInstance = MONITOR_MGR::_RemoveMonitorFromList(this, v13);
  }
  else
  {
    v8 = *((_DWORD *)v13 + 94);
    v16 = (_QWORD *)((char *)v13 + 384);
    v13 = (struct DXGMONITOR *)*((_QWORD *)v13 + 48);
    *v16 = 0LL;
    if ( !v13 )
    {
      v17 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v17 + 24) = v4;
      *(_QWORD *)(v17 + 32) = this;
      WdLogEvent5_WdError(v17);
      return 3221226021LL;
    }
    v3 = 1;
  }
  if ( MonitorInstance < 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( v3 )
  {
    v15 = v8;
    v19 = 3;
  }
  else
  {
    v19 = *((_BYTE *)v13 + 524) != 0 ? 5 : 2;
  }
  MONITOR_MGR::_IssueMonitorEvent(this, *((_DWORD *)v13 + 7), 0, v19, v15, (__int64)a3);
  return MONITOR_MGR::_DestroyPhysicalMonitor(this, v13, a3);
}
