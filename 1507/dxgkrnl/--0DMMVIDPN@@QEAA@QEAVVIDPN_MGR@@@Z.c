/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0088DFC
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00CE068 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00036E4 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0003FA0 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C0004190 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C00042DC (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0006968 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C0007844 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0007B78 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C000A54C (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0017A20 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C00895F0 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C0097684 (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2, unsigned __int8 a3)
{
  _DWORD *v3; // rdi
  char *v4; // rbx
  DMMVIDPNTOPOLOGY *v5; // r15
  struct VIDPN_MGR *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DMMVIDPNSOURCESET *const *v12; // r12
  struct DMMVIDPNTARGETSET *const *v13; // r13
  DMMVIDPNSOURCESET *v14; // rax
  DMMVIDPNSOURCESET *v15; // rax
  struct DMMVIDPNSOURCESET *v16; // rcx
  DMMVIDPNTARGETSET *v17; // rax
  DMMVIDPNTARGETSET *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  _QWORD *v24; // rbp
  struct DMMVIDEOPRESENTSOURCE *v25; // rbp
  DMMVIDPNSOURCE *v26; // rax
  __int64 v27; // rcx
  DMMVIDPNSOURCE *v28; // r14
  struct DMMVIDPNSOURCESET *v29; // rcx
  int v30; // r14d
  __int64 v31; // rbp
  _QWORD *v32; // rbp
  struct DMMVIDEOPRESENTTARGET *v33; // rbp
  DMMVIDPNTARGET *PoolWithTag; // rax
  __int64 v35; // rcx
  DMMVIDPNTARGET *v36; // r14
  struct DMMVIDPNTARGETSET *v37; // rcx
  int v38; // r14d
  __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  struct DMMVIDPNSOURCESET *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _BYTE v59[104]; // [rsp+40h] [rbp-68h] BYREF
  DMMVIDPNTARGET *v60; // [rsp+B0h] [rbp+8h] BYREF
  struct VIDPN_MGR *v61; // [rsp+B8h] [rbp+10h]
  DMMVIDPNSOURCE *v62; // [rsp+C0h] [rbp+18h] BYREF
  DMMVIDPNTARGET *v63; // [rsp+C8h] [rbp+20h] BYREF

  v61 = a2;
  v3 = 0LL;
  v4 = (char *)this + 40;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  v5 = (DMMVIDPN *)((char *)this + 96);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 8) = 1;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 1833172997;
  v7 = a2;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96), (unsigned __int8)a2, a3);
  v12 = (struct DMMVIDPNSOURCESET *const *)((char *)this + 304);
  *((_QWORD *)this + 38) = 0LL;
  v13 = (struct DMMVIDPNTARGETSET *const *)((char *)this + 312);
  *((_QWORD *)this + 39) = 0LL;
  if ( !v7 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v45);
  }
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)v4, (__int64)v7);
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNTOPOLOGY *))v5)(v5) )
  {
    v46 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v46 + 24) = this;
    WdLogEvent5_WdDmmEvent(v46);
    v47 = *((_DWORD *)v5 + 4);
    if ( v47 >= 0 )
      v47 = *((_DWORD *)v5 + 16);
    *((_DWORD *)this + 20) = v47;
    return this;
  }
  v14 = (DMMVIDPNSOURCESET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  if ( v14 )
    v15 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v14, this);
  else
    v15 = 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 38, (__int64)v15);
  v16 = *v12;
  if ( !*v12 )
    goto LABEL_49;
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNSOURCESET *))v16)(v16) )
  {
    v49 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v49 + 24) = this;
    WdLogEvent5_WdDmmEvent(v49);
    v50 = *v12;
