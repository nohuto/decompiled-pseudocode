/*
 * XREFs of MonitorEnableDisableMonitor @ 0x1C00CCA9C
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9560 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00983AC (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 */

__int64 __fastcall MonitorEnableDisableMonitor(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // di
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *OwnerTable; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v5 = a3;
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[5] = 2LL;
  v7[4] = this;
  v7[3] = 0xFFFFFFFFLL;
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v14);
    }
    if ( !this[248] )
    {
      v12 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v12);
    }
    OwnerTable = (char *)this[248][1].OwnerTable;
    if ( OwnerTable )
      return MONITOR_MGR::_EnableDisableMonitor(OwnerTable, v8, v5, 2, a5);
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
  }
  return 3221225485LL;
}
