/*
 * XREFs of MonitorCreatePhysicalMonitor @ 0x1C00EE608
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00EF39C (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0089224 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00F1C1C (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F38CC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 */

__int64 __fastcall MonitorCreatePhysicalMonitor(
        DXGADAPTER *this,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        int a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned __int8 v6; // r15
  __int64 v7; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbp
  MONITOR_MGR *v14; // rbp
  __int64 v15; // rcx
  int MonitorInstance; // r14d
  struct DXGMONITOR *v17; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int8 v22; // [rsp+20h] [rbp-48h]
  _OWORD v23[2]; // [rsp+30h] [rbp-38h] BYREF
  struct DXGMONITOR *v24; // [rsp+70h] [rbp+8h] BYREF

  v6 = a4;
  v7 = (unsigned int)a2;
  v10 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v10 + 24) = v7;
  *(_QWORD *)(v10 + 32) = this;
  if ( !this || !a3 || (_DWORD)v7 == -1 )
    return 3221225485LL;
  v11 = (__int64)a6;
  if ( a6 )
  {
    *((_DWORD *)a6 + 9) = v7;
    *(_QWORD *)(v11 + 48) = *(_QWORD *)((char *)this + 268);
    *(_DWORD *)(v11 + 40) = 1;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v20);
  }
  v13 = *((_QWORD *)this + 266);
  if ( !v13 || (v14 = *(MONITOR_MGR **)(v13 + 96)) == 0LL )
  {
    v19 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  MONITOR_MGR::_HandleCreatePhysicalMonitor(v14, v7, a3, v6, v22, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v11);
  v24 = 0LL;
  memset(v23, 0, sizeof(v23));
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)v14, v7, 1, (ULONG **)&v24);
  if ( MonitorInstance >= 0 )
  {
    v17 = v24;
    if ( !v24 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v21);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 240), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v17, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v23);
    ExReleaseResourceLite((PERESOURCE)((char *)v17 + 240));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)v14, 1, v7, MonitorInstance, v23);
  return (unsigned int)MonitorInstance;
}
