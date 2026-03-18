/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140547C2C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopValidateRTCWake @ 0x1403D0CA8 (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403DF42C (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 * Callees:
 *     PopBatteryUpdateCurrentState @ 0x140547C48 (PopBatteryUpdateCurrentState.c)
 */

void __fastcall PopCurrentPowerStatePrecise(_OWORD *a1)
{
  PopBatteryUpdateCurrentState();
  PopCurrentPowerState(a1);
}
