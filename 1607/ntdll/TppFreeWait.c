/*
 * XREFs of TppFreeWait @ 0x180064DF0
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18003B568 (TppDestroyTimer.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

LOGICAL __fastcall TppFreeWait(__int64 a1)
{
  TppDestroyTimer(a1);
  NtClose(*(HANDLE *)(a1 + 368));
  *(_QWORD *)(a1 + 448) = 0LL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, (PVOID)a1);
}
