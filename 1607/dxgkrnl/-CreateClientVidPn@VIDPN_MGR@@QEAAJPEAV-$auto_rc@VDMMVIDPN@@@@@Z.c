/*
 * XREFs of ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085094
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B6EE4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BmlGetPathModalityForAdapter @ 0x1C00BCBF8 (_BmlGetPathModalityForAdapter.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D5748 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00DA8E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00F4784 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01A1748 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 *     ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01A6040 (-CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTE.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01ACE7C (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01AD420 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C01AE170 (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C00020B4 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000CA78 (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C007DCFC (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateClientVidPn(struct VIDPN_MGR *a1, __int64 *a2)
{
  unsigned int v2; // edi
  DMMVIDPN *v5; // rax
  unsigned __int8 v6; // r8
  DMMVIDPN *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v15);
  }
  auto_rc<DMMVIDPN>::reset(a2, 0LL);
  v19 = 0LL;
  v5 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v5 )
    v7 = DMMVIDPN::DMMVIDPN(v5, a1, v6);
  else
    v7 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v19, (__int64)v7);
  v9 = v19;
  if ( v19 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v19 + 72))(v19 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 8LL) != CurrentThread )
      {
        v14 = WdLogNewEntry5_WdAssertion(CurrentThread);
        WdLogEvent5_WdAssertion(v14);
      }
      if ( Set<DMMVIDPN>::Add((__int64)a1 + 104, v19) != 1 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v18);
      }
      auto_rc<DMMVIDPN>::operator=(a2, &v19);
    }
    else
    {
      v17 = WdLogNewEntry5_WdDmmEvent(v10);
      *(_QWORD *)(v17 + 24) = v9;
      *(_QWORD *)(v17 + 32) = *(int *)(v9 + 80);
      WdLogEvent5_WdDmmEvent(v17);
      v2 = *(_DWORD *)(v9 + 80);
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v8);
    WdLogEvent5_WdLowResource(v16);
    v2 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v19, 0LL);
  return v2;
}
