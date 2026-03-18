/*
 * XREFs of CcDecrementOpenCount @ 0x140073698
 * Callers:
 *     CcCompleteAsyncRead @ 0x14006EAE4 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x140072334 (CcPerformReadAhead.c)
 *     CcPurgeCacheSection @ 0x140072920 (CcPurgeCacheSection.c)
 *     CcSetFileSizesEx @ 0x14007344C (CcSetFileSizesEx.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14008FAB8 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x1400A96D8 (CcGetFlushedValidData.c)
 *     CcMdlWriteComplete2 @ 0x1400B3998 (CcMdlWriteComplete2.c)
 *     CcWriteBehindInternal @ 0x1400E7F30 (CcWriteBehindInternal.c)
 *     CcFlushCachePriv @ 0x1400E8E10 (CcFlushCachePriv.c)
 *     CcUnmapInactiveViews @ 0x14014199C (CcUnmapInactiveViews.c)
 *     CcMdlWriteAbort @ 0x1401B2500 (CcMdlWriteAbort.c)
 * Callees:
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1400709A0 (CcInsertIntoDirtySharedCacheMapList.c)
 */

char __fastcall CcDecrementOpenCount(_DWORD *a1)
{
  char v2; // r10
  char result; // al
  int v4; // edx
  char v5; // r9

  if ( a1[1]-- == 1 )
  {
    v2 = 1;
    result = 0;
    byte_1403231C1 = 1;
    v4 = a1[38];
    if ( (v4 & 0x10000) != 0 )
    {
      if ( !a1[28] )
        CcInsertIntoDirtySharedCacheMapList((__int64)a1);
      return CcScheduleLazyWriteScan(v2, v2);
    }
    else if ( !a1[28] && (v4 & 0x20) == 0 )
    {
      CcInsertIntoDirtySharedCacheMapList((__int64)a1);
      return CcScheduleLazyWriteScan(v5, 0);
    }
  }
  return result;
}
