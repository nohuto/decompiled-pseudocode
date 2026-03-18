/*
 * XREFs of ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F38CC
 * Callers:
 *     MonitorCreatePhysicalMonitor @ 0x1C00EE608 (MonitorCreatePhysicalMonitor.c)
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C0034E9C (-_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00F30A8 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3320 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00F3548 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00F35EC (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3684 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F37CC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C01B3C24 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r13
  int EmergencySimulatedMonitor; // eax
  __int64 v10; // rcx
  struct DXGMONITOR *v11; // rbx
  struct DXGMONITOR *v12; // rdi
  int MonitorInstance; // eax
  __int64 v14; // rcx
  struct DXGMONITOR *v15; // rsi
  int v16; // r14d
  char v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r14d
  struct DXGMONITOR *v21; // r14
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct DXGMONITOR *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int8 v38; // [rsp+20h] [rbp-20h]
  struct DXGMONITOR *v39; // [rsp+80h] [rbp+40h] BYREF
  struct _DEVICE_OBJECT *v40; // [rsp+90h] [rbp+50h]
  unsigned __int8 v41; // [rsp+98h] [rbp+58h]

  v41 = a4;
  v40 = a3;
  if ( a2 == -1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( *((_BYTE *)this + 5) && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    Template_q((__int64)this, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Start, (__int64)a3, a2);
  v8 = a6;
  MONITOR_MGR::_IssueMonitorEvent((struct _FAST_MUTEX *)this, a2, 0, 0LL, 1, (__int64)a6);
  v39 = 0LL;
  EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor((struct _FAST_MUTEX *)this, &v39);
  if ( EmergencySimulatedMonitor >= 0 )
  {
    v11 = v39;
    if ( !v39 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v25);
    }
    MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v11);
  }
  else
  {
    if ( EmergencySimulatedMonitor != -1073741275 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v26);
    }
    v11 = v39;
    if ( v39 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v27);
    }
  }
  v39 = 0LL;
  v12 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, a2, 0, (ULONG **)&v39);
  v15 = v39;
  v16 = MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    if ( !v39 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v28);
    }
    if ( v11 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v29);
    }
    if ( *((_DWORD *)v15 + 94) == 1 )
    {
      v12 = v15;
      v30 = v15;
      v15 = 0LL;
      MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v30);
    }
    else
    {
      v12 = (struct DXGMONITOR *)*((_QWORD *)v15 + 48);
      *((_QWORD *)v15 + 48) = 0LL;
    }
  }
  else
  {
    if ( v39 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v31);
    }
    if ( v16 == -1073741275 )
    {
      v17 = v41;
      goto LABEL_14;
    }
    v32 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v32);
  }
  v17 = v41;
  if ( v12 )
  {
    if ( ((*((_BYTE *)v12 + 24) & 2) != 0) != v41 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v33);
    }
    DXGMONITOR::_UnregisterPnPTargetDeviceNotification(v12);
    *((_QWORD *)v12 + 5) = 0LL;
  }
LABEL_14:
  v39 = 0LL;
  v20 = MONITOR_MGR::_CreatePhysicalMonitor(this, a2, v40, v17, v38, &v39, v8);
  if ( v20 < 0 )
  {
    if ( v39 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v37);
    }
    if ( v12 )
      MONITOR_MGR::_HandleCreateMonitorStep2((struct _FAST_MUTEX *)this, a2, v12, 0LL, v8);
    if ( v11 )
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v11);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
      Template_q(v18, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel, v19, a2);
    return (unsigned int)v20;
  }
  else
  {
    v21 = v39;
    if ( !v39 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v34);
    }
    if ( v15 )
    {
      *((_DWORD *)v15 + 6) ^= (*((_DWORD *)v21 + 6) ^ *((_DWORD *)v15 + 6)) & 2;
      v35 = *((_DWORD *)v15 + 6) ^ (*((_DWORD *)v21 + 6) ^ *((_DWORD *)v15 + 6)) & 4;
      *((_DWORD *)v15 + 6) = v35;
      v22 = (*((_DWORD *)v21 + 6) ^ v35) & 0x20;
      *((_DWORD *)v21 + 6) ^= v22;
      *((_QWORD *)v15 + 48) = v21;
    }
    else
    {
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v21);
    }
    if ( MONITOR_MGR::_DelayNotifyClient )
    {
      if ( *((_QWORD *)v21 + 53) )
      {
        v36 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v36);
      }
      *((_BYTE *)v21 + 416) = 1;
      if ( v12 )
        v11 = v12;
      *((_QWORD *)v21 + 53) = v11;
      MONITOR_MGR::_EnterMonitorPendingState(this);
      return 0LL;
    }
    else
    {
      if ( v12 )
        v11 = v12;
      return MONITOR_MGR::_HandleCreateMonitorStep2((struct _FAST_MUTEX *)this, a2, v11, v21, v8);
    }
  }
}
