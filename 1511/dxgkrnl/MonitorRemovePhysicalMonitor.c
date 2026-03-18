/*
 * XREFs of MonitorRemovePhysicalMonitor @ 0x1C0187030
 * Callers:
 *     DpiPdoRemovePdo @ 0x1C01727E0 (DpiPdoRemovePdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C009827C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C0185CE8 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 */

__int64 __fastcall MonitorRemovePhysicalMonitor(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  PERESOURCE v9; // rax
  __int64 v10; // rax
  __int64 OwnerTable; // rsi
  unsigned int v13; // ebx

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || (_DWORD)v4 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = this[248];
  if ( !v9 || (OwnerTable = (__int64)v9[1].OwnerTable) == 0 )
  {
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  v13 = MONITOR_MGR::_HandleRemovePhysicalMonitor((struct _FAST_MUTEX *)v9[1].OwnerTable, v4);
  MONITOR_MGR::_LogMonitorPresentEvent(OwnerTable, 2, v4, v13, 0LL);
  return v13;
}
