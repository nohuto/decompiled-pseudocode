/*
 * XREFs of MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400A9904
 * Callers:
 *     MiChangePageAttributeBatch @ 0x1400A9630 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiFlushCacheRange @ 0x1401E1D4C (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x14074DBEC (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x140010528 (MiFlushHyperSpace.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1400A9A70 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 v5; // rbp
  __int64 result; // rax
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rdx

  v3 = 0;
  v5 = a2;
  result = 2LL;
  if ( a3 == 2 )
    v3 = 2;
  if ( a2 )
  {
    v8 = v3 | 0xC0000000;
    do
    {
      v9 = MiMapPageInHyperSpaceWorker(a1, 0LL, v8);
      KeInvalidateRangeAllCachesNoIpi(v9, 4096LL);
      LOBYTE(v10) = 17;
      result = MiUnmapPageInHyperSpaceWorker(v9, v10, 0x80000000LL);
      ++a1;
      --v5;
    }
    while ( v5 );
  }
  if ( a3 == 3 )
    return MiFlushHyperSpace();
  return result;
}
