/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0177D78
 * Callers:
 *     DmmInvalidateActiveVidPn @ 0x1C017B064 (DmmInvalidateActiveVidPn.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C002B78C (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C002B84C (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0091E10 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C0092248 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C01277FC (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@@Z @ 0x1C01772E0 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_RE.c)
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
  unsigned __int8 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  DMMVIDPN *v37; // rax
  unsigned __int8 v38; // r8
  DMMVIDPN *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct DMMVIDPN **v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // r8
  __int64 v50; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v51; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v52[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v53; // [rsp+68h] [rbp-1h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  *v5 = 0LL;
  v51 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v51);
  v16 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = ClientVidPn;
    goto LABEL_32;
  }
  memset(&v53.pVidPnTargetPrioritizationVector, 0, 0x28uLL);
  v53.NumberOfVidPnTargets = 0;
  v53.pVidPnTargetPrioritizationVector = 0LL;
  v18 = v51;
  if ( v51 == (DMMVIDPN *)-88LL )
    v53.hRecommendedFunctionalVidPn = 0LL;
  else
    v53.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v51;
  v19 = this[1] == 0LL;
  v53.RequestReason = a2;
  v53.pPrivateDriverData = a3;
  v53.PrivateDriverDataSize = a4;
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
    (__int64)v52,
    ((unsigned __int64)v18 + 152) & -(__int64)((DMMVIDPN *)((char *)v18 + 96) != 0LL),
    1u,
    v26,
    v50,
    NumTargetsWithMonitorObjects);
  if ( !this[1] )
  {
    v29 = WdLogNewEntry5_WdAssertion(v27);
    WdLogEvent5_WdAssertion(v29);
  }
  v30 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(this[1], &v53, v28);
  v32 = v30;
  v16 = -1071774941;
  if ( v30 == -1071774941 )
  {
    v33 = WdLogNewEntry5_WdDmmEvent(v31);
    *(_QWORD *)(v33 + 24) = v21;
    WdLogEvent5_WdDmmEvent(v33);
LABEL_20:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v52);
    goto LABEL_32;
  }
  v16 = 0;
  if ( v30 < 0 )
  {
    v34 = WdLogNewEntry5_WdError(v31);
    *(_QWORD *)(v34 + 24) = v21;
    *(_QWORD *)(v34 + 32) = v32;
    WdLogEvent5_WdError(v34);
    v16 = v32;
    goto LABEL_20;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v52);
  if ( !DMMVIDPN::IsFunctional(v18, -3) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v35);
    WdLogEvent5_WdAssertion(v36);
  }
  a5 = 0LL;
  v37 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v37 )
    v39 = DMMVIDPN::DMMVIDPN(v37, v18, v38);
  else
    v39 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v39);
  v44 = a5;
  if ( a5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
    {
      DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v18 + 96), (enum _DXGK_ACTIVE_VIDPN_INVALIDATION_REASON)a2);
      a5 = 0LL;
      Queue<DMMVIDPN>::Enqueue(this + 28, (__int64)v44, v48);
      auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
      v51 = 0LL;
      *v5 = v18;
      goto LABEL_32;
    }
    v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v46);
    v47[3] = v44;
    v47[4] = v18;
    v47[5] = *((int *)v44 + 20);
    WdLogEvent5_WdDmmEvent(v47);
    v16 = *((_DWORD *)v44 + 20);
  }
  else
  {
    v45 = WdLogNewEntry5_WdLowResource(v41, v40, v42, v43);
    *(_QWORD *)(v45 + 24) = v18;
    WdLogEvent5_WdLowResource(v45);
    v16 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
LABEL_32:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v51, 0LL);
  return v16;
}
