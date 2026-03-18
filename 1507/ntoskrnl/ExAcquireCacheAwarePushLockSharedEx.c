/*
 * XREFs of ExAcquireCacheAwarePushLockSharedEx @ 0x1400F7580
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400F78D4 (ExfTryAcquirePushLockShared.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

unsigned __int64 *__fastcall ExAcquireCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // bl
  unsigned int AbEntrySummary; // edx
  __int64 v7; // rcx
  int SessionId; // eax
  __int16 v9; // ax
  unsigned __int64 *v10; // rdi
  __int64 v11; // r9

  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 || !KiAbEnabled )
  {
    v4 = 0LL;
    goto LABEL_20;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    v4 = 0LL;
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
        goto LABEL_16;
      }
      goto LABEL_9;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v4 = (__int64)&CurrentThread->LockEntries[v7];
  if ( !v4 )
  {
LABEL_9:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_16;
  }
  if ( BugCheckParameter2 + 0x70000000000LL > 0x7FFFFFFFFFLL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  *(_DWORD *)(v4 + 40) = SessionId;
  *(_QWORD *)(v4 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_16:
  v9 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v9;
  if ( !v9 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
LABEL_20:
  v10 = *(unsigned __int64 **)(BugCheckParameter2 + 8LL * (KeGetCurrentPrcb()->Number & 0x1F));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL)
    && !(unsigned __int8)ExfTryAcquirePushLockShared(v10) )
  {
    ExfAcquirePushLockSharedEx(v10, v4, BugCheckParameter2, v11);
  }
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  return v10;
}
