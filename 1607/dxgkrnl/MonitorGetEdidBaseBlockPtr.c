/*
 * XREFs of MonitorGetEdidBaseBlockPtr @ 0x1C00D979C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00BABE0 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C0178BDC (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0190EE8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C007ACA0 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

const void *__fastcall MonitorGetEdidBaseBlockPtr(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _FAST_MUTEX *v8; // rcx
  __int64 v9; // rcx
  DXGMONITOR *v10; // rbx
  const void *EdidBaseBlockPtr; // rax
  struct _ERESOURCE *v12; // rcx
  const void *v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  DXGMONITOR *v21; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || (_DWORD)v4 == -1 )
    return 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !*((_QWORD *)this + 266) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v15);
  }
  v8 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 266) + 96LL);
  if ( !v8 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 0LL;
  }
  v21 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v8, v4, 0, (ULONG **)&v21) < 0 )
    return 0LL;
  v10 = v21;
  if ( !v21 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v18);
    v20 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v20);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 240), 1u);
  EdidBaseBlockPtr = DXGMONITOR::_GetEdidBaseBlockPtr(v10);
  v12 = (struct _ERESOURCE *)((char *)v10 + 240);
  v13 = EdidBaseBlockPtr;
  ExReleaseResourceLite(v12);
  KeLeaveCriticalRegion();
  return v13;
}
