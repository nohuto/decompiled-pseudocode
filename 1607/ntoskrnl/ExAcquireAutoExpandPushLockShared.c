/*
 * XREFs of ExAcquireAutoExpandPushLockShared @ 0x1400C55E0
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x14065CB7C (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x14065D810 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DC8C (NtMapUserPhysicalPagesScatter.c)
 *     MiCommitEnclavePages @ 0x14065E818 (MiCommitEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x14065F014 (MiCreateEnclave.c)
 *     MiDeleteEnclavePages @ 0x14065F3EC (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14065F6F8 (MiProtectEnclavePages.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x140133654 (ExpAcquireFannedOutPushLockShared.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rsi
  unsigned __int64 v3; // rbx
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v7; // rcx
  int SessionId; // eax
  __int16 v9; // ax
  int v10; // eax
  __int64 v11; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // si

  v2 = 0LL;
  v3 = BugCheckParameter2;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
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
        goto LABEL_27;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    BugCheckParameter2 = 96 * v7;
    v2 = (ULONG_PTR)CurrentThread->LockEntries + BugCheckParameter2;
    if ( v2 )
    {
      if ( v3 >= qword_140326950 && v3 < qword_140326950 + 0x8000000000LL )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v2 + 40) = SessionId;
      BugCheckParameter2 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v2 + 32) = v3 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_10:
      v9 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v9;
      if ( !v9
        && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(BugCheckParameter2);
      }
      goto LABEL_13;
    }
LABEL_27:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_10;
  }
LABEL_13:
  v10 = *(_DWORD *)(v3 + 8);
  if ( (v10 & 1) != 0 )
  {
    v11 = ExpAcquireFannedOutPushLockShared(v10 & 0xFFFFFFF8, v2, v3);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v3, v2, v3);
    v11 = v3 | 1;
  }
  if ( !v4 )
    v11 |= 2uLL;
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  return v11;
}
