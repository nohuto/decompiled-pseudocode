/*
 * XREFs of MonitorHandleInternalIOCtrl @ 0x1C00BA6CC
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C00BA460 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00BA7FC (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _FAST_MUTEX *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int MonitorInstance; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  struct DXGMONITOR *v23; // rbx
  int v24; // eax
  struct _ERESOURCE *v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct DXGMONITOR *v32; // [rsp+60h] [rbp+8h] BYREF

  v8 = a2;
  if ( !a1 )
    return 3221225485LL;
  v12 = a8;
  if ( !a8 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !*((_QWORD *)a1 + 247) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v27);
  }
  v17 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 247) + 96LL);
  if ( !v17 )
  {
    v29 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v29 + 24) = a1;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  v32 = 0LL;
  LOBYTE(v15) = 1;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v17, (unsigned int)v8, v15, (ULONG **)&v32);
  if ( MonitorInstance < 0 )
  {
    v30 = WdLogNewEntry5_WdDmmEvent(v19);
    *(_QWORD *)(v30 + 24) = v8;
    *(_QWORD *)(v30 + 32) = v17;
    WdLogEvent5_WdDmmEvent(v30);
  }
  else
  {
    v23 = v32;
    if ( !v32 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v19, v18, v21, v22);
      WdLogEvent5_WdAssertion(v31);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v23 + 240), 1u);
    v24 = DXGMONITOR::_DispatchInternalIOCtrl(v23, a3, a4, a5, a6, a7, v12);
    v25 = (struct _ERESOURCE *)((char *)v23 + 240);
    MonitorInstance = v24;
    ExReleaseResourceLite(v25);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)MonitorInstance;
}
