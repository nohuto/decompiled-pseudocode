/*
 * XREFs of TppTimerpFree @ 0x18003A540
 * Callers:
 *     TpReleaseTimer @ 0x18003A490 (TpReleaseTimer.c)
 * Callees:
 *     TppDestroyTimer @ 0x18003B578 (TppDestroyTimer.c)
 */

__int64 __fastcall TppTimerpFree(__int64 a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x100000), a1);
}
