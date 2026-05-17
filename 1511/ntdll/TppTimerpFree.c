/*
 * XREFs of TppTimerpFree @ 0x18000A570
 * Callers:
 *     TpReleaseTimer @ 0x18000A4C0 (TpReleaseTimer.c)
 * Callees:
 *     TppDestroyTimer @ 0x18000CA80 (TppDestroyTimer.c)
 */

__int64 __fastcall TppTimerpFree(__int64 a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x100000), a1);
}
