/*
 * XREFs of TppWorkpFree @ 0x18003B5B0
 * Callers:
 *     TppWorkCallbackEpilog @ 0x180020610 (TppWorkCallbackEpilog.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18003B5F0 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

__int64 __fastcall TppWorkpFree(__int64 a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
}
