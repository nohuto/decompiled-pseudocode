/*
 * XREFs of MonitorInitializeAdapterDone @ 0x1C00DE58C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ @ 0x1C00DF640 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorInitializeAdapterDone(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  MONITOR_MGR *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v9);
  }
  result = (__int64)this[248];
  if ( result )
  {
    v7 = *(MONITOR_MGR **)(result + 120);
    if ( v7 )
      return MONITOR_MGR::_OnAdapterInitializationDone(v7);
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  return result;
}
