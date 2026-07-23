/*
 * XREFs of RtlpHpSegPageRangeSplit @ 0x18003EC90
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA7C (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x18003ED24 (RtlpHpSegPageRangeCountCommittedPages.c)
 */

__int64 __fastcall RtlpHpSegPageRangeSplit(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  int v3; // r8d
  __int64 v4; // r9
  char v5; // al
  __int64 v6; // r9
  unsigned int v7; // r10d
  __int64 v8; // r11
  char v9; // al
  __int64 v10; // r9
  __int64 v11; // r11

  v2 = *(unsigned __int8 *)(a1 + 27);
  if ( v2 == a2 )
    return 0LL;
  v3 = v2 - a2;
  v4 = a1 + 32LL * a2;
  *(_BYTE *)(v4 + 24) |= 8u;
  *(_BYTE *)(32LL * (unsigned int)(v3 - 1) + v4 + 27) = v3 - 1;
  *(_BYTE *)(v4 + 27) = v3;
  v5 = RtlpHpSegPageRangeCountCommittedPages(v4, (unsigned __int8)v3);
  *(_DWORD *)v6 = -857879331;
  *(_BYTE *)(v6 + 26) = ~v5;
  *(_BYTE *)(32LL * (v7 - 1) + v8 + 27) = v7 - 1;
  *(_BYTE *)(v8 + 27) = v7;
  v9 = RtlpHpSegPageRangeCountCommittedPages(v8, v7);
  *(_BYTE *)(v11 + 26) = ~v9;
  return v10;
}
