/*
 * XREFs of EtwpFillProcessorStreamIndexMap @ 0x1800F4224
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800769B4 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 */

__int64 __fastcall EtwpFillProcessorStreamIndexMap(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // r10d
  unsigned int i; // r11d
  _QWORD *Heap; // r8
  __int64 result; // rax
  unsigned __int16 v12; // r11
  unsigned __int16 v13; // dx
  unsigned int v14; // r9d
  char *j; // r14
  unsigned __int16 v16; // si
  __int64 v17; // rcx

  v6 = 8 * a2;
  for ( i = 0; i < a4; i += (*(unsigned __int16 *)(i + a3 + 4) + 7) & 0xFFFFFFF8 )
    v6 += 2 * *(_DWORD *)(i + a3 + 44);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v6);
  if ( !Heap )
    return 3221225495LL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  for ( j = (char *)&Heap[a2]; v14 < a4; v14 += (*(unsigned __int16 *)(v14 + a3 + 4) + 7) & 0xFFFFFFF8 )
  {
    v16 = 0;
    for ( Heap[v13] = &j[2 * v12]; (unsigned int)v16 < *(_DWORD *)(v14 + a3 + 44); ++v16 )
    {
      v17 = v12;
      *(_WORD *)&j[2 * v12] = v12;
      ++v12;
      *(_WORD *)(*(_QWORD *)(a1 + 528) + 4 * v17) = v13;
      *(_WORD *)(*(_QWORD *)(a1 + 528) + 4 * v17 + 2) = v16;
    }
    ++v13;
  }
  *(_DWORD *)(a1 + 504) = v13;
  result = 0LL;
  *(_QWORD *)(a1 + 512) = Heap;
  return result;
}
