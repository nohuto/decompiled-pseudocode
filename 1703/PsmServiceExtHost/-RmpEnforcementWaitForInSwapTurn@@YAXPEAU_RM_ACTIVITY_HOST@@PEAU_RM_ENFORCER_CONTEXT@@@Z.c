/*
 * XREFs of ?RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180003A90
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180003034 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 * Callees:
 *     ?RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180003B4C (-RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 */

void __fastcall RmpEnforcementWaitForInSwapTurn(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCER_CONTEXT *a2)
{
  struct _RM_ENFORCER_CONTEXT **v4; // rcx
  char *v5; // rbx
  __int64 v6; // rcx
  char **v7; // rax

  if ( !RmpEnforcementIsHostAllowedToInSwap(a1, a2) )
  {
    *((_DWORD *)a1 + 204) |= 4u;
    v4 = (struct _RM_ENFORCER_CONTEXT **)*((_QWORD *)a2 + 4);
    v5 = (char *)a1 + 824;
    if ( *v4 != (struct _RM_ENFORCER_CONTEXT *)((char *)a2 + 24) )
      __fastfail(3u);
    *(_QWORD *)v5 = (char *)a2 + 24;
    *((_QWORD *)a1 + 104) = v4;
    *v4 = (struct _RM_ENFORCER_CONTEXT *)v5;
    *((_QWORD *)a2 + 4) = v5;
    do
      RtlSleepConditionVariableCS((char *)a1 + 808, &RmpGlobalLock, 0LL);
    while ( !RmpEnforcementIsHostAllowedToInSwap(a1, a2) );
    *((_DWORD *)a1 + 204) &= ~4u;
    v6 = *(_QWORD *)v5;
    v7 = (char **)*((_QWORD *)a1 + 104);
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v7 != v5 )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
  }
  ++*((_DWORD *)a2 + 10);
}
