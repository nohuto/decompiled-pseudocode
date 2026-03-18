/*
 * XREFs of ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0181B48
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01814E4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C0180F10 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01812B0 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0185B84 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_MigrateSimulatedMonitor(
        struct _FAST_MUTEX *a1,
        __int64 a2,
        __int64 a3,
        const struct DXGMONITOR *a4,
        struct DXGMONITOR **a5)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int MonitorInstance; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGMONITOR *v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  struct DXGMONITOR *v24; // [rsp+20h] [rbp-28h] BYREF

  v5 = (int)a3;
  v7 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  v24 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, (unsigned int)v7, 0LL, (ULONG **)&v24);
  if ( MonitorInstance < 0 )
    goto LABEL_18;
  v15 = v24;
  if ( !v24 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11, v10, v13, v14);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_DWORD *)v15 + 94);
  if ( v17 == 1 )
  {
    v22 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v22 + 24) = v7;
    WdLogEvent5_WdError(v22);
    MonitorInstance = -1073741637;
  }
  else
  {
    if ( v17 == (_DWORD)v5 )
    {
      v18 = WdLogNewEntry5_WdDmmEvent(v11);
      *(_QWORD *)(v18 + 24) = v7;
      *(_QWORD *)(v18 + 32) = v5;
      WdLogEvent5_WdDmmEvent(v18);
      MonitorInstance = 0;
    }
    else
    {
      v19 = WdLogNewEntry5_WdDmmEvent(v11);
      *(_QWORD *)(v19 + 24) = v7;
      *(_QWORD *)(v19 + 32) = v5;
      WdLogEvent5_WdDmmEvent(v19);
      if ( *((_DWORD *)v15 + 94) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry((MONITOR_MGR *)a1, (unsigned int)v7, v20, v21);
      *((_DWORD *)v15 + 94) = v5;
      if ( (_DWORD)v5 == 2 )
        MONITOR_MGR::_AddTargetIntoPersistencyRegistry((MONITOR_MGR *)a1, (unsigned int)v7, v20, v21);
    }
    if ( a4 )
      MonitorInstance = DXGMONITOR::_CopyMonitorInformation(v15, a4);
  }
  if ( MonitorInstance < 0 )
LABEL_18:
    *a5 = 0LL;
  else
    *a5 = v15;
  return (unsigned int)MonitorInstance;
}
