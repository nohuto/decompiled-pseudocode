/*
 * XREFs of CcDecrementOpenCount @ 0x1400B0D78
 * Callers:
 *     CcPurgeCacheSection @ 0x14000EA84 (CcPurgeCacheSection.c)
 *     CcSetFileSizesEx @ 0x1400AED28 (CcSetFileSizesEx.c)
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x1400B0530 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1400E4064 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x1400E9118 (CcGetFlushedValidData.c)
 *     CcMdlWriteComplete2 @ 0x1400F23A4 (CcMdlWriteComplete2.c)
 *     CcCompleteAsyncRead @ 0x1400FB54C (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x1400FC4E4 (CcPerformReadAhead.c)
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 *     CcMdlWriteAbort @ 0x1401A97BC (CcMdlWriteAbort.c)
 * Callees:
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1400AFA68 (CcInsertIntoDirtySharedCacheMapList.c)
 */

BOOLEAN __fastcall CcDecrementOpenCount(_DWORD *a1)
{
  char v2; // r10
  BOOLEAN result; // al
  int v4; // edx
  char v5; // r9

  if ( a1[1]-- == 1 )
  {
    v2 = 1;
    result = 0;
    byte_1402FDBA1 = 1;
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
