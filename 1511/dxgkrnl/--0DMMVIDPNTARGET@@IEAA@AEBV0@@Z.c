/*
 * XREFs of ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0005E20
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z @ 0x1C00056E0 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0005240 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C000BA48 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000BAD4 (-InsertTail@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(DMMVIDPNTARGET *this, const struct DMMVIDPNTARGET *a2)
{
  int v2; // eax
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v10)(_QWORD); // rcx
  unsigned __int8 (__fastcall ***v11)(_QWORD); // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // r14
  _QWORD *v16; // r12
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdi
  __int64 v22; // r13
  char *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // r13
  struct DMMVIDPNSOURCEMODE *NextMode; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax

  v2 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v2;
  if ( v2 == -1 )
  {
    v29 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v29);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173001;
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
  v5 = (char *)operator new[](0x30uLL, 0x4E506456u, PagedPool);
  v9 = (unsigned __int8 (__fastcall ***)(_QWORD))v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 0;
    *((_QWORD *)v5 + 4) = 0LL;
    *(_QWORD *)v5 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET>::`vftable';
    *((_QWORD *)v5 + 3) = v5 + 16;
    *((_QWORD *)v5 + 2) = v5 + 16;
    *((_DWORD *)v5 + 10) = 2;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v9 != v10 && v10 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v10)[2])(v10, 1LL);
  *((_QWORD *)this + 15) = v9;
  v11 = v9;
  if ( !v9 )
    goto LABEL_45;
  if ( !(**v9)(v9) )
  {
    v31 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v31 + 24) = this;
    *(_QWORD *)(v31 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v31);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    return this;
  }
  if ( !*((_QWORD *)a2 + 13) )
    goto LABEL_31;
  v12 = operator new[](0x98uLL, 0x4E506456u, PagedPool);
  v13 = v12;
  if ( v12 )
  {
    v14 = *((_QWORD *)a2 + 13);
    v12[1] = 0LL;
    v12[2] = 0LL;
    *v12 = &SetElement::`vftable';
    if ( v14 )
      v15 = v14 + 24;
    else
      v15 = 0LL;
    v12[3] = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
    *((_DWORD *)v12 + 10) = 0;
    v12[4] = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::`vftable';
    *((_DWORD *)v12 + 18) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v15 + 8))(v15 + 8)
      || !*(_QWORD *)(v15 + 24)
      || !*(_QWORD *)(v15 + 32) )
    {
      v32 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v32);
    }
    v13[7] = v13 + 6;
    v16 = (_QWORD *)(v15 + 24);
    v13[6] = v13 + 6;
    v13[8] = 0LL;
    if ( (_QWORD *)*v16 == v16 || (v22 = *v16 - 8LL, *v16 == 8LL) )
    {
LABEL_18:
      if ( v13[8] != *(_QWORD *)(v15 + 40) )
      {
        v34 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v34);
      }
      *((_DWORD *)v13 + 18) = 2;
    }
    else
    {
      while ( 1 )
      {
        v23 = (char *)operator new[](0x88uLL, 0x4E506456u, PagedPool);
        if ( !v23 )
          break;
        *((_QWORD *)v23 + 1) = 0LL;
        *((_QWORD *)v23 + 2) = 0LL;
        *(_QWORD *)v23 = &SetElement::`vftable';
        *((_DWORD *)v23 + 6) = *(_DWORD *)(v22 + 24);
        *(_OWORD *)(v23 + 72) = *(_OWORD *)(v22 + 72);
        *(_OWORD *)(v23 + 88) = *(_OWORD *)(v22 + 88);
        *(_OWORD *)(v23 + 104) = *(_OWORD *)(v22 + 104);
        *((_QWORD *)v23 + 15) = *(_QWORD *)(v22 + 120);
        *((_QWORD *)v23 + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
        *((_QWORD *)v23 + 5) = 0LL;
        *((_QWORD *)v23 + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
        *((_DWORD *)v23 + 14) = *(_DWORD *)(v22 + 56);
        *(_QWORD *)v23 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
        *((_QWORD *)v23 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
        *((_QWORD *)v23 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
        *((_QWORD *)v23 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
        *((_DWORD *)v23 + 32) = *(_DWORD *)(v22 + 128);
        DoublyLinkedList<DMMVIDPN>::InsertTail(v13 + 4);
        v27 = *(_QWORD **)(v22 + 8);
        if ( v27 != v16 )
        {
          v22 = (__int64)(v27 - 1);
          if ( v22 )
            continue;
        }
        goto LABEL_18;
      }
      v33 = WdLogNewEntry5_WdLowResource(v24, 0LL, v25, v26);
      WdLogEvent5_WdLowResource(v33);
      *((_DWORD *)v13 + 10) = -1073741801;
    }
    *((_DWORD *)v13 + 20) = 0;
    v13[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
    v13[11] = &ReferenceCounted::`vftable';
    *((_DWORD *)v13 + 24) = 1;
    *((_BYTE *)v13 + 136) = 1;
    v13[14] = 0LL;
    *((_DWORD *)v13 + 32) = 1833173005;
    *v13 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
    v13[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
    v13[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
    v13[13] = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
    v13[15] = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v13[4])(v13 + 4) )
    {
      v17 = v13 + 6;
      if ( (_QWORD *)*v17 != v17 )
      {
        NextMode = (struct DMMVIDPNSOURCEMODE *)(*v17 - 8LL);
        if ( *v17 != 8LL )
        {
          do
          {
            if ( *((_QWORD *)NextMode + 5) )
            {
              v35 = WdLogNewEntry5_WdAssertion();
              WdLogEvent5_WdAssertion(v35);
            }
            *((_QWORD *)NextMode + 5) = v13;
            NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v13, NextMode);
          }
          while ( NextMode );
        }
      }
      v18 = *(_QWORD *)(v14 + 144);
      v13[18] = v18 ? IndexedSet<DMMVIDPNTARGETMODE>::FindById(v13 + 3, *(unsigned int *)(v18 + 24)) : 0LL;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)v13 + 10);
    }
  }
  else
  {
    v13 = 0LL;
  }
  v19 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v19 && v13 != v19 )
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 11));
  *((_QWORD *)this + 13) = v13;
  v11 = (unsigned __int8 (__fastcall ***)(_QWORD))v13;
  if ( !v13 )
  {
LABEL_45:
    v30 = WdLogNewEntry5_WdLowResource(v11, v6, v7, v8);
    *(_QWORD *)(v30 + 24) = this;
    *(_QWORD *)(v30 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v30);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))v13[3])(v13 + 3) )
  {
    v36 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v36 + 24) = this;
    *(_QWORD *)(v36 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v36);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
    return this;
  }
  v20 = *((_QWORD *)this + 13);
  if ( *(_QWORD *)(v20 + 112) )
  {
    v37 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v37);
  }
  *(_QWORD *)(v20 + 112) = this;
LABEL_31:
  *((_DWORD *)this + 22) = 2;
  return this;
}
