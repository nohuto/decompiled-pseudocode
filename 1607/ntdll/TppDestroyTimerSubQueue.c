/*
 * XREFs of TppDestroyTimerSubQueue @ 0x180083CB8
 * Callers:
 *     TppInitializeTimerQueue @ 0x1800732D0 (TppInitializeTimerQueue.c)
 *     TppPoolpFree @ 0x180083BA8 (TppPoolpFree.c)
 * Callees:
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

NTSTATUS __fastcall TppDestroyTimerSubQueue(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  NtClose(*(HANDLE *)(a1 + 32));
  v2 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 96) = 0LL;
  result = NtClose(v2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
