/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x18003E92C
 * Callers:
 *     RtlpHpSegAlloc @ 0x18003E7CC (RtlpHpSegAlloc.c)
 *     RtlpHpSegReAlloc @ 0x180043284 (RtlpHpSegReAlloc.c)
 *     RtlpHpFreeHeap @ 0x180047A70 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegFree @ 0x18004C920 (RtlpHpSegFree.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001BC20 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegFreeRangeCompare @ 0x18003EC84 (RtlpHpSegFreeRangeCompare.c)
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x18003ED34 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18003ED5C (RtlpHpSegPageRangeCoalesce.c)
 */

signed __int64 __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  unsigned int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // rbx
  char v8; // di
  _BYTE *v10; // rcx
  int v11; // r15d
  char v12; // al
  __int64 v13; // rax
  _QWORD *v14; // rbx
  _BOOL8 v15; // r8
  unsigned __int64 v16; // rdi
  __int64 v17; // rsi
  _QWORD *v18; // rax
  signed __int64 result; // rax

  v4 = a4;
  v5 = *(unsigned __int8 *)(a2 + 27) - (_DWORD)a3;
  v6 = a2;
  v7 = a2 + 32LL * (unsigned int)a3;
  v8 = a3;
  if ( v5 - 1 > 1 )
  {
    v10 = (_BYTE *)(v7 + 56);
    a2 = v5 - 2;
    do
    {
      *v10 &= ~4u;
      v10 += 32;
      --a2;
    }
    while ( a2 );
  }
  v11 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 88, (char *)a2, a3, a4);
  if ( *(unsigned __int8 *)(v6 + 27) != v5 )
  {
    *(_BYTE *)(v6 + 27) = v8;
    *(_BYTE *)(v6 + 26) = ~v8;
  }
  *(_BYTE *)(v7 + 24) |= 8u;
  *(_BYTE *)(32LL * (v5 - 1) + v7 + 27) = v5 - 1;
  *(_BYTE *)(v7 + 27) = v5;
  v12 = RtlpHpSegPageRangeCountCommittedPages(v7, v5);
  *(_DWORD *)v7 = -857879331;
  *(_BYTE *)(v7 + 26) = ~v12;
  *(_BYTE *)(v7 + 24) &= 0xDEu;
  v13 = RtlpHpSegPageRangeCoalesce(a1, v7, v4);
  v14 = *(_QWORD **)(a1 + 120);
  LOBYTE(v15) = 0;
  v16 = v13;
  v17 = *(unsigned __int16 *)(v13 + 26);
  if ( v14 )
  {
    while ( 1 )
    {
      if ( (int)RtlpHpSegFreeRangeCompare(v17, v14, v15) < 0 )
      {
        v18 = (_QWORD *)*v14;
        if ( !*v14 )
        {
          LOBYTE(v15) = 0;
          break;
        }
      }
      else
      {
        v18 = (_QWORD *)v14[1];
        if ( !v18 )
        {
          LOBYTE(v15) = 1;
          break;
        }
      }
      v14 = v18;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 120), (unsigned __int64)v14, v15, v16);
  result = (unsigned __int8)~*(_BYTE *)(v16 + 26);
  *(_QWORD *)(a1 + 24) += result;
  if ( !v11 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 88));
  return result;
}
