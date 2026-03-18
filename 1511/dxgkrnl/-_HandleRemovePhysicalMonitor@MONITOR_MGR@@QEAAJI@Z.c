/*
 * XREFs of ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C0185CE8
 * Callers:
 *     MonitorRemovePhysicalMonitor @ 0x1C0187030 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DEE8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00DF14C (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0185894 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemovePhysicalMonitor(struct _FAST_MUTEX *this, unsigned int a2)
{
  char v2; // r15
  __int64 v3; // rdi
  __int64 v5; // rax
  int v6; // r12d
  __int64 v7; // rcx
  int MonitorInstance; // r14d
  __int64 v9; // rax
  struct DXGMONITOR *v11; // rbx
  __int64 v12; // rax
  int v13; // ebp
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  struct DXGMONITOR *v18; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  if ( a2 == -1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  v18 = 0LL;
  v6 = 0;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v3, 0, (ULONG **)&v18);
  if ( MonitorInstance < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = v3;
    *(_QWORD *)(v9 + 32) = this;
    WdLogEvent5_WdError(v9);
    return (unsigned int)MonitorInstance;
  }
  v11 = v18;
  if ( !v18 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = 1;
  if ( *((_DWORD *)v11 + 94) == 1 )
  {
    MonitorInstance = MONITOR_MGR::_RemoveMonitorFromList(this, v11);
  }
  else
  {
    v6 = *((_DWORD *)v11 + 94);
    v14 = (_QWORD *)((char *)v11 + 384);
    v11 = (struct DXGMONITOR *)*((_QWORD *)v11 + 48);
    *v14 = 0LL;
    if ( !v11 )
    {
      v15 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v15 + 24) = v3;
      *(_QWORD *)(v15 + 32) = this;
      WdLogEvent5_WdError(v15);
      return 3221226021LL;
    }
    v2 = 1;
  }
  if ( MonitorInstance < 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( v2 )
  {
    v13 = v6;
    v17 = 3;
  }
  else
  {
    v17 = *((_BYTE *)v11 + 508) != 0 ? 5 : 2;
  }
  MONITOR_MGR::_IssueMonitorEvent(this, *((_DWORD *)v11 + 7), 0, v17, v13);
  return MONITOR_MGR::_DestroyPhysicalMonitor(this, v11);
}
