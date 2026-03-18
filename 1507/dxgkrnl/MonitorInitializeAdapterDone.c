/*
 * XREFs of MonitorInitializeAdapterDone @ 0x1C00C7D14
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ @ 0x1C00CB72C (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorInitializeAdapterDone(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  MONITOR_MGR *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    WdLogEvent5_WdAssertion(v12);
  }
  result = (__int64)this[247];
  if ( result )
  {
    v10 = *(MONITOR_MGR **)(result + 96);
    if ( v10 )
      return MONITOR_MGR::_OnAdapterInitializationDone(v10);
    v11 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  return result;
}
