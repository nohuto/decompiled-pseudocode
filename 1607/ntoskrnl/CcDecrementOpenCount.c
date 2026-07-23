/*
 * XREFs of CcDecrementOpenCount @ 0x140073218
 * Callers:
 *     CcCompleteAsyncRead @ 0x14006E664 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x140071EB4 (CcPerformReadAhead.c)
 *     CcPurgeCacheSection @ 0x1400724A0 (CcPurgeCacheSection.c)
 *     CcSetFileSizesEx @ 0x140072FCC (CcSetFileSizesEx.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14008F218 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x1400A7C58 (CcGetFlushedValidData.c)
 *     CcMdlWriteComplete2 @ 0x1400B1818 (CcMdlWriteComplete2.c)
 *     CcWriteBehindInternal @ 0x1400E5DD0 (CcWriteBehindInternal.c)
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 *     CcMdlWriteAbort @ 0x1401B23E4 (CcMdlWriteAbort.c)
 * Callees:
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140070520 (CcInsertIntoDirtySharedCacheMapList.c)
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
    byte_1403231E1 = 1;
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
