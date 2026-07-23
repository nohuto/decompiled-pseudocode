/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x14001D474
 * Callers:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x14001D1C0 (MiChangePageAttributeBatch.c)
 *     MiFlushCacheRange @ 0x1401F47C8 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x1407A64D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14001D7D0 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushHyperSpace @ 0x14009D9E8 (MiFlushHyperSpace.c)
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
