/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1404C1D24
 * Callers:
 *     PopScanIdleList @ 0x1400990D8 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x140141138 (PdcPoLowPower.c)
 *     PopSessionWinlogonNotification @ 0x1403B55B0 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopEvaluateGlobalUserStatus @ 0x1404F3198 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x1404F9820 (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x14050C75C (PopUpdateConsoleDisplayState.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140530318 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopEsPublishState @ 0x14054ACE4 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x14063668C (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x140637910 (PdcPoReportLidState.c)
 *     PdcPoResiliencyClient @ 0x14063795C (PdcPoResiliencyClient.c)
 *     PdcPoSetPowerSettingValue @ 0x140637ACC (PdcPoSetPowerSettingValue.c)
 *     PopMonitorProcessBrightnessAction @ 0x14063C294 (PopMonitorProcessBrightnessAction.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(const GUID *a1, unsigned int a2, void *a3)
{
  int v6; // eax
  int v7; // ebp
  int v8; // eax

  v6 = PopSetPowerSettingValue(a1, 0xFFFFFFFF, 0, a2, a3);
  v7 = 0;
  if ( v6 < 0 )
    v7 = v6;
  v8 = PopSetPowerSettingValue(a1, 0xFFFFFFFF, 1, a2, a3);
  if ( v8 < 0 && v7 >= 0 )
    return (unsigned int)v8;
  return (unsigned int)v7;
}
