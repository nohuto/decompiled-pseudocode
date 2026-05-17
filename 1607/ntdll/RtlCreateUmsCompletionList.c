/*
 * XREFs of RtlCreateUmsCompletionList @ 0x1800EC3F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     ZwCreateEvent @ 0x1800A6D20 (ZwCreateEvent.c)
 */

__int64 __fastcall RtlCreateUmsCompletionList(_QWORD *a1)
{
  _QWORD *Heap; // rbx
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp-48h]

  Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  if ( Heap )
  {
    result = ZwCreateEvent();
    v4 = result;
    if ( (int)result < 0 )
      goto LABEL_6;
    *Heap = Heap + 3;
    Heap[3] = 0LL;
    *a1 = Heap;
    result = 0LL;
  }
  else
  {
    result = 3221225495LL;
  }
  v4 = result;
LABEL_6:
  if ( (int)result < 0 )
  {
    if ( Heap )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
      return v4;
    }
  }
  return result;
}
