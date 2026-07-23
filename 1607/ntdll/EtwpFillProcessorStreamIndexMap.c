/*
 * XREFs of EtwpFillProcessorStreamIndexMap @ 0x180002DBC
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800550D0 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 */

__int64 __fastcall EtwpFillProcessorStreamIndexMap(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // r10d
  unsigned int i; // r11d
  _QWORD *Heap; // r8
  unsigned __int16 v11; // r11
  unsigned __int16 v12; // dx
  unsigned int v13; // r9d
  char *j; // r14
  unsigned __int16 v15; // si
  __int64 v16; // rcx
  __int64 result; // rax

  v6 = 8 * a2;
  for ( i = 0; i < a4; i += (*(unsigned __int16 *)(i + a3 + 4) + 7) & 0xFFFFFFF8 )
    v6 += 2 * *(_DWORD *)(i + a3 + 44);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v6);
  if ( !Heap )
    return 3221225495LL;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  for ( j = (char *)&Heap[a2]; v13 < a4; v13 += (*(unsigned __int16 *)(v13 + a3 + 4) + 7) & 0xFFFFFFF8 )
  {
    v15 = 0;
    for ( Heap[v12] = &j[2 * v11]; (unsigned int)v15 < *(_DWORD *)(v13 + a3 + 44); ++v15 )
    {
      v16 = v11;
      *(_WORD *)&j[2 * v11] = v11;
      ++v11;
      *(_WORD *)(*(_QWORD *)(a1 + 520) + 4 * v16) = v12;
      *(_WORD *)(*(_QWORD *)(a1 + 520) + 4 * v16 + 2) = v15;
    }
    ++v12;
  }
  *(_DWORD *)(a1 + 496) = v12;
  result = 0LL;
  *(_QWORD *)(a1 + 504) = Heap;
  return result;
}
