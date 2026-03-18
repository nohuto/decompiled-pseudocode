/*
 * XREFs of MonitorAcquireMonitorPendingEvent @ 0x1C00C0BF4
 * Callers:
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00C0A9C (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C012D090 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C0145D70 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorAcquireMonitorPendingEvent(DXGADAPTER *this, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v6 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v15);
  }
  v8 = *((_QWORD *)this + 248);
  if ( !v8 )
  {
    v14 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return 3221225659LL;
  }
  v9 = *(_QWORD *)(v8 + 120);
  if ( !v9 )
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v9 + 8) + 16LL)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v17);
  }
  v11 = *(_QWORD *)(v9 + 768);
  if ( v11 )
  {
    if ( *(int *)(v11 + 16) <= 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v18);
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 768) + 16LL));
  }
  v12 = *(_QWORD *)(v9 + 768);
  *a2 = v12;
  if ( !v12 )
    return (unsigned int)-1073741823;
  return v6;
}
