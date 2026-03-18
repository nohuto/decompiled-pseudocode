/*
 * XREFs of CcScheduleLazyWriteScan @ 0x140030E38
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14002F920 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14002FE40 (CcSetDirtyInMask.c)
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     CcPerformReadAhead @ 0x1400333F0 (CcPerformReadAhead.c)
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 *     CcRescheduleLazyWriteScan @ 0x1400676E4 (CcRescheduleLazyWriteScan.c)
 *     CcGetFlushedValidData @ 0x140075C5C (CcGetFlushedValidData.c)
 *     CcSetFileSizesEx @ 0x140078B30 (CcSetFileSizesEx.c)
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 *     CcNotifyOfMappedWrite @ 0x1400E3EC4 (CcNotifyOfMappedWrite.c)
 *     CcCanIWrite @ 0x1400E4880 (CcCanIWrite.c)
 *     CcCompleteAsyncRead @ 0x14011D990 (CcCompleteAsyncRead.c)
 *     CcMdlWriteComplete2 @ 0x140128BC4 (CcMdlWriteComplete2.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14012FB7C (CcNotifyOfMappedWriteComplete.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140133BA4 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 *     CcCoalescingCallBack @ 0x1401DC574 (CcCoalescingCallBack.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1401DC698 (CcAddDirtyPagesToExternalCache.c)
 *     CcDeferWrite @ 0x1401DCF50 (CcDeferWrite.c)
 *     CcMdlWriteAbort @ 0x1401DDCB4 (CcMdlWriteAbort.c)
 * Callees:
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     CcNotifyWriteBehind @ 0x1401284AC (CcNotifyWriteBehind.c)
 */

char __fastcall CcScheduleLazyWriteScan(char a1, char a2)
{
  char v2; // r8
  char result; // al
  __int64 v5; // rcx

  v2 = CcCoalescingState;
  if ( !CcCoalescingState || a1 )
  {
    if ( a2 )
    {
      v5 = 8LL;
    }
    else
    {
      result = -CcCoalescingState;
      v5 = CcCoalescingState != 0 ? 16 : 4;
    }
    if ( a1 )
    {
      result = CcNotifyWriteBehind(v5);
    }
    else
    {
      if ( byte_14034E040 )
        goto LABEL_6;
      result = KiSetTimerEx((unsigned int)&Timer, CcFirstDelay, 0, 0, (__int64)&LazyWriter);
    }
    v2 = CcCoalescingState;
LABEL_6:
    if ( !v2 )
      byte_14034E040 = 1;
  }
  return result;
}
