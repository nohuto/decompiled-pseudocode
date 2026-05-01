/*
 * XREFs of ?RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180002768
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x180002494 (RmpEnforcementUnoptimizeHost.c)
 * Callees:
 *     ?RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180002828 (-RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 */

void __fastcall RmpEnforcementWaitForInSwapTurn(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCER_CONTEXT *a2)
{
  struct _RM_ENFORCER_CONTEXT **v4; // rcx
  char *v5; // rbx
  __int64 v6; // rcx
  char **v7; // rax

  if ( !RmpEnforcementIsHostAllowedToInSwap(a1, a2) )
  {
    *((_DWORD *)a1 + 192) |= 4u;
    v4 = (struct _RM_ENFORCER_CONTEXT **)*((_QWORD *)a2 + 6);
    v5 = (char *)a1 + 776;
    *((_QWORD *)a1 + 97) = (char *)a2 + 40;
    *((_QWORD *)a1 + 98) = v4;
    if ( *v4 != (struct _RM_ENFORCER_CONTEXT *)((char *)a2 + 40) )
      __fastfail(3u);
    *v4 = (struct _RM_ENFORCER_CONTEXT *)v5;
    *((_QWORD *)a2 + 6) = v5;
    do
      RtlSleepConditionVariableCS((char *)a1 + 760, &RmpGlobalLock, 0LL);
    while ( !RmpEnforcementIsHostAllowedToInSwap(a1, a2) );
    *((_DWORD *)a1 + 192) &= ~4u;
    v6 = *(_QWORD *)v5;
    v7 = (char **)*((_QWORD *)a1 + 98);
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v7 != v5 )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
  }
  ++*((_DWORD *)a2 + 14);
}
