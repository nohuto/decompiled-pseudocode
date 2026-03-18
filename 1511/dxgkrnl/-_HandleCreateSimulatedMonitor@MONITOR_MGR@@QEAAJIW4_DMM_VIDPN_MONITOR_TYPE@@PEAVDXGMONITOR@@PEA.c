/*
 * XREFs of ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01859D8
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ @ 0x1C00DEDFC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01866A4 (MonitorCreateSimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DEE8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00DF080 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00DF14C (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00DF1F0 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C0185404 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0185508 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0185938 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0186058 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateSimulatedMonitor(
        struct _FAST_MUTEX *a1,
        unsigned int a2,
        unsigned int a3,
        struct DXGMONITOR *a4,
        struct DXGMONITOR *a5)
{
  struct DXGMONITOR *v5; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  struct DXGMONITOR *v13; // rbx
  int MonitorInstance; // eax
  __int64 v15; // rcx
  struct DXGMONITOR *v16; // rbp
  int v17; // edi
  __int64 v18; // rax
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int EmergencySimulatedMonitor; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // r13d
  struct DXGMONITOR *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // ecx
  struct DXGMONITOR *v38; // [rsp+30h] [rbp-38h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a2 == -1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a3 == 1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  a5 = 0LL;
  v13 = 0LL;
  v38 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, a2, 0, (ULONG **)&a5);
  v16 = a5;
  v17 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( a5 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v23);
    }
    if ( v17 != -1073741275 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v24);
    }
    EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(a1, &v38);
    if ( EmergencySimulatedMonitor < 0 )
    {
      if ( EmergencySimulatedMonitor != -1073741275 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v26);
        WdLogEvent5_WdAssertion(v27);
      }
      v13 = v38;
      if ( !v38 )
        goto LABEL_30;
    }
    else
    {
      v13 = v38;
      if ( v38 )
        goto LABEL_30;
    }
    v28 = WdLogNewEntry5_WdAssertion(v26);
    WdLogEvent5_WdAssertion(v28);
    goto LABEL_30;
  }
  if ( !a5 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a3 == 5 )
    return 3223192973LL;
  if ( *((_DWORD *)v16 + 94) != 1 )
  {
    v21 = MONITOR_MGR::_MigrateSimulatedMonitor(a1, a2, a3, a4, v5);
    if ( v21 >= 0 )
    {
      if ( !*(_QWORD *)v5 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v22);
      }
      MONITOR_MGR::_IssueMonitorEvent(a1, a2, 0, 3LL, a3);
    }
    return (unsigned int)v21;
  }
  MONITOR_MGR::_RemoveMonitorFromList(a1, v16);
LABEL_30:
  a5 = 0LL;
  if ( !a4 )
    a4 = v16;
  v30 = MONITOR_MGR::_CreateSimulatedMonitor((__int64)a1, a2, a3, a4, &a5);
  if ( v30 >= 0 )
  {
    v31 = a5;
    if ( !a5 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v29);
      WdLogEvent5_WdAssertion(v32);
    }
    if ( v16 )
    {
      if ( *((_DWORD *)v16 + 94) != 1 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v29);
        WdLogEvent5_WdAssertion(v33);
      }
      *((_DWORD *)v31 + 6) ^= (*((_DWORD *)v16 + 6) ^ *((_DWORD *)v31 + 6)) & 2;
      v34 = *((_DWORD *)v31 + 6) ^ (*((_DWORD *)v31 + 6) ^ *((_DWORD *)v16 + 6)) & 4;
      *((_DWORD *)v31 + 6) = v34;
      *((_DWORD *)v31 + 6) = v34 ^ (*((_DWORD *)v16 + 6) ^ v34) & 0x20;
      *((_QWORD *)v31 + 48) = v16;
    }
    if ( v13 )
      MONITOR_MGR::_RemoveMonitorFromList(a1, v13);
    MONITOR_MGR::_InsertMonitorToList(a1, v31);
    if ( a3 == 2 )
      v30 = MONITOR_MGR::_AddTargetIntoPersistencyRegistry((MONITOR_MGR *)a1, a2, v35, v36);
    if ( *((_QWORD *)v31 + 48) )
      v37 = 3;
    else
      v37 = *((_BYTE *)v31 + 508) != 0 ? 4 : 1;
    MONITOR_MGR::_IssueMonitorEvent(
      a1,
      *((_DWORD *)v31 + 7),
      (*((_BYTE *)v31 + 24) & 0x40) == 0 ? 7 : 0,
      v37,
      *((_DWORD *)v31 + 94));
    if ( v13 )
    {
      MONITOR_MGR::_IssueMonitorEvent(a1, *((_DWORD *)v13 + 7), 0, 2LL, *((_DWORD *)v13 + 94));
      MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v13);
    }
    *(_QWORD *)v5 = v31;
  }
  return (unsigned int)v30;
}
