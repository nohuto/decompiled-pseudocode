/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0091918
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00DD684 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C0004C90 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004DDC (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0005040 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0005B78 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C00083A8 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0009760 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C0009EE0 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C000C88C (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0019540 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C0092460 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C00A075C (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
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
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  DMMVIDPNSOURCESET *v15; // rax
  DMMVIDPNSOURCESET *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DMMVIDPNSOURCESET *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  struct DMMVIDPNSOURCESET *v24; // rax
  DMMVIDPNTARGETSET *v25; // rax
  DMMVIDPNTARGETSET *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  _QWORD *v30; // rbp
  struct DMMVIDEOPRESENTSOURCE *v31; // rbp
  DMMVIDPNSOURCE *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  DMMVIDPNSOURCE *v37; // r14
  __int64 v38; // rcx
  struct DMMVIDPNSOURCESET *v39; // rcx
  int v40; // r14d
  __int64 v41; // rbp
  _QWORD *v42; // rbp
  struct DMMVIDEOPRESENTTARGET *v43; // rbp
  DMMVIDPNTARGET *PoolWithTag; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  DMMVIDPNTARGET *v49; // r14
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  struct DMMVIDPNTARGETSET *v54; // rcx
  int v55; // r14d
  __int64 v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  _BYTE v66[104]; // [rsp+40h] [rbp-68h] BYREF
  DMMVIDPNTARGET *v67; // [rsp+B0h] [rbp+8h] BYREF
  struct VIDPN_MGR *v68; // [rsp+B8h] [rbp+10h]
  DMMVIDPNSOURCE *v69; // [rsp+C0h] [rbp+18h] BYREF
  DMMVIDPNTARGET *v70; // [rsp+C8h] [rbp+20h] BYREF

  v68 = a2;
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
    v11 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v11);
  }
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)v4, (__int64)v7);
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNTOPOLOGY *))v5)(v5) )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v12);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdDmmEvent(v13);
    v14 = *((_DWORD *)v5 + 4);
    if ( v14 >= 0 )
      v14 = *((_DWORD *)v5 + 16);
    *((_DWORD *)this + 20) = v14;
    return this;
  }
  v15 = (DMMVIDPNSOURCESET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  if ( v15 )
    v16 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v15, this);
  else
    v16 = 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 38, (__int64)v16);
  v20 = *v9;
  if ( !*v9 )
  {
LABEL_11:
    v21 = WdLogNewEntry5_WdLowResource(v20, v17, v18, v19);
    WdLogEvent5_WdLowResource(v21);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNSOURCESET *))v20)(v20) )
  {
    v23 = WdLogNewEntry5_WdDmmEvent(v22);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdDmmEvent(v23);
    v24 = *v9;
LABEL_14:
    *((_DWORD *)this + 20) = *((_DWORD *)v24 + 4);
    return this;
  }
  v25 = (DMMVIDPNTARGETSET *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  if ( v25 )
    v26 = DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v25, this);
  else
    v26 = 0LL;
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 39, (__int64)v26);
  v20 = *v10;
  if ( !*v10 )
    goto LABEL_11;
  if ( !(**(unsigned __int8 (__fastcall ***)(struct DMMVIDPNSOURCESET *))v20)(v20) )
  {
    v28 = WdLogNewEntry5_WdDmmEvent(v27);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdDmmEvent(v28);
    v24 = *v10;
    goto LABEL_14;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v7 + 11) + 72LL), 1u);
  v29 = *((_QWORD *)v7 + 11);
  v30 = (_QWORD *)(v29 + 24);
  if ( (_QWORD *)*v30 == v30 || (v31 = (struct DMMVIDEOPRESENTSOURCE *)(*v30 - 8LL)) == 0LL )
  {
LABEL_34:
    if ( v29 )
      ReferenceCounted::Release((ReferenceCounted *)(v29 + 64));
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v7 + 12) + 72LL), 1u);
    v29 = *((_QWORD *)v7 + 12);
    v42 = (_QWORD *)(v29 + 24);
    if ( (_QWORD *)*v42 == v42 || (v43 = (struct DMMVIDEOPRESENTTARGET *)(*v42 - 8LL)) == 0LL )
    {
LABEL_53:
      if ( v29 )
        ReferenceCounted::Release((ReferenceCounted *)(v29 + 64));
      LOBYTE(v27) = *((_BYTE *)this + 172);
      if ( ((unsigned __int16)((2 << v27) - 1) & *((_WORD *)this + 87)) != 0 )
      {
        v57 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v57);
      }
      if ( v5 )
        v3 = (_DWORD *)((char *)v5 + 56);
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v66, v3, 0LL);
      DMMVIDPNTOPOLOGY::_SetContainingVidPn(v5, this);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v66);
      *((_DWORD *)this + 22) = 2;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v59, v58, v60, v61) + 24) = this;
      return this;
    }
    while ( 1 )
    {
      PoolWithTag = (DMMVIDPNTARGET *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x4E506456u);
      v49 = PoolWithTag ? DMMVIDPNTARGET::DMMVIDPNTARGET(PoolWithTag, *v10, v43) : 0LL;
      v67 = v49;
      if ( !v49 )
        break;
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v49 + 8))((__int64)v49 + 64) )
      {
        v64 = WdLogNewEntry5_WdDmmEvent(v53);
        *(_QWORD *)(v64 + 24) = this;
        WdLogEvent5_WdDmmEvent(v64);
        *((_DWORD *)this + 20) = *((_DWORD *)v49 + 18);
        goto LABEL_64;
      }
      v54 = *v10;
      v67 = 0LL;
      v70 = v49;
      v55 = DMMVIDPNTARGETSET::AddTarget(v54, &v70);
      if ( v55 < 0 )
      {
        v63 = WdLogNewEntry5_WdError(v27);
        WdLogEvent5_WdError(v63);
        *((_DWORD *)this + 20) = v55;
        goto LABEL_64;
      }
      v56 = *((_QWORD *)v43 + 1);
      if ( v56 == v29 + 24 )
        v43 = 0LL;
      else
        v43 = (struct DMMVIDEOPRESENTTARGET *)(v56 - 8);
      if ( !v43 )
        goto LABEL_53;
    }
    v65 = WdLogNewEntry5_WdLowResource(v46, v45, v47, v48);
    WdLogEvent5_WdLowResource(v65);
    *((_DWORD *)this + 20) = -1073741801;
