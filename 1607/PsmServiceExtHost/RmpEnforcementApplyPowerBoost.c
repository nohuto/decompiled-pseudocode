/*
 * XREFs of RmpEnforcementApplyPowerBoost @ 0x180001364
 * Callers:
 *     RmpPowerBoostEnableDisable @ 0x180001144 (RmpPowerBoostEnableDisable.c)
 *     ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180035150 (-RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpEnforcementApplyPowerBoost(char a1)
{
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+5Ch] [rbp+14h]

  v3 = -1;
  v2 = (2 * a1) & 2 | 1;
  return NtUpdateWnfStateData(&WNF_SEB_APP_RESUME, &v2, 8LL, 0LL, 0LL, 0, 0);
}
