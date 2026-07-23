/*
 * XREFs of TppFreeThreadData @ 0x180082F3C
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

struct _TEB *__fastcall TppFreeThreadData(_DWORD *BaseAddress)
{
  struct _TEB *result; // rax

  if ( BaseAddress )
  {
    BaseAddress[2] |= 4u;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 2883584, BaseAddress);
    result = NtCurrentTeb();
    result->ThreadPoolData = 0LL;
  }
  return result;
}
