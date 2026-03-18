/*
 * XREFs of CiThreadDecrementScheduledCount @ 0x1C000B440
 * Callers:
 *     CiProcessSuspend @ 0x1C0001000 (CiProcessSuspend.c)
 *     CiThreadCleanup @ 0x1C000B1C0 (CiThreadCleanup.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x1C000B4F0 (CiSystemAcquirePushLock.c)
 *     CiSystemThrottleNdis @ 0x1C000B520 (CiSystemThrottleNdis.c)
 */

__int64 __fastcall CiThreadDecrementScheduledCount(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    CiSystemAcquirePushLock(&WPP_MAIN_CB.Queue);
    if ( !--LODWORD(WPP_MAIN_CB.DeviceExtension) )
      CiSystemThrottleNdis(0LL);
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  }
  return result;
}
