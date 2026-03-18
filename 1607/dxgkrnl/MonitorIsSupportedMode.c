/*
 * XREFs of MonitorIsSupportedMode @ 0x1C007CC14
 * Callers:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C007D1B8 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0001BB0 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsSupportedMode@DXGMONITOR@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C007AE78 (-_IsSupportedMode@DXGMONITOR@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@EPEAEQEAW4_D3DKMDT_MODE_PRUNI.c)
 */

__int64 __fastcall MonitorIsSupportedMode(
        struct HDXGMONITOR__ *a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        char a3,
        unsigned __int8 *a4,
        enum _D3DKMDT_MODE_PRUNING_REASON *a5)
{
  enum _D3DKMDT_MODE_PRUNING_REASON *v8; // rbx
  __int64 result; // rax
  __int64 v10; // rcx
  DXGMONITOR *v11; // rsi
  unsigned int IsSupportedMode; // ebx
  __int64 v13; // rax
  DXGMONITOR *v14; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  v8 = a5;
  if ( !a5 )
    return 3221225485LL;
  *a5 = D3DKMDT_MPR_UNINITIALIZED;
  v14 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v14);
  if ( (int)result >= 0 )
  {
    v11 = v14;
    if ( !v14 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v13);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 240), 1u);
    IsSupportedMode = DXGMONITOR::_IsSupportedMode(v11, a2, a3, a4, v8);
    ExReleaseResourceLite((PERESOURCE)((char *)v11 + 240));
    KeLeaveCriticalRegion();
    return IsSupportedMode;
  }
  return result;
}
