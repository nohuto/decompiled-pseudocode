/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3684
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F38CC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0034E04 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F21F8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C00F242C (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00F3548 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00F35EC (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        char a4,
        unsigned __int8 a5,
        struct DXGMONITOR **a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  struct DXGMONITOR **v7; // r15
  __int64 v9; // r14
  char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGMONITOR *v16; // rbx
  int MonitorInstance; // eax
  __int64 v18; // rcx
  __int64 v19; // r9
  struct DXGMONITOR **v20; // rdi
  int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax

  v7 = a6;
  v9 = a2;
  if ( !a6 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !a3 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( (_DWORD)v9 == -1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v27);
  }
  *v7 = 0LL;
  v12 = (char *)operator new(0x210uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v12 )
    v16 = DXGMONITOR::DXGMONITOR(v12, this, v14, v15);
  else
    v16 = 0LL;
  if ( v16 )
  {
    a6 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, v9, 0, (ULONG **)&a6);
    v20 = a6;
    v21 = MonitorInstance;
    if ( MonitorInstance >= 0 )
    {
      if ( !a6 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v29);
      }
      if ( *((_DWORD *)v20 + 94) == 1 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v30);
      }
      if ( v20[48] )
      {
        v31 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v31);
      }
      v20[48] = v16;
    }
    else
    {
      if ( a6 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v32);
      }
      if ( v21 != -1073741275 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v33);
      }
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v16);
    }
    LOBYTE(v19) = a4;
    v23 = (int)DXGMONITOR::_InitializeMonitor((__int64)v16, (unsigned int)v9, (__int64)a3, v19, 1, 1, 0LL, a7);
    if ( v20 )
      v20[48] = 0LL;
    else
      MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v16);
    if ( (int)v23 < 0 )
    {
      v34 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v34 + 24) = v9;
      *(_QWORD *)(v34 + 32) = v23;
      WdLogEvent5_WdError(v34);
      DXGMONITOR::`scalar deleting destructor'(v16);
      return (unsigned int)v23;
    }
    else
    {
      *v7 = v16;
      return 0LL;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v13);
    WdLogEvent5_WdError(v28);
    return 3221225495LL;
  }
}
