/*
 * XREFs of ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C000576C
 * Callers:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C00026F8 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0001E0C (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAA@AEBV0@@Z @ 0x1C0003FC0 (--0-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCEMODESET *__fastcall DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  const struct DMMVIDPNSOURCEMODESET *v2; // rsi
  char *v4; // r14
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rdi
  DMMVIDPNSOURCEMODESET *v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v2 = a2;
  *(_QWORD *)this = &SetElement::`vftable';
  if ( a2 )
    a2 = (const struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 24);
  v4 = (char *)this + 24;
  *((_QWORD *)this + 3) = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE>::DoublyLinkedList<DMMVIDPNSOURCEMODE>((__int64)this + 32, (__int64)a2 + 8);
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
    v6 = (_QWORD *)((char *)this + 48);
    if ( (_QWORD *)*v6 != v6 )
    {
      v7 = *v6 - 8LL;
      while ( v7 )
      {
        if ( *(_QWORD *)(v7 + 40) )
        {
          v11 = WdLogNewEntry5_WdAssertion(v5);
          WdLogEvent5_WdAssertion(v11);
        }
        *(_QWORD *)(v7 + 40) = this;
        v8 = *(DMMVIDPNSOURCEMODESET **)(v7 + 8);
        if ( v8 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
          v7 = 0LL;
        else
          v7 = (__int64)v8 - 8;
      }
    }
    v9 = *((_QWORD *)v2 + 18);
    if ( v9 )
      *((_QWORD *)this + 18) = IndexedSet<DMMVIDPNTARGETMODE>::FindById((__int64)v4, *(_DWORD *)(v9 + 24));
    else
      *((_QWORD *)this + 18) = 0LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
