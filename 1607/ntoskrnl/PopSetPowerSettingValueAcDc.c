/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1403F4AA8
 * Callers:
 *     PopScanIdleList @ 0x1400094AC (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x14014ADBC (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x140205570 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x1403E2A1C (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopEvaluateGlobalUserStatus @ 0x14052EC84 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x140547D14 (PopUpdateConsoleDisplayState.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14056F8AC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopEsPublishState @ 0x140580D4C (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x14066EB18 (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x14066FC94 (PdcPoReportLidState.c)
 *     PdcPoResiliencyClient @ 0x14066FCE8 (PdcPoResiliencyClient.c)
 *     PdcPoSetPowerSettingValue @ 0x14066FE58 (PdcPoSetPowerSettingValue.c)
 *     PopMonitorProcessBrightnessAction @ 0x1406738EC (PopMonitorProcessBrightnessAction.c)
 *     PopSetWin32kDisplayTimeout @ 0x140674D1C (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
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
