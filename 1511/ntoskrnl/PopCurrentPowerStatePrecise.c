/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x1404F9FFC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopValidateRTCWake @ 0x1403A5BB4 (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403B2740 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     PopBatteryUpdateCurrentState @ 0x1404FA018 (PopBatteryUpdateCurrentState.c)
 */

void __fastcall PopCurrentPowerStatePrecise(bool *a1)
{
  PopBatteryUpdateCurrentState();
  PopCurrentPowerState(a1);
}
