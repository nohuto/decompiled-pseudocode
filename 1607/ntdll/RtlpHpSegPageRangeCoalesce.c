/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x18003ED5C
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x18003E92C (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18001C040 (RtlRbRemoveNode.c)
 *     RtlpHpSegLockRelease @ 0x18003BB6C (RtlpHpSegLockRelease.c)
 *     RtlpHpSegLockAcquire @ 0x18003BB8C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegPageRangeDecommit @ 0x180041808 (RtlpHpSegPageRangeDecommit.c)
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeCoalesce(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 *v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // r14d
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int8 v13; // al
  char v14; // dl
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // cl
  unsigned __int8 v19; // al

  while ( 1 )
  {
    v6 = 0LL;
    v7 = (__int64)(a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 5;
    v8 = (unsigned __int8)~*(_BYTE *)(a2 + 26);
    if ( (unsigned int)v7 + *(unsigned __int8 *)(a2 + 27) <= 0xFF )
    {
      v6 = (unsigned __int64 *)(a2 + 32LL * *(unsigned __int8 *)(a2 + 27));
      if ( (v6[3] & 4) != 0 )
        v6 = 0LL;
    }
    if ( (unsigned int)v7 > 2 )
    {
      v9 = (unsigned __int64 *)(a2 - 32);
      if ( (*(_BYTE *)(a2 - 32 + 24) & 8) == 0 )
        v9 -= 4 * *((unsigned __int8 *)v9 + 27);
      if ( (v9[3] & 4) != 0 )
        v9 = 0LL;
      if ( v9 )
      {
        RtlRbRemoveNode(a1 + 15, v9);
        v18 = 8;
        *v9 = 0LL;
        v9[1] = 0LL;
        v9[2] = 0LL;
        v19 = ~*((_BYTE *)v9 + 26);
        *(_DWORD *)v9 = -857879331;
        a1[3] -= v19;
        *((_BYTE *)v9 + 27) += *(_BYTE *)(a2 + 27);
        v8 += (unsigned __int8)~*((_BYTE *)v9 + 26);
        *((_BYTE *)v9 + 26) = ~(_BYTE)v8;
        if ( *(_BYTE *)(a2 + 27) > 1u )
          v18 = 12;
        *(_BYTE *)(a2 + 24) &= ~v18;
        a2 = (unsigned __int64)v9;
        BYTE3(v9[4 * (unsigned int)*((unsigned __int8 *)v9 + 27) - 1]) = *((_BYTE *)v9 + 27) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x14u;
    if ( v6 )
    {
      RtlRbRemoveNode(a1 + 15, v6);
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
      v13 = ~*((_BYTE *)v6 + 26);
      *(_DWORD *)v6 = -857879331;
      a1[3] -= v13;
      if ( *(_BYTE *)(a2 + 27) != 1 )
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 27) - 1) + a2 + 24) &= ~4u;
      *(_BYTE *)(a2 + 27) += *((_BYTE *)v6 + 27);
      v8 += (unsigned __int8)~*((_BYTE *)v6 + 26);
      *(_BYTE *)(a2 + 26) = ~(_BYTE)v8;
      *((_BYTE *)v6 + 24) &= ~8u;
      v14 = *(_BYTE *)(a2 + 27) - 1;
      v15 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 27) - 1);
      *(_BYTE *)(v15 + a2 + 24) |= 4u;
      *(_BYTE *)(v15 + a2 + 27) = v14;
    }
    if ( !v8 )
      break;
    v10 = a1[1] >> 7;
    if ( v10 <= 8 )
      v10 = 8LL;
    if ( a1[3] + (unsigned __int64)v8 <= v10 )
      break;
    RtlpHpSegLockRelease((__int64)a1, a3);
    RtlpHpSegPageRangeDecommit(a1, a2, a2, *(unsigned __int8 *)(a2 + 27));
    RtlpHpSegLockAcquire((__int64)a1, (char *)a3, v16, v17);
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v11 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 27) - 1);
  *(_BYTE *)(v11 + a2 + 24) &= ~4u;
  *(_BYTE *)(a2 + 24) &= 0xEBu;
  return a2;
}
