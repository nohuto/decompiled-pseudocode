/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1403F5BE4
 * Callers:
 *     PopScanIdleList @ 0x140009938 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x14014A84C (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x140205744 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x1403E2A1C (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopEvaluateGlobalUserStatus @ 0x14052E744 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x140543EB0 (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x1405477D4 (PopUpdateConsoleDisplayState.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14056F36C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopEsPublishState @ 0x1405808A0 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x14066EA34 (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x14066FBB0 (PdcPoReportLidState.c)
 *     PdcPoResiliencyClient @ 0x14066FC04 (PdcPoResiliencyClient.c)
 *     PdcPoSetPowerSettingValue @ 0x14066FD74 (PdcPoSetPowerSettingValue.c)
 *     PopMonitorProcessBrightnessAction @ 0x140673808 (PopMonitorProcessBrightnessAction.c)
 *     PopSetWin32kDisplayTimeout @ 0x140674C38 (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1403F80D0 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  int v7; // ebp
  int v8; // eax

  v6 = PopSetPowerSettingValue(a1, 0xFFFFFFFFLL, 0LL, a2, a3);
  v7 = 0;
  if ( v6 < 0 )
    v7 = v6;
  v8 = PopSetPowerSettingValue(a1, 0xFFFFFFFFLL, 1LL, a2, a3);
  if ( v8 < 0 && v7 >= 0 )
    return (unsigned int)v8;
  return (unsigned int)v7;
}
