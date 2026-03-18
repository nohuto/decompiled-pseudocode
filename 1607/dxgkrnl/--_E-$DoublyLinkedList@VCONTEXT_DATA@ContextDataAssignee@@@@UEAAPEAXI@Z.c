/*
 * XREFs of ??_E?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAPEAXI@Z @ 0x1C0034AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@@@QEAAXXZ @ 0x1C0034C60 (-Clear@-$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA>::`vftable';
  DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA>::Clear();
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
