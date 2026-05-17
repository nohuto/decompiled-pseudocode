/*
 * XREFs of TppTimerpFree @ 0x18003ED20
 * Callers:
 *     TpReleaseTimer @ 0x18003ED60 (TpReleaseTimer.c)
 * Callees:
 *     TppDestroyTimer @ 0x18003D7A4 (TppDestroyTimer.c)
 */

__int64 __fastcall TppTimerpFree(unsigned __int64 a1)
{
  TppDestroyTimer(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