LABEL_52:
    *((_DWORD *)this + 20) = *((_DWORD *)v50 + 4);
    return this;
  }
  v17 = (DMMVIDPNTARGETSET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  v18 = v17 ? DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v17, this) : 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 39, (__int64)v18);
  v16 = *v13;
  if ( !*v13 )
  {
LABEL_49:
    v48 = WdLogNewEntry5_WdLowResource(v16);
    WdLogEvent5_WdLowResource(v48);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNSOURCESET *))v16)(v16) )
  {
    v51 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v51 + 24) = this;
    WdLogEvent5_WdDmmEvent(v51);
    v50 = *v13;
    goto LABEL_52;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v7 + 11) + 72LL), 1u);
  v23 = *((_QWORD *)v7 + 11);
  v24 = (_QWORD *)(v23 + 24);
  if ( (_QWORD *)*v24 == v24 || (v25 = (struct DMMVIDEOPRESENTSOURCE *)(*v24 - 8LL)) == 0LL )
  {
LABEL_23:
    if ( v23 )
      ReferenceCounted::Release((ReferenceCounted *)(v23 + 64));
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v7 + 12) + 72LL), 1u);
    v23 = *((_QWORD *)v7 + 12);
    v32 = (_QWORD *)(v23 + 24);
    if ( (_QWORD *)*v32 == v32 || (v33 = (struct DMMVIDEOPRESENTTARGET *)(*v32 - 8LL)) == 0LL )
    {
LABEL_35:
      if ( v23 )
        ReferenceCounted::Release((ReferenceCounted *)(v23 + 64));
      LOBYTE(v20) = *((_BYTE *)this + 172);
      if ( ((unsigned __int16)((2 << v20) - 1) & *((_WORD *)this + 87)) != 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        WdLogEvent5_WdAssertion(v58);
      }
      if ( v5 )
        v3 = (_DWORD *)((char *)v5 + 56);
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v59, v3, 0LL);
      DMMVIDPNTOPOLOGY::_SetContainingVidPn(v5, this);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v59);
      *((_DWORD *)this + 22) = 2;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v41, v40, v42, v43) + 24) = this;
      return this;
    }
    while ( 1 )
    {
      PoolWithTag = (DMMVIDPNTARGET *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x4E506456u);
      if ( PoolWithTag )
        v36 = DMMVIDPNTARGET::DMMVIDPNTARGET(PoolWithTag, *v13, v33);
      else
        v36 = 0LL;
      v60 = v36;
      if ( !v36 )
      {
        v55 = WdLogNewEntry5_WdLowResource(v35);
        WdLogEvent5_WdLowResource(v55);
        *((_DWORD *)this + 20) = -1073741801;
        goto LABEL_59;
      }
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v36 + 8))((__int64)v36 + 64) )
        break;
      v37 = *v13;
      v60 = 0LL;
      v63 = v36;
      v38 = DMMVIDPNTARGETSET::AddTarget(v37, &v63);
      if ( v38 < 0 )
      {
        v56 = WdLogNewEntry5_WdError(v20);
        WdLogEvent5_WdError(v56);
        *((_DWORD *)this + 20) = v38;
        goto LABEL_59;
      }
      v39 = *((_QWORD *)v33 + 1);
      if ( v39 == v23 + 24 )
        v33 = 0LL;
      else
        v33 = (struct DMMVIDEOPRESENTTARGET *)(v39 - 8);
      if ( !v33 )
        goto LABEL_35;
    }
    v57 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v57 + 24) = this;
    WdLogEvent5_WdDmmEvent(v57);
    *((_DWORD *)this + 20) = *((_DWORD *)v36 + 18);
LABEL_59:
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v60);
  }
  else
  {
    while ( 1 )
    {
      v26 = (DMMVIDPNSOURCE *)operator new[](0xB8uLL, 0x4E506456u, PagedPool);
      v28 = v26 ? DMMVIDPNSOURCE::DMMVIDPNSOURCE(v26, *v12, v25) : 0LL;
      if ( !v28 )
        break;
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v28 + 8))((__int64)v28 + 64) )
      {
        v53 = WdLogNewEntry5_WdDmmEvent();
        *(_QWORD *)(v53 + 24) = this;
        WdLogEvent5_WdDmmEvent(v53);
        *((_DWORD *)this + 20) = *((_DWORD *)v28 + 18);
        (**(void (__fastcall ***)(DMMVIDPNSOURCE *, __int64))v28)(v28, 1LL);
        goto LABEL_60;
      }
      v29 = *v12;
      v62 = v28;
      v30 = DMMVIDPNSOURCESET::AddSource(v29, &v62);
      if ( v30 < 0 )
      {
        v52 = WdLogNewEntry5_WdError(v20);
        WdLogEvent5_WdError(v52);
        *((_DWORD *)this + 20) = v30;
        goto LABEL_60;
      }
      v31 = *((_QWORD *)v25 + 1);
      if ( v31 == v23 + 24 )
        v25 = 0LL;
      else
        v25 = (struct DMMVIDEOPRESENTSOURCE *)(v31 - 8);
      if ( !v25 )
      {
        v7 = v61;
        goto LABEL_23;
      }
    }
    v54 = WdLogNewEntry5_WdLowResource(v27);
    WdLogEvent5_WdLowResource(v54);
    *((_DWORD *)this + 20) = -1073741801;
  }
LABEL_60:
  if ( v23 )
    ReferenceCounted::Release((ReferenceCounted *)(v23 + 64));
  return this;
}
