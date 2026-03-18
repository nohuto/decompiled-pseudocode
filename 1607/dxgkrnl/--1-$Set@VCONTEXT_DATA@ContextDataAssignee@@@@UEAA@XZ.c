/*
 * XREFs of ??1?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ @ 0x1C0034A6C
 * Callers:
 *     ??_G?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAPEAXI@Z @ 0x1C0034B30 (--_G-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAPEAXI@Z.c)
 *     ??_EDMMVIDEOPRESENTSOURCE@@UEAAPEAXI@Z @ 0x1C0034BC0 (--_EDMMVIDEOPRESENTSOURCE@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Set<ContextDataAssignee::CONTEXT_DATA>::~Set<ContextDataAssignee::CONTEXT_DATA>(_QWORD *a1)
{
  *a1 = &Set<ContextDataAssignee::CONTEXT_DATA>::`vftable';
  a1[1] = &DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA>::`vftable';
  return DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA>::Clear();
}
