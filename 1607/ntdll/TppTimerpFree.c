/*
 * XREFs of TppTimerpFree @ 0x18003A530
 * Callers:
 *     TpReleaseTimer @ 0x18003A480 (TpReleaseTimer.c)
 * Callees:
 *     TppDestroyTimer @ 0x18003B568 (TppDestroyTimer.c)
 */

LOGICAL __fastcall TppTimerpFree(void *a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
