/*
 * XREFs of TppAlpcpFree @ 0x18007AC30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18003DB58 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppAlpcpFree(__int64 a1)
{
  unsigned __int64 v1; // rbx
  char *v2; // rdx
  volatile signed __int32 *v3; // r8
  __int64 v4; // r9

  v1 = a1 - 72;
  TpAdjustBindingCount(*(_QWORD *)(a1 + 136), 0xFFFFFFFF);
  *(_QWORD *)(v1 + 56) = 0LL;
  TppCleanupGroupMemberDestroy((_QWORD *)(v1 + 72), v2, v3, v4);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v1);
}
