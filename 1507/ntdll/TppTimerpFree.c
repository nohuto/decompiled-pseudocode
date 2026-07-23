/*
 * XREFs of TppTimerpFree @ 0x18003ED20
 * Callers:
 *     TpReleaseTimer @ 0x18003ED60 (TpReleaseTimer.c)
 * Callees:
 *     TppDestroyTimer @ 0x18003D7A4 (TppDestroyTimer.c)
 */

LOGICAL __fastcall TppTimerpFree(void *a1)
{
  TppDestroyTimer((__int64)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
