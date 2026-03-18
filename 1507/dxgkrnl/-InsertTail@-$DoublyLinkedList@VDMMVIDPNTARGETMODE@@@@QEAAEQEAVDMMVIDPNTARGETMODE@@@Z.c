/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C00045DC
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAA@AEBV0@@Z @ 0x1C0004444 (--0-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAA@AEBV0@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C008841C (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0004620 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z.c)
 */

char __fastcall DoublyLinkedList<DMMVIDPNTARGETMODE>::InsertTail(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  char result; // al

  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODE>::ContainsByReference(a1, a2, a3, a1) )
    return 0;
  v5 = (_QWORD *)(v3 + 8);
  v6 = *(_QWORD **)(v4 + 24);
  *v5 = v4 + 16;
  v5[1] = v6;
  if ( *v6 != v4 + 16 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v4 + 24) = v5;
  result = 1;
  ++*(_QWORD *)(v4 + 32);
  return result;
}
