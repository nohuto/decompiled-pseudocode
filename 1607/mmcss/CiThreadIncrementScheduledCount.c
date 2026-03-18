/*
 * XREFs of CiThreadIncrementScheduledCount @ 0x1C000ABD0
 * Callers:
 *     CiProcessSuspend @ 0x1C0001A50 (CiProcessSuspend.c)
 *     CiThreadCreate @ 0x1C000A890 (CiThreadCreate.c)
 * Callees:
 *     CiSystemThrottleNdis @ 0x1C000A010 (CiSystemThrottleNdis.c)
 *     CiSystemAcquirePushLock @ 0x1C000B5F0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiThreadIncrementScheduledCount(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    CiSystemAcquirePushLock(&WPP_MAIN_CB.Queue);
    if ( ++LODWORD(WPP_MAIN_CB.DeviceExtension) == 1 )
      CiSystemThrottleNdis(1);
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  }
  return result;
}
