/*
 * XREFs of RmpEnforcementOptimizeHost @ 0x1800198C4
 * Callers:
 *     RmpEnforcementWorkCallback @ 0x180016C10 (RmpEnforcementWorkCallback.c)
 * Callees:
 *     RmpEnforcementUpdateSwapState @ 0x180018878 (RmpEnforcementUpdateSwapState.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002A570 (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A63C (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostSetCommitSavings @ 0x18002F790 (RmpActivityHostSetCommitSavings.c)
 *     RmpEnforcementUpdateFreezeState @ 0x1800375CC (RmpEnforcementUpdateFreezeState.c)
 */

NTSTATUS __fastcall RmpEnforcementOptimizeHost(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  NTSTATUS result; // eax
  int updated; // ebx
  __int64 v5; // rdx
  char v6; // bl
  __int64 v7; // rdx

  result = (unsigned __int8)a2 - 1;
  if ( ((unsigned __int8)result & (unsigned __int8)a2) == 0 && (a2 & 0x10) != 0 )
    return RmpActivityHostSetCommitSavings(a1, 1LL);
  if ( (a2 & 0x40) != 0 )
  {
    *((_BYTE *)a1 + 821) |= 0x40u;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    LOBYTE(v5) = (a2 & 0x40) != 0;
    RmpEnforcementUpdateFreezeState(a1, v5);
    result = RtlEnterCriticalSection(&RmpGlobalLock);
    *((_BYTE *)a1 + 821) &= ~0x40u;
    *((_BYTE *)a1 + 820) |= 0x40u;
  }
  else if ( (a2 & 8) != 0 )
  {
    if ( a2 < 0 )
    {
      *((_BYTE *)a1 + 820) |= 0x88u;
    }
    else
    {
      *((_BYTE *)a1 + 821) |= 8u;
      RtlLeaveCriticalSection(&RmpGlobalLock);
      updated = RmpEnforcementUpdateSwapState((__int64)a1, 1);
      result = RtlEnterCriticalSection(&RmpGlobalLock);
      *((_BYTE *)a1 + 820) |= 8u;
      *((_BYTE *)a1 + 821) &= ~8u;
      if ( updated < 0 )
        *((_BYTE *)a1 + 820) |= 0x80u;
    }
  }
  else
  {
    v6 = a2 & 0x27;
    if ( (a2 & 0x27) != 0 && *((int *)a1 + 5) >= 0 )
    {
      *((_BYTE *)a1 + 821) |= v6;
      result = NtClearEvent(*((HANDLE *)a1 + 111));
      if ( !*((_BYTE *)a1 + 904) || (result = RmpEmptyWorkerWaitForCompleteOrAbort(a1)) != 0 )
      {
        if ( *((int *)a1 + 5) >= 0 )
        {
          LOBYTE(v7) = v6;
          RmpEmptyWorkerRun(a1, v7);
          result = RmpEmptyWorkerWaitForCompleteOrAbort(a1);
          *((_BYTE *)a1 + 821) &= ~v6;
          if ( result )
            *((_BYTE *)a1 + 820) |= v6;
        }
      }
      else
      {
        *((_BYTE *)a1 + 821) &= ~v6;
      }
    }
  }
  return result;
}
