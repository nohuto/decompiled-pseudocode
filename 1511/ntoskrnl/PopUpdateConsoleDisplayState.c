/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x14050C75C
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C1D24 (PopSetPowerSettingValueAcDc.c)
 *     PopSpoilBatteryEstimate @ 0x1404F5600 (PopSpoilBatteryEstimate.c)
 *     PopDiagTraceConsoleDisplayState @ 0x14050C884 (PopDiagTraceConsoleDisplayState.c)
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
