/*
 * XREFs of RmpEnforcementApplyPowerBoost @ 0x1800026C8
 * Callers:
 *     ?RmpEnforcementApplyPowerBoostContext@@YAJPEAU_RM_POWERBOOST_CONTEXT@@K@Z @ 0x1800025B0 (-RmpEnforcementApplyPowerBoostContext@@YAJPEAU_RM_POWERBOOST_CONTEXT@@K@Z.c)
 *     ?RmpEnforcementPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003A3B0 (-RmpEnforcementPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpEnforcementApplyPowerBoost(char a1)
{
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+5Ch] [rbp+14h]

  v3 = -1;
  v2 = (2 * (a1 & 1)) | 1;
  return NtUpdateWnfStateData(&WNF_SEB_APP_RESUME, &v2, 8LL, 0LL, 0LL, 0, 0);
}
