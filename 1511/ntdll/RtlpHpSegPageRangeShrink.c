/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x180058A98
 * Callers:
 *     RtlpHpSegReAlloc @ 0x18001A9C0 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegFree @ 0x18001B3B4 (RtlpHpSegFree.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegAlloc @ 0x18005895C (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x180031350 (RtlRbInsertNodeEx.c)
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x180058E40 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180058E64 (RtlpHpSegPageRangeCoalesce.c)
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
  __int64 *v15; // rdx
  BOOLEAN v16; // r8
  __int64 v17; // rbx
  unsigned __int16 v18; // cx
  __int64 *v19; // rax

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
  v15 = *(__int64 **)(a1 + 120);
  v16 = 0;
  v17 = v14;
  v18 = *(_WORD *)(v14 + 26);
  if ( v15 )
  {
    while ( 1 )
    {
      if ( v18 < *((_WORD *)v15 + 13) )
      {
        v19 = (__int64 *)*v15;
        if ( !*v15 )
        {
          v16 = 0;
          break;
        }
      }
      else
      {
        v19 = (__int64 *)v15[1];
        if ( !v19 )
        {
          v16 = 1;
          break;
        }
      }
      v15 = v19;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 120), (PRTL_BALANCED_NODE)v15, v16, (PRTL_BALANCED_NODE)v17);
  *(_QWORD *)(a1 + 24) += (unsigned __int8)~*(_BYTE *)(v17 + 26);
  if ( !v12 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 88));
}
