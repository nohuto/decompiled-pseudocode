/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x14054816C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopValidateRTCWake @ 0x1403D0CA8 (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403DF42C (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     PopBatteryUpdateCurrentState @ 0x140548188 (PopBatteryUpdateCurrentState.c)
 */

void __fastcall PopCurrentPowerStatePrecise(_OWORD *a1)
{
  PopBatteryUpdateCurrentState();
  PopCurrentPowerState(a1);
}
