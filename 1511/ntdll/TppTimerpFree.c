/*
 * XREFs of TppTimerpFree @ 0x18000A570
 * Callers:
 *     TpReleaseTimer @ 0x18000A4C0 (TpReleaseTimer.c)
 * Callees:
 *     TppDestroyTimer @ 0x18000CA80 (TppDestroyTimer.c)
 */

LOGICAL __fastcall TppTimerpFree(void *a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
