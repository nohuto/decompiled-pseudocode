/*
 * XREFs of DmmGetVideoOutputTechnology @ 0x1C00627F0
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C005FC40 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C0061BF0 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkIsVirtualModeDisabledForPath @ 0x1C0062720 (DxgkIsVirtualModeDisabledForPath.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00BA460 (DpiPdoDispatchInternalIoctl.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00CA1B4 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01414C4 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0164AF4 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0181014 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004BA8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmGetVideoOutputTechnology(DXGADAPTER *a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( a3 )
    *a3 = -2;
  if ( a4 )
    *a4 = -2;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v19 + 24) = 0LL;
    goto LABEL_20;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v20);
  }
  v12 = *((_QWORD *)a1 + 247);
  if ( !v12 )
  {
    v19 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v19 + 24) = a1;
LABEL_20:
    WdLogEvent5_WdError(v19);
    return 3223191554LL;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v23, *(_QWORD *)(v12 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 96) + 72LL));
    v14 = *(_QWORD *)(v13 + 96);
    v15 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v14, v4);
    if ( v15 )
    {
      if ( a3 )
        *a3 = *(_DWORD *)(v15 + 72);
      if ( a4 )
        *a4 = *(_DWORD *)(v15 + 76);
      v17 = 0;
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v22 + 24) = v4;
      WdLogEvent5_WdError(v22);
      v17 = -1071774971;
    }
    if ( v14 )
      ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40));
    return v17;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}
