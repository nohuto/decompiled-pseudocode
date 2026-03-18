/*
 * XREFs of ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00CB5D8
 * Callers:
 *     MonitorCreatePhysicalMonitor @ 0x1C00DDE60 (MonitorCreatePhysicalMonitor.c)
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C002CC5C (-_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAFBC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00CB248 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00CB294 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00CB338 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00CB3D0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00CB510 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0185988 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreatePhysicalMonitor(
        MONITOR_MGR *this,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        char a5)
{
  char v5; // r13
  unsigned int v6; // r12d
  __int64 v8; // r8
  __int64 v9; // r9
  int EmergencySimulatedMonitor; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGMONITOR *v15; // rbx
  struct DXGMONITOR *v16; // rdi
  int MonitorInstance; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGMONITOR *v22; // rsi
  int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r14d
  struct DXGMONITOR *v29; // r14
  __int64 v30; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  struct DXGMONITOR *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rax
  struct DXGMONITOR *v46; // [rsp+70h] [rbp+40h] BYREF
  struct _DEVICE_OBJECT *v47; // [rsp+80h] [rbp+50h]

  v47 = a3;
  v5 = a4;
  v6 = a2;
  if ( (_DWORD)a2 == -1 )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( *((_BYTE *)this + 5) && (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
    Template_q((__int64)this, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Start, (__int64)a3, v6);
  MONITOR_MGR::_IssueMonitorEvent((struct _FAST_MUTEX *)this, v6, 0LL, 0LL, 1);
  v46 = 0LL;
  EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor((struct _FAST_MUTEX *)this, &v46, v8, v9);
  if ( EmergencySimulatedMonitor >= 0 )
  {
    v15 = v46;
    if ( !v46 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      WdLogEvent5_WdAssertion(v33);
    }
    MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v15, v13, v14);
  }
  else
  {
    if ( EmergencySimulatedMonitor != -1073741275 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      WdLogEvent5_WdAssertion(v34);
    }
    v15 = v46;
    if ( v46 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      WdLogEvent5_WdAssertion(v35);
    }
  }
  v46 = 0LL;
  v16 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, v6, 0LL, (ULONG **)&v46);
  v22 = v46;
  v23 = MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    if ( !v46 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
      WdLogEvent5_WdAssertion(v36);
    }
    if ( v15 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
      WdLogEvent5_WdAssertion(v37);
    }
    if ( *((_DWORD *)v22 + 94) == 1 )
    {
      v16 = v22;
      v38 = v22;
      v22 = 0LL;
      MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v38, v20, v21);
    }
    else
    {
      v16 = (struct DXGMONITOR *)*((_QWORD *)v22 + 48);
      *((_QWORD *)v22 + 48) = 0LL;
    }
    goto LABEL_35;
  }
  if ( v46 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    WdLogEvent5_WdAssertion(v39);
  }
  if ( v23 != -1073741275 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    WdLogEvent5_WdAssertion(v40);
LABEL_35:
    if ( v16 )
    {
      if ( ((*((_BYTE *)v16 + 24) & 2) != 0) != v5 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        WdLogEvent5_WdAssertion(v41);
      }
      DXGMONITOR::_UnregisterPnPTargetDeviceNotification(v16);
      *((_QWORD *)v16 + 5) = 0LL;
    }
  }
  v46 = 0LL;
  LOBYTE(v21) = v5;
  v28 = MONITOR_MGR::_CreatePhysicalMonitor(this, v6, v47, v21, a5, &v46);
  if ( v28 < 0 )
  {
    if ( v46 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
      WdLogEvent5_WdAssertion(v45);
    }
    if ( v16 )
      MONITOR_MGR::_HandleCreateMonitorStep2((struct _FAST_MUTEX *)this, v6, v16, 0LL);
    if ( v15 )
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v15, v26, v27);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
      Template_q(v25, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel, v26, v6);
    return (unsigned int)v28;
  }
  else
  {
    v29 = v46;
    if ( !v46 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
      WdLogEvent5_WdAssertion(v42);
    }
    if ( v22 )
    {
      *((_DWORD *)v22 + 6) ^= (*((_DWORD *)v29 + 6) ^ *((_DWORD *)v22 + 6)) & 2;
      v43 = *((_DWORD *)v22 + 6) ^ (*((_DWORD *)v29 + 6) ^ *((_DWORD *)v22 + 6)) & 4;
      *((_DWORD *)v22 + 6) = v43;
      v30 = (*((_DWORD *)v29 + 6) ^ v43) & 0x20;
      *((_DWORD *)v29 + 6) ^= v30;
      *((_QWORD *)v22 + 48) = v29;
    }
    else
    {
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v29, v26, v27);
    }
    if ( MONITOR_MGR::_DelayNotifyClient )
    {
      if ( *((_QWORD *)v29 + 50) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v30, v24, v26, v27);
        WdLogEvent5_WdAssertion(v44);
      }
      *((_BYTE *)v29 + 392) = 1;
      if ( v16 )
        v15 = v16;
      *((_QWORD *)v29 + 50) = v15;
      MONITOR_MGR::_EnterMonitorPendingState(this);
      return 0LL;
    }
    else
    {
      if ( v16 )
        v15 = v16;
      return MONITOR_MGR::_HandleCreateMonitorStep2((struct _FAST_MUTEX *)this, v6, v15, v29);
    }
  }
}
