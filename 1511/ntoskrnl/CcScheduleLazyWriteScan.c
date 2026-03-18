/*
 * XREFs of CcScheduleLazyWriteScan @ 0x1400AF9F0
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14001FFA0 (CcSetDirtyPinnedData.c)
 *     CcNotifyOfMappedWrite @ 0x14002F2E8 (CcNotifyOfMappedWrite.c)
 *     CcCanIWrite @ 0x14002F540 (CcCanIWrite.c)
 *     CcUninitializeCacheMap @ 0x1400AEF70 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x1400B0530 (CcWriteBehindInternal.c)
 *     CcDecrementOpenCount @ 0x1400B0D78 (CcDecrementOpenCount.c)
 *     CcChargeDirtyPages @ 0x1400B2C7C (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 *     CcRescheduleLazyWriteScan @ 0x140101E20 (CcRescheduleLazyWriteScan.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140103C60 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14012DA30 (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBack @ 0x1401A89B4 (CcCoalescingCallBack.c)
 *     CcDeferWrite @ 0x1401A8E40 (CcDeferWrite.c)
 * Callees:
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     CcNotifyWriteBehind @ 0x1400EB5C0 (CcNotifyWriteBehind.c)
 */

BOOLEAN __fastcall CcScheduleLazyWriteScan(char a1, char a2)
{
  char v2; // r8
  BOOLEAN result; // al
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
      if ( byte_1402FDBA0 )
        goto LABEL_6;
      result = KeSetTimer(&Timer, CcFirstDelay, &LazyWriter);
    }
    v2 = CcCoalescingState;
LABEL_6:
    if ( !v2 )
      byte_1402FDBA0 = 1;
  }
  return result;
}
