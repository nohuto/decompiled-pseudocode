/*
 * XREFs of ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C008F004 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C008F680 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F9B8 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0091918 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0091E10 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5D3C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     sub_1C00C5900 @ 0x1C00C5900 (sub_1C00C5900.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CBC48 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00DD450 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0176C80 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0177D78 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0178054 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C01786D0 (-RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z.c)
 *     DmmAssignEmptyTopologyToActiveVidPn @ 0x1C017992C (DmmAssignEmptyTopologyToActiveVidPn.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C017DD40 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01842B4 (-_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CD.c)
 * Callees:
 *     ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C00A5A00 (-AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z.c)
 */

__int64 __fastcall ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  int v9; // eax
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 10) = 1;
  if ( a3 >= *(_BYTE *)(a2 + 20) )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  v9 = *(unsigned __int16 *)(a2 + 22);
  v10 = a3;
  *(_BYTE *)(a1 + 9) = _bittest(&v9, a3);
  if ( (unsigned __int64)a3 >= *(_QWORD *)(a2 + 40) )
  {
    v15 = WdLogNewEntry5_WdAssertion(a3);
    WdLogEvent5_WdAssertion(v15);
  }
  LOBYTE(v10) = *(_BYTE *)(a3 + *(_QWORD *)(a2 + 48));
  *(_BYTE *)(a1 + 11) = v10;
  if ( (unsigned __int64)a3 >= *(_QWORD *)(a2 + 80) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v16);
  }
  v11 = *(_BYTE *)(a1 + 9) == 0;
  v12 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 8LL * a3);
  *(_QWORD *)(a1 + 16) = v12;
  if ( v11 )
  {
    if ( (*(_BYTE *)(a1 + 11) & 0xF) != 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v17);
    }
    if ( *(_QWORD *)(a1 + 16) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v18);
    }
    if ( !*(_BYTE *)(a1 + 9) )
      ProtectableFromChange::AllowModifyingAction((ProtectableFromChange *)a2, a3, a6, a4);
  }
  return a1;
}
