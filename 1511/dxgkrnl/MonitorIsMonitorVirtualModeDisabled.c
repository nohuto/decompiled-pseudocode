/*
 * XREFs of MonitorIsMonitorVirtualModeDisabled @ 0x1C00A1780
 * Callers:
 *     IsVirtualizationDisabledForTarget @ 0x1C00A16BC (IsVirtualizationDisabledForTarget.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AA880 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorVirtualModeDisabled(DXGADAPTER *a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  struct _FAST_MUTEX *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  struct DXGMONITOR *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  struct DXGMONITOR *v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !*((_QWORD *)a1 + 248) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 248) + 120LL);
  if ( !v7 )
  {
    v14 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  v17 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v7, v3, 1, (ULONG **)&v17);
  if ( (_DWORD)result == -1073741275 )
  {
    v11 = WdLogNewEntry5_WdDmmEvent(v9);
    *(_QWORD *)(v11 + 24) = v3;
    *(_QWORD *)(v11 + 32) = a1;
    WdLogEvent5_WdDmmEvent(v11);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v10 = v17;
    if ( !v17 || *((_DWORD *)v17 + 94) != 1 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v15);
    }
    if ( !v10 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v16);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 240), 1u);
    *a3 = *((_BYTE *)v10 + 24) >> 7;
    ExReleaseResourceLite((PERESOURCE)((char *)v10 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
