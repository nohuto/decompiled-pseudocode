/*
 * XREFs of LdrpLogNewDllLoadInternal @ 0x1800BD728
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180040678 (LdrpMapDllWithSectionHandle.c)
 *     LdrLogNewDataDllLoad @ 0x18006B4BC (LdrLogNewDataDllLoad.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memmove @ 0x180098200 (memmove.c)
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
