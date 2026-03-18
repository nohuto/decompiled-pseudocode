/*
 * XREFs of ExAcquireCacheAwarePushLockSharedEx @ 0x140020820
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfTryAcquirePushLockShared @ 0x1400209C4 (ExfTryAcquirePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

volatile signed __int64 *__fastcall ExAcquireCacheAwarePushLockSharedEx(
        __int64 BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v5; // rcx
  ULONG_PTR v6; // rdi
  int SessionId; // eax
  __int16 v8; // ax
  volatile signed __int64 *v9; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // di

  v2 = BugCheckParameter2;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 || !KiAbEnabled )
  {
    v6 = 0LL;
    goto LABEL_11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    v6 = 0LL;
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
      goto LABEL_26;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  BugCheckParameter2 = 96 * v5;
  v6 = (ULONG_PTR)CurrentThread->LockEntries + BugCheckParameter2;
  if ( !v6 )
  {
LABEL_26:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_10;
  }
  if ( (unsigned __int64)(v2 + 0x70000000000LL) <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v6 + 40) = SessionId;
  BugCheckParameter2 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v6 + 32) = v2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_10:
  v8 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v8;
  if ( !v8 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(BugCheckParameter2);
LABEL_11:
  v9 = *(volatile signed __int64 **)(v2 + 8LL * (KeGetPcr()->Prcb.Number & 0x1F));
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) && !(unsigned __int8)ExfTryAcquirePushLockShared(v9) )
    ExfAcquirePushLockSharedEx(v9, v6, v2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  return v9;
}
