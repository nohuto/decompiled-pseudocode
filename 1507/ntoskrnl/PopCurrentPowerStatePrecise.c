/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x14056C204
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopValidateRTCWake @ 0x1403EF394 (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14040397C (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     PopBatteryUpdateCurrentState @ 0x14056C220 (PopBatteryUpdateCurrentState.c)
 */

void __fastcall PopCurrentPowerStatePrecise(bool *a1)
{
  PopBatteryUpdateCurrentState();
  PopCurrentPowerState(a1);
}
