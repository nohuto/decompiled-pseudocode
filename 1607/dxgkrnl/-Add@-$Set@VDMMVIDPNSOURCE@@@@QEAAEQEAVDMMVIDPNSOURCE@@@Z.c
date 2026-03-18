/*
 * XREFs of ?Add@?$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C000AD04
 * Callers:
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C007D144 (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0002148 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 */

char __fastcall Set<DMMVIDPNSOURCE>::Add(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rax

  v2 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v2 == v2 || (v4 = *v2 - 8LL) == 0 )
  {
LABEL_7:
    if ( DoublyLinkedList<DMMVIDPNSOURCE>::InsertTail((_QWORD *)(a1 + 8), a2) != 1 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v8);
    }
    return 1;
  }
  else
  {
    while ( v4 != a2 )
    {
      v5 = *(_QWORD *)(v4 + 8);
      if ( v5 == a1 + 24 )
        v4 = 0LL;
      else
        v4 = v5 - 8;
      if ( !v4 )
        goto LABEL_7;
    }
    return 0;
  }
}
