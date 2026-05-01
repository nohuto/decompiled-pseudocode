/*
 * XREFs of RmpEnforcementUnoptimizeHost @ 0x180002494
 * Callers:
 *     RmpEnforcementWorkCallback @ 0x180006D40 (RmpEnforcementWorkCallback.c)
 * Callees:
 *     ?RmpEnforcementApplyPowerBoostContext@@YAJPEAU_RM_POWERBOOST_CONTEXT@@K@Z @ 0x1800025B0 (-RmpEnforcementApplyPowerBoostContext@@YAJPEAU_RM_POWERBOOST_CONTEXT@@K@Z.c)
 *     ?RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180002768 (-RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 *     RmpEnforcementUpdateSwapState @ 0x180006898 (RmpEnforcementUpdateSwapState.c)
 *     RmpReleaseGlobalLock @ 0x18002E484 (RmpReleaseGlobalLock.c)
 *     RmpAcquireGlobalLock @ 0x18002E498 (RmpAcquireGlobalLock.c)
 *     RmpActivityHostSetCommitSavings @ 0x18004242C (RmpActivityHostSetCommitSavings.c)
 *     RmpEnforcementUpdateFreezeState @ 0x180042530 (RmpEnforcementUpdateFreezeState.c)
 */

char __fastcall RmpEnforcementUnoptimizeHost(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCER_CONTEXT *a2, char a3)
{
  char result; // al
  BOOL v6; // esi
  _QWORD *v8; // rcx
  char v9; // [rsp+40h] [rbp+18h]

  v9 = a3;
  if ( (a3 & 0x10) != 0 )
  {
    RmpActivityHostSetCommitSavings(a1, 0LL);
    a3 = v9;
  }
  result = a3 & 0x27;
  if ( (a3 & 0x27) != 0 )
  {
    result = ~result;
    *((_BYTE *)a1 + 772) &= result;
  }
  if ( (a3 & 8) != 0 )
  {
    *((_BYTE *)a1 + 773) |= 8u;
    RmpEnforcementWaitForInSwapTurn(a1, a2);
    RmpReleaseGlobalLock();
    v6 = 0;
    if ( *((char *)a1 + 772) >= 0 )
      v6 = (int)RmpEnforcementApplyPowerBoostContext((struct _RM_ENFORCER_CONTEXT *)((char *)a2 + 128), 1u) >= 0;
    RmpEnforcementUpdateSwapState(a1);
    if ( v6 )
      RmpEnforcementApplyPowerBoostContext((struct _RM_ENFORCER_CONTEXT *)((char *)a2 + 128), 0);
    result = RmpAcquireGlobalLock();
    *((_BYTE *)a1 + 773) &= ~8u;
    *((_BYTE *)a1 + 772) &= 0x77u;
    if ( (*((_DWORD *)a2 + 14))-- == 1 )
    {
      v8 = (_QWORD *)((char *)a2 + 40);
      if ( (_QWORD *)*v8 != v8 )
        result = RtlWakeAllConditionVariable(*v8 - 16LL);
    }
    a3 = v9;
  }
  if ( (a3 & 0x40) != 0 )
  {
    *((_BYTE *)a1 + 773) |= 0x40u;
    RmpReleaseGlobalLock();
    RmpEnforcementUpdateFreezeState(a1);
    result = RmpAcquireGlobalLock();
    *((_BYTE *)a1 + 773) &= ~0x40u;
    *((_BYTE *)a1 + 772) &= ~0x40u;
  }
  return result;
}
