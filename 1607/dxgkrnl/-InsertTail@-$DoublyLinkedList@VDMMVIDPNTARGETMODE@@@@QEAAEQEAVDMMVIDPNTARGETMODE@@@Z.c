/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C00046A8
 * Callers:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0003660 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C007E7D0 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C00046EC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z.c)
 */

char __fastcall DoublyLinkedList<DMMVIDPNTARGETMODE>::InsertTail(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  char result; // al

  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODE>::ContainsByReference(a1, a2, a3, a1) )
    return 0;
  v5 = (_QWORD *)(v3 + 8);
  v6 = *(_QWORD **)(v4 + 24);
  if ( *v6 != v4 + 16 )
    __fastfail(3u);
  *v5 = v4 + 16;
  v5[1] = v6;
  *v6 = v5;
  *(_QWORD *)(v4 + 24) = v5;
  result = 1;
  ++*(_QWORD *)(v4 + 32);
  return result;
}
