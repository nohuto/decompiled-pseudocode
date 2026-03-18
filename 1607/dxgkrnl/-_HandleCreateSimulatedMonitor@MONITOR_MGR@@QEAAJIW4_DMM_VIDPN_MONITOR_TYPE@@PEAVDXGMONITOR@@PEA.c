/*
 * XREFs of ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF18C
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3120 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01AFDF4 (MonitorCreateSimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C00F2140 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00F30A8 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3320 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00F3548 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00F35EC (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01AEB94 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AEC98 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01AF0EC (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01AF880 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C01B33F0 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateSimulatedMonitor(
        struct _FAST_MUTEX *a1,
        unsigned int a2,
        unsigned int a3,
        struct DXGMONITOR *a4,
        struct DXGMONITOR *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  struct DXGMONITOR *v6; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct DXGMONITOR *v14; // rdi
  int MonitorInstance; // eax
  __int64 v16; // rcx
  struct DXGMONITOR *v17; // rbp
  int v18; // r13d
  __int64 v19; // rax
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int EmergencySimulatedMonitor; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // r13d
  struct DXGMONITOR *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ecx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  struct DXGMONITOR *v43; // [rsp+30h] [rbp-38h] BYREF

  v6 = a5;
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a2 == -1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( a3 == 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
  }
  a5 = 0LL;
  v14 = 0LL;
  v43 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, a2, 0, (ULONG **)&a5);
  v17 = a5;
  v18 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( a5 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v24);
    }
    if ( v18 != -1073741275 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v25);
    }
    EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(a1, &v43);
    if ( EmergencySimulatedMonitor < 0 )
    {
      if ( EmergencySimulatedMonitor != -1073741275 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v28);
      }
      v14 = v43;
      if ( !v43 )
        goto LABEL_30;
    }
    else
    {
      v14 = v43;
      if ( v43 )
        goto LABEL_30;
    }
    v29 = WdLogNewEntry5_WdAssertion(v27);
    WdLogEvent5_WdAssertion(v29);
    goto LABEL_30;
  }
  if ( !a5 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( a3 == 5 )
    return 3223192973LL;
  if ( *((_DWORD *)v17 + 94) != 1 )
  {
    v22 = MONITOR_MGR::_MigrateSimulatedMonitor(a1, a2, a3, a4, v6);
    if ( v22 >= 0 )
    {
      if ( !*(_QWORD *)v6 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v23);
      }
      MONITOR_MGR::_IssueMonitorEvent(a1, a2, 0, 3LL, a3, (__int64)a6);
    }
    return (unsigned int)v22;
  }
  MONITOR_MGR::_RemoveMonitorFromList(a1, v17);
LABEL_30:
  a5 = 0LL;
  if ( !a4 )
    a4 = v17;
  v31 = MONITOR_MGR::_CreateSimulatedMonitor((__int64)a1, a2, a3, a4, &a5, a6);
  if ( v31 >= 0 )
  {
    v32 = a5;
    if ( !a5 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v30);
      WdLogEvent5_WdAssertion(v33);
    }
    if ( v17 )
    {
      if ( *((_DWORD *)v17 + 94) != 1 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v30);
        WdLogEvent5_WdAssertion(v34);
      }
      *((_DWORD *)v32 + 6) ^= (*((_DWORD *)v17 + 6) ^ *((_DWORD *)v32 + 6)) & 2;
      v35 = *((_DWORD *)v32 + 6) ^ (*((_DWORD *)v32 + 6) ^ *((_DWORD *)v17 + 6)) & 4;
      *((_DWORD *)v32 + 6) = v35;
      *((_DWORD *)v32 + 6) = v35 ^ (*((_DWORD *)v17 + 6) ^ v35) & 0x20;
      *((_QWORD *)v32 + 48) = v17;
      DXGMONITOR::_DestroyTtmDevice(v17);
    }
    if ( v14 )
      MONITOR_MGR::_RemoveMonitorFromList(a1, v14);
    MONITOR_MGR::_InsertMonitorToList(a1, v32);
    if ( a3 == 2 )
      v31 = MONITOR_MGR::_AddTargetIntoPersistencyRegistry((MONITOR_MGR *)a1, a2, v36, v37);
    if ( *((_QWORD *)v32 + 48) )
      v38 = 3;
    else
      v38 = *((_BYTE *)v32 + 524) != 0 ? 4 : 1;
    v39 = a6;
    MONITOR_MGR::_IssueMonitorEvent(
      a1,
      *((_DWORD *)v32 + 7),
      (*((_BYTE *)v32 + 24) & 0x40) == 0 ? 7 : 0,
      v38,
      *((_DWORD *)v32 + 94),
      (__int64)a6);
    if ( v14 )
    {
      MONITOR_MGR::_IssueMonitorEvent(a1, *((_DWORD *)v14 + 7), 0, 2LL, *((_DWORD *)v14 + 94), (__int64)v39);
      MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v14);
    }
    DXGMONITOR::_CreateTtmDevice(v32, v40, v41, v42);
    *(_QWORD *)v6 = v32;
  }
  return (unsigned int)v31;
}
