/*
 * XREFs of TppFreeWait @ 0x18007D390
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18003D7A4 (TppDestroyTimer.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 */

LOGICAL __fastcall TppFreeWait(__int64 a1)
{
  TppDestroyTimer(a1);
  NtClose(*(HANDLE *)(a1 + 360));
  *(_QWORD *)(a1 + 440) = 0LL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, (PVOID)a1);
}
