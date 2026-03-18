/*
 * XREFs of MonitorIsMonitorConnected @ 0x1C00ABCE0
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00A9D40 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00ABB60 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C00E9F40 (-IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorConnected(DXGADAPTER *this, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // rsi
  char v6; // bp
  __int64 v8; // rax
  __int64 v9; // rcx
  struct _FAST_MUTEX *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  struct DXGMONITOR *v18; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v6 = a3;
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || !a4 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  *a4 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !*((_QWORD *)this + 248) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v13);
  }
  v10 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 248) + 120LL);
  if ( !v10 )
  {
    v15 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  result = MONITOR_MGR::_GetMonitorInstance(v10, v5, v6, (ULONG **)&v18);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( v18 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v16);
    }
    *a4 = 0;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    if ( !v18 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v17);
    }
    *a4 = 1;
  }
  return 0LL;
}
