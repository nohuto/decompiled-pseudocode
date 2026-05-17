/*
 * XREFs of TppDestroyTimerSubQueue @ 0x18007F7F8
 * Callers:
 *     TppInitializeTimerQueue @ 0x180007C34 (TppInitializeTimerQueue.c)
 *     TppPoolpFree @ 0x18007F6E8 (TppPoolpFree.c)
 * Callees:
 *     NtClose @ 0x1800A52A0 (NtClose.c)
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
