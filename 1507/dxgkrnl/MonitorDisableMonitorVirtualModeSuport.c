/*
 * XREFs of MonitorDisableMonitorVirtualModeSuport @ 0x1C01823AC
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0062960 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C011F05C (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C0166B80 (DpiGdiAsyncDisplaySwitchCallout.c)
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z @ 0x1C018522C (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z.c)
 */

__int64 __fastcall MonitorDisableMonitorVirtualModeSuport(DXGADAPTER *a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // esi
  __int64 v20; // rax
  struct DXGMONITOR *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  DXGMONITOR *v26; // rcx
  struct DXGMONITOR *v27; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !*((_QWORD *)a1 + 247) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 247) + 96LL);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v27 = 0LL;
  LOBYTE(v8) = 1;
  result = MONITOR_MGR::_GetMonitorInstance(v12, (unsigned int)v3, v8, (ULONG **)&v27);
  v19 = result;
  if ( (_DWORD)result == -1073741275 )
  {
    v20 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v20 + 24) = v3;
    *(_QWORD *)(v20 + 32) = a1;
    WdLogEvent5_WdError(v20);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v21 = v27;
    if ( !v27 || *((_DWORD *)v27 + 94) != 1 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v22);
    }
    if ( !v21 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v23);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v21 + 240), 1u);
    if ( (*((_BYTE *)v21 + 24) & 2) != 0 )
    {
      v25 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v25 + 24) = v3;
      *(_QWORD *)(v25 + 32) = a1;
      WdLogEvent5_WdError(v25);
      v19 = -1073741790;
    }
    else if ( DXGMONITOR::_IsVirtualModeSuportDisabled(v21) && !a3
           || !DXGMONITOR::_IsVirtualModeSuportDisabled(v26) && a3 )
    {
      v19 = DXGMONITOR::_DisableVirtualModeSupport(v21, a3);
      if ( v19 >= 0 )
        DpiGdiAsyncDisplaySwitchCallout(0LL);
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v21 + 240));
    KeLeaveCriticalRegion();
    return (unsigned int)v19;
  }
  return result;
}
