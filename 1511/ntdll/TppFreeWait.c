/*
 * XREFs of TppFreeWait @ 0x180006640
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18000CA80 (TppDestroyTimer.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

__int64 __fastcall TppFreeWait(__int64 a1)
{
  TppDestroyTimer();
  NtClose(*(HANDLE *)(a1 + 360));
  *(_QWORD *)(a1 + 440) = 0LL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 1835008), a1);
}
