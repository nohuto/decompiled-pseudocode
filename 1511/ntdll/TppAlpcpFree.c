/*
 * XREFs of TppAlpcpFree @ 0x18006BE50
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18000CFA0 (TpAdjustBindingCount.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 */

__int64 __fastcall TppAlpcpFree(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 - 72;
  TpAdjustBindingCount(*(_QWORD *)(a1 + 136), 0xFFFFFFFF);
  *(_QWORD *)(v1 + 56) = 0LL;
  TppCleanupGroupMemberDestroy((_QWORD *)(v1 + 72));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v1);
}
