/*
 * XREFs of ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618
 * Callers:
 *     DmmCanAddPresentPathToClientVidPn @ 0x1C0061084 (DmmCanAddPresentPathToClientVidPn.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_ @ 0x1C0062DF0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C008E76C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_ @ 0x1C009D960 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00AE580 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C00AFB80 (-CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_ @ 0x1C00B10E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00B9520 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0172400 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C0176248 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 *     DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource @ 0x1C0176808 (DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C017F2C4 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C0007D94 (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097120 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
        struct VIDPN_MGR *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  int ClientVidPn; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF
  __int64 v17; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  auto_rc<DMMVIDPN>::reset(a2, 0LL);
  v6 = *((_QWORD *)a1 + 10);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
    v7 = *((_QWORD *)a1 + 10);
  }
  else
  {
    v7 = 0LL;
  }
  v16 = 0LL;
  v17 = v7;
  if ( !v7 )
  {
    ClientVidPn = VIDPN_MGR::CreateClientVidPn(a1);
    v10 = ClientVidPn;
    if ( ClientVidPn >= 0 )
      goto LABEL_7;
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v10;
LABEL_13:
    WdLogEvent5_WdError(v15);
    goto LABEL_8;
  }
  v8 = VIDPN_MGR::CreateVidPnCopyForClient(a1, v7, &v16);
  v10 = v8;
  if ( v8 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v15 + 24) = v7;
    *(_QWORD *)(v15 + 32) = v10;
    goto LABEL_13;
  }
LABEL_7:
  auto_rc<DMMVIDPN>::operator=(a2, &v16);
  LODWORD(v10) = 0;
LABEL_8:
  auto_rc<DMMVIDPN>::reset(&v16, 0LL);
  auto_rc<DMMVIDPN const>::reset(&v17, 0LL);
  return (unsigned int)v10;
}
