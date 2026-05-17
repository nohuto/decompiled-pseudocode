/*
 * XREFs of TppJobpFree @ 0x18007A6D0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18003DB58 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppJobpFree(_QWORD *a1)
{
  char *v2; // rdx
  volatile signed __int32 *v3; // r8
  __int64 v4; // r9

  TpAdjustBindingCount(a1[17], 0xFFFFFFFF);
  *(a1 - 2) = 0LL;
  TppCleanupGroupMemberDestroy(a1, v2, v3, v4);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, (unsigned __int64)(a1 - 9));
}
