/*
 * XREFs of ExAcquireAutoExpandPushLockShared @ 0x1400FF100
 * Callers:
 *     NtMapUserPhysicalPages @ 0x1406A703C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406A75B4 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x14015ADEC (ExpAcquireFannedOutPushLockShared.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExAcquireAutoExpandPushLockShared(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  int v6; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v9; // rcx
  int SessionId; // eax
  __int16 v11; // ax
  int v12; // eax
  ULONG_PTR v13; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // si

  v4 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v6 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 && KiAbEnabled )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    --CurrentThread->SpecialApcDisable;
    if ( !CurrentThread->AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
        goto LABEL_29;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v9, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v9);
    v4 = (__int64)&CurrentThread->LockEntries[v9];
    if ( v4 )
    {
      if ( BugCheckParameter2 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v4 + 40) = SessionId;
      *(_QWORD *)(v4 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_10:
      v11 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v11;
      if ( !v11
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_13;
    }
LABEL_29:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_10;
  }
LABEL_13:
  v12 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v12 & 1) != 0 )
  {
    v13 = ExpAcquireFannedOutPushLockShared(v12 & 0xFFFFFFF8, v4, BugCheckParameter2);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v4, BugCheckParameter2, a4);
    v13 = BugCheckParameter2 | 1;
  }
  if ( !v6 )
    v13 |= 2uLL;
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  return v13;
}
