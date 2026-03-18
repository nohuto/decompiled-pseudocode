/*
 * XREFs of ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0003660
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z @ 0x1C0002F60 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0001E0C (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0003190 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C00046A8 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(DMMVIDPNTARGET *this, const struct DMMVIDPNTARGET *a2)
{
  int v2; // eax
  char *v5; // rax
  unsigned __int8 (__fastcall ***v6)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v7)(_QWORD); // rcx
  unsigned __int8 (__fastcall ***v8)(_QWORD); // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // r14
  _QWORD *v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rdi
  __int64 v19; // r13
  char *v20; // rax
  _QWORD *v21; // r13
  struct DMMVIDPNSOURCEMODE *NextMode; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax

  v2 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &IndexedSetElement<unsigned int>::`vftable';
  *((_DWORD *)this + 6) = v2;
  if ( v2 == -1 )
  {
    v23 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v23);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGET::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  v5 = (char *)operator new(0x30uLL, 0x4E506456u, PagedPool);
  v6 = (unsigned __int8 (__fastcall ***)(_QWORD))v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 0;
    *((_QWORD *)v5 + 4) = 0LL;
    *(_QWORD *)v5 = &DoublyLinkedList<DMMVIDPNTARGETMODESET>::`vftable';
    *((_QWORD *)v5 + 3) = v5 + 16;
    *((_QWORD *)v5 + 2) = v5 + 16;
    *((_DWORD *)v5 + 10) = 2;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v6 != v7 && v7 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v7)[2])(v7, 1LL);
  *((_QWORD *)this + 15) = v6;
  v8 = v6;
  if ( !v6 )
    goto LABEL_46;
  if ( !(**v6)(v6) )
  {
    v25 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v25 + 24) = this;
    *(_QWORD *)(v25 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v25);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    return this;
  }
  if ( !*((_QWORD *)a2 + 13) )
    goto LABEL_31;
  v9 = operator new(0x98uLL, 0x4E506456u, PagedPool);
  v10 = v9;
  if ( v9 )
  {
    v11 = *((_QWORD *)a2 + 13);
    v9[1] = 0LL;
    v9[2] = 0LL;
    *v9 = &SetElement::`vftable';
    if ( v11 )
      v12 = v11 + 24;
    else
      v12 = 0LL;
    v9[3] = &Set<DMMVIDPNTARGETMODE>::`vftable';
    *((_DWORD *)v9 + 10) = 0;
    v9[4] = &DoublyLinkedList<DMMVIDPNTARGETMODE>::`vftable';
    *((_DWORD *)v9 + 18) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v12 + 8))(v12 + 8)
      || !*(_QWORD *)(v12 + 24)
      || !*(_QWORD *)(v12 + 32) )
    {
      v26 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v26);
    }
    v10[7] = v10 + 6;
    v13 = (_QWORD *)(v12 + 24);
    v10[6] = v10 + 6;
    v10[8] = 0LL;
    if ( (_QWORD *)*v13 == v13 || (v19 = *v13 - 8LL, *v13 == 8LL) )
    {
LABEL_18:
      if ( v10[8] != *(_QWORD *)(v12 + 40) )
      {
        v28 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v28);
      }
      *((_DWORD *)v10 + 18) = 2;
    }
    else
    {
      while ( 1 )
      {
        v20 = (char *)operator new(0x88uLL, 0x4E506456u, PagedPool);
        if ( !v20 )
          break;
        *((_QWORD *)v20 + 1) = 0LL;
        *((_QWORD *)v20 + 2) = 0LL;
        *(_QWORD *)v20 = &IndexedSetElement<unsigned int>::`vftable';
        *((_DWORD *)v20 + 6) = *(_DWORD *)(v19 + 24);
        *(_OWORD *)(v20 + 72) = *(_OWORD *)(v19 + 72);
        *(_OWORD *)(v20 + 88) = *(_OWORD *)(v19 + 88);
        *(_OWORD *)(v20 + 104) = *(_OWORD *)(v19 + 104);
        *((_QWORD *)v20 + 15) = *(_QWORD *)(v19 + 120);
        *((_QWORD *)v20 + 4) = &ContainedBy<DMMVIDPNTARGETMODESET>::`vftable';
        *((_QWORD *)v20 + 5) = 0LL;
        *((_QWORD *)v20 + 6) = &SignedWithClassSignature<DMMVIDPNTARGETMODE>::`vftable';
        *((_DWORD *)v20 + 14) = *(_DWORD *)(v19 + 56);
        *(_QWORD *)v20 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
        *((_QWORD *)v20 + 4) = &DMMVIDPNTARGETMODE::`vftable'{for `ContainedBy<DMMVIDPNTARGETMODESET>'};
        *((_QWORD *)v20 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
        *((_QWORD *)v20 + 8) = &DMMVIDPNTARGETMODE::`vftable'{for `NonReferenceCounted'};
        *((_DWORD *)v20 + 32) = *(_DWORD *)(v19 + 128);
        DoublyLinkedList<DMMVIDPNTARGETMODE>::InsertTail(v10 + 4);
        v21 = *(_QWORD **)(v19 + 8);
        if ( v21 != v13 )
        {
          v19 = (__int64)(v21 - 1);
          if ( v19 )
            continue;
        }
        goto LABEL_18;
      }
      v27 = ((__int64 (*)(void))WdLogNewEntry5_WdLowResource)();
      WdLogEvent5_WdLowResource(v27);
      *((_DWORD *)v10 + 10) = -1073741801;
    }
    *((_DWORD *)v10 + 20) = 0;
    v10[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
    v10[11] = &ReferenceCounted::`vftable';
    *((_DWORD *)v10 + 24) = 1;
    *((_BYTE *)v10 + 136) = 1;
    v10[14] = 0LL;
    *((_DWORD *)v10 + 32) = 1833173005;
    *v10 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
    v10[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
    v10[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
    v10[13] = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
    v10[15] = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v10[4])(v10 + 4) )
    {
      v14 = v10 + 6;
      if ( (_QWORD *)*v14 != v14 )
      {
        NextMode = (struct DMMVIDPNSOURCEMODE *)(*v14 - 8LL);
        if ( *v14 != 8LL )
        {
          do
          {
            if ( *((_QWORD *)NextMode + 5) )
            {
              v29 = WdLogNewEntry5_WdAssertion();
              WdLogEvent5_WdAssertion(v29);
            }
            *((_QWORD *)NextMode + 5) = v10;
            NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v10, NextMode);
          }
          while ( NextMode );
        }
      }
      v15 = *(_QWORD *)(v11 + 144);
      v10[18] = v15 ? IndexedSet<DMMVIDPNTARGETMODE>::FindById((__int64)(v10 + 3), *(_DWORD *)(v15 + 24)) : 0LL;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)v10 + 10);
    }
  }
  else
  {
    v10 = 0LL;
  }
  v16 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v16 && v10 != v16 )
    ReferenceCounted::Release((ReferenceCounted *)(v16 + 11));
  *((_QWORD *)this + 13) = v10;
  v8 = (unsigned __int8 (__fastcall ***)(_QWORD))v10;
  if ( !v10 )
  {
LABEL_46:
    v24 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v24 + 24) = this;
    *(_QWORD *)(v24 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v24);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))v10[3])(v10 + 3) )
  {
    v30 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v30 + 24) = this;
    *(_QWORD *)(v30 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v30);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
    return this;
  }
  v17 = *((_QWORD *)this + 13);
  if ( *(_QWORD *)(v17 + 112) )
  {
    v31 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v31);
  }
  *(_QWORD *)(v17 + 112) = this;
LABEL_31:
  *((_DWORD *)this + 22) = 2;
  return this;
}
