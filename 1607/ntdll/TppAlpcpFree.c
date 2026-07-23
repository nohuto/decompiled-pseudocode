/*
 * XREFs of TppAlpcpFree @ 0x180065520
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18003B5E0 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18003D2F8 (TpAdjustBindingCount.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppAlpcpFree(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 - 72);
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFF);
  v1[7] = 0LL;
  TppCleanupGroupMemberDestroy(v1 + 9);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v1);
}
