/*
 * XREFs of ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C01817EC
 * Callers:
 *     MonitorRemovePhysicalMonitor @ 0x1C0182980 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAFBC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00CB294 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01813A0 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemovePhysicalMonitor(
        struct _FAST_MUTEX *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r15
  __int64 v5; // rsi
  __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int MonitorInstance; // ebp
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  struct DXGMONITOR *v16; // rbx
  __int64 v17; // rax
  int v18; // r14d
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGMONITOR *v24; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v24 = 0LL;
  v8 = 0;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, (unsigned int)v5, 0LL, (ULONG **)&v24);
  if ( MonitorInstance < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = v5;
    *(_QWORD *)(v14 + 32) = this;
    WdLogEvent5_WdError(v14);
    return (unsigned int)MonitorInstance;
  }
  v16 = v24;
  if ( !v24 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10, v9, v12, v13);
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = 1;
  if ( *((_DWORD *)v16 + 94) == 1 )
  {
    MonitorInstance = MONITOR_MGR::_RemoveMonitorFromList(this, v16, v12, v13);
  }
  else
  {
    v8 = *((_DWORD *)v16 + 94);
    v19 = (_QWORD *)((char *)v16 + 384);
    v16 = (struct DXGMONITOR *)*((_QWORD *)v16 + 48);
    *v19 = 0LL;
    if ( !v16 )
    {
      v20 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v20 + 24) = v5;
      *(_QWORD *)(v20 + 32) = this;
      WdLogEvent5_WdError(v20);
      return 3221226021LL;
    }
    v4 = 1;
  }
  if ( MonitorInstance < 0 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v10, v9, v12, v13);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( v4 )
    v18 = v8;
  MONITOR_MGR::_IssueMonitorEvent(this, *((unsigned int *)v16 + 7), 0LL, (const GUID *)((v4 != 0) + 2), v18);
  return MONITOR_MGR::_DestroyPhysicalMonitor(this, (struct DXGMONITOR **)v16, v22, v23);
}
