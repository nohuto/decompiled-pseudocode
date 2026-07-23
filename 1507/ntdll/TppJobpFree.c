/*
 * XREFs of TppJobpFree @ 0x18007A6D0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18003DB58 (TpAdjustBindingCount.c)
 */

LOGICAL __fastcall TppJobpFree(_QWORD *a1)
{
  TpAdjustBindingCount(a1[17], 0xFFFFFFFF);
  *(a1 - 2) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, a1 - 9);
}
