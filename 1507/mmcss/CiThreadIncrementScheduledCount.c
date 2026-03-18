/*
 * XREFs of CiThreadIncrementScheduledCount @ 0x1C000ADA0
 * Callers:
 *     CiProcessSuspend @ 0x1C0001000 (CiProcessSuspend.c)
 *     CiThreadCreate @ 0x1C000A9A0 (CiThreadCreate.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x1C000B4F0 (CiSystemAcquirePushLock.c)
 *     CiSystemThrottleNdis @ 0x1C000B520 (CiSystemThrottleNdis.c)
 */

__int64 __fastcall CiThreadIncrementScheduledCount(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    CiSystemAcquirePushLock(&WPP_MAIN_CB.Queue);
    if ( ++LODWORD(WPP_MAIN_CB.DeviceExtension) == 1 )
    {
      LOBYTE(v2) = 1;
      CiSystemThrottleNdis(v2);
    }
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  }
  return result;
}
