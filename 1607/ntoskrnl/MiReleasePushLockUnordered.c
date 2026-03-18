/*
 * XREFs of MiReleasePushLockUnordered @ 0x1401E6858
 * Callers:
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1401FD69C (MiQueueLargeFreeZeroRebuild.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall MiReleasePushLockUnordered(volatile signed __int64 *BugCheckParameter2, __int64 a2, int a3)
{
  if ( a3 == 1 )
  {
    if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
  }
  else if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
  {
    ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  }
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
