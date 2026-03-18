/*
 * XREFs of ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0003988
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z @ 0x1C00046E4 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z @ 0x1C000331C (--0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(DMMVIDPNTARGET *this, const struct DMMVIDPNTARGET *a2)
{
  int v2; // eax
  DMMVIDPNTARGETMODESET *v5; // rax
  DMMVIDPNTARGETMODESET *v6; // rdi
  DMMVIDPNTARGETMODESET *v7; // rcx
  DMMVIDPNTARGETMODESET *v8; // rcx
  DMMVIDPNTARGETMODESET *v9; // rax
  DMMVIDPNTARGETMODESET *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax

  v2 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v2;
  if ( v2 == -1 )
  {
    v14 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v14);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_DWORD *)this + 14) = 1833173001;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  v5 = (DMMVIDPNTARGETMODESET *)operator new[](0x30uLL, 0x4E506456u, PagedPool);
  v6 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 0;
    *((_QWORD *)v5 + 4) = 0LL;
    *(_QWORD *)v5 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET>::`vftable';
    *((_QWORD *)v5 + 3) = (char *)v5 + 16;
    *((_QWORD *)v5 + 2) = (char *)v5 + 16;
    *((_DWORD *)v5 + 10) = 2;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 15);
  if ( v6 != v7 && v7 )
    (*(void (__fastcall **)(DMMVIDPNTARGETMODESET *, __int64))(*(_QWORD *)v7 + 16LL))(v7, 1LL);
  *((_QWORD *)this + 15) = v6;
  v8 = v6;
  if ( !v6 )
    goto LABEL_23;
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNTARGETMODESET *))v6)(v6) )
  {
    v16 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v16);
    v17 = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    goto LABEL_26;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v9 = (DMMVIDPNTARGETMODESET *)operator new[](0x98uLL, 0x4E506456u, PagedPool);
    if ( v9 )
      v10 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(v9, *((const struct DMMVIDPNTARGETMODESET **)a2 + 13));
    else
      v10 = 0LL;
    v11 = *((_QWORD *)this + 13);
    if ( v11 && v10 != (DMMVIDPNTARGETMODESET *)v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 88));
    *((_QWORD *)this + 13) = v10;
    v8 = v10;
    if ( v10 )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v10 + 3))((__int64)v10 + 24) )
      {
        v12 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v12 + 112) )
        {
          v19 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v19);
        }
        *(_QWORD *)(v12 + 112) = this;
        goto LABEL_19;
      }
      v18 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v18 + 24) = this;
      *(_QWORD *)(v18 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v18);
      v17 = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
LABEL_26:
      *((_DWORD *)this + 18) = v17;
      return this;
    }
LABEL_23:
    v15 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v15);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_19:
  *((_DWORD *)this + 22) = 2;
  return this;
}
