/*
 * XREFs of LdrpLogNewDllLoadInternal @ 0x1800D19B0
 * Callers:
 *     LdrLogNewDataDllLoad @ 0x18002D37C (LdrLogNewDataDllLoad.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002F25C (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

int __fastcall LdrpLogNewDllLoadInternal(__int64 a1, __int64 a2, int a3, unsigned int a4, void *Src)
{
  size_t v6; // rsi
  unsigned int v9; // ebp
  _DWORD *Heap; // rax
  _DWORD *v11; // rdi
  __int16 v12; // ax

  v6 = a4;
  v9 = a4 + 54;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, a4 + 54);
  v11 = Heap;
  if ( Heap )
  {
    v12 = 5296;
    if ( (unsigned int)(a3 - 5) <= 1 )
      v12 = 5297;
    v11[12] = a3;
    *((_WORD *)v11 + 3) = v12;
    *((_QWORD *)v11 + 4) = a1;
    *((_QWORD *)v11 + 5) = a2;
    memmove(v11 + 13, Src, v6);
    *((_WORD *)v11 + (v6 >> 1) + 26) = 0;
    NtTraceEvent((HANDLE)MEMORY[0x7FFE0384], 0x403u, v9 - 32, v11);
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  }
  return (int)Heap;
}
