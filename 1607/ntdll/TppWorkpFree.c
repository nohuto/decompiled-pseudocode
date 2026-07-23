/*
 * XREFs of TppWorkpFree @ 0x18003B5A0
 * Callers:
 *     TppWorkCallbackEpilog @ 0x180020600 (TppWorkCallbackEpilog.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18003B5E0 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppWorkpFree(PVOID BaseAddress)
{
  TppCleanupGroupMemberDestroy(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
}
