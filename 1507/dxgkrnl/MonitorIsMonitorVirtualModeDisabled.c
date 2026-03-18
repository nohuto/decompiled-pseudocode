/*
 * XREFs of MonitorIsMonitorVirtualModeDisabled @ 0x1C008D39C
 * Callers:
 *     DxgkIsVirtualModeDisabledForPath @ 0x1C0062720 (DxgkIsVirtualModeDisabledForPath.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0062960 (DxgkDisplayConfigDeviceInfo.c)
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00AC6F0 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C013A978 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorVirtualModeDisabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v5; // rsi
  _BYTE *v6; // r14
  struct _FAST_MUTEX *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGMONITOR *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct DXGMONITOR *v21; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  v6 = (_BYTE *)a3;
  if ( !a1 || (_DWORD)a2 == -1 || !a3 )
    return 3221225485LL;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 128)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !*(_QWORD *)(a1 + 1976) )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  v8 = *(struct _FAST_MUTEX **)(*(_QWORD *)(a1 + 1976) + 96LL);
  if ( !v8 )
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  v21 = 0LL;
  LOBYTE(a3) = 1;
  result = MONITOR_MGR::_GetMonitorInstance(v8, (unsigned int)v5, a3, (ULONG **)&v21);
  if ( (_DWORD)result == -1073741275 )
  {
    v15 = WdLogNewEntry5_WdDmmEvent(v11);
    *(_QWORD *)(v15 + 24) = v5;
    *(_QWORD *)(v15 + 32) = a1;
    WdLogEvent5_WdDmmEvent(v15);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v14 = v21;
    if ( !v21 || *((_DWORD *)v21 + 94) != 1 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( !v14 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 240), 1u);
    if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 8LL) + 133LL) || *((char *)v14 + 24) < 0 )
      v4 = 1;
    *v6 = v4;
    ExReleaseResourceLite((PERESOURCE)((char *)v14 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
