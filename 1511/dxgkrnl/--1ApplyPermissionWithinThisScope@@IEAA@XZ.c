/*
 * XREFs of ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0
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
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C000A0F4 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C00191EC (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstrai.c)
 *     ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C00A5A00 (-AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00A5AA4 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

void __fastcall ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(ApplyPermissionWithinThisScope *this)
{
  unsigned __int8 v2; // dl
  bool v3; // zf
  ProtectableFromChange *v4; // rcx
  __int64 v5; // rcx
  unsigned __int8 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int8 v10; // di
  __int64 v11; // rax

  if ( *((_BYTE *)this + 10) )
  {
    v2 = *((_BYTE *)this + 8);
    v3 = *((_BYTE *)this + 9) == 0;
    v4 = *(ProtectableFromChange **)this;
    if ( v3 )
    {
      if ( ProtectableFromChange::IsModifyingActionAllowed(v4, v2) )
        ProtectableFromChange::DisallowModifyingAction(*(ProtectableFromChange **)this, *((_BYTE *)this + 8));
    }
    else
    {
      if ( ProtectableFromChange::IsModifyingActionAllowed(v4, v2) )
      {
        v7 = WdLogNewEntry5_WdAssertion(v5);
        WdLogEvent5_WdAssertion(v7);
      }
      ProtectableFromChange::AllowModifyingAction(
        *(ProtectableFromChange **)this,
        *((_BYTE *)this + 8),
        *((_QWORD *)this + 2),
        v6);
      v9 = *(_QWORD *)this;
      v10 = *((_BYTE *)this + 8);
      if ( v10 >= *(_BYTE *)(*(_QWORD *)this + 20LL) )
      {
        v11 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v11);
      }
      *(_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[](v9 + 24, v10) = *((_BYTE *)this + 11);
    }
  }
}
