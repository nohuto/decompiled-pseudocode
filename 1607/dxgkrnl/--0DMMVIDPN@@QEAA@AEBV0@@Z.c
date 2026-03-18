/*
 * XREFs of ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C007E0AC
 * Callers:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@@Z @ 0x1C0005D6C (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEA.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z @ 0x1C00842D4 (-ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0084F6C (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01A1748 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 * Callees:
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C0001EC8 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 *     ?GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z @ 0x1C0001F58 (-GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C000231C (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C0002DE8 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C00048E4 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004A30 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x1C000560C (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000A6E8 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000A704 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000AC70 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000ACAC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C000C98C (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C000D094 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0080524 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
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
  __int64 v12; // rcx
  struct DMMVIDPNPRESENTPATH *v13; // rax
  DMMVIDPNTARGETSET *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  struct DMMVIDPNPRESENTPATH *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // rdx
  _QWORD *v23; // rsi
  const struct DMMVIDPNPRESENTPATH *v24; // rsi
  unsigned int *v25; // r13
  __int64 v26; // rax
  unsigned int *v27; // r12
  DMMVIDPNPRESENTPATH *v28; // rax
  __int64 v29; // rcx
  struct DMMVIDPNPRESENTPATH *v30; // rbx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r12
  const struct DMMVIDPN *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // r12
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rbx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  _BYTE v62[24]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v63[24]; // [rsp+58h] [rbp-18h] BYREF
  struct DMMVIDPNPRESENTPATH *v64; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v65; // [rsp+C0h] [rbp+50h]

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 3) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 8) = 1;
  v5 = (DMMVIDPN *)((char *)this + 96);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &AggregatedBy<VIDPN_MGR>::`vftable';
  *((_QWORD *)this + 7) = &SignedWithClassSignature<DMMVIDPN>::`vftable';
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
    v41 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v41 + 24) = this;
    WdLogEvent5_WdDmmEvent(v41);
    v42 = *((_DWORD *)v5 + 4);
    if ( v42 >= 0 )
      v42 = *((_DWORD *)v5 + 16);
    goto LABEL_52;
  }
  v8 = (DMMVIDPNSOURCESET *)operator new(0x60uLL, 0x4E506456u, PagedPool);
  if ( v8 )
    v8 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v8, *((const struct DMMVIDPNSOURCESET **)a2 + 38));
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 38, (__int64)v8);
  v9 = *v6;
  if ( !*v6 )
    goto LABEL_53;
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNSOURCESET *))v9)(v9) )
  {
    v45 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v45 + 24) = this;
    WdLogEvent5_WdDmmEvent(v45);
    v46 = (__int64)*v6;
LABEL_56:
    *((_DWORD *)this + 20) = *(_DWORD *)(v46 + 16);
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
        v13 = *v6;
        v64 = v13;
        if ( v13 )
        {
          if ( *((_QWORD *)NextSource + 5) )
          {
            v49 = WdLogNewEntry5_WdAssertion(v12);
            WdLogEvent5_WdAssertion(v49);
            v13 = v64;
          }
          *((_QWORD *)NextSource + 5) = v13;
        }
        else
        {
          v48 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v48 + 24) = (char *)NextSource + 32;
          *(_QWORD *)(v48 + 32) = *((_QWORD *)NextSource + 5);
          WdLogEvent5_WdError(v48);
        }
        NextSource = DMMVIDPNSOURCESET::GetNextSource(*v6, NextSource);
        if ( !NextSource )
          goto LABEL_14;
      }
      goto LABEL_51;
    }
  }
LABEL_14:
  v14 = (DMMVIDPNTARGETSET *)operator new(0x60uLL, 0x4E506456u, PagedPool);
  if ( v14 )
    v14 = DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v14, *((const struct DMMVIDPNTARGETSET **)a2 + 39));
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 39, (__int64)v14);
  v9 = (DMMVIDPNSOURCESET *)*v7;
  if ( !*v7 )
  {
LABEL_53:
    v44 = WdLogNewEntry5_WdLowResource(v9);
    WdLogEvent5_WdLowResource(v44);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNSOURCESET *))v9)(v9) )
  {
    v47 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v47 + 24) = this;
    WdLogEvent5_WdDmmEvent(v47);
    v46 = *v7;
    goto LABEL_56;
  }
  ContainedBy<DMMVIDPN>::SetContainer(*v7 + 64, (__int64)this);
  v15 = (_QWORD *)(*v7 + 24);
  if ( (_QWORD *)*v15 != v15 )
  {
    NextSource = (struct DMMVIDPNSOURCE *)(*v15 - 8LL);
    if ( NextSource )
    {
      while ( (**((unsigned __int8 (__fastcall ***)(__int64))NextSource + 8))((__int64)NextSource + 64) )
      {
        v17 = (struct DMMVIDPNPRESENTPATH *)*v7;
        v64 = v17;
        if ( v17 )
        {
          if ( *((_QWORD *)NextSource + 5) )
          {
            v51 = WdLogNewEntry5_WdAssertion(v16);
            WdLogEvent5_WdAssertion(v51);
            v17 = v64;
          }
          *((_QWORD *)NextSource + 5) = v17;
        }
        else
        {
          v50 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v50 + 24) = (char *)NextSource + 32;
          *(_QWORD *)(v50 + 32) = *((_QWORD *)NextSource + 5);
          WdLogEvent5_WdError(v50);
        }
        v18 = *((_QWORD *)NextSource + 1);
        if ( v18 == *v7 + 24 )
          NextSource = 0LL;
        else
          NextSource = (struct DMMVIDPNSOURCE *)(v18 - 8);
        if ( !NextSource )
          goto LABEL_28;
      }
LABEL_51:
      v43 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v43 + 24) = NextSource;
      WdLogEvent5_WdDmmEvent(v43);
      v42 = *((_DWORD *)NextSource + 18);
LABEL_52:
      *((_DWORD *)this + 20) = v42;
      return this;
    }
  }
LABEL_28:
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)this + 40, *((_QWORD *)a2 + 6));
  LOBYTE(v19) = *((_BYTE *)this + 172);
  if ( ((unsigned __int16)((2 << v19) - 1) & *((_WORD *)this + 87)) != 0 )
  {
    v52 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v52);
  }
  if ( v5 )
    v20 = (_DWORD *)((char *)v5 + 56);
  else
    v20 = 0LL;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v63, v20, 0LL);
  DMMVIDPNTOPOLOGY::_SetContainingVidPn(v5, this);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v63);
  if ( v5 )
    v22 = (_DWORD *)((char *)v5 + 56);
  else
    v22 = 0LL;
  LOBYTE(v21) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v62, v22, v21);
  v23 = (_QWORD *)((char *)a2 + 120);
  if ( (_QWORD *)*v23 == v23 || (v24 = (const struct DMMVIDPNPRESENTPATH *)(*v23 - 8LL)) == 0LL )
  {
LABEL_45:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v62);
    *((_DWORD *)this + 22) = 2;
    v39 = WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
    *(_QWORD *)(v39 + 24) = this;
    *(_QWORD *)(v39 + 32) = a2;
  }
  else
  {
    while ( 1 )
    {
      v25 = (unsigned int *)IndexedSet<DMMVIDPNSOURCE>::FindById(
                              (__int64)*v6,
                              *(_DWORD *)(*((_QWORD *)v24 + 11) + 24LL));
      v26 = IndexedSet<DMMVIDPNTARGET>::FindById(*v7, *(_DWORD *)(*((_QWORD *)v24 + 12) + 24LL));
      v64 = 0LL;
      v65 = v26;
      v27 = (unsigned int *)v26;
      v28 = (DMMVIDPNPRESENTPATH *)operator new(0xD0uLL, 0x4E506456u, PagedPool);
      if ( v28 )
        v28 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
                v28,
                (struct DMMVIDPNSOURCE *)v25,
                (struct DMMVIDPNTARGET *)v27,
                v24);
      auto_ptr<DMMVIDPNPRESENTPATH>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))&v64,
        (__int64 (__fastcall ***)(_QWORD, __int64))v28);
      v30 = v64;
      if ( !v64 )
        break;
      if ( !(**((unsigned __int8 (__fastcall ***)(char *))v64 + 7))((char *)v64 + 56) )
      {
        v60 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v60[3] = v25[6];
        v60[4] = v27[6];
        v60[6] = (char *)a2 + 96;
        v60[5] = this;
        WdLogEvent5_WdDmmEvent(v60);
        *((_DWORD *)this + 20) = *((_DWORD *)v30 + 16);
        goto LABEL_67;
      }
      v31 = DMMVIDPNTOPOLOGY::AddPath(v5, v30, D3DKMDT_MCC_ENFORCE);
      v33 = v31;
      if ( v31 == -1071774920 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v54 = v65;
        v53[3] = v25[6];
        v53[4] = *(unsigned int *)(v54 + 24);
        v53[6] = (char *)a2 + 96;
        v53[5] = this;
        WdLogEvent5_WdDmmEvent(v53);
        v55 = DMMVIDPNTOPOLOGY::AddPath(v5, v30, D3DKMDT_MCC_IGNORE);
        v57 = v55;
        if ( v55 < 0 )
        {
          v58 = (_QWORD *)WdLogNewEntry5_WdError(v56);
          v58[3] = v25[6];
          v58[4] = *(unsigned int *)(v54 + 24);
          v58[6] = (char *)a2 + 96;
          v58[5] = this;
          v58[7] = v57;
          WdLogEvent5_WdError(v58);
          *((_DWORD *)this + 20) = v57;
          goto LABEL_67;
        }
      }
      else if ( v31 < 0 )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdError(v32);
        v59[3] = v25[6];
        v59[4] = *(unsigned int *)(v65 + 24);
        v59[6] = (char *)a2 + 96;
        v59[5] = this;
        v59[7] = v33;
        WdLogEvent5_WdError(v59);
        *((_DWORD *)this + 20) = v33;
        goto LABEL_67;
      }
      v64 = 0LL;
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v64);
      v34 = (const struct DMMVIDPN *)*((_QWORD *)v24 + 1);
      if ( v34 == (const struct DMMVIDPN *)((char *)a2 + 120) )
        v24 = 0LL;
      else
        v24 = (const struct DMMVIDPN *)((char *)v34 - 8);
      if ( !v24 )
        goto LABEL_45;
      v7 = (__int64 *)((char *)this + 312);
      v6 = (DMMVIDPNSOURCESET **)((char *)this + 304);
    }
    v61 = WdLogNewEntry5_WdLowResource(v29);
    WdLogEvent5_WdLowResource(v61);
    *((_DWORD *)this + 20) = -1073741801;
LABEL_67:
    auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v64);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v62);
  }
  return this;
}
