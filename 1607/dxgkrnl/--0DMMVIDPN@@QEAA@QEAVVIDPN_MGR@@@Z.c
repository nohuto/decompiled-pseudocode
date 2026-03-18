/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C007DCFC
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085094 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00F49B8 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0001FA0 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C000231C (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0002BC8 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0002E78 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0003D28 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C00048E4 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004A30 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C000D094 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C001D6A4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C007D144 (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C007D5F0 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2, unsigned __int8 a3)
{
  _DWORD *v3; // rdi
  char *v4; // rbx
  DMMVIDPNTOPOLOGY *v5; // r15
  struct VIDPN_MGR *v7; // r14
  __int64 v8; // rcx
  struct DMMVIDPNSOURCESET *const *v9; // r12
  struct DMMVIDPNTARGETSET *const *v10; // r13
  DMMVIDPNSOURCESET *v11; // rax
  DMMVIDPNSOURCESET *v12; // rax
  struct DMMVIDPNSOURCESET *v13; // rcx
  DMMVIDPNTARGETSET *v14; // rax
  DMMVIDPNTARGETSET *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // rbp
  struct DMMVIDEOPRESENTSOURCE *v19; // rbp
  DMMVIDPNSOURCE *v20; // rax
  __int64 v21; // rcx
  DMMVIDPNSOURCE *v22; // r14
  struct DMMVIDPNSOURCESET *v23; // rcx
  int v24; // r14d
  __int64 v25; // rbp
  _QWORD *v26; // rbp
  struct DMMVIDEOPRESENTTARGET *v27; // rbp
  DMMVIDPNTARGET *PoolWithTag; // rax
  __int64 v29; // rcx
  DMMVIDPNTARGET *v30; // r14
  struct DMMVIDPNTARGETSET *v31; // rcx
  int v32; // r14d
  __int64 v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  struct DMMVIDPNSOURCESET *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _BYTE v53[104]; // [rsp+40h] [rbp-68h] BYREF
  DMMVIDPNTARGET *v54; // [rsp+B0h] [rbp+8h] BYREF
  struct VIDPN_MGR *v55; // [rsp+B8h] [rbp+10h]
  DMMVIDPNSOURCE *v56; // [rsp+C0h] [rbp+18h] BYREF
  DMMVIDPNTARGET *v57; // [rsp+C8h] [rbp+20h] BYREF

  v55 = a2;
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
  v9 = (struct DMMVIDPNSOURCESET *const *)((char *)this + 304);
  *((_QWORD *)this + 38) = 0LL;
  v10 = (struct DMMVIDPNTARGETSET *const *)((char *)this + 312);
  *((_QWORD *)this + 39) = 0LL;
  if ( !v7 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v39);
  }
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)v4, (__int64)v7);
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNTOPOLOGY *))v5)(v5) )
  {
    v40 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v40 + 24) = this;
    WdLogEvent5_WdDmmEvent(v40);
    v41 = *((_DWORD *)v5 + 4);
    if ( v41 >= 0 )
      v41 = *((_DWORD *)v5 + 16);
    *((_DWORD *)this + 20) = v41;
    return this;
  }
  v11 = (DMMVIDPNSOURCESET *)operator new(0x60uLL, 0x4E506456u, PagedPool);
  if ( v11 )
    v12 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v11, this);
  else
    v12 = 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 38, (__int64)v12);
  v13 = *v9;
  if ( !*v9 )
    goto LABEL_49;
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNSOURCESET *))v13)(v13) )
  {
    v43 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v43 + 24) = this;
    WdLogEvent5_WdDmmEvent(v43);
    v44 = *v9;
