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

unsigned __int64 __fastcall RtlpHpSegPageRangeCoalesce(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 *v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // r14d
  unsigned __int64 *v9; // rsi
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
        v10 = 8;
        *v9 = 0LL;
        v9[1] = 0LL;
        v9[2] = 0LL;
        v11 = ~*((_BYTE *)v9 + 26);
        *(_DWORD *)v9 = -857879331;
        a1[3] -= v11;
        *((_BYTE *)v9 + 27) += *(_BYTE *)(a2 + 27);
        v8 += (unsigned __int8)~*((_BYTE *)v9 + 26);
        *((_BYTE *)v9 + 26) = ~(_BYTE)v8;
        if ( *(_BYTE *)(a2 + 27) > 1u )
          v10 = 12;
        *(_BYTE *)(a2 + 24) &= ~v10;
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
      v12 = ~*((_BYTE *)v6 + 26);
      *(_DWORD *)v6 = -857879331;
      a1[3] -= v12;
      if ( *(_BYTE *)(a2 + 27) != 1 )
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 27) - 1) + a2 + 24) &= ~4u;
      *(_BYTE *)(a2 + 27) += *((_BYTE *)v6 + 27);
      v8 += (unsigned __int8)~*((_BYTE *)v6 + 26);
      *(_BYTE *)(a2 + 26) = ~(_BYTE)v8;
      *((_BYTE *)v6 + 24) &= ~8u;
      v13 = *(_BYTE *)(a2 + 27) - 1;
      v14 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 27) - 1);
      *(_BYTE *)(v14 + a2 + 24) |= 4u;
      *(_BYTE *)(v14 + a2 + 27) = v13;
    }
    if ( !v8 )
      break;
    v15 = a1[1] >> 7;
    if ( v15 <= 8 )
      v15 = 8LL;
    if ( a1[3] + (unsigned __int64)v8 <= v15 )
      break;
    RtlpHpSegLockRelease(a1, a3);
    RtlpHpSegPageRangeDecommit((__int64)a1, a2, a2, *(unsigned __int8 *)(a2 + 27));
    RtlpHpSegLockAcquire(a1, a3);
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v16 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 27) - 1);
  *(_BYTE *)(v16 + a2 + 24) &= ~4u;
  *(_BYTE *)(a2 + 24) &= 0xEBu;
  return a2;
}
