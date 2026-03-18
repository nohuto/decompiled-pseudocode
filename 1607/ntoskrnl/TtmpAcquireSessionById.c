/*
 * XREFs of TtmpAcquireSessionById @ 0x140546B74
 * Callers:
 *     TtmiAcquireCurrentSession @ 0x140546B38 (TtmiAcquireCurrentSession.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405811F4 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x14067865C (TtmGetSessionDisplayRequiredCount.c)
 *     TtmNotifyConsoleUserPresent @ 0x1406788B4 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x140678944 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1406789B4 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140678A30 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140678B38 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140678BC4 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x140678C58 (TtmSessionMonitorControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x140546BCC (TtmiLogError.c)
 *     TtmpAcquireSessionLock @ 0x140678E60 (TtmpAcquireSessionLock.c)
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
