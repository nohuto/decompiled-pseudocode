/*
 * XREFs of ??1?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ @ 0x1C002C8CC
 * Callers:
 *     ??_G?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAPEAXI@Z @ 0x1C002C960 (--_G-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAPEAXI@Z.c)
 *     ??_EDMMVIDEOPRESENTSOURCE@@UEAAPEAXI@Z @ 0x1C002C990 (--_EDMMVIDEOPRESENTSOURCE@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Set<ContextDataAssignee::CONTEXT_DATA>::~Set<ContextDataAssignee::CONTEXT_DATA>(_QWORD *a1)
{
  *a1 = &Set<ContextDataAssignee::CONTEXT_DATA>::`vftable';
  a1[1] = &DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA>::`vftable';
  return DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA>::Clear();
}