LABEL_52:
    *((_DWORD *)this + 20) = *((_DWORD *)v44 + 4);
    return this;
  }
  v14 = (DMMVIDPNTARGETSET *)operator new(0x60uLL, 0x4E506456u, PagedPool);
  v15 = v14 ? DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v14, this) : 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 39, (__int64)v15);
  v13 = *v10;
  if ( !*v10 )
  {
LABEL_49:
    v42 = WdLogNewEntry5_WdLowResource(v13);
    WdLogEvent5_WdLowResource(v42);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNSOURCESET *))v13)(v13) )
  {
    v45 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v45 + 24) = this;
    WdLogEvent5_WdDmmEvent(v45);
    v44 = *v10;
    goto LABEL_52;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v7 + 11) + 72LL), 1u);
  v17 = *((_QWORD *)v7 + 11);
  v18 = (_QWORD *)(v17 + 24);
  if ( (_QWORD *)*v18 == v18 || (v19 = (struct DMMVIDEOPRESENTSOURCE *)(*v18 - 8LL)) == 0LL )
  {
LABEL_23:
    if ( v17 )
      ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v7 + 12) + 72LL), 1u);
    v17 = *((_QWORD *)v7 + 12);
    v26 = (_QWORD *)(v17 + 24);
    if ( (_QWORD *)*v26 == v26 || (v27 = (struct DMMVIDEOPRESENTTARGET *)(*v26 - 8LL)) == 0LL )
    {
LABEL_35:
      if ( v17 )
        ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
      LOBYTE(v16) = *((_BYTE *)this + 172);
      if ( ((unsigned __int16)((2 << v16) - 1) & *((_WORD *)this + 87)) != 0 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v52);
      }
      if ( v5 )
        v3 = (_DWORD *)((char *)v5 + 56);
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v53, v3, 0LL);
      DMMVIDPNTOPOLOGY::_SetContainingVidPn(v5, this);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v53);
      *((_DWORD *)this + 22) = 2;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v35, v34, v36, v37) + 24) = this;
      return this;
    }
    while ( 1 )
    {
      PoolWithTag = (DMMVIDPNTARGET *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x4E506456u);
      if ( PoolWithTag )
        v30 = DMMVIDPNTARGET::DMMVIDPNTARGET(PoolWithTag, *v10, v27);
      else
        v30 = 0LL;
      v54 = v30;
      if ( !v30 )
      {
        v49 = WdLogNewEntry5_WdLowResource(v29);
        WdLogEvent5_WdLowResource(v49);
        *((_DWORD *)this + 20) = -1073741801;
        goto LABEL_59;
      }
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v30 + 8))((__int64)v30 + 64) )
        break;
      v31 = *v10;
      v54 = 0LL;
      v57 = v30;
      v32 = DMMVIDPNTARGETSET::AddTarget(v31, (__int64 (__fastcall ****)(_QWORD, __int64))&v57);
      if ( v32 < 0 )
      {
        v50 = WdLogNewEntry5_WdError(v16);
        WdLogEvent5_WdError(v50);
        *((_DWORD *)this + 20) = v32;
        goto LABEL_59;
      }
      v33 = *((_QWORD *)v27 + 1);
      if ( v33 == v17 + 24 )
        v27 = 0LL;
      else
        v27 = (struct DMMVIDEOPRESENTTARGET *)(v33 - 8);
      if ( !v27 )
        goto LABEL_35;
    }
    v51 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v51 + 24) = this;
    WdLogEvent5_WdDmmEvent(v51);
    *((_DWORD *)this + 20) = *((_DWORD *)v30 + 18);
LABEL_59:
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v54);
  }
  else
  {
    while ( 1 )
    {
      v20 = (DMMVIDPNSOURCE *)operator new(0xB8uLL, 0x4E506456u, PagedPool);
      v22 = v20 ? DMMVIDPNSOURCE::DMMVIDPNSOURCE(v20, *v9, v19) : 0LL;
      if ( !v22 )
        break;
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v22 + 8))((__int64)v22 + 64) )
      {
        v47 = WdLogNewEntry5_WdDmmEvent();
        *(_QWORD *)(v47 + 24) = this;
        WdLogEvent5_WdDmmEvent(v47);
        *((_DWORD *)this + 20) = *((_DWORD *)v22 + 18);
        (**(void (__fastcall ***)(DMMVIDPNSOURCE *, __int64))v22)(v22, 1LL);
        goto LABEL_60;
      }
      v23 = *v9;
      v56 = v22;
      v24 = DMMVIDPNSOURCESET::AddSource((__int64)v23, &v56);
      if ( v24 < 0 )
      {
        v46 = WdLogNewEntry5_WdError(v16);
        WdLogEvent5_WdError(v46);
        *((_DWORD *)this + 20) = v24;
        goto LABEL_60;
      }
      v25 = *((_QWORD *)v19 + 1);
      if ( v25 == v17 + 24 )
        v19 = 0LL;
      else
        v19 = (struct DMMVIDEOPRESENTSOURCE *)(v25 - 8);
      if ( !v19 )
      {
        v7 = v55;
        goto LABEL_23;
      }
    }
    v48 = WdLogNewEntry5_WdLowResource(v21);
    WdLogEvent5_WdLowResource(v48);
    *((_DWORD *)this + 20) = -1073741801;
  }
LABEL_60:
  if ( v17 )
    ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
  return this;
}
