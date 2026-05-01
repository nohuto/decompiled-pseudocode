/*
 * XREFs of RmpEnforcementOptimizeHost @ 0x18000673C
 * Callers:
 *     RmpEnforcementWorkCallback @ 0x180006D40 (RmpEnforcementWorkCallback.c)
 * Callees:
 *     RmpEnforcementUpdateSwapState @ 0x180006898 (RmpEnforcementUpdateSwapState.c)
 *     RmpAcquireGlobalLock @ 0x18002E498 (RmpAcquireGlobalLock.c)
 *     ?RmpEmptyWorkerCouldBeRunning@@YAKPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x180039F1C (-RmpEmptyWorkerCouldBeRunning@@YAKPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180039F2C (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A064 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostSetCommitSavings @ 0x18004242C (RmpActivityHostSetCommitSavings.c)
 *     RmpEnforcementUpdateFreezeState @ 0x180042530 (RmpEnforcementUpdateFreezeState.c)
 */

int __fastcall RmpEnforcementOptimizeHost(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  int result; // eax
  int updated; // ebx
  char v5; // bl
  struct _RM_EMPTY_WORKER_CONTEXT *v6; // rdi
  __int64 v7; // rdx

  result = (unsigned __int8)a2 - 1;
  if ( ((unsigned __int8)result & (unsigned __int8)a2) == 0 && (a2 & 0x10) != 0 )
    return RmpActivityHostSetCommitSavings(a1, 1LL);
  if ( (a2 & 0x40) != 0 )
  {
    *((_BYTE *)a1 + 773) |= 0x40u;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    RmpEnforcementUpdateFreezeState(a1);
    result = RmpAcquireGlobalLock();
    *((_BYTE *)a1 + 773) &= ~0x40u;
    *((_BYTE *)a1 + 772) |= 0x40u;
  }
  else if ( (a2 & 8) != 0 )
  {
    if ( a2 >= 0 )
    {
      *((_BYTE *)a1 + 773) |= 8u;
      RtlLeaveCriticalSection(&RmpGlobalLock);
      updated = RmpEnforcementUpdateSwapState(a1);
      result = RmpAcquireGlobalLock();
      *((_BYTE *)a1 + 772) |= 8u;
      *((_BYTE *)a1 + 773) &= ~8u;
      if ( updated < 0 )
        *((_BYTE *)a1 + 772) |= 0x80u;
    }
    else
    {
      *((_BYTE *)a1 + 772) |= 0x88u;
    }
  }
  else
  {
    v5 = a2 & 0x27;
    if ( (a2 & 0x27) != 0 )
    {
      *((_BYTE *)a1 + 773) |= v5;
      v6 = (struct _RM_ACTIVITY_HOST *)((char *)a1 + 792);
      NtClearEvent(*((HANDLE *)a1 + 100));
      if ( !RmpEmptyWorkerCouldBeRunning(v6) || (result = RmpEmptyWorkerWaitForCompleteOrAbort(a1)) != 0 )
      {
        if ( (v5 & 0x20) != 0 )
          *((_BYTE *)a1 + 912) &= ~0x20u;
        LOBYTE(v7) = v5;
        RmpEmptyWorkerRun(a1, v7);
        result = RmpEmptyWorkerWaitForCompleteOrAbort(a1);
        *((_BYTE *)a1 + 773) &= ~v5;
        if ( result )
          *((_BYTE *)a1 + 772) |= v5;
      }
      else
      {
        *((_BYTE *)a1 + 773) &= ~v5;
      }
    }
  }
  return result;
}
