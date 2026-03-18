/*
 * XREFs of MonitorCreatePhysicalMonitor @ 0x1C00E38F0
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00E2A50 (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C009827C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00DF4EC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E1588 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 */

__int64 __fastcall MonitorCreatePhysicalMonitor(
        PERESOURCE *this,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        unsigned __int8 a5)
{
  char v5; // r14
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  PERESOURCE v11; // rbp
  MONITOR_MGR *OwnerTable; // rbp
  __int64 v13; // rcx
  int MonitorInstance; // r14d
  struct DXGMONITOR *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _OWORD v22[2]; // [rsp+30h] [rbp-38h] BYREF
  struct DXGMONITOR *v23; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  v6 = (unsigned int)a2;
  v9 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = this;
  if ( !this || !a3 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v20);
  }
  v11 = this[248];
  if ( !v11 || (OwnerTable = (MONITOR_MGR *)v11[1].OwnerTable) == 0LL )
  {
    v19 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  MONITOR_MGR::_HandleCreatePhysicalMonitor(OwnerTable, v6, a3, v5, a5);
  v23 = 0LL;
  memset(v22, 0, sizeof(v22));
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)OwnerTable, v6, 1, (ULONG **)&v23);
  if ( MonitorInstance >= 0 )
  {
    v15 = v23;
    if ( !v23 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v21);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 240), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v15, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v22, v16, v17);
    ExReleaseResourceLite((PERESOURCE)((char *)v15 + 240));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)OwnerTable, 1, v6, MonitorInstance, v22);
  return (unsigned int)MonitorInstance;
}
