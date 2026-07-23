/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x14004EAF0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadClearAcquiredLockEntry @ 0x14004EC90 (KiAbThreadClearAcquiredLockEntry.c)
 *     MmIsSessionAddress @ 0x14004ED20 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     KiAbEntryRemoveFromTree @ 0x1400F5E10 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011B984 (KiAbThreadUnboostCpuPriority.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14025CCD0 (EtwTraceAutoBoostClearFloor.c)
 */

unsigned __int64 __fastcall ExReleaseCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  unsigned __int64 result; // rax
  ULONG_PTR v5; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  int v7; // r14d
  __int64 v8; // rdx
  __int64 SessionId; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int16 v15; // ax
  __int64 v16; // rdi

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( KiAbEnabled )
    {
      CurrentThread = KeGetCurrentThread();
      v7 = 0;
      if ( (unsigned int)MmIsSessionAddress(v5) )
        SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process, v8);
      else
        SessionId = 0xFFFFFFFFLL;
      if ( KeGetCurrentIrql() <= 1u )
      {
        v7 = 1;
        --CurrentThread->SpecialApcDisable;
      }
      v10 = KiAbThreadClearAcquiredLockEntry(CurrentThread, v5, SessionId);
      v14 = v10;
      if ( v10 )
      {
        *(_BYTE *)(v10 + 32) |= 2u;
        if ( *(__int64 *)(v10 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
        v15 = *(_WORD *)(v14 + 88);
        if ( v15 )
        {
          if ( (v15 & 1) != 0 )
          {
            _InterlockedDecrement(&CurrentThread->AbCompletedIoBoostCount);
            PsBoostThreadIoEx(CurrentThread, 1LL, 0LL, 0LL);
          }
          v12 = 65534LL;
          if ( (*(_WORD *)(v14 + 88) & 0xFFFE) != 0 )
            KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread);
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostClearFloor(
              CurrentThread,
              *(_QWORD *)(v14 + 32) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL,
              *(unsigned __int16 *)(v14 + 88));
          *(_WORD *)(v14 + 88) = 0;
        }
        *(_BYTE *)(v14 + 25) &= ~1u;
        *(_QWORD *)(v14 + 32) = 0LL;
        v16 = v14 - (_QWORD)CurrentThread - 800;
        result = (unsigned __int64)((unsigned __int128)(v16 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
        v11 = v16 / 96;
        if ( !v7 )
        {
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v11);
          return result;
        }
        CurrentThread->AbEntrySummary |= 1 << v11;
        goto LABEL_16;
      }
      result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
      if ( (result & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, (unsigned int)v13, 0LL);
      if ( v7 )
      {
LABEL_16:
        result = (unsigned int)++CurrentThread->SpecialApcDisable;
        if ( !(_WORD)result
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          return KiCheckForKernelApcDelivery(v12, v11, v13);
        }
      }
    }
  }
  return result;
}
