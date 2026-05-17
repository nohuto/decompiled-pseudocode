/*
 * XREFs of TppWorkpFree @ 0x18003D7D0
 * Callers:
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     TpReleaseWork @ 0x18003CA20 (TpReleaseWork.c)
 *     TppWorkCallbackEpilog @ 0x18003D750 (TppWorkCallbackEpilog.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 */

__int64 __fastcall TppWorkpFree(unsigned __int64 a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a1);
}
