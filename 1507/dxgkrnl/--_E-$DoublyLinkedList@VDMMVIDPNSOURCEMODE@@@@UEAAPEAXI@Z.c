/*
 * XREFs of ??_E?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C002C190
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAXXZ @ 0x1C0003258 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE>::Clear((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
