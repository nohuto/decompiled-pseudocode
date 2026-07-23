/*
 * XREFs of TppAllocThreadData @ 0x18006F5AC
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 */

struct _TEB *__fastcall TppAllocThreadData(struct _TEB **a1)
{
  struct _TEB *result; // rax
  struct _TEB *v3; // rdx

  *a1 = 0LL;
  result = (struct _TEB *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 2883584) | 8, 0x88uLL);
  v3 = result;
  if ( result )
  {
    LODWORD(result->NtTib.StackBase) |= 3u;
    result->NtTib.SubSystemTib = (void *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    result = NtCurrentTeb();
    result->ThreadPoolData = v3;
    *a1 = v3;
  }
  return result;
}
