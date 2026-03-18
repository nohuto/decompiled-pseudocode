/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00DF2E0
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00DF4EC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 * Callees:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C002C5D4 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00DF14C (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00DF1F0 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C00E1A8C (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00E1C78 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        char a4,
        unsigned __int8 a5,
        struct DXGMONITOR **a6)
{
  struct DXGMONITOR **v6; // r15
  __int64 v8; // r14
  PVOID v11; // rax
  __int64 v12; // rcx
  struct DXGMONITOR *v13; // rbx
  int MonitorInstance; // eax
  __int64 v15; // rcx
  __int64 v16; // r9
  struct DXGMONITOR **v17; // rdi
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax

  v6 = a6;
  v8 = a2;
  if ( !a6 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a3 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (_DWORD)v8 == -1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v24);
  }
  *v6 = 0LL;
  v11 = operator new[](0x200uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v11 )
    v13 = DXGMONITOR::DXGMONITOR(v11, this);
  else
    v13 = 0LL;
  if ( v13 )
  {
    a6 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, v8, 0, (ULONG **)&a6);
    v17 = a6;
    v18 = MonitorInstance;
    if ( MonitorInstance >= 0 )
    {
      if ( !a6 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v26);
      }
      if ( *((_DWORD *)v17 + 94) == 1 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v27);
      }
      if ( v17[48] )
      {
        v28 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v28);
      }
      v17[48] = v13;
    }
    else
    {
      if ( a6 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v29);
      }
      if ( v18 != -1073741275 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v30);
      }
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v13);
    }
    LOBYTE(v16) = a4;
    v20 = (int)DXGMONITOR::_InitializeMonitor(v13, (unsigned int)v8, a3, v16, a5, 1, 0LL);
    if ( v17 )
      v17[48] = 0LL;
    else
      MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v13);
    if ( (int)v20 < 0 )
    {
      v31 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v31 + 24) = v8;
      *(_QWORD *)(v31 + 32) = v20;
      WdLogEvent5_WdError(v31);
      DXGMONITOR::`scalar deleting destructor'(v13);
      return (unsigned int)v20;
    }
    else
    {
      *v6 = v13;
      return 0LL;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v12);
    WdLogEvent5_WdError(v25);
    return 3221225495LL;
  }
}
