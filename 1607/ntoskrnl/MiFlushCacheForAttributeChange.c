/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x14001D8F4
 * Callers:
 *     MiChangePageAttribute @ 0x14001D088 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x14001D640 (MiChangePageAttributeBatch.c)
 *     MiFlushCacheRange @ 0x1401F499C (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x1407A64D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001DBA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14001DC50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034990 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushHyperSpace @ 0x14009E1E8 (MiFlushHyperSpace.c)
 */

__int64 __fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rdx

  v3 = 0;
  result = 268435458LL;
  v6 = a2;
  if ( a3 == 2 )
    v3 = 268435458;
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
      --v6;
    }
    while ( v6 );
  }
  if ( a3 == 3 )
    return MiFlushHyperSpace();
  return result;
}
