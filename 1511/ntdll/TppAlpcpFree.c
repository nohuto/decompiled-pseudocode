/*
 * XREFs of TppAlpcpFree @ 0x18006BE50
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18000CFA0 (TpAdjustBindingCount.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
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
