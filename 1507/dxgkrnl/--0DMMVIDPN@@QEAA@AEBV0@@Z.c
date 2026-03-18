/*
 * XREFs of ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00891AC
 * Callers:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@@Z @ 0x1C000E028 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEA.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097120 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z @ 0x1C00CD330 (-ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C017375C (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 * Callees:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C00040C8 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C0004190 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C00042DC (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004CDC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x1C0005A90 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C0007844 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ?GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z @ 0x1C0007B30 (-GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C0007C98 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0008180 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00081B0 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C00097CC (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C000A54C (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0089F34 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, const struct DMMVIDPN *a2, unsigned __int8 a3)
{
  DMMVIDPNTOPOLOGY *v5; // r15
  DMMVIDPNSOURCESET **v6; // r13
  __int64 *v7; // r12
  DMMVIDPNSOURCESET *v8; // rax
  DMMVIDPNSOURCESET *v9; // rcx
  _QWORD *v10; // rbx
  struct DMMVIDPNSOURCE *NextSource; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DMMVIDPNPRESENTPATH *v16; // rax
  DMMVIDPNTARGETSET *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct DMMVIDPNPRESENTPATH *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  _DWORD *v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // rdx
  _QWORD *v32; // rsi
  const struct DMMVIDPNPRESENTPATH *v33; // rsi
  unsigned int *v34; // r13
  __int64 v35; // rax
  unsigned int *v36; // r12
  DMMVIDPNPRESENTPATH *v37; // rax
  __int64 v38; // rcx
  struct DMMVIDPNPRESENTPATH *v39; // rbx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r12
  const struct DMMVIDPN *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // r12
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rbx
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  _BYTE v71[24]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v72[24]; // [rsp+58h] [rbp-18h] BYREF
  struct DMMVIDPNPRESENTPATH *v73; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v74; // [rsp+C0h] [rbp+50h]

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 3) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 8) = 1;
  v5 = (DMMVIDPN *)((char *)this + 96);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 7) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 16) = 1833172997;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96), (unsigned __int8)a2, a3);
  v6 = (DMMVIDPNSOURCESET **)((char *)this + 304);
  *((_QWORD *)this + 38) = 0LL;
  v7 = (__int64 *)((char *)this + 312);
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 22) = 1;
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNTOPOLOGY *))v5)(v5) )
  {
    v50 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v50 + 24) = this;
    WdLogEvent5_WdDmmEvent(v50);
    v51 = *((_DWORD *)v5 + 4);
    if ( v51 >= 0 )
      v51 = *((_DWORD *)v5 + 16);
    goto LABEL_52;
  }
  v8 = (DMMVIDPNSOURCESET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  if ( v8 )
    v8 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v8, *((const struct DMMVIDPNSOURCESET **)a2 + 38));
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 38, (__int64)v8);
  v9 = *v6;
  if ( !*v6 )
    goto LABEL_53;
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNSOURCESET *))v9)(v9) )
  {
    v54 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v54 + 24) = this;
    WdLogEvent5_WdDmmEvent(v54);
    v55 = (__int64)*v6;
LABEL_56:
    *((_DWORD *)this + 20) = *(_DWORD *)(v55 + 16);
    return this;
  }
  ContainedBy<DMMVIDPN>::SetContainer((__int64)*v6 + 64, (__int64)this);
  v10 = (_QWORD *)((char *)*v6 + 24);
  if ( (_QWORD *)*v10 != v10 )
  {
    NextSource = (struct DMMVIDPNSOURCE *)(*v10 - 8LL);
    if ( NextSource )
    {
      while ( (**((unsigned __int8 (__fastcall ***)(__int64))NextSource + 8))((__int64)NextSource + 64) )
      {
        v16 = *v6;
        v73 = v16;
        if ( v16 )
        {
          if ( *((_QWORD *)NextSource + 5) )
          {
            v58 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
            WdLogEvent5_WdAssertion(v58);
            v16 = v73;
          }
          *((_QWORD *)NextSource + 5) = v16;
        }
        else
        {
          v57 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v57 + 24) = (char *)NextSource + 32;
          *(_QWORD *)(v57 + 32) = *((_QWORD *)NextSource + 5);
          WdLogEvent5_WdError(v57);
        }
        NextSource = DMMVIDPNSOURCESET::GetNextSource(*v6, NextSource);
        if ( !NextSource )
          goto LABEL_14;
      }
      goto LABEL_51;
    }
  }
LABEL_14:
  v17 = (DMMVIDPNTARGETSET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  if ( v17 )
    v17 = DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v17, *((const struct DMMVIDPNTARGETSET **)a2 + 39));
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 39, (__int64)v17);
  v9 = (DMMVIDPNSOURCESET *)*v7;
  if ( !*v7 )
  {
LABEL_53:
    v53 = WdLogNewEntry5_WdLowResource(v9);
    WdLogEvent5_WdLowResource(v53);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNSOURCESET *))v9)(v9) )
  {
    v56 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v56 + 24) = this;
    WdLogEvent5_WdDmmEvent(v56);
    v55 = *v7;
    goto LABEL_56;
  }
  ContainedBy<DMMVIDPN>::SetContainer(*v7 + 64, (__int64)this);
  v18 = (_QWORD *)(*v7 + 24);
  if ( (_QWORD *)*v18 != v18 )
  {
    NextSource = (struct DMMVIDPNSOURCE *)(*v18 - 8LL);
    if ( NextSource )
    {
      while ( (**((unsigned __int8 (__fastcall ***)(__int64))NextSource + 8))((__int64)NextSource + 64) )
      {
        v23 = (struct DMMVIDPNPRESENTPATH *)*v7;
        v73 = v23;
        if ( v23 )
        {
          if ( *((_QWORD *)NextSource + 5) )
          {
            v60 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
            WdLogEvent5_WdAssertion(v60);
            v23 = v73;
          }
          *((_QWORD *)NextSource + 5) = v23;
        }
        else
        {
          v59 = WdLogNewEntry5_WdError(v20);
          *(_QWORD *)(v59 + 24) = (char *)NextSource + 32;
          *(_QWORD *)(v59 + 32) = *((_QWORD *)NextSource + 5);
          WdLogEvent5_WdError(v59);
        }
        v24 = *((_QWORD *)NextSource + 1);
        if ( v24 == *v7 + 24 )
          NextSource = 0LL;
        else
          NextSource = (struct DMMVIDPNSOURCE *)(v24 - 8);
        if ( !NextSource )
          goto LABEL_28;
      }
LABEL_51:
      v52 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v52 + 24) = NextSource;
      WdLogEvent5_WdDmmEvent(v52);
      v51 = *((_DWORD *)NextSource + 18);
LABEL_52:
      *((_DWORD *)this + 20) = v51;
      return this;
    }
  }
LABEL_28:
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)this + 40, *((_QWORD *)a2 + 6));
  LOBYTE(v28) = *((_BYTE *)this + 172);
  if ( ((unsigned __int16)((2 << v28) - 1) & *((_WORD *)this + 87)) != 0 )
  {
    v61 = WdLogNewEntry5_WdAssertion(v28, v25, v26, v27);
    WdLogEvent5_WdAssertion(v61);
  }
  if ( v5 )
    v29 = (_DWORD *)((char *)v5 + 56);
  else
    v29 = 0LL;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v72, v29, 0LL);
  DMMVIDPNTOPOLOGY::_SetContainingVidPn(v5, this);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v72);
  if ( v5 )
    v31 = (_DWORD *)((char *)v5 + 56);
  else
    v31 = 0LL;
  LOBYTE(v30) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v71, v31, v30);
  v32 = (_QWORD *)((char *)a2 + 120);
  if ( (_QWORD *)*v32 == v32 || (v33 = (const struct DMMVIDPNPRESENTPATH *)(*v32 - 8LL)) == 0LL )
  {
LABEL_45:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v71);
    *((_DWORD *)this + 22) = 2;
    v48 = WdLogNewEntry5_WdTrace(v45, v44, v46, v47);
    *(_QWORD *)(v48 + 24) = this;
    *(_QWORD *)(v48 + 32) = a2;
  }
  else
  {
    while ( 1 )
    {
      v34 = (unsigned int *)IndexedSet<DMMVIDPNSOURCE>::FindById(
                              (__int64)*v6,
                              *(_DWORD *)(*((_QWORD *)v33 + 11) + 24LL));
      v35 = IndexedSet<DMMVIDPNTARGET>::FindById(*v7, *(_DWORD *)(*((_QWORD *)v33 + 12) + 24LL));
      v73 = 0LL;
      v74 = v35;
      v36 = (unsigned int *)v35;
      v37 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
      if ( v37 )
        v37 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
                v37,
                (struct DMMVIDPNSOURCE *)v34,
                (struct DMMVIDPNTARGET *)v36,
                v33);
      auto_ptr<DMMVIDPNPRESENTPATH>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))&v73,
        (__int64 (__fastcall ***)(_QWORD, __int64))v37);
      v39 = v73;
      if ( !v73 )
        break;
      if ( !(**((unsigned __int8 (__fastcall ***)(char *))v73 + 7))((char *)v73 + 56) )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v69[3] = v34[6];
        v69[4] = v36[6];
        v69[6] = (char *)a2 + 96;
        v69[5] = this;
        WdLogEvent5_WdDmmEvent(v69);
        *((_DWORD *)this + 20) = *((_DWORD *)v39 + 16);
        goto LABEL_67;
      }
      v40 = DMMVIDPNTOPOLOGY::AddPath(v5, v39, D3DKMDT_MCC_ENFORCE);
      v42 = v40;
      if ( v40 == -1071774920 )
      {
        v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v63 = v74;
        v62[3] = v34[6];
        v62[4] = *(unsigned int *)(v63 + 24);
        v62[6] = (char *)a2 + 96;
        v62[5] = this;
        WdLogEvent5_WdDmmEvent(v62);
        v64 = DMMVIDPNTOPOLOGY::AddPath(v5, v39, D3DKMDT_MCC_IGNORE);
        v66 = v64;
        if ( v64 < 0 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdError(v65);
          v67[3] = v34[6];
          v67[4] = *(unsigned int *)(v63 + 24);
          v67[6] = (char *)a2 + 96;
          v67[5] = this;
          v67[7] = v66;
          WdLogEvent5_WdError(v67);
          *((_DWORD *)this + 20) = v66;
          goto LABEL_67;
        }
      }
      else if ( v40 < 0 )
      {
        v68 = (_QWORD *)WdLogNewEntry5_WdError(v41);
        v68[3] = v34[6];
        v68[4] = *(unsigned int *)(v74 + 24);
        v68[6] = (char *)a2 + 96;
        v68[5] = this;
        v68[7] = v42;
        WdLogEvent5_WdError(v68);
        *((_DWORD *)this + 20) = v42;
        goto LABEL_67;
      }
      v73 = 0LL;
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v73);
      v43 = (const struct DMMVIDPN *)*((_QWORD *)v33 + 1);
      if ( v43 == (const struct DMMVIDPN *)((char *)a2 + 120) )
        v33 = 0LL;
      else
        v33 = (const struct DMMVIDPN *)((char *)v43 - 8);
      if ( !v33 )
        goto LABEL_45;
      v7 = (__int64 *)((char *)this + 312);
      v6 = (DMMVIDPNSOURCESET **)((char *)this + 304);
    }
    v70 = WdLogNewEntry5_WdLowResource(v38);
    WdLogEvent5_WdLowResource(v70);
    *((_DWORD *)this + 20) = -1073741801;
LABEL_67:
    auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v73);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v71);
  }
  return this;
}
