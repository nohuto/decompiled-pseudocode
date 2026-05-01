/*
 * XREFs of RmpEnforcementOptimizeHost @ 0x18001DBB0
 * Callers:
 *     RmpEnforcementWorkCallback @ 0x180008C50 (RmpEnforcementWorkCallback.c)
 * Callees:
 *     RmpEnforcementUpdateSwapState @ 0x18001CB14 (RmpEnforcementUpdateSwapState.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18003F32C (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003F3F0 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpActivityHostSetCommitSavings @ 0x1800472EC (RmpActivityHostSetCommitSavings.c)
 *     RmpEnforcementUpdateFreezeState @ 0x180047338 (RmpEnforcementUpdateFreezeState.c)
 */

NTSTATUS __fastcall RmpEnforcementOptimizeHost(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  NTSTATUS result; // eax
  int updated; // ebx
  char v5; // bl
  __int64 v6; // rdx

  result = (unsigned __int8)a2 - 1;
  if ( ((unsigned __int8)result & (unsigned __int8)a2) == 0 && (a2 & 0x10) != 0 )
    return RmpActivityHostSetCommitSavings(a1, 1LL);
  if ( (a2 & 0x40) != 0 )
  {
    *((_BYTE *)a1 + 781) |= 0x40u;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    RmpEnforcementUpdateFreezeState(a1);
    result = RtlEnterCriticalSection(&RmpGlobalLock);
    *((_BYTE *)a1 + 781) &= ~0x40u;
    *((_BYTE *)a1 + 780) |= 0x40u;
  }
  else if ( (a2 & 8) != 0 )
  {
    if ( a2 < 0 )
    {
      *((_BYTE *)a1 + 780) |= 0x88u;
    }
    else
    {
      *((_BYTE *)a1 + 781) |= 8u;
      RtlLeaveCriticalSection(&RmpGlobalLock);
      updated = RmpEnforcementUpdateSwapState(a1, 1);
      result = RtlEnterCriticalSection(&RmpGlobalLock);
      *((_BYTE *)a1 + 780) |= 8u;
      *((_BYTE *)a1 + 781) &= ~8u;
      if ( updated < 0 )
        *((_BYTE *)a1 + 780) |= 0x80u;
    }
  }
  else
  {
    v5 = a2 & 0x27;
    if ( (a2 & 0x27) != 0 )
    {
      *((_BYTE *)a1 + 781) |= v5;
      NtClearEvent(*((HANDLE *)a1 + 101));
      if ( !*((_BYTE *)a1 + 824) || (result = RmpEmptyWorkerWaitForCompleteOrAbort(a1)) != 0 )
      {
        LOBYTE(v6) = v5;
        RmpEmptyWorkerRun(a1, v6);
        result = RmpEmptyWorkerWaitForCompleteOrAbort(a1);
        *((_BYTE *)a1 + 781) &= ~v5;
        if ( result )
          *((_BYTE *)a1 + 780) |= v5;
      }
      else
      {
        *((_BYTE *)a1 + 781) &= ~v5;
      }
    }
  }
  return result;
}
