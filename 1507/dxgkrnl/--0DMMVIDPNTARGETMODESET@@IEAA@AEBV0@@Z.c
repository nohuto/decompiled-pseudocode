/*
 * XREFs of ??0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z @ 0x1C000331C
 * Callers:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0003988 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00036A0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAA@AEBV0@@Z @ 0x1C0004444 (--0-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAA@AEBV0@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004BA8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGETMODESET *__fastcall DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(
        DMMVIDPNTARGETMODESET *this,
        const struct DMMVIDPNTARGETMODESET *a2)
{
  const struct DMMVIDPNTARGETMODESET *v2; // rsi
  char *v4; // r14
  _QWORD *v5; // rdi
  __int64 v6; // rax
  struct DMMVIDPNSOURCEMODE *i; // rdi
  __int64 v9; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v2 = a2;
  *(_QWORD *)this = &SetElement::`vftable';
  if ( a2 )
    a2 = (const struct DMMVIDPNTARGETMODESET *)((char *)a2 + 24);
  v4 = (char *)this + 24;
  *((_QWORD *)this + 3) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  DoublyLinkedList<DMMVIDPNTARGETMODE>::DoublyLinkedList<DMMVIDPNTARGETMODE>((char *)this + 32, (char *)a2 + 8);
  *((_DWORD *)v4 + 14) = 0;
  *(_QWORD *)v4 = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173005;
  *(_QWORD *)this = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  *(_QWORD *)v4 = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 15) = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
  if ( (**((unsigned __int8 (__fastcall ***)(__int64))v4 + 1))((__int64)(v4 + 8)) )
  {
    v5 = (_QWORD *)((char *)this + 48);
    if ( (_QWORD *)*v5 != v5 )
    {
      for ( i = (struct DMMVIDPNSOURCEMODE *)(*v5 - 8LL); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
      {
        if ( *((_QWORD *)i + 5) )
        {
          v9 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v9);
        }
        *((_QWORD *)i + 5) = this;
      }
    }
    v6 = *((_QWORD *)v2 + 18);
    if ( v6 )
      *((_QWORD *)this + 18) = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v4, *(unsigned int *)(v6 + 24));
    else
      *((_QWORD *)this + 18) = 0LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
