/*
 * XREFs of ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248
 * Callers:
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C005E9F8 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C008E76C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     _BmlGetPathModalityForAdapter @ 0x1C009B86C (_BmlGetPathModalityForAdapter.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_ @ 0x1C00B10E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_.c)
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00CDA50 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C017375C (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 *     ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C0178640 (-CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTE.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C017F2C4 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C017F830 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C018056C (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C0007D94 (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0009610 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0088DFC (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateClientVidPn(struct VIDPN_MGR *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  DMMVIDPN *v7; // rax
  unsigned __int8 v8; // r8
  DMMVIDPN *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v23);
  }
  auto_rc<DMMVIDPN>::reset(a2, 0LL);
  v27 = 0LL;
  v7 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v7 )
    v9 = DMMVIDPN::DMMVIDPN(v7, a1, v8);
  else
    v9 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v27, (__int64)v9);
  v11 = v27;
  if ( v27 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v27 + 72))(v27 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 8LL) != CurrentThread )
      {
        v22 = WdLogNewEntry5_WdAssertion(CurrentThread, v12, v14, v15);
        WdLogEvent5_WdAssertion(v22);
      }
      if ( Set<DMMVIDPN>::Add((__int64)a1 + 104, v27) != 1 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        WdLogEvent5_WdAssertion(v26);
      }
      auto_rc<DMMVIDPN>::operator=(a2, &v27);
    }
    else
    {
      v25 = WdLogNewEntry5_WdDmmEvent(v13);
      *(_QWORD *)(v25 + 24) = v11;
      *(_QWORD *)(v25 + 32) = *(int *)(v11 + 80);
      WdLogEvent5_WdDmmEvent(v25);
      v4 = *(_DWORD *)(v11 + 80);
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdLowResource(v10);
    WdLogEvent5_WdLowResource(v24);
    v4 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v27, 0LL);
  return v4;
}
