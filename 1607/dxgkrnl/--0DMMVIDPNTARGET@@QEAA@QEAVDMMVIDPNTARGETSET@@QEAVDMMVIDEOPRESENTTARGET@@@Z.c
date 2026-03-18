/*
 * XREFs of ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0003D28
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C007DCFC (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETSET *const a2,
        struct DMMVIDEOPRESENTTARGET *const a3)
{
  int v3; // eax
  char *v7; // rax
  unsigned __int8 (__fastcall ***v8)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  int v13; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v3 = *((_DWORD *)a3 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &IndexedSetElement<unsigned int>::`vftable';
  *((_DWORD *)this + 6) = v3;
  if ( v3 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v15);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGET::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 12) = a3;
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v17 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v17);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v16 + 24) = (char *)this + 32;
    *(_QWORD *)(v16 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v16);
  }
  v7 = (char *)operator new(0x30uLL, 0x4E506456u, PagedPool);
  v8 = (unsigned __int8 (__fastcall ***)(_QWORD))v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 0;
    *((_QWORD *)v7 + 4) = 0LL;
    *(_QWORD *)v7 = &DoublyLinkedList<DMMVIDPNTARGETMODESET>::`vftable';
    *((_QWORD *)v7 + 3) = v7 + 16;
    *((_QWORD *)v7 + 2) = v7 + 16;
    *((_DWORD *)v7 + 10) = 2;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v8 != v9 && v9 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v9)[2])(v9, 1LL);
  *((_QWORD *)this + 15) = v8;
  if ( !v8 )
  {
    v18 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v18);
    v13 = -1073741801;
LABEL_32:
    *((_DWORD *)this + 18) = v13;
    return this;
  }
  if ( !(**v8)(v8) )
  {
    v21 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v21 + 24) = this;
    *(_QWORD *)(v21 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v21);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    return this;
  }
  v10 = operator new(0x98uLL, 0x4E506456u, PagedPool);
  v11 = v10;
  if ( v10 )
  {
    v10[1] = 0LL;
    v10[2] = 0LL;
    *v10 = &SetElement::`vftable';
    v10[4] = &DoublyLinkedList<DMMVIDPNTARGETMODE>::`vftable';
    *((_DWORD *)v10 + 10) = 0;
    v10[8] = 0LL;
    v10[7] = v10 + 6;
    v10[6] = v10 + 6;
    *((_DWORD *)v10 + 18) = 2;
    v10[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
    *((_DWORD *)v10 + 20) = 0;
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
    v10[18] = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v10[4])(v10 + 4) )
    {
      if ( v11[14] )
      {
        v22 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v22);
      }
      v11[14] = this;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)v11 + 10);
    }
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v12 && v11 != v12 )
    ReferenceCounted::Release((ReferenceCounted *)(v12 + 11));
  *((_QWORD *)this + 13) = v11;
  if ( !v11 )
  {
    v19 = WdLogNewEntry5_WdLowResource(0LL);
    WdLogEvent5_WdLowResource(v19);
    v13 = -1073741801;
LABEL_31:
    v20 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v20 + 32) = v13;
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    goto LABEL_32;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v11[3])(v11 + 3) )
  {
    v13 = 0;
  }
  else
  {
    v23 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v23 + 24) = this;
    *(_QWORD *)(v23 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v23);
    v13 = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
  }
  if ( v13 < 0 )
    goto LABEL_31;
  *((_DWORD *)this + 22) = 2;
  return this;
}
