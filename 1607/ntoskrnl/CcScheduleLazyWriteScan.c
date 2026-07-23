/*
 * XREFs of CcScheduleLazyWriteScan @ 0x14007049C
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14002030C (CcNotifyOfMappedWrite.c)
 *     CcCanIWrite @ 0x140020570 (CcCanIWrite.c)
 *     CcRescheduleLazyWriteScan @ 0x14006E458 (CcRescheduleLazyWriteScan.c)
 *     CcSetDirtyPinnedData @ 0x14006EDF0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 *     CcChargeDirtyPages @ 0x14006F774 (CcChargeDirtyPages.c)
 *     CcUninitializeCacheMap @ 0x140070140 (CcUninitializeCacheMap.c)
 *     CcDecrementOpenCount @ 0x140073218 (CcDecrementOpenCount.c)
 *     CcWriteBehindInternal @ 0x1400E5DD0 (CcWriteBehindInternal.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14010F574 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1401347DC (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBack @ 0x1401B147C (CcCoalescingCallBack.c)
 *     CcDeferWrite @ 0x1401B18EC (CcDeferWrite.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     CcNotifyWriteBehind @ 0x1400A9F48 (CcNotifyWriteBehind.c)
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
      if ( byte_1403231E0 )
        goto LABEL_6;
      result = KiSetTimerEx((__int64)&Timer, CcFirstDelay, 0, 0, (__int64)&LazyWriter);
    }
    v2 = CcCoalescingState;
LABEL_6:
    if ( !v2 )
      byte_1403231E0 = 1;
  }
  return result;
}
