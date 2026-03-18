/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C017375C
 * Callers:
 *     DmmInvalidateActiveVidPn @ 0x1C0176ACC (DmmInvalidateActiveVidPn.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C002B9DC (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C002BAB4 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C0088C20 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00891AC (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C0121BC0 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@@Z @ 0x1C0172AB4 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_RE.c)
 */

__int64 __fastcall VIDPN_MGR::RecommendFunctionalVidPn(
        ADAPTER_DISPLAY **this,
        __int64 a2,
        void *const a3,
        __int64 a4,
        struct DMMVIDPN **const a5)
{
  struct DMMVIDPN **v5; // r12
  UINT v6; // ebx
  DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // r13d
  __int64 v10; // rax
  int ClientVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  DMMVIDPN *v21; // rsi
  bool v22; // zf
  __int64 v23; // rax
  DXGADAPTER *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 NumTargetsWithMonitorObjects; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  DMMVIDPN *v49; // rax
  unsigned __int8 v50; // r8
  DMMVIDPN *v51; // rax
  __int64 v52; // rcx
  struct DMMVIDPN **v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v58; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v59; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v60[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v61; // [rsp+68h] [rbp-1h] BYREF
  enum _DXGK_ACTIVE_VIDPN_INVALIDATION_REASON v62; // [rsp+D0h] [rbp+67h]

  v62 = (int)a2;
  v5 = a5;
  v6 = a4;
  v8 = (int)a2;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  *v5 = 0LL;
  v59 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v59, (__int64)a3, a4);
  v16 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = ClientVidPn;
    goto LABEL_32;
  }
  memset(&v61.pVidPnTargetPrioritizationVector, 0, 0x28uLL);
  v61.NumberOfVidPnTargets = 0;
  v61.pVidPnTargetPrioritizationVector = 0LL;
  v21 = v59;
  if ( v59 == (DMMVIDPN *)-88LL )
    v61.hRecommendedFunctionalVidPn = 0LL;
  else
    v61.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v59;
  v22 = this[1] == 0LL;
  v61.RequestReason = v8;
  v61.pPrivateDriverData = a3;
  v61.PrivateDriverDataSize = v6;
  if ( v22 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = (DXGADAPTER *)*((_QWORD *)this[1] + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v24) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
    WdLogEvent5_WdAssertion(v29);
  }
  LOBYTE(v26) = *((_BYTE *)v21 + 172);
  if ( ((unsigned __int16)((2 << v26) - 1) & *((_WORD *)v21 + 87)) != 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
    WdLogEvent5_WdAssertion(v30);
  }
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this, v25, v27, v28);
  LOBYTE(v32) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v60,
    ((unsigned __int64)v21 + 152) & -(__int64)((DMMVIDPN *)((char *)v21 + 96) != 0LL),
    v32,
    v33,
    v58,
    NumTargetsWithMonitorObjects);
  if ( !this[1] )
  {
    v38 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
    WdLogEvent5_WdAssertion(v38);
  }
  v39 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(this[1], &v61, v36);
  v41 = v39;
  v16 = -1071774941;
  if ( v39 == -1071774941 )
  {
    v42 = WdLogNewEntry5_WdDmmEvent(v40);
    *(_QWORD *)(v42 + 24) = v24;
    WdLogEvent5_WdDmmEvent(v42);
LABEL_20:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v60);
    goto LABEL_32;
  }
  v16 = 0;
  if ( v39 < 0 )
  {
    v43 = WdLogNewEntry5_WdError(v40);
    *(_QWORD *)(v43 + 24) = v24;
    *(_QWORD *)(v43 + 32) = v41;
    WdLogEvent5_WdError(v43);
    v16 = v41;
    goto LABEL_20;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v60);
  if ( !DMMVIDPN::IsFunctional(v21, -3) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
    WdLogEvent5_WdAssertion(v48);
  }
  a5 = 0LL;
  v49 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v49 )
    v51 = DMMVIDPN::DMMVIDPN(v49, v21, v50);
  else
    v51 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v51);
  v53 = a5;
  if ( a5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
    {
      DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v21 + 96), v62);
      a5 = 0LL;
      Queue<DMMVIDPN>::Enqueue(this + 28, (__int64)v53);
      auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
      v59 = 0LL;
      *v5 = v21;
      goto LABEL_32;
    }
    v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v55);
    v56[3] = v53;
    v56[4] = v21;
    v56[5] = *((int *)v53 + 20);
    WdLogEvent5_WdDmmEvent(v56);
    v16 = *((_DWORD *)v53 + 20);
  }
  else
  {
    v54 = WdLogNewEntry5_WdLowResource(v52);
    *(_QWORD *)(v54 + 24) = v21;
    WdLogEvent5_WdLowResource(v54);
    v16 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
LABEL_32:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v59, 0LL);
  return v16;
}
