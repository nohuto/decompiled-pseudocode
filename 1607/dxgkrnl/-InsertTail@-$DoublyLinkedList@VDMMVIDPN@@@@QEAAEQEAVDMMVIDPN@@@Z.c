/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000C948
 * Callers:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C00020B4 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C003386C (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C000C900 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEBVDMMVIDPN@@@Z.c)
 */

char __fastcall DoublyLinkedList<DMMVIDPN>::InsertTail(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  char result; // al

  if ( DoublyLinkedList<DMMVIDPN>::ContainsByReference(a1, a2) )
    return 0;
  v4 = (_QWORD *)(v2 + 8);
  v5 = *(_QWORD **)(v3 + 24);
  if ( *v5 != v3 + 16 )
    __fastfail(3u);
  *v4 = v3 + 16;
  v4[1] = v5;
  *v5 = v4;
  *(_QWORD *)(v3 + 24) = v4;
  result = 1;
  ++*(_QWORD *)(v3 + 32);
  return result;
}
