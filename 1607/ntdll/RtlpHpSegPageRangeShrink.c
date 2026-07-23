/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x18003E91C
 * Callers:
 *     RtlpHpSegAlloc @ 0x18003E7BC (RtlpHpSegAlloc.c)
 *     RtlpHpSegReAlloc @ 0x180043274 (RtlpHpSegReAlloc.c)
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegFree @ 0x18004C910 (RtlpHpSegFree.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001BC10 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegFreeRangeCompare @ 0x18003EC74 (RtlpHpSegFreeRangeCompare.c)
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x18003ED24 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18003ED4C (RtlpHpSegPageRangeCoalesce.c)
 */

void __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r14d
  __int64 v7; // rbx
  char v8; // di
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  int v12; // r15d
  char v13; // al
  __int64 v14; // rax
  _RTL_BALANCED_NODE *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rsi
  _RTL_BALANCED_NODE *v19; // rax

  v5 = *(unsigned __int8 *)(a2 + 27) - a3;
  v7 = a2 + 32LL * a3;
  v8 = a3;
  if ( v5 - 1 > 1 )
  {
    v10 = (_BYTE *)(v7 + 56);
    v11 = v5 - 2;
    do
    {
      *v10 &= ~4u;
      v10 += 32;
      --v11;
    }
    while ( v11 );
  }
  v12 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 88));
  if ( *(unsigned __int8 *)(a2 + 27) != v5 )
  {
    *(_BYTE *)(a2 + 27) = v8;
    *(_BYTE *)(a2 + 26) = ~v8;
  }
  *(_BYTE *)(v7 + 24) |= 8u;
  *(_BYTE *)(32LL * (v5 - 1) + v7 + 27) = v5 - 1;
  *(_BYTE *)(v7 + 27) = v5;
  v13 = RtlpHpSegPageRangeCountCommittedPages(v7, v5);
  *(_DWORD *)v7 = -857879331;
  *(_BYTE *)(v7 + 26) = ~v13;
  *(_BYTE *)(v7 + 24) &= 0xDEu;
  v14 = RtlpHpSegPageRangeCoalesce(a1, v7, a4);
  v15 = *(_RTL_BALANCED_NODE **)(a1 + 120);
  LOBYTE(v16) = 0;
  v17 = v14;
  v18 = *(unsigned __int16 *)(v14 + 26);
  if ( v15 )
  {
    while ( 1 )
    {
      if ( (int)RtlpHpSegFreeRangeCompare(v18, v15, v16) < 0 )
      {
        v19 = v15->Children[0];
        if ( !v15->Children[0] )
        {
          LOBYTE(v16) = 0;
          break;
        }
      }
      else
      {
        v19 = v15->Children[1];
        if ( !v19 )
        {
          LOBYTE(v16) = 1;
          break;
        }
      }
      v15 = v19;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 120), v15, v16, (PRTL_BALANCED_NODE)v17);
  *(_QWORD *)(a1 + 24) += (unsigned __int8)~*(_BYTE *)(v17 + 26);
  if ( !v12 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 88));
}
