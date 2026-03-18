/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000BAD4
 * Callers:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0005E20 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000BD20 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C002B78C (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C0092C38 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C000BB18 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z.c)
 */

char __fastcall DoublyLinkedList<DMMVIDPN>::InsertTail(__int64 a1, __int64 a2, __int64 a3)
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