LABEL_64:
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v67);
  }
  else
  {
    while ( 1 )
    {
      v32 = (DMMVIDPNSOURCE *)operator new[](0xB8uLL, 0x4E506456u, PagedPool);
      v37 = v32 ? DMMVIDPNSOURCE::DMMVIDPNSOURCE(v32, *v9, v31) : 0LL;
      if ( !v37 )
        break;
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v37 + 8))((__int64)v37 + 64) )
      {
        v51 = WdLogNewEntry5_WdDmmEvent(v38);
        *(_QWORD *)(v51 + 24) = this;
        WdLogEvent5_WdDmmEvent(v51);
        *((_DWORD *)this + 20) = *((_DWORD *)v37 + 18);
        (**(void (__fastcall ***)(DMMVIDPNSOURCE *, __int64))v37)(v37, 1LL);
        goto LABEL_43;
      }
      v39 = *v9;
      v69 = v37;
      v40 = DMMVIDPNSOURCESET::AddSource(v39, &v69);
      if ( v40 < 0 )
      {
        v50 = WdLogNewEntry5_WdError(v27);
        WdLogEvent5_WdError(v50);
        *((_DWORD *)this + 20) = v40;
        goto LABEL_43;
      }
      v41 = *((_QWORD *)v31 + 1);
      if ( v41 == v29 + 24 )
        v31 = 0LL;
      else
        v31 = (struct DMMVIDEOPRESENTSOURCE *)(v41 - 8);
      if ( !v31 )
      {
        v7 = v68;
        goto LABEL_34;
      }
    }
    v52 = WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
    WdLogEvent5_WdLowResource(v52);
    *((_DWORD *)this + 20) = -1073741801;
  }
LABEL_43:
  if ( v29 )
    ReferenceCounted::Release((ReferenceCounted *)(v29 + 64));
  return this;
}
