/*
 * XREFs of ExAcquireAutoExpandPushLockShared @ 0x140020390
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x140627344 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140627FF0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140628474 (NtMapUserPhysicalPagesScatter.c)
 *     MiCommitEnclavePages @ 0x140628FF8 (MiCommitEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x1406297C0 (MiCreateEnclave.c)
 *     MiDeleteEnclavePages @ 0x140629B8C (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140629E98 (MiProtectEnclavePages.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x14012BC30 (ExpAcquireFannedOutPushLockShared.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireAutoExpandPushLockShared(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 a3)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // rbx
  int v5; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v7; // rcx
  int SessionId; // eax
  __int16 v9; // ax
  int v10; // eax
  __int64 v11; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // si

  v3 = 0LL;
  v4 = BugCheckParameter2;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v5 = BugCheckParameter1 & 2;
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
        goto LABEL_26;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    BugCheckParameter1 = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v7, BugCheckParameter1);
    CurrentThread->AbEntrySummary = BugCheckParameter1 & ~(1 << v7);
    BugCheckParameter2 = 96 * v7;
    v3 = (ULONG_PTR)CurrentThread->LockEntries + BugCheckParameter2;
    if ( v3 )
    {
      if ( v4 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v3 + 40) = SessionId;
      BugCheckParameter2 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v3 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_10:
      v9 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v9;
      if ( !v9
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(BugCheckParameter2, BugCheckParameter1, a3);
      }
      goto LABEL_13;
    }
LABEL_26:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_10;
  }
LABEL_13:
  v10 = *(_DWORD *)(v4 + 8);
  if ( (v10 & 1) != 0 )
  {
    v11 = ExpAcquireFannedOutPushLockShared(v10 & 0xFFFFFFF8, v3, v4);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v4, v3, v4);
    v11 = v4 | 1;
  }
  if ( !v5 )
    v11 |= 2uLL;
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  return v11;
}
