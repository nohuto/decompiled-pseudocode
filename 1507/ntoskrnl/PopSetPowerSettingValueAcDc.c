/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x14055E1B0
 * Callers:
 *     PopScanIdleList @ 0x1400D0490 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x14016ED90 (PdcPoLowPower.c)
 *     PopSessionWinlogonNotification @ 0x14040A0DC (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopEvaluateGlobalUserStatus @ 0x14055E090 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x14056B6B4 (PopBatteryApplyCompositeState.c)
 *     PopEsWorker @ 0x140581C48 (PopEsWorker.c)
 *     PopEsUpdateState @ 0x14058201C (PopEsUpdateState.c)
 *     PopUpdateConsoleDisplayState @ 0x140583A58 (PopUpdateConsoleDisplayState.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1405A6C70 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x1405C0B10 (PopMonitorProcessLoop.c)
 *     PopSetAwayModeStatus @ 0x1406B5FC0 (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x1406B76A0 (PdcPoReportLidState.c)
 *     PdcPoResiliencyClient @ 0x1406B76EC (PdcPoResiliencyClient.c)
 *     PdcPoSetPowerSettingValue @ 0x1406B7824 (PdcPoSetPowerSettingValue.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(const GUID *a1, unsigned int a2, _DWORD *a3)
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
