/*
 * XREFs of MonitorGetMonitorOrientationsFromTarget @ 0x1C009C080
 * Callers:
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C0099F34 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 MonitorGetMonitorOrientationsFromTarget(DXGADAPTER *a1, unsigned int a2, _DWORD *a3, ...)
{
  __int64 v6; // rcx
  struct _FAST_MUTEX *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  struct DXGMONITOR *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct DXGMONITOR *v16; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, struct DXGMONITOR *);
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 248) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v11);
  }
  v7 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 248) + 120LL);
  if ( !v7 )
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  v16 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v7, a2, 1, (ULONG **)va);
  if ( (int)result >= 0 )
  {
    v10 = v16;
    if ( !v16 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v13);
      v15 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v15);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 240), 1u);
    if ( a3 )
      *a3 = *((_DWORD *)v10 + 99);
    ExReleaseResourceLite((PERESOURCE)((char *)v10 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
