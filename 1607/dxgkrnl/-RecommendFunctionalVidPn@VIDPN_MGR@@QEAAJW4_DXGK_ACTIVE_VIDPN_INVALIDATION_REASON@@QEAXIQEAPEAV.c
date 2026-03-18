/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01A1748
 * Callers:
 *     DmmInvalidateActiveVidPn @ 0x1C01A46EC (DmmInvalidateActiveVidPn.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C003386C (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C0033944 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C007E0AC (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C007E4E4 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085094 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C014B734 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@@Z @ 0x1C01A0CAC (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_RE.c)
 */

__int64 __fastcall VIDPN_MGR::RecommendFunctionalVidPn(
        ADAPTER_DISPLAY **this,
        __int32 a2,
        void *const a3,
        UINT a4,
        struct DMMVIDPN **const a5)
{
  struct DMMVIDPN **v5; // r12
  __int64 v10; // rax
  int ClientVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // rcx
  DMMVIDPN *v18; // rsi
  bool v19; // zf
  __int64 v20; // rax
  DXGADAPTER *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 NumTargetsWithMonitorObjects; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  DMMVIDPN *v43; // rax
  unsigned __int8 v44; // r8
  DMMVIDPN *v45; // rax
  __int64 v46; // rcx
  struct DMMVIDPN **v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v52; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v53; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v54[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v55; // [rsp+68h] [rbp-1h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  *v5 = 0LL;
  v53 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v53);
  v16 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = ClientVidPn;
    goto LABEL_32;
  }
  memset(&v55.pVidPnTargetPrioritizationVector, 0, 0x28uLL);
  v55.NumberOfVidPnTargets = 0;
  v55.pVidPnTargetPrioritizationVector = 0LL;
  v18 = v53;
  if ( v53 == (DMMVIDPN *)-88LL )
    v55.hRecommendedFunctionalVidPn = 0LL;
  else
    v55.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v53;
  v19 = this[1] == 0LL;
  v55.RequestReason = a2;
  v55.pPrivateDriverData = a3;
  v55.PrivateDriverDataSize = a4;
  if ( v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = (DXGADAPTER *)*((_QWORD *)this[1] + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v21) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22);
    WdLogEvent5_WdAssertion(v23);
  }
  LOBYTE(v22) = *((_BYTE *)v18 + 172);
  if ( ((unsigned __int16)((2 << v22) - 1) & *((_WORD *)v18 + 87)) != 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v22);
    WdLogEvent5_WdAssertion(v24);
  }
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v54,
    ((unsigned __int64)v18 + 152) & -(__int64)((DMMVIDPN *)((char *)v18 + 96) != 0LL),
    1u,
    v26,
    v52,
    NumTargetsWithMonitorObjects);
  if ( !this[1] )
  {
    v29 = WdLogNewEntry5_WdAssertion(v27);
    WdLogEvent5_WdAssertion(v29);
  }
  v30 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(this[1], &v55, v28);
  v35 = v30;
  v16 = -1071774941;
  if ( v30 == -1071774941 )
  {
    v36 = WdLogNewEntry5_WdDmmEvent(v32);
    *(_QWORD *)(v36 + 24) = v21;
    WdLogEvent5_WdDmmEvent(v36);
LABEL_20:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v54,
      v37,
      v38,
      v39);
    goto LABEL_32;
  }
  v16 = 0;
  if ( v30 < 0 )
  {
    v40 = WdLogNewEntry5_WdError(v32);
    *(_QWORD *)(v40 + 24) = v21;
    *(_QWORD *)(v40 + 32) = v35;
    WdLogEvent5_WdError(v40);
    v16 = v35;
    goto LABEL_20;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v54, v31, v33, v34);
  if ( !DMMVIDPN::IsFunctional(v18, -3) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v41);
    WdLogEvent5_WdAssertion(v42);
  }
  a5 = 0LL;
  v43 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v43 )
    v45 = DMMVIDPN::DMMVIDPN(v43, v18, v44);
  else
    v45 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v45);
  v47 = a5;
  if ( a5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
    {
      DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v18 + 96), (enum _DXGK_ACTIVE_VIDPN_INVALIDATION_REASON)a2);
      a5 = 0LL;
      Queue<DMMVIDPN>::Enqueue(this + 28, (__int64)v47);
      auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
      v53 = 0LL;
      *v5 = v18;
      goto LABEL_32;
    }
    v50 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v49);
    v50[3] = v47;
    v50[4] = v18;
    v50[5] = *((int *)v47 + 20);
    WdLogEvent5_WdDmmEvent(v50);
    v16 = *((_DWORD *)v47 + 20);
  }
  else
  {
    v48 = WdLogNewEntry5_WdLowResource(v46);
    *(_QWORD *)(v48 + 24) = v18;
    WdLogEvent5_WdLowResource(v48);
    v16 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
LABEL_32:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v53, 0LL);
  return v16;
}
