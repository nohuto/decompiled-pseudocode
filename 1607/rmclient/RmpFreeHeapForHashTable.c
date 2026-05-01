/*
 * XREFs of RmpFreeHeapForHashTable @ 0x18000CE20
 * Callers:
 *     RmpClientSubscriptionAllocateState @ 0x180009E58 (RmpClientSubscriptionAllocateState.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RmpFreeHeapForHashTable(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
