/*
 * XREFs of MonitorEnableDisableTargetAsHMD @ 0x1C01B0318
 * Callers:
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014D63C (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3320 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C01B33F0 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorEnableDisableTargetAsHMD(DXGADAPTER *a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct DXGMONITOR *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  struct DXGMONITOR *v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( !a1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !*((_QWORD *)a1 + 266) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 266) + 96LL);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v19 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v12, v4, 1, (ULONG **)&v19);
  if ( (_DWORD)result == -1073741275 )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = v4;
    *(_QWORD *)(v15 + 32) = a1;
    WdLogEvent5_WdError(v15);
    return 3221225664LL;
  }
  if ( (int)result >= 0 )
  {
    v16 = v19;
    if ( !v19 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v17);
    }
    if ( *((_DWORD *)v16 + 94) != 1 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v18);
    }
    if ( a3 )
    {
      if ( *((_BYTE *)v16 + 524) )
        return 0LL;
    }
    else if ( !*((_BYTE *)v16 + 524) )
    {
      return 0LL;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v16 + 240), 1u);
    *((_BYTE *)v16 + 524) = a3;
    DXGMONITOR::_DestroyTtmDevice(v16);
    MONITOR_MGR::_IssueMonitorEvent(v12, v4, 10, (a3 != 0) + 1, *((_DWORD *)v16 + 94), a4);
    ExReleaseResourceLite((PERESOURCE)((char *)v16 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
