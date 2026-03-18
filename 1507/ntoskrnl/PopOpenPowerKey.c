/*
 * XREFs of PopOpenPowerKey @ 0x14015A76C
 * Callers:
 *     PopDiagTraceHiberStats @ 0x140566F50 (PopDiagTraceHiberStats.c)
 *     PopReadSystemAwayModePolicy @ 0x1405676E8 (PopReadSystemAwayModePolicy.c)
 *     PopReadHiberbootPolicy @ 0x140568B7C (PopReadHiberbootPolicy.c)
 *     PopResetCurrentPolicies @ 0x1405996E0 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1405997B4 (PopApplyPolicy.c)
 *     PopThermalHandlePreviousShutdown @ 0x14059A040 (PopThermalHandlePreviousShutdown.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 *     PoGetLightestSystemStateForEject @ 0x1406B04DC (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
