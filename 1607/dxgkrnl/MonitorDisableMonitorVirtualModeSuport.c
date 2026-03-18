/*
 * XREFs of MonitorDisableMonitorVirtualModeSuport @ 0x1C01B017C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C33E0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C0192E0C (DpiGdiAsyncDisplaySwitchCallout.c)
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z @ 0x1C01B342C (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z.c)
 */

__int64 __fastcall MonitorDisableMonitorVirtualModeSuport(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 a3,
        _OWORD *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rax
  struct DXGMONITOR *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ecx
  struct DXGMONITOR *v23; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)a1 + 266) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 266) + 96LL);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  v23 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v11, v4, 1, (ULONG **)&v23);
  v15 = result;
  if ( (_DWORD)result == -1073741275 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = v4;
    *(_QWORD *)(v16 + 32) = a1;
    WdLogEvent5_WdError(v16);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v17 = v23;
    if ( !v23 || *((_DWORD *)v23 + 94) != 1 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v18);
    }
    if ( !v17 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v19);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 240), 1u);
    v20 = *((unsigned int *)v17 + 6);
    if ( (*((_BYTE *)v17 + 24) & 2) != 0 )
    {
      v21 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v21 + 24) = v4;
      *(_QWORD *)(v21 + 32) = a1;
      WdLogEvent5_WdError(v21);
      v15 = -1073741790;
    }
    else
    {
      v22 = ((unsigned int)v20 >> 7) & 1;
      if ( v22 && !a3 || !v22 && a3 )
      {
        v15 = DXGMONITOR::_DisableVirtualModeSupport(v17, a3);
        if ( v15 >= 0 )
          DpiGdiAsyncDisplaySwitchCallout(0LL, a4);
      }
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v17 + 240));
    KeLeaveCriticalRegion();
    return (unsigned int)v15;
  }
  return result;
}
