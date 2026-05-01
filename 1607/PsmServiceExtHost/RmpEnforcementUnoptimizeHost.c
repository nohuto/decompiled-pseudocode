/*
 * XREFs of RmpEnforcementUnoptimizeHost @ 0x180019DBC
 * Callers:
 *     RmpEnforcementWorkCallback @ 0x180016C10 (RmpEnforcementWorkCallback.c)
 * Callees:
 *     RmpPowerBoostEnableDisable @ 0x180001144 (RmpPowerBoostEnableDisable.c)
 *     RmpSystemPriorityBoostThreadBegin @ 0x180001FB4 (RmpSystemPriorityBoostThreadBegin.c)
 *     RmpEnforcementUpdateSwapState @ 0x180018878 (RmpEnforcementUpdateSwapState.c)
 *     ?RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180019CAC (-RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 *     RmpActivityHostIsForegroundBoostAppliedOrPending @ 0x180019F30 (RmpActivityHostIsForegroundBoostAppliedOrPending.c)
 *     RmpActivityHostSetCommitSavings @ 0x18002F790 (RmpActivityHostSetCommitSavings.c)
 *     RmpEnforcementUpdateFreezeState @ 0x1800375CC (RmpEnforcementUpdateFreezeState.c)
 */

char __fastcall RmpEnforcementUnoptimizeHost(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCER_CONTEXT *a2, char a3)
{
  char result; // al
  int IsForegroundBoostAppliedOrPending; // r15d
  BOOL v7; // ebp
  int v8; // ebx
  BOOL v9; // r14d
  int v10; // ebx
  _QWORD *v12; // rcx
  struct _RM_ENFORCER_CONTEXT **v13; // rcx
  char *v14; // rbx
  __int64 v15; // rcx
  char **v16; // rax
  int ThreadInformation; // [rsp+60h] [rbp+8h] BYREF
  char v18; // [rsp+70h] [rbp+18h]

  v18 = a3;
  if ( (a3 & 0x10) != 0 )
  {
    RmpActivityHostSetCommitSavings(a1, 0LL);
    a3 = v18;
  }
  result = a3 & 0x27;
  if ( (a3 & 0x27) != 0 )
  {
    result = ~result;
    *((_BYTE *)a1 + 820) &= result;
  }
  if ( (a3 & 8) != 0 )
  {
    *((_BYTE *)a1 + 821) |= 8u;
    if ( !(unsigned int)RmpEnforcementIsHostAllowedToInSwap(a1, a2) )
    {
      *((_DWORD *)a1 + 204) |= 4u;
      v13 = (struct _RM_ENFORCER_CONTEXT **)*((_QWORD *)a2 + 6);
      v14 = (char *)a1 + 824;
      if ( *v13 != (struct _RM_ENFORCER_CONTEXT *)((char *)a2 + 40) )
        __fastfail(3u);
      *(_QWORD *)v14 = (char *)a2 + 40;
      *((_QWORD *)a1 + 104) = v13;
      *v13 = (struct _RM_ENFORCER_CONTEXT *)v14;
      *((_QWORD *)a2 + 6) = v14;
      do
        RtlSleepConditionVariableCS((char *)a1 + 808, &RmpGlobalLock, 0LL);
      while ( !(unsigned int)RmpEnforcementIsHostAllowedToInSwap(a1, a2) );
      *((_DWORD *)a1 + 204) &= ~4u;
      v15 = *(_QWORD *)v14;
      v16 = (char **)*((_QWORD *)a1 + 104);
      if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
        __fastfail(3u);
      *v16 = (char *)v15;
      *(_QWORD *)(v15 + 8) = v16;
    }
    ++*((_DWORD *)a2 + 14);
    IsForegroundBoostAppliedOrPending = RmpActivityHostIsForegroundBoostAppliedOrPending(a1);
    v7 = IsForegroundBoostAppliedOrPending || (*((_BYTE *)a1 + 1116) & 0xEu) >= 8;
    v8 = (unsigned __int8)~*((_BYTE *)a1 + 820) >> 7;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v9 = 0;
    if ( (v8 & v7) != 0 )
      v9 = (int)RmpPowerBoostEnableDisable(*((_QWORD *)a1 + 5), 1u) >= 0;
    if ( IsForegroundBoostAppliedOrPending )
      v10 = RmpSystemPriorityBoostThreadBegin();
    else
      v10 = 0;
    RmpEnforcementUpdateSwapState((__int64)a1, 0);
    if ( IsForegroundBoostAppliedOrPending )
    {
      ThreadInformation = v10;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
    }
    if ( v9 )
      RmpPowerBoostEnableDisable(*((_QWORD *)a1 + 5), 0);
    result = RtlEnterCriticalSection(&RmpGlobalLock);
    *((_BYTE *)a1 + 821) &= ~8u;
    *((_BYTE *)a1 + 820) &= 0x77u;
    if ( (*((_DWORD *)a2 + 14))-- == 1 )
    {
      v12 = (_QWORD *)((char *)a2 + 40);
      if ( (_QWORD *)*v12 != v12 )
        result = RtlWakeAllConditionVariable(*v12 - 16LL);
    }
    a3 = v18;
  }
  if ( (a3 & 0x40) != 0 )
  {
    *((_BYTE *)a1 + 821) |= 0x40u;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    RmpEnforcementUpdateFreezeState(a1, 0LL);
    result = RtlEnterCriticalSection(&RmpGlobalLock);
    *((_BYTE *)a1 + 821) &= ~0x40u;
    *((_BYTE *)a1 + 820) &= ~0x40u;
  }
  return result;
}
