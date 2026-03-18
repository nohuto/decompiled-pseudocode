/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00CB3D0
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00CB5D8 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 * Callees:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C002CBC4 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C00C9FE4 (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00CA1B4 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00CB294 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00CB338 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreatePhysicalMonitor(
        MONITOR_MGR *this,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        char a5,
        struct DXGMONITOR **a6)
{
  struct DXGMONITOR **v6; // r15
  char v7; // r13
  __int64 v8; // r14
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGMONITOR *v15; // rbx
  int MonitorInstance; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGMONITOR **v21; // rdi
  int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax

  v6 = a6;
  v7 = a4;
  v8 = (unsigned int)a2;
  if ( !a6 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !a3 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( (_DWORD)v8 == -1 )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v30);
  }
  *v6 = 0LL;
  v11 = (char *)operator new[](0x1F0uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v11 )
    v15 = DXGMONITOR::DXGMONITOR(v11, this, v13, v14);
  else
    v15 = 0LL;
  if ( v15 )
  {
    a6 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, (unsigned int)v8, 0LL, (ULONG **)&a6);
    v21 = a6;
    v22 = MonitorInstance;
    if ( MonitorInstance >= 0 )
    {
      if ( !a6 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        WdLogEvent5_WdAssertion(v32);
      }
      if ( *((_DWORD *)v21 + 94) == 1 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        WdLogEvent5_WdAssertion(v33);
      }
      if ( v21[48] )
      {
        v34 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        WdLogEvent5_WdAssertion(v34);
      }
      v21[48] = v15;
    }
    else
    {
      if ( a6 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        WdLogEvent5_WdAssertion(v35);
      }
      if ( v22 != -1073741275 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        WdLogEvent5_WdAssertion(v36);
      }
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v15, v19, v20);
    }
    LOBYTE(v20) = v7;
    v24 = (int)DXGMONITOR::_InitializeMonitor((__int64)v15, (unsigned int)v8, (__int64)a3, v20, a5, 1, 0LL);
    if ( v21 )
      v21[48] = 0LL;
    else
      MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v15, v25, v26);
    if ( (int)v24 < 0 )
    {
      v37 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v37 + 24) = v8;
      *(_QWORD *)(v37 + 32) = v24;
      WdLogEvent5_WdError(v37);
      DXGMONITOR::`scalar deleting destructor'(v15);
      return (unsigned int)v24;
    }
    else
    {
      *v6 = v15;
      return 0LL;
    }
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(v12);
    WdLogEvent5_WdError(v31);
    return 3221225495LL;
  }
}
