/*
 * XREFs of ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00DF4EC
 * Callers:
 *     MonitorCreatePhysicalMonitor @ 0x1C00E38F0 (MonitorCreatePhysicalMonitor.c)
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C002C66C (-_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DEE8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00DF080 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00DF14C (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00DF1F0 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00DF2E0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00DF420 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C018A198 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        char a4,
        unsigned __int8 a5)
{
  int EmergencySimulatedMonitor; // eax
  __int64 v9; // rcx
  struct DXGMONITOR *v10; // rbx
  struct DXGMONITOR *v11; // rdi
  int MonitorInstance; // eax
  __int64 v13; // rcx
  struct DXGMONITOR *v14; // rsi
  int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r14d
  struct DXGMONITOR *v19; // r14
  __int64 v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct DXGMONITOR *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rax
  struct DXGMONITOR *v36; // [rsp+70h] [rbp+40h] BYREF
  struct _DEVICE_OBJECT *v37; // [rsp+80h] [rbp+50h]

  v37 = a3;
  if ( a2 == -1 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( *((_BYTE *)this + 5) && (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
    Template_q((__int64)this, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Start, (__int64)a3, a2);
  MONITOR_MGR::_IssueMonitorEvent((struct _FAST_MUTEX *)this, a2, 0, 0LL, 1);
  v36 = 0LL;
  EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor((struct _FAST_MUTEX *)this, &v36);
  if ( EmergencySimulatedMonitor >= 0 )
  {
    v10 = v36;
    if ( !v36 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v23);
    }
    MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v10);
  }
  else
  {
    if ( EmergencySimulatedMonitor != -1073741275 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v24);
    }
    v10 = v36;
    if ( v36 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v25);
    }
  }
  v36 = 0LL;
  v11 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, a2, 0, (ULONG **)&v36);
  v14 = v36;
  v15 = MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    if ( !v36 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v26);
    }
    if ( v10 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v27);
    }
    if ( *((_DWORD *)v14 + 94) == 1 )
    {
      v11 = v14;
      v28 = v14;
      v14 = 0LL;
      MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v28);
    }
    else
    {
      v11 = (struct DXGMONITOR *)*((_QWORD *)v14 + 48);
      *((_QWORD *)v14 + 48) = 0LL;
    }
    goto LABEL_35;
  }
  if ( v36 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( v15 != -1073741275 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v30);
LABEL_35:
    if ( v11 )
    {
      if ( ((*((_BYTE *)v11 + 24) & 2) != 0) != a4 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v31);
      }
      DXGMONITOR::_UnregisterPnPTargetDeviceNotification(v11);
      *((_QWORD *)v11 + 5) = 0LL;
    }
  }
  v36 = 0LL;
  v18 = MONITOR_MGR::_CreatePhysicalMonitor(this, a2, v37, a4, a5, &v36);
  if ( v18 < 0 )
  {
    if ( v36 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v35);
    }
    if ( v11 )
      MONITOR_MGR::_HandleCreateMonitorStep2((struct _FAST_MUTEX *)this, a2, v11, 0LL);
    if ( v10 )
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v10);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
      Template_q(v16, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel, v17, a2);
    return (unsigned int)v18;
  }
  else
  {
    v19 = v36;
    if ( !v36 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v32);
    }
    if ( v14 )
    {
      *((_DWORD *)v14 + 6) ^= (*((_DWORD *)v19 + 6) ^ *((_DWORD *)v14 + 6)) & 2;
      v33 = *((_DWORD *)v14 + 6) ^ (*((_DWORD *)v19 + 6) ^ *((_DWORD *)v14 + 6)) & 4;
      *((_DWORD *)v14 + 6) = v33;
      v20 = (*((_DWORD *)v19 + 6) ^ v33) & 0x20;
      *((_DWORD *)v19 + 6) ^= v20;
      *((_QWORD *)v14 + 48) = v19;
    }
    else
    {
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v19);
    }
    if ( MONITOR_MGR::_DelayNotifyClient )
    {
      if ( *((_QWORD *)v19 + 52) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v34);
      }
      *((_BYTE *)v19 + 408) = 1;
      if ( v11 )
        v10 = v11;
      *((_QWORD *)v19 + 52) = v10;
      MONITOR_MGR::_EnterMonitorPendingState(this);
      return 0LL;
    }
    else
    {
      if ( v11 )
        v10 = v11;
      return MONITOR_MGR::_HandleCreateMonitorStep2((struct _FAST_MUTEX *)this, a2, v10, v19);
    }
  }
}
