/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x18003795C
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x180036344 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1800280B0 (RtlRbRemoveNode.c)
 *     RtlpHpSegPageRangeDecommit @ 0x1800370E8 (RtlpHpSegPageRangeDecommit.c)
 *     RtlpHpSegLockAcquire @ 0x1800392FC (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegLockRelease @ 0x18003931C (RtlpHpSegLockRelease.c)
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  _RTL_BALANCED_NODE *v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // r14d
  _RTL_BALANCED_NODE *v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int8 v13; // al
  char v14; // dl
  __int64 v15; // rcx
  char v16; // cl
  unsigned __int8 v17; // al

  while ( 1 )
  {
    v6 = 0LL;
    v7 = (__int64)(a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 5;
    v8 = (unsigned __int8)~*(_BYTE *)(a2 + 26);
    if ( (unsigned int)v7 + *(unsigned __int8 *)(a2 + 27) <= 0xFF )
    {
      v6 = (_RTL_BALANCED_NODE *)(a2 + 32LL * *(unsigned __int8 *)(a2 + 27));
      if ( ((__int64)v6[1].Children[0] & 4) != 0 )
        v6 = 0LL;
    }
    if ( (unsigned int)v7 > 2 )
    {
      v9 = (_RTL_BALANCED_NODE *)(a2 - 32);
      if ( (*(_BYTE *)(a2 - 32 + 24) & 8) == 0 )
        v9 = (_RTL_BALANCED_NODE *)((char *)v9 - 32 * BYTE3(v9[1].Left));
      if ( ((__int64)v9[1].Children[0] & 4) != 0 )
        v9 = 0LL;
      if ( v9 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 120), v9);
        v16 = 8;
        v9->Children[0] = 0LL;
        v9->Children[1] = 0LL;
        v9->ParentValue = 0LL;
        v17 = ~BYTE2(v9[1].Left);
        LODWORD(v9->Children[0]) = -857879331;
        *(_QWORD *)(a1 + 24) -= v17;
        BYTE3(v9[1].Left) += *(_BYTE *)(a2 + 27);
        v8 += (unsigned __int8)~BYTE2(v9[1].Left);
        BYTE2(v9[1].Left) = ~(_BYTE)v8;
        if ( *(_BYTE *)(a2 + 27) > 1u )
          v16 = 12;
        *(_BYTE *)(a2 + 24) &= ~v16;
        a2 = (unsigned __int64)v9;
        *((_BYTE *)v9 + 32 * (unsigned int)BYTE3(v9[1].Left) - 5) = BYTE3(v9[1].Left) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x14u;
    if ( v6 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 120), v6);
      v6->Children[0] = 0LL;
      v6->Children[1] = 0LL;
      v6->ParentValue = 0LL;
      v13 = ~BYTE2(v6[1].Left);
      LODWORD(v6->Children[0]) = -857879331;
      *(_QWORD *)(a1 + 24) -= v13;
      if ( *(_BYTE *)(a2 + 27) != 1 )
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 27) - 1) + a2 + 24) &= ~4u;
      *(_BYTE *)(a2 + 27) += BYTE3(v6[1].Left);
      v8 += (unsigned __int8)~BYTE2(v6[1].Left);
      *(_BYTE *)(a2 + 26) = ~(_BYTE)v8;
      LOBYTE(v6[1].Children[0]) &= ~8u;
      v14 = *(_BYTE *)(a2 + 27) - 1;
      v15 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 27) - 1);
      *(_BYTE *)(v15 + a2 + 24) |= 4u;
      *(_BYTE *)(v15 + a2 + 27) = v14;
    }
    if ( !v8 )
      break;
    v10 = *(_QWORD *)(a1 + 8) >> 7;
    if ( v10 <= 8 )
      v10 = 8LL;
    if ( *(_QWORD *)(a1 + 24) + (unsigned __int64)v8 <= v10 )
      break;
    RtlpHpSegLockRelease(a1, a3);
    RtlpHpSegPageRangeDecommit(a1, a2, a2, *(unsigned __int8 *)(a2 + 27));
    RtlpHpSegLockAcquire(a1, a3);
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v11 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 27) - 1);
  *(_BYTE *)(v11 + a2 + 24) &= ~4u;
  *(_BYTE *)(a2 + 24) &= 0xEBu;
  return a2;
}
