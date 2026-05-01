/*
 * XREFs of ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002EB64
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180003034 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800031C0 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x1800071B0 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 */

void __fastcall RmpActivityHostSetCommitSavings(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  int v3; // edx
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v4) = a2;
  RmpActivityHostActOnProcesses(
    a1,
    8193,
    1,
    (__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostCommitSavingsCallback,
    &v4);
  v3 = v4;
  *((_BYTE *)a1 + 820) ^= (*((_BYTE *)a1 + 820) ^ (16 * v4)) & 0x10;
  if ( v3 )
    *((_DWORD *)a1 + 283) &= ~4u;
  else
    *((_DWORD *)a1 + 204) &= ~0x40u;
}
