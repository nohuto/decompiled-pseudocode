/*
 * XREFs of MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400E5B38
 * Callers:
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1400E57F0 (MiChangePageAttributeBatch.c)
 *     MiFlushCacheRange @ 0x14022D8D8 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x1407C8714 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1400E5C30 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 v5; // rbx
  unsigned int v7; // edi
  __int64 v8; // r14
  int v9; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v10; // [rsp+24h] [rbp-E4h]
  int v11; // [rsp+28h] [rbp-E0h]
  int v12; // [rsp+2Ch] [rbp-DCh]
  __int64 v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+38h] [rbp-D0h]

  v12 = 0;
  v3 = 0;
  v9 = 0;
  v13 = 0LL;
  v5 = a2;
  v14 = 0LL;
  v10 = 0;
  v11 = 20;
  if ( a3 == 2 )
    v3 = 2;
  if ( a2 )
  {
    v7 = v3 | 0xC0000000;
    do
    {
      v8 = MiMapPageInHyperSpaceWorker(a1, 0LL, v7);
      KeInvalidateRangeAllCachesNoIpi(v8, 4096LL);
      MiUnmapPageInHyperSpaceWorker(v8, 0x11u);
      if ( a3 == 3 )
        MiInsertTbFlushEntry((__int64)&v9, v8, 1LL, 0);
      ++a1;
      --v5;
    }
    while ( v5 );
  }
  if ( a3 == 3 )
    MiFlushTbList((__int64)&v9);
}
