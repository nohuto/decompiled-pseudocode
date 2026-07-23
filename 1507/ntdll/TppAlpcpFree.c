/*
 * XREFs of TppAlpcpFree @ 0x18007AC30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18003DB58 (TpAdjustBindingCount.c)
 */

LOGICAL __fastcall TppAlpcpFree(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 - 72);
  TpAdjustBindingCount(*(_QWORD *)(a1 + 136), 0xFFFFFFFF);
  v1[7] = 0LL;
  TppCleanupGroupMemberDestroy(v1 + 9);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v1);
}
