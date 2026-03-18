/*
 * XREFs of ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01814E4
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ @ 0x1C00CADB4 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C0182064 (MonitorCreateSimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAFBC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00CB248 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00CB294 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00CB338 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C0180F10 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0181014 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0181444 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0181B48 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateSimulatedMonitor(
        struct _FAST_MUTEX *a1,
        __int64 a2,
        __int64 a3,
        struct DXGMONITOR *a4,
        struct DXGMONITOR *a5)
{
  struct DXGMONITOR *v5; // r12
  struct DXGMONITOR *v6; // r13
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  struct DXGMONITOR *v13; // rbx
  int MonitorInstance; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGMONITOR *v19; // rsi
  int v20; // ebp
  __int64 v21; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int EmergencySimulatedMonitor; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // r13d
  struct DXGMONITOR *v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx
  __int64 v50; // r8
  __int64 v51; // r9
  struct DXGMONITOR *v52; // [rsp+30h] [rbp-38h] BYREF

  v5 = a5;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( v8 == -1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( v7 == 1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  a5 = 0LL;
  v13 = 0LL;
  v52 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, v8, 0LL, (ULONG **)&a5);
  v19 = a5;
  v20 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( a5 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v29);
    }
    if ( v20 != -1073741275 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v30);
    }
    EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(a1, &v52, v17, v18);
    if ( EmergencySimulatedMonitor < 0 )
    {
      if ( EmergencySimulatedMonitor != -1073741275 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
        WdLogEvent5_WdAssertion(v36);
      }
      v13 = v52;
      if ( !v52 )
        goto LABEL_30;
    }
    else
    {
      v13 = v52;
      if ( v52 )
        goto LABEL_30;
    }
    v37 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
    WdLogEvent5_WdAssertion(v37);
    goto LABEL_30;
  }
  if ( !a5 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( v7 == 5 )
    return 3223192973LL;
  if ( *((_DWORD *)v19 + 94) != 1 )
  {
    v25 = MONITOR_MGR::_MigrateSimulatedMonitor(a1, v8, v7, v6, v5);
    if ( v25 >= 0 )
    {
      if ( !*(_QWORD *)v5 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v24, v23, v26, v27);
        WdLogEvent5_WdAssertion(v28);
      }
      MONITOR_MGR::_IssueMonitorEvent(a1, v8, 0LL, (const GUID *)3, v7);
    }
    return (unsigned int)v25;
  }
  MONITOR_MGR::_RemoveMonitorFromList(a1, v19, v17, v18);
LABEL_30:
  a5 = 0LL;
  if ( !v6 )
    v6 = v19;
  v42 = MONITOR_MGR::_CreateSimulatedMonitor((__int64)a1, v8, v7, v6, &a5);
  if ( v42 >= 0 )
  {
    v43 = a5;
    if ( !a5 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
      WdLogEvent5_WdAssertion(v44);
    }
    if ( v19 )
    {
      if ( *((_DWORD *)v19 + 94) != 1 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
        WdLogEvent5_WdAssertion(v45);
      }
      *((_DWORD *)v43 + 6) ^= (*((_DWORD *)v19 + 6) ^ *((_DWORD *)v43 + 6)) & 2;
      v46 = *((_DWORD *)v43 + 6) ^ (*((_DWORD *)v43 + 6) ^ *((_DWORD *)v19 + 6)) & 4;
      *((_DWORD *)v43 + 6) = v46;
      *((_DWORD *)v43 + 6) = v46 ^ (*((_DWORD *)v19 + 6) ^ v46) & 0x20;
      *((_QWORD *)v43 + 48) = v19;
    }
    if ( v13 )
      MONITOR_MGR::_RemoveMonitorFromList(a1, v13, v40, v41);
    MONITOR_MGR::_InsertMonitorToList(a1, v43, v40, v41);
    if ( v7 == 2 )
      v42 = MONITOR_MGR::_AddTargetIntoPersistencyRegistry((MONITOR_MGR *)a1, v8, v47, v48);
    v49 = 3;
    if ( !*((_QWORD *)v43 + 48) )
      v49 = 1;
    MONITOR_MGR::_IssueMonitorEvent(
      a1,
      *((unsigned int *)v43 + 7),
      (*((_BYTE *)v43 + 24) & 0x40) == 0 ? 7 : 0,
      (const GUID *)v49,
      *((_DWORD *)v43 + 94));
    if ( v13 )
    {
      MONITOR_MGR::_IssueMonitorEvent(a1, *((unsigned int *)v13 + 7), 0LL, (const GUID *)2, *((_DWORD *)v13 + 94));
      MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v13, v50, v51);
    }
    *(_QWORD *)v5 = v43;
  }
  return (unsigned int)v42;
}
