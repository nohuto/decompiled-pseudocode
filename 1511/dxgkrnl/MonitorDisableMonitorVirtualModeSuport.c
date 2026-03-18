/*
 * XREFs of MonitorDisableMonitorVirtualModeSuport @ 0x1C01869FC
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AA880 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C016B120 (DpiGdiAsyncDisplaySwitchCallout.c)
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z @ 0x1C0189A40 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z.c)
 */

__int64 __fastcall MonitorDisableMonitorVirtualModeSuport(DXGADAPTER *a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  struct _FAST_MUTEX *v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rax
  struct DXGMONITOR *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // ecx
  struct DXGMONITOR *v21; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_QWORD *)a1 + 248) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 248) + 120LL);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  v21 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v9, v3, 1, (ULONG **)&v21);
  v13 = result;
  if ( (_DWORD)result == -1073741275 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v3;
    *(_QWORD *)(v14 + 32) = a1;
    WdLogEvent5_WdError(v14);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v15 = v21;
    if ( !v21 || *((_DWORD *)v21 + 94) != 1 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v16);
    }
    if ( !v15 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 240), 1u);
    v18 = *((unsigned int *)v15 + 6);
    if ( (*((_BYTE *)v15 + 24) & 2) != 0 )
    {
      v19 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v19 + 24) = v3;
      *(_QWORD *)(v19 + 32) = a1;
      WdLogEvent5_WdError(v19);
      v13 = -1073741790;
    }
    else
    {
      v20 = ((unsigned int)v18 >> 7) & 1;
      if ( v20 && !a3 || !v20 && a3 )
      {
        v13 = DXGMONITOR::_DisableVirtualModeSupport(v15, a3);
        if ( v13 >= 0 )
          DpiGdiAsyncDisplaySwitchCallout(0LL);
      }
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v15 + 240));
    KeLeaveCriticalRegion();
    return (unsigned int)v13;
  }
  return result;
}
