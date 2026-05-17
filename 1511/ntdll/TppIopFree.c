/*
 * XREFs of TppIopFree @ 0x180079300
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18000CFA0 (TpAdjustBindingCount.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 */

__int64 __fastcall TppIopFree(_QWORD *a1)
{
  TpAdjustBindingCount(a1[17], 0xFFFFFFFF);
  a1[31] = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, (unsigned __int64)a1);
}
