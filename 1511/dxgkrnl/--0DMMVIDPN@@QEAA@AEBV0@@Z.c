/*
 * XREFs of ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0091E10
 * Callers:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@@Z @ 0x1C0004A34 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@AEA.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z @ 0x1C008F228 (-ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FEA8 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0177D78 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004C24 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C0004C90 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004DDC (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C0005168 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0008324 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z @ 0x1C0008360 (-GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C00084C8 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x1C0008ACC (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C0009EE0 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C000C174 (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000C54C (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000C57C (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C000C88C (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C009106C (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, const struct DMMVIDPN *a2, unsigned __int8 a3)
{
  DMMVIDPNTOPOLOGY *v5; // r15
  DMMVIDPNSOURCESET **v6; // r13
  __int64 *v7; // r12
  __int64 v8; // rcx
  DMMVIDPNSOURCESET *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  DMMVIDPNSOURCESET *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  struct DMMVIDPNSOURCE *NextSource; // rbx
  __int64 v17; // rcx
  struct DMMVIDPNPRESENTPATH *v18; // rax
  DMMVIDPNTARGETSET *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  struct DMMVIDPNPRESENTPATH *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // rdx
  _QWORD *v28; // rsi
  const struct DMMVIDPNPRESENTPATH *v29; // rsi
  unsigned int *v30; // r13
  __int64 v31; // rax
  unsigned int *v32; // r12
  DMMVIDPNPRESENTPATH *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct DMMVIDPNPRESENTPATH *v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // r9
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r12
  const struct DMMVIDPN *v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // r12
  __int64 v65; // r9
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rbx
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  _BYTE v73[24]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v74[24]; // [rsp+58h] [rbp-18h] BYREF
  struct DMMVIDPNPRESENTPATH *v75; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v76; // [rsp+C0h] [rbp+50h]

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
    v51 = WdLogNewEntry5_WdDmmEvent(v8);
    *(_QWORD *)(v51 + 24) = this;
    WdLogEvent5_WdDmmEvent(v51);
    v52 = *((_DWORD *)v5 + 4);
    if ( v52 >= 0 )
      v52 = *((_DWORD *)v5 + 16);
    goto LABEL_52;
  }
  v9 = (DMMVIDPNSOURCESET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  if ( v9 )
    v9 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v9, *((const struct DMMVIDPNSOURCESET **)a2 + 38));
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 38, (__int64)v9);
  v13 = *v6;
  if ( !*v6 )
    goto LABEL_53;
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNSOURCESET *))v13)(v13) )
  {
    v55 = WdLogNewEntry5_WdDmmEvent(v14);
    *(_QWORD *)(v55 + 24) = this;
    WdLogEvent5_WdDmmEvent(v55);
    v56 = (__int64)*v6;
LABEL_56:
    *((_DWORD *)this + 20) = *(_DWORD *)(v56 + 16);
    return this;
  }
  ContainedBy<DMMVIDPN>::SetContainer((__int64)*v6 + 64, (__int64)this);
  v15 = (_QWORD *)((char *)*v6 + 24);
  if ( (_QWORD *)*v15 != v15 )
  {
    NextSource = (struct DMMVIDPNSOURCE *)(*v15 - 8LL);
    if ( NextSource )
    {
      while ( (**((unsigned __int8 (__fastcall ***)(__int64))NextSource + 8))((__int64)NextSource + 64) )
      {
        v18 = *v6;
        v75 = v18;
        if ( v18 )
        {
          if ( *((_QWORD *)NextSource + 5) )
          {
            v59 = WdLogNewEntry5_WdAssertion(v17);
            WdLogEvent5_WdAssertion(v59);
            v18 = v75;
          }
          *((_QWORD *)NextSource + 5) = v18;
        }
        else
        {
          v58 = WdLogNewEntry5_WdError(v17);
          *(_QWORD *)(v58 + 24) = (char *)NextSource + 32;
          *(_QWORD *)(v58 + 32) = *((_QWORD *)NextSource + 5);
          WdLogEvent5_WdError(v58);
        }
        NextSource = DMMVIDPNSOURCESET::GetNextSource(*v6, NextSource);
        if ( !NextSource )
          goto LABEL_14;
      }
      goto LABEL_51;
    }
  }
LABEL_14:
  v19 = (DMMVIDPNTARGETSET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  if ( v19 )
    v19 = DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v19, *((const struct DMMVIDPNTARGETSET **)a2 + 39));
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 39, (__int64)v19);
  v13 = (DMMVIDPNSOURCESET *)*v7;
  if ( !*v7 )
  {
LABEL_53:
    v54 = WdLogNewEntry5_WdLowResource(v13, v10, v11, v12);
    WdLogEvent5_WdLowResource(v54);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNSOURCESET *))v13)(v13) )
  {
    v57 = WdLogNewEntry5_WdDmmEvent(v20);
    *(_QWORD *)(v57 + 24) = this;
    WdLogEvent5_WdDmmEvent(v57);
    v56 = *v7;
    goto LABEL_56;
  }
  ContainedBy<DMMVIDPN>::SetContainer(*v7 + 64, (__int64)this);
  v21 = (_QWORD *)(*v7 + 24);
  if ( (_QWORD *)*v21 != v21 )
  {
    NextSource = (struct DMMVIDPNSOURCE *)(*v21 - 8LL);
    if ( NextSource )
    {
      while ( (**((unsigned __int8 (__fastcall ***)(__int64))NextSource + 8))((__int64)NextSource + 64) )
      {
        v22 = (struct DMMVIDPNPRESENTPATH *)*v7;
        v75 = v22;
        if ( v22 )
        {
          if ( *((_QWORD *)NextSource + 5) )
          {
            v61 = WdLogNewEntry5_WdAssertion(v17);
            WdLogEvent5_WdAssertion(v61);
            v22 = v75;
          }
          *((_QWORD *)NextSource + 5) = v22;
        }
        else
        {
          v60 = WdLogNewEntry5_WdError(v17);
          *(_QWORD *)(v60 + 24) = (char *)NextSource + 32;
          *(_QWORD *)(v60 + 32) = *((_QWORD *)NextSource + 5);
          WdLogEvent5_WdError(v60);
        }
        v23 = *((_QWORD *)NextSource + 1);
        if ( v23 == *v7 + 24 )
          NextSource = 0LL;
        else
          NextSource = (struct DMMVIDPNSOURCE *)(v23 - 8);
        if ( !NextSource )
          goto LABEL_28;
      }
LABEL_51:
      v53 = WdLogNewEntry5_WdDmmEvent(v17);
      *(_QWORD *)(v53 + 24) = NextSource;
      WdLogEvent5_WdDmmEvent(v53);
      v52 = *((_DWORD *)NextSource + 18);
LABEL_52:
      *((_DWORD *)this + 20) = v52;
      return this;
    }
  }
LABEL_28:
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)this + 40, *((_QWORD *)a2 + 6));
  LOBYTE(v24) = *((_BYTE *)this + 172);
  if ( ((unsigned __int16)((2 << v24) - 1) & *((_WORD *)this + 87)) != 0 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v24);
    WdLogEvent5_WdAssertion(v62);
  }
  if ( v5 )
    v25 = (_DWORD *)((char *)v5 + 56);
  else
    v25 = 0LL;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v74, v25, 0LL);
  DMMVIDPNTOPOLOGY::_SetContainingVidPn(v5, this);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v74);
  if ( v5 )
    v27 = (_DWORD *)((char *)v5 + 56);
  else
    v27 = 0LL;
  LOBYTE(v26) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v73, v27, v26);
  v28 = (_QWORD *)((char *)a2 + 120);
  if ( (_QWORD *)*v28 == v28 || (v29 = (const struct DMMVIDPNPRESENTPATH *)(*v28 - 8LL)) == 0LL )
  {
LABEL_45:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v73);
    *((_DWORD *)this + 22) = 2;
    v49 = WdLogNewEntry5_WdTrace(v46, v45, v47, v48);
    *(_QWORD *)(v49 + 24) = this;
    *(_QWORD *)(v49 + 32) = a2;
  }
  else
  {
    while ( 1 )
    {
      v30 = (unsigned int *)IndexedSet<DMMVIDPNSOURCE>::FindById(
                              (__int64)*v6,
                              *(_DWORD *)(*((_QWORD *)v29 + 11) + 24LL));
      v31 = IndexedSet<DMMVIDPNTARGET>::FindById(*v7, *(_DWORD *)(*((_QWORD *)v29 + 12) + 24LL));
      v75 = 0LL;
      v76 = v31;
      v32 = (unsigned int *)v31;
      v33 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
      if ( v33 )
        v33 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
                v33,
                (struct DMMVIDPNSOURCE *)v30,
                (struct DMMVIDPNTARGET *)v32,
                v29);
      auto_ptr<DMMVIDPNPRESENTPATH>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))&v75,
        (__int64 (__fastcall ***)(_QWORD, __int64))v33);
      v38 = v75;
      if ( !v75 )
        break;
      if ( !(**((unsigned __int8 (__fastcall ***)(char *))v75 + 7))((char *)v75 + 56) )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v39);
        v71[3] = v30[6];
        v71[4] = v32[6];
        v71[6] = (char *)a2 + 96;
        v71[5] = this;
        WdLogEvent5_WdDmmEvent(v71);
        *((_DWORD *)this + 20) = *((_DWORD *)v38 + 16);
        goto LABEL_67;
      }
      v41 = DMMVIDPNTOPOLOGY::AddPath(v5, v38, 2LL, v40);
      v43 = v41;
      if ( v41 == -1071774920 )
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v42);
        v64 = v76;
        v63[3] = v30[6];
        v63[4] = *(unsigned int *)(v64 + 24);
        v63[6] = (char *)a2 + 96;
        v63[5] = this;
        WdLogEvent5_WdDmmEvent(v63);
        v66 = DMMVIDPNTOPOLOGY::AddPath(v5, v38, 1LL, v65);
        v68 = v66;
        if ( v66 < 0 )
        {
          v69 = (_QWORD *)WdLogNewEntry5_WdError(v67);
          v69[3] = v30[6];
          v69[4] = *(unsigned int *)(v64 + 24);
          v69[6] = (char *)a2 + 96;
          v69[5] = this;
          v69[7] = v68;
          WdLogEvent5_WdError(v69);
          *((_DWORD *)this + 20) = v68;
          goto LABEL_67;
        }
      }
      else if ( v41 < 0 )
      {
        v70 = (_QWORD *)WdLogNewEntry5_WdError(v42);
        v70[3] = v30[6];
        v70[4] = *(unsigned int *)(v76 + 24);
        v70[6] = (char *)a2 + 96;
        v70[5] = this;
        v70[7] = v43;
        WdLogEvent5_WdError(v70);
        *((_DWORD *)this + 20) = v43;
        goto LABEL_67;
      }
      v75 = 0LL;
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v75);
      v44 = (const struct DMMVIDPN *)*((_QWORD *)v29 + 1);
      if ( v44 == (const struct DMMVIDPN *)((char *)a2 + 120) )
        v29 = 0LL;
      else
        v29 = (const struct DMMVIDPN *)((char *)v44 - 8);
      if ( !v29 )
        goto LABEL_45;
      v7 = (__int64 *)((char *)this + 312);
      v6 = (DMMVIDPNSOURCESET **)((char *)this + 304);
    }
    v72 = WdLogNewEntry5_WdLowResource(v35, v34, v36, v37);
    WdLogEvent5_WdLowResource(v72);
    *((_DWORD *)this + 20) = -1073741801;
LABEL_67:
    auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v75);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v73);
  }
  return this;
}
