/*
 * XREFs of PopOpenPowerKey @ 0x140127640
 * Callers:
 *     PopReadHiberbootPolicy @ 0x1404F4708 (PopReadHiberbootPolicy.c)
 *     PopDiagTraceHiberStats @ 0x1404F81FC (PopDiagTraceHiberStats.c)
 *     PopReadSystemAwayModePolicy @ 0x1404F8A1C (PopReadSystemAwayModePolicy.c)
 *     PopThermalHandlePreviousShutdown @ 0x140530008 (PopThermalHandlePreviousShutdown.c)
 *     PopResetCurrentPolicies @ 0x14053E130 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14053E204 (PopApplyPolicy.c)
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 *     PoGetLightestSystemStateForEject @ 0x140631FD0 (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
