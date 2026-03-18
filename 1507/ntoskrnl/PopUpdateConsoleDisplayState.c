/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x140583A58
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x1404E4FEC (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
 *     PopSpoilBatteryEstimate @ 0x140569B58 (PopSpoilBatteryEstimate.c)
 *     PopDiagTraceConsoleDisplayState @ 0x140583B7C (PopDiagTraceConsoleDisplayState.c)
 */

void __fastcall PopUpdateConsoleDisplayState(int a1)
{
  int v1; // [rsp+50h] [rbp+8h] BYREF

  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopCheckResiliencyScenarios();
    v1 = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4u, &v1);
    v1 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4u, &v1);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v1, 4LL);
    if ( PopPlatformAoAc )
      PopSpoilBatteryEstimate(0, PopConsoleDisplayState == 0);
  }
}
