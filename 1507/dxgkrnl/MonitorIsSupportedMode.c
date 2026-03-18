/*
 * XREFs of MonitorIsSupportedMode @ 0x1C0097CA4
 * Callers:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00976F8 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsSupportedMode@DXGMONITOR@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0097FB0 (-_IsSupportedMode@DXGMONITOR@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@EPEAEQEAW4_D3DKMDT_MODE_PRUNI.c)
 */

__int64 __fastcall MonitorIsSupportedMode(
        struct HDXGMONITOR__ *a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        unsigned __int8 a3,
        unsigned __int8 *a4,
        enum _D3DKMDT_MODE_PRUNING_REASON *a5)
{
  enum _D3DKMDT_MODE_PRUNING_REASON *v8; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DXGMONITOR *v14; // rsi
  unsigned int IsSupportedMode; // ebx
  __int64 v16; // rax
  DXGMONITOR *v17; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  v8 = a5;
  if ( !a5 )
    return 3221225485LL;
  *a5 = D3DKMDT_MPR_UNINITIALIZED;
  v17 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v17);
  if ( (int)result >= 0 )
  {
    v14 = v17;
    if ( !v17 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v16);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 240), 1u);
    IsSupportedMode = DXGMONITOR::_IsSupportedMode(v14, a2, a3, a4, v8);
    ExReleaseResourceLite((PERESOURCE)((char *)v14 + 240));
    KeLeaveCriticalRegion();
    return IsSupportedMode;
  }
  return result;
}
