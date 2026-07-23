/*
 * XREFs of TppIopFree @ 0x180079300
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18000CFA0 (TpAdjustBindingCount.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppIopFree(_QWORD *BaseAddress)
{
  TpAdjustBindingCount(BaseAddress[17], 0xFFFFFFFF);
  BaseAddress[31] = 0LL;
  TppCleanupGroupMemberDestroy(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, BaseAddress);
}
