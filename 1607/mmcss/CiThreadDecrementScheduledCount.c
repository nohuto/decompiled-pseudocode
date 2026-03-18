/*
 * XREFs of CiThreadDecrementScheduledCount @ 0x1C000B540
 * Callers:
 *     CiProcessSuspend @ 0x1C0001A50 (CiProcessSuspend.c)
 *     CiThreadCleanup @ 0x1C000B2C0 (CiThreadCleanup.c)
 * Callees:
 *     CiSystemThrottleNdis @ 0x1C000A010 (CiSystemThrottleNdis.c)
 *     CiSystemAcquirePushLock @ 0x1C000B5F0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiThreadDecrementScheduledCount(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    CiSystemAcquirePushLock(&WPP_MAIN_CB.Queue);
    if ( !--LODWORD(WPP_MAIN_CB.DeviceExtension) )
      CiSystemThrottleNdis(0);
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  }
  return result;
}
