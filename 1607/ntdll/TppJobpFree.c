/*
 * XREFs of TppJobpFree @ 0x180084760
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18003B5E0 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18003D2F8 (TpAdjustBindingCount.c)
 */

LOGICAL __fastcall TppJobpFree(_QWORD *a1)
{
  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  *(a1 - 2) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, a1 - 9);
}
