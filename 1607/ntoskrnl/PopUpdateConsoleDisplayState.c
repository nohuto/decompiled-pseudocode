/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x1405477D4
 * Callers:
 *     PopPowerInformationInternal @ 0x14051D314 (PopPowerInformationInternal.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F5BE4 (PopSetPowerSettingValueAcDc.c)
 *     PopCheckResiliencyScenarios @ 0x1403F5C64 (PopCheckResiliencyScenarios.c)
 *     PopSpoilBatteryEstimate @ 0x140534684 (PopSpoilBatteryEstimate.c)
 *     PopDiagTraceConsoleDisplayState @ 0x140547874 (PopDiagTraceConsoleDisplayState.c)
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
    PopSetPowerSettingValueAcDc((__int64)&GUID_CONSOLE_DISPLAY_STATE, 4u, (__int64)&v1);
    v1 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc((__int64)&GUID_MONITOR_POWER_ON, 4u, (__int64)&v1);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v1, 4LL);
    if ( PopPlatformAoAc )
      PopSpoilBatteryEstimate(0, PopConsoleDisplayState == 0);
  }
}
