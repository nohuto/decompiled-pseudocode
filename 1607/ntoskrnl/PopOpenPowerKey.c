/*
 * XREFs of PopOpenPowerKey @ 0x140132A90
 * Callers:
 *     PopDiagTraceHiberStats @ 0x1405314F4 (PopDiagTraceHiberStats.c)
 *     PopReadSystemAwayModePolicy @ 0x140531C88 (PopReadSystemAwayModePolicy.c)
 *     PopReadHiberbootPolicy @ 0x140533770 (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14056E44C (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14056E518 (PopApplyPolicy.c)
 *     PopThermalHandlePreviousShutdown @ 0x140580FE8 (PopThermalHandlePreviousShutdown.c)
 *     PoGetLightestSystemStateForEject @ 0x14066A264 (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
