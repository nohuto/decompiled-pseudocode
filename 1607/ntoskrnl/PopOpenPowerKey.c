/*
 * XREFs of PopOpenPowerKey @ 0x140132520
 * Callers:
 *     PopDiagTraceHiberStats @ 0x140530FB4 (PopDiagTraceHiberStats.c)
 *     PopReadSystemAwayModePolicy @ 0x140531748 (PopReadSystemAwayModePolicy.c)
 *     PopReadHiberbootPolicy @ 0x140533230 (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x14056C7F8 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14056DF0C (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14056DFD8 (PopApplyPolicy.c)
 *     PopThermalHandlePreviousShutdown @ 0x140580B3C (PopThermalHandlePreviousShutdown.c)
 *     PoGetLightestSystemStateForEject @ 0x14066A180 (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
