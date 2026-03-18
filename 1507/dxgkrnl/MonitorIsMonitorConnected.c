/*
 * XREFs of MonitorIsMonitorConnected @ 0x1C005FEF0
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C005FC40 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C0061BF0 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C00DF0D0 (-IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorConnected(DXGADAPTER *this, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // rsi
  unsigned __int8 v6; // bp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  MONITOR_MGR *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct DXGMONITOR *v24; // [rsp+30h] [rbp+8h] BYREF

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
    v20 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !*((_QWORD *)this + 247) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v19);
  }
  v13 = *(MONITOR_MGR **)(*((_QWORD *)this + 247) + 96LL);
  if ( !v13 )
  {
    v21 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  result = MONITOR_MGR::_GetMonitorInstance(v13, v5, v6, &v24);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( v24 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v22);
    }
    *a4 = 0;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    if ( !v24 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v23);
    }
    *a4 = 1;
  }
  return 0LL;
}
