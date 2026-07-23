/*
 * XREFs of TtmpAcquireSessionById @ 0x1405470B4
 * Callers:
 *     TtmiAcquireCurrentSession @ 0x140547078 (TtmiAcquireCurrentSession.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405816A0 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x140678740 (TtmGetSessionDisplayRequiredCount.c)
 *     TtmNotifyConsoleUserPresent @ 0x140678998 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x140678A28 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x140678A98 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140678B14 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140678C1C (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140678CA8 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x140678D3C (TtmSessionMonitorControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpAcquireSessionLock @ 0x140678F44 (TtmpAcquireSessionLock.c)
 */

__int64 __fastcall TtmpAcquireSessionById(_QWORD *a1, int a2)
{
  unsigned int v2; // ebx
  bool v4; // zf
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = 0;
  v4 = TtmpEnabled == 1;
  *a1 = 0LL;
  if ( v4 )
  {
    TtmpAcquireSessionLock();
    if ( TtmpSession && *(_DWORD *)TtmpSession == a2 )
    {
      *a1 = TtmpSession;
    }
    else
    {
      v2 = -1073740715;
      TtmiLogError("TtmpAcquireSessionById");
      ExReleaseResourceLite(&TtmpSessionLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
    }
  }
  else
  {
    v2 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById");
  }
  return v2;
}
