/*
 * XREFs of TppWorkpFree @ 0x18000CA40
 * Callers:
 *     TppWorkCallbackEpilog @ 0x18002D3C0 (TppWorkCallbackEpilog.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 */

__int64 __fastcall TppWorkpFree(__int64 a1)
{
  TppCleanupGroupMemberDestroy();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
}
