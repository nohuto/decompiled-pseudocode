/*
 * XREFs of ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58
 * Callers:
 *     sub_1C005E7E0 @ 0x1C005E7E0 (sub_1C005E7E0.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C008F004 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5D3C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DmmCanAddPresentPathToClientVidPn @ 0x1C00AB59C (DmmCanAddPresentPathToClientVidPn.c)
 *     ?CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C00BCE50 (-CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN_.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     sub_1C00BF1C0 @ 0x1C00BF1C0 (sub_1C00BF1C0.c)
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00C0CE0 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     sub_1C00C5900 @ 0x1C00C5900 (sub_1C00C5900.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0176C80 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C017A7E0 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 *     DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource @ 0x1C017ADA0 (DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0183700 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000C2EC (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FEA8 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(struct VIDPN_MGR *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int ClientVidPn; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  auto_rc<DMMVIDPN>::reset(a2, 0LL);
  v4 = *((_QWORD *)a1 + 10);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 32));
    v5 = *((_QWORD *)a1 + 10);
  }
  else
  {
    v5 = 0LL;
  }
  v14 = 0LL;
  v15 = v5;
  if ( !v5 )
  {
    ClientVidPn = VIDPN_MGR::CreateClientVidPn(a1);
    v8 = ClientVidPn;
    if ( ClientVidPn >= 0 )
      goto LABEL_7;
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v8;
LABEL_13:
    WdLogEvent5_WdError(v13);
    goto LABEL_8;
  }
  v6 = VIDPN_MGR::CreateVidPnCopyForClient(a1, v5, &v14);
  v8 = v6;
  if ( v6 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = v5;
    *(_QWORD *)(v13 + 32) = v8;
    goto LABEL_13;
  }
LABEL_7:
  auto_rc<DMMVIDPN>::operator=(a2, &v14);
  LODWORD(v8) = 0;
LABEL_8:
  auto_rc<DMMVIDPN>::reset(&v14, 0LL);
  auto_rc<DMMVIDPN const>::reset(&v15, 0LL);
  return (unsigned int)v8;
}
