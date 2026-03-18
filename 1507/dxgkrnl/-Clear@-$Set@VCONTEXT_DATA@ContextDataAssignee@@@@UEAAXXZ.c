/*
 * XREFs of ?Clear@?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAXXZ @ 0x1C002CA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Set<ContextDataAssignee::CONTEXT_DATA>::Clear(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA>::Clear(a1 + 8, a2, a3, a4);
}
