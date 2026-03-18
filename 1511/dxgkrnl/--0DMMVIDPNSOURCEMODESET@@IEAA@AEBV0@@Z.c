/*
 * XREFs of ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0005284
 * Callers:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0009A18 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAA@AEBV0@@Z @ 0x1C00064F0 (--0-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAA@AEBV0@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C000BA48 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCEMODESET *__fastcall DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  const struct DMMVIDPNSOURCEMODESET *v2; // rsi
  char *v4; // r14
  _QWORD *v5; // rdi
  __int64 v6; // rdi
  DMMVIDPNSOURCEMODESET *v7; // rdi
  __int64 v8; // rax
  __int64 v10; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v2 = a2;
  *(_QWORD *)this = &SetElement::`vftable';
  if ( a2 )
    a2 = (const struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 24);
  v4 = (char *)this + 24;
  *((_QWORD *)this + 3) = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE>::DoublyLinkedList<DMMVIDPNSOURCEMODE>((char *)this + 32, (char *)a2 + 8);
  *((_DWORD *)v4 + 14) = 0;
  *(_QWORD *)v4 = &IndexedSet<DMMVIDPNSOURCEMODE>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173004;
  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *(_QWORD *)v4 = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 15) = &DMMVIDPNSOURCEMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODESET>'};
  if ( (**((unsigned __int8 (__fastcall ***)(__int64))v4 + 1))((__int64)(v4 + 8)) )
  {
    v5 = (_QWORD *)((char *)this + 48);
    if ( (_QWORD *)*v5 != v5 )
    {
      v6 = *v5 - 8LL;
      while ( v6 )
      {
        if ( *(_QWORD *)(v6 + 40) )
        {
          v10 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v10);
        }
        *(_QWORD *)(v6 + 40) = this;
        v7 = *(DMMVIDPNSOURCEMODESET **)(v6 + 8);
        if ( v7 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
          v6 = 0LL;
        else
          v6 = (__int64)v7 - 8;
      }
    }
    v8 = *((_QWORD *)v2 + 18);
    if ( v8 )
      *((_QWORD *)this + 18) = IndexedSet<DMMVIDPNTARGETMODE>::FindById(v4, *(unsigned int *)(v8 + 24));
    else
      *((_QWORD *)this + 18) = 0LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
