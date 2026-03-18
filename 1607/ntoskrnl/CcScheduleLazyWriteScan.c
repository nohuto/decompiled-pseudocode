/*
 * XREFs of CcScheduleLazyWriteScan @ 0x14007091C
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14002078C (CcNotifyOfMappedWrite.c)
 *     CcCanIWrite @ 0x1400209F0 (CcCanIWrite.c)
 *     CcRescheduleLazyWriteScan @ 0x14006E8D8 (CcRescheduleLazyWriteScan.c)
 *     CcSetDirtyPinnedData @ 0x14006F270 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14006F660 (CcSetDirtyInMask.c)
 *     CcChargeDirtyPages @ 0x14006FBF4 (CcChargeDirtyPages.c)
 *     CcUninitializeCacheMap @ 0x1400705C0 (CcUninitializeCacheMap.c)
 *     CcDecrementOpenCount @ 0x140073698 (CcDecrementOpenCount.c)
 *     CcWriteBehindInternal @ 0x1400E7F30 (CcWriteBehindInternal.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14010F010 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14013426C (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBack @ 0x1401B1598 (CcCoalescingCallBack.c)
 *     CcDeferWrite @ 0x1401B1A08 (CcDeferWrite.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     CcNotifyWriteBehind @ 0x1400AB9E0 (CcNotifyWriteBehind.c)
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
      if ( byte_1403231C0 )
        goto LABEL_6;
      result = KiSetTimerEx((__int64)&Timer, CcFirstDelay, 0, 0, (__int64)&LazyWriter);
    }
    v2 = CcCoalescingState;
LABEL_6:
    if ( !v2 )
      byte_1403231C0 = 1;
  }
  return result;
}
