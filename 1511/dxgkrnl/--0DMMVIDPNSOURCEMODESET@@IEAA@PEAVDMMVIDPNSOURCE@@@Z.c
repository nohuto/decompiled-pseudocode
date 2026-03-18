/*
 * XREFs of ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C00053E8
 * Callers:
 *     ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0009BEC (-CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C0009DB4 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCEMODESET *__fastcall DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(
        DMMVIDPNSOURCEMODESET *this,
        struct DMMVIDPNSOURCE *a2)
{
  __int64 v5; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 4) = &DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vftable';
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  *((_DWORD *)this + 18) = 2;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 3) = &IndexedSet<DMMVIDPNSOURCEMODE>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173004;
  *((_QWORD *)this + 18) = 0LL;
  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 15) = &DMMVIDPNSOURCEMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODESET>'};
  if ( (**((unsigned __int8 (__fastcall ***)(char *))this + 4))((char *)this + 32) )
  {
    if ( a2 && *((_QWORD *)this + 14) )
    {
      v5 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v5);
    }
    *((_QWORD *)this + 14) = a2;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
