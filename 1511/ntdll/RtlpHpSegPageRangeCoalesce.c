/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x180058E64
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x180058A98 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlpHpSegPageRangeDecommit @ 0x18001A808 (RtlpHpSegPageRangeDecommit.c)
 *     RtlRbRemoveNode @ 0x18002DBF0 (RtlRbRemoveNode.c)
 *     RtlpHpSegLockAcquire @ 0x180059098 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegLockRelease @ 0x1800590B8 (RtlpHpSegLockRelease.c)
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  _RTL_BALANCED_NODE *v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // r14d
  _RTL_BALANCED_NODE *v9; // rsi
  char v10; // cl
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  char v13; // dl
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx

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
        v10 = 8;
        v9->Children[0] = 0LL;
        v9->Children[1] = 0LL;
        v9->ParentValue = 0LL;
        v11 = ~BYTE2(v9[1].Left);
        LODWORD(v9->Children[0]) = -857879331;
        *(_QWORD *)(a1 + 24) -= v11;
        BYTE3(v9[1].Left) += *(_BYTE *)(a2 + 27);
        v8 += (unsigned __int8)~BYTE2(v9[1].Left);
        BYTE2(v9[1].Left) = ~(_BYTE)v8;
        if ( *(_BYTE *)(a2 + 27) > 1u )
          v10 = 12;
        *(_BYTE *)(a2 + 24) &= ~v10;
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
      v12 = ~BYTE2(v6[1].Left);
      LODWORD(v6->Children[0]) = -857879331;
      *(_QWORD *)(a1 + 24) -= v12;
      if ( *(_BYTE *)(a2 + 27) != 1 )
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 27) - 1) + a2 + 24) &= ~4u;
      *(_BYTE *)(a2 + 27) += BYTE3(v6[1].Left);
      v8 += (unsigned __int8)~BYTE2(v6[1].Left);
      *(_BYTE *)(a2 + 26) = ~(_BYTE)v8;
      LOBYTE(v6[1].Children[0]) &= ~8u;
      v13 = *(_BYTE *)(a2 + 27) - 1;
      v14 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 27) - 1);
      *(_BYTE *)(v14 + a2 + 24) |= 4u;
      *(_BYTE *)(v14 + a2 + 27) = v13;
    }
    if ( !v8 )
      break;
    v15 = *(_QWORD *)(a1 + 8) >> 7;
    if ( v15 <= 8 )
      v15 = 8LL;
    if ( *(_QWORD *)(a1 + 24) + (unsigned __int64)v8 <= v15 )
      break;
    RtlpHpSegLockRelease(a1, a3);
    RtlpHpSegPageRangeDecommit(a1, a2, a2, *(unsigned __int8 *)(a2 + 27));
    RtlpHpSegLockAcquire(a1, a3);
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v16 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 27) - 1);
  *(_BYTE *)(v16 + a2 + 24) &= ~4u;
  *(_BYTE *)(a2 + 24) &= 0xEBu;
  return a2;
}
