/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x140061118
 * Callers:
 *     MiSplitPrivatePage @ 0x14001E7D0 (MiSplitPrivatePage.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiCloneReserveVadCommit @ 0x14009AA54 (MiCloneReserveVadCommit.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1401D2E94 (MiSplitReducedCommitClonePage.c)
 *     MmAssignProcessToJob @ 0x1403E8528 (MmAssignProcessToJob.c)
 *     MiCreatePebOrTeb @ 0x1403F2500 (MiCreatePebOrTeb.c)
 *     MiReturnPageTablePageCommitment @ 0x140415AD0 (MiReturnPageTablePageCommitment.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 *     MiDeleteTebRange @ 0x1404A9390 (MiDeleteTebRange.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  __int16 v8; // ax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v10; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  --*(_WORD *)(a1 + 486);
  v2 = a2 + 880;
  if ( !KiAbEnabled )
  {
    v6 = 0LL;
    goto LABEL_11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a2 + 880, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v6 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a2 + 880);
      goto LABEL_22;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  a1 = 96 * v5;
  v6 = (__int64)CurrentThread->LockEntries + a1;
  if ( !v6 )
  {
LABEL_22:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v2 + 0x70000000000LL > 0x7FFFFFFFFFLL
    || (Process = CurrentThread->ApcState.Process, (v10 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v7 = -1;
  }
  else
  {
    v7 = *(_DWORD *)(v10 + 8);
  }
  *(_DWORD *)(v6 + 40) = v7;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v6 + 32) = v2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v8 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v8;
  if ( !v8 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(a1);
LABEL_11:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2, v6, v2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
}
