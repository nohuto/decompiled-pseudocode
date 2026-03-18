/*
 * XREFs of MonitorHandleInternalIOCtrl @ 0x1C00C4730
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C44D0 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C007AF90 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorHandleInternalIOCtrl(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // rsi
  unsigned __int64 *v12; // rbp
  __int64 v13; // rcx
  struct _FAST_MUTEX *v14; // rdi
  __int64 v15; // rcx
  int MonitorInstance; // ebx
  struct DXGMONITOR *v17; // rbx
  int v18; // eax
  struct _ERESOURCE *v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct DXGMONITOR *v26; // [rsp+60h] [rbp+8h] BYREF

  v8 = a2;
  if ( !a1 )
    return 3221225485LL;
  v12 = a8;
  if ( !a8 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !*((_QWORD *)a1 + 266) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v21);
  }
  v14 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 266) + 96LL);
  if ( !v14 )
  {
    v23 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v23 + 24) = a1;
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  v26 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v14, v8, 1, (ULONG **)&v26);
  if ( MonitorInstance < 0 )
  {
    v24 = WdLogNewEntry5_WdDmmEvent(v15);
    *(_QWORD *)(v24 + 24) = v8;
    *(_QWORD *)(v24 + 32) = v14;
    WdLogEvent5_WdDmmEvent(v24);
  }
  else
  {
    v17 = v26;
    if ( !v26 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v25);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v17 + 240), 1u);
    v18 = DXGMONITOR::_DispatchInternalIOCtrl(v17, a3, a4, (unsigned int *)a5, a6, (char *)a7, v12);
    v19 = (struct _ERESOURCE *)((char *)v17 + 240);
    MonitorInstance = v18;
    ExReleaseResourceLite(v19);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)MonitorInstance;
}
