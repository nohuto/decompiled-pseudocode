/*
 * XREFs of MiSplitLargePfnBitMap @ 0x140576624
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 *     MiCreateLargePfnBitMaps @ 0x1405764F0 (MiCreateLargePfnBitMaps.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400FFBD4 (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitLargePfnBitMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 *v5; // rsi
  unsigned __int64 *i; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp

  v3 = 0;
  v4 = a2 + a3 - 1;
  v5 = MiLargePageSizes;
  for ( i = (unsigned __int64 *)(a1 + 5592); ; i += 2 )
  {
    v8 = i[1] + ((a2 / *v5) >> 3);
    v9 = ((v4 + *v5) & (unsigned __int64)~(*v5 - 1)) / *v5;
    if ( !(unsigned int)MiSplitBitmapPages(9u, v8, 8 * (i[1] + ((v9 + 7) >> 3) - v8)) )
      break;
    if ( v9 > *i )
      *i = v9;
    ++v3;
    ++v5;
    if ( v3 >= 2 )
      return 1LL;
  }
  return 0LL;
}
