/*
 * XREFs of MonitorGetNativeFlags @ 0x1C00E30C0
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00DCE0C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C000E8A0 (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNativeFlags(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        bool *a4,
        unsigned __int8 *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  struct DXGMONITOR *v14; // rbx
  unsigned int MonitorNativeFlags; // eax
  struct _ERESOURCE *v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 || !a3 || !a4 || !a5 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 248) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 248) + 120LL);
  if ( !v11 )
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  v22 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v11, a2, 0, (ULONG **)&v22);
  if ( (int)result >= 0 )
  {
    v14 = v22;
    if ( !v22 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v19);
      v21 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v21);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 240), 1u);
    MonitorNativeFlags = DXGMONITOR::_GetMonitorNativeFlags(v14, a3, a4, (bool *)a5);
    v16 = (struct _ERESOURCE *)((char *)v14 + 240);
    v17 = MonitorNativeFlags;
    ExReleaseResourceLite(v16);
    KeLeaveCriticalRegion();
    return v17;
  }
  return result;
}
