/*
 * XREFs of ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5D3C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     sub_1C00A7420 @ 0x1C00A7420 (sub_1C00A7420.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00ADD28 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     sub_1C00C5900 @ 0x1C00C5900 (sub_1C00C5900.c)
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00DD450 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0177D78 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 *     ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C017CAA0 (-CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTE.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0183700 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0183CC0 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C0184A48 (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000BD20 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000C2EC (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0091918 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateClientVidPn(struct VIDPN_MGR *a1, __int64 *a2)
{
  unsigned int v2; // edi
  DMMVIDPN *v5; // rax
  DMMVIDPN *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v16);
  }
  auto_rc<DMMVIDPN>::reset(a2, 0LL);
  v20 = 0LL;
  v5 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v5 )
    v6 = DMMVIDPN::DMMVIDPN(v5, a1);
  else
    v6 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v20, (__int64)v6);
  v11 = v20;
  if ( v20 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v20 + 72))(v20 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( **((struct _KTHREAD ***)a1 + 5) != CurrentThread )
      {
        v15 = WdLogNewEntry5_WdAssertion(CurrentThread);
        WdLogEvent5_WdAssertion(v15);
      }
      if ( Set<DMMVIDPN>::Add((__int64)a1 + 104, v20) != 1 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v19);
      }
      auto_rc<DMMVIDPN>::operator=(a2, &v20);
    }
    else
    {
      v18 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v18 + 24) = v11;
      *(_QWORD *)(v18 + 32) = *(int *)(v11 + 80);
      WdLogEvent5_WdDmmEvent(v18);
      v2 = *(_DWORD *)(v11 + 80);
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    WdLogEvent5_WdLowResource(v17);
    v2 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v20, 0LL);
  return v2;
}
