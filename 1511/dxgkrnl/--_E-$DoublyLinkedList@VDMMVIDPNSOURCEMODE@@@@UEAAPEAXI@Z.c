/*
 * XREFs of ??_E?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C002BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAXXZ @ 0x1C00066B0 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void (__fastcall ***__fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vector deleting destructor'(
        void (__fastcall ***a1)(_QWORD, __int64),
        char a2))(_QWORD, __int64)
{
  *a1 = (void (__fastcall **)(_QWORD, __int64))&DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE>::Clear(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
