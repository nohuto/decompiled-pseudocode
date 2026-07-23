/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x1800E7C78
 * Callers:
 *     RtlIsNameInExpression @ 0x1800E76B0 (RtlIsNameInExpression.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // eax
  PVOID Heap; // rax
  unsigned int v6; // r8d
  unsigned int v8; // r10d
  __int64 v9; // rsi
  unsigned __int16 v10; // r9
  __int16 v11; // cx

  v4 = *a2;
  *(_WORD *)(a1 + 2) = v4;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  *(_QWORD *)(a1 + 8) = Heap;
  v6 = 0;
  if ( !Heap )
    return 3221225495LL;
  v8 = *a2 >> 1;
  v9 = Nls844UnicodeUpcaseTable;
  while ( v6 < v8 )
  {
    v10 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v6);
    if ( v10 >= 0x61u )
    {
      if ( v10 > 0x7Au )
        v11 = v10
            + *(_WORD *)(v9
                       + 2LL
                       * ((v10 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(v9
                                                            + 2LL
                                                            * (((v10 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(v9
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v10 >> 8))))));
      else
        v11 = v10 - 32;
    }
    else
    {
      v11 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v6);
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * v6++) = v11;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
