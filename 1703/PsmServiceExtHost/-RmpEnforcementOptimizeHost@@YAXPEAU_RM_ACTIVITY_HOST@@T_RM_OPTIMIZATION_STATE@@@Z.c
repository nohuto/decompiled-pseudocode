/*
 * XREFs of ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800031C0
 * Callers:
 *     ?RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800057C0 (-RmpEnforcementWorkCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180004698 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002EB64 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18003251C (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800325E4 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementUpdateFreezeState@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180037848 (-RmpEnforcementUpdateFreezeState@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpEnforcementOptimizeHost(__int64 a1, unsigned __int8 a2)
{
  int updated; // ebx
  char v5; // bl
  __int64 v6; // rdx
  unsigned int v7; // eax

  if ( ((a2 - 1) & a2) == 0 && (a2 & 0x10) != 0 )
  {
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 1u);
  }
  else if ( (a2 & 0x40) != 0 )
  {
    *(_BYTE *)(a1 + 821) |= 0x40u;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    RmpEnforcementUpdateFreezeState((struct _RM_ACTIVITY_HOST *)a1, (a2 & 0x40) != 0);
    RtlEnterCriticalSection(&RmpGlobalLock);
    *(_BYTE *)(a1 + 821) &= ~0x40u;
    *(_BYTE *)(a1 + 820) |= 0x40u;
  }
  else if ( (a2 & 8) != 0 )
  {
    if ( a2 >= 0x80u )
    {
      *(_BYTE *)(a1 + 820) |= 0x88u;
    }
    else
    {
      *(_BYTE *)(a1 + 821) |= 8u;
      RtlLeaveCriticalSection(&RmpGlobalLock);
      updated = RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 1u);
      RtlEnterCriticalSection(&RmpGlobalLock);
      *(_BYTE *)(a1 + 820) |= 8u;
      *(_BYTE *)(a1 + 821) &= ~8u;
      if ( updated < 0 )
        *(_BYTE *)(a1 + 820) |= 0x80u;
    }
  }
  else
  {
    v5 = a2 & 0x27;
    if ( (a2 & 0x27) != 0 && *(int *)(a1 + 20) >= 0 )
    {
      *(_BYTE *)(a1 + 821) |= v5;
      NtClearEvent(*(HANDLE *)(a1 + 888));
      if ( !*(_BYTE *)(a1 + 904) || RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1) )
      {
        if ( *(int *)(a1 + 20) >= 0 )
        {
          LOBYTE(v6) = v5;
          RmpEmptyWorkerRun(a1, v6);
          v7 = RmpEmptyWorkerWaitForCompleteOrAbort((struct _RM_ACTIVITY_HOST *)a1);
          *(_BYTE *)(a1 + 821) &= ~v5;
          if ( v7 )
            *(_BYTE *)(a1 + 820) |= v5;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 821) &= ~v5;
      }
    }
  }
}
