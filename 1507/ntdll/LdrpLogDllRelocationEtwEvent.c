/*
 * XREFs of LdrpLogDllRelocationEtwEvent @ 0x180073784
 * Callers:
 *     LdrpRelocateImage @ 0x180073308 (LdrpRelocateImage.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

int __fastcall LdrpLogDllRelocationEtwEvent(const void **a1, void *a2, void *a3, void *a4)
{
  _UNKNOWN **Heap; // rax
  unsigned int v9; // edi
  _WORD *v10; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  Heap = &retaddr;
  if ( MEMORY[0x7FFE0384] )
  {
    v9 = *(unsigned __int16 *)a1 + 64;
    Heap = (_UNKNOWN **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v9);
    v10 = Heap;
    if ( Heap )
    {
      Heap[4] = a2;
      Heap[5] = a3;
      *((_WORD *)Heap + 3) = 5152;
      Heap[6] = a4;
      memmove(Heap + 7, a1[1], *(unsigned __int16 *)a1);
      v10[((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 28] = 0;
      NtTraceEvent((HANDLE)MEMORY[0x7FFE0384], 0x402u, v9 - 32, v10);
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    }
  }
  return (int)Heap;
}
