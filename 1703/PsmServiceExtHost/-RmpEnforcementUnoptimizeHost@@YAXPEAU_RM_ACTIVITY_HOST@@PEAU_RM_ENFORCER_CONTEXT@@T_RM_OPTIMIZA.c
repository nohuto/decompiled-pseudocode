/*
 * XREFs of ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180003034
 * Callers:
 *     ?RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800057C0 (-RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpSystemPriorityBoostThreadBegin@@YAJXZ @ 0x180002070 (-RmpSystemPriorityBoostThreadBegin@@YAJXZ.c)
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180002768 (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180003A90 (-RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 *     ?RmpActivityHostIsForegroundBoostAppliedOrPending@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003C64 (-RmpActivityHostIsForegroundBoostAppliedOrPending@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180004698 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002EB64 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEnforcementUpdateFreezeState@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180037848 (-RmpEnforcementUpdateFreezeState@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

char __fastcall RmpEnforcementUnoptimizeHost(__int64 a1, __int64 a2, char a3)
{
  char result; // al
  unsigned int IsForegroundBoostAppliedOrPending; // r12d
  bool v8; // r15
  unsigned __int8 v9; // di
  BOOL v10; // r14d
  int v11; // edi
  __int64 v13; // rcx
  int ThreadInformation; // [rsp+60h] [rbp+18h] BYREF

  if ( (a3 & 0x10) != 0 )
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 0);
  result = a3 & 0x27;
  if ( (a3 & 0x27) != 0 )
  {
    result = ~result;
    *(_BYTE *)(a1 + 820) &= result;
  }
  if ( (a3 & 8) != 0 )
  {
    *(_BYTE *)(a1 + 821) |= 8u;
    RmpEnforcementWaitForInSwapTurn((struct _RM_ACTIVITY_HOST *)a1, (struct _RM_ENFORCER_CONTEXT *)a2);
    IsForegroundBoostAppliedOrPending = RmpActivityHostIsForegroundBoostAppliedOrPending((struct _RM_ACTIVITY_HOST *)a1);
    v8 = IsForegroundBoostAppliedOrPending || (*(_BYTE *)(a1 + 1124) & 0xEu) >= 8;
    v9 = *(_BYTE *)(a1 + 820);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v10 = 0;
    if ( v9 < 0x80u && v8 )
      v10 = (int)RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 40), 1) >= 0;
    if ( IsForegroundBoostAppliedOrPending )
      v11 = RmpSystemPriorityBoostThreadBegin();
    else
      v11 = 0;
    RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 0);
    if ( IsForegroundBoostAppliedOrPending )
    {
      ThreadInformation = v11;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
    }
    if ( v10 )
      RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 40), 0);
    result = RtlEnterCriticalSection(&RmpGlobalLock);
    *(_BYTE *)(a1 + 821) &= ~8u;
    *(_BYTE *)(a1 + 820) &= 0x77u;
    if ( (*(_DWORD *)(a2 + 40))-- == 1 )
    {
      result = a2 + 24;
      v13 = *(_QWORD *)(a2 + 24);
      if ( v13 != a2 + 24 )
        result = RtlWakeAllConditionVariable(v13 - 16);
    }
  }
  if ( (a3 & 0x40) != 0 )
  {
    *(_BYTE *)(a1 + 821) |= 0x40u;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    RmpEnforcementUpdateFreezeState((struct _RM_ACTIVITY_HOST *)a1, 0);
    result = RtlEnterCriticalSection(&RmpGlobalLock);
    *(_BYTE *)(a1 + 821) &= ~0x40u;
    *(_BYTE *)(a1 + 820) &= ~0x40u;
  }
  return result;
}
