/*
 * XREFs of RmpEnforcementUnoptimizeHost @ 0x1800046F8
 * Callers:
 *     RmpEnforcementWorkCallback @ 0x180008C50 (RmpEnforcementWorkCallback.c)
 * Callees:
 *     ?RmpEnforcementApplyPowerBoostContext@@YAJPEAU_RM_POWERBOOST_CONTEXT@@K@Z @ 0x180004838 (-RmpEnforcementApplyPowerBoostContext@@YAJPEAU_RM_POWERBOOST_CONTEXT@@K@Z.c)
 *     RmpActivityHostIsForegroundBoostAppliedOrPending @ 0x180004AD0 (RmpActivityHostIsForegroundBoostAppliedOrPending.c)
 *     ?RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180004B5C (-RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 *     RmpSystemPriorityBoostThreadBegin @ 0x180004C6C (RmpSystemPriorityBoostThreadBegin.c)
 *     RmpEnforcementUpdateSwapState @ 0x18001CB14 (RmpEnforcementUpdateSwapState.c)
 *     RmpActivityHostSetCommitSavings @ 0x1800472EC (RmpActivityHostSetCommitSavings.c)
 *     RmpEnforcementUpdateFreezeState @ 0x180047338 (RmpEnforcementUpdateFreezeState.c)
 */

char __fastcall RmpEnforcementUnoptimizeHost(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCER_CONTEXT *a2, char a3)
{
  char result; // al
  int IsForegroundBoostAppliedOrPending; // r14d
  BOOL v7; // esi
  int v8; // ebp
  _QWORD *v10; // rcx
  struct _RM_ENFORCER_CONTEXT **v11; // rcx
  char *v12; // rsi
  __int64 v13; // rcx
  char **v14; // rax
  int ThreadInformation; // [rsp+50h] [rbp+8h] BYREF
  char v16; // [rsp+60h] [rbp+18h]

  v16 = a3;
  if ( (a3 & 0x10) != 0 )
  {
    RmpActivityHostSetCommitSavings(a1, 0LL);
    a3 = v16;
  }
  result = a3 & 0x27;
  if ( (a3 & 0x27) != 0 )
  {
    result = ~result;
    *((_BYTE *)a1 + 780) &= result;
  }
  if ( (a3 & 8) != 0 )
  {
    *((_BYTE *)a1 + 781) |= 8u;
    if ( !RmpEnforcementIsHostAllowedToInSwap(a1, a2) )
    {
      *((_DWORD *)a1 + 194) |= 4u;
      v11 = (struct _RM_ENFORCER_CONTEXT **)*((_QWORD *)a2 + 6);
      v12 = (char *)a1 + 784;
      *((_QWORD *)a1 + 98) = (char *)a2 + 40;
      *((_QWORD *)a1 + 99) = v11;
      if ( *v11 != (struct _RM_ENFORCER_CONTEXT *)((char *)a2 + 40) )
        __fastfail(3u);
      *v11 = (struct _RM_ENFORCER_CONTEXT *)v12;
      *((_QWORD *)a2 + 6) = v12;
      do
        RtlSleepConditionVariableCS((char *)a1 + 768, &RmpGlobalLock, 0LL);
      while ( !RmpEnforcementIsHostAllowedToInSwap(a1, a2) );
      *((_DWORD *)a1 + 194) &= ~4u;
      v13 = *(_QWORD *)v12;
      v14 = (char **)*((_QWORD *)a1 + 99);
      if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 || *v14 != v12 )
        __fastfail(3u);
      *v14 = (char *)v13;
      *(_QWORD *)(v13 + 8) = v14;
    }
    ++*((_DWORD *)a2 + 14);
    IsForegroundBoostAppliedOrPending = RmpActivityHostIsForegroundBoostAppliedOrPending(a1);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v7 = 0;
    if ( *((char *)a1 + 780) >= 0 )
      v7 = (int)RmpEnforcementApplyPowerBoostContext((struct _RM_ENFORCER_CONTEXT *)((char *)a2 + 128), 1u) >= 0;
    if ( IsForegroundBoostAppliedOrPending )
      v8 = RmpSystemPriorityBoostThreadBegin();
    else
      v8 = 0;
    RmpEnforcementUpdateSwapState(a1);
    if ( IsForegroundBoostAppliedOrPending )
    {
      ThreadInformation = v8;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
    }
    if ( v7 )
      RmpEnforcementApplyPowerBoostContext((struct _RM_ENFORCER_CONTEXT *)((char *)a2 + 128), 0);
    result = RtlEnterCriticalSection(&RmpGlobalLock);
    *((_BYTE *)a1 + 781) &= ~8u;
    *((_BYTE *)a1 + 780) &= 0x77u;
    if ( (*((_DWORD *)a2 + 14))-- == 1 )
    {
      v10 = (_QWORD *)((char *)a2 + 40);
      if ( (_QWORD *)*v10 != v10 )
        result = RtlWakeAllConditionVariable(*v10 - 16LL);
    }
    a3 = v16;
  }
  if ( (a3 & 0x40) != 0 )
  {
    *((_BYTE *)a1 + 781) |= 0x40u;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    RmpEnforcementUpdateFreezeState(a1);
    result = RtlEnterCriticalSection(&RmpGlobalLock);
    *((_BYTE *)a1 + 781) &= ~0x40u;
    *((_BYTE *)a1 + 780) &= ~0x40u;
  }
  return result;
}
