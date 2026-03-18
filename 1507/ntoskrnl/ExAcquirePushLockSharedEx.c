/*
 * XREFs of ExAcquirePushLockSharedEx @ 0x14004E6D0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquirePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        __int64 a4)
{
  ULONG_PTR v4; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rcx
  ULONG_PTR v7; // rbx
  int v8; // eax
  __int16 v9; // ax
  __int64 result; // rax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v12; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // bl

  v4 = BugCheckParameter2;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 || !KiAbEnabled )
  {
    v7 = 0LL;
    goto LABEL_11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    v7 = 0LL;
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2, a3, a4);
      goto LABEL_28;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  BugCheckParameter1 = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v6, BugCheckParameter1);
  CurrentThread->AbEntrySummary = BugCheckParameter1 & ~(1 << v6);
  BugCheckParameter2 = 96 * v6;
  v7 = (ULONG_PTR)CurrentThread->LockEntries + BugCheckParameter2;
  if ( !v7 )
  {
LABEL_28:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_10;
  }
  if ( v4 + 0x70000000000LL > 0x7FFFFFFFFFLL
    || (Process = CurrentThread->ApcState.Process, (v12 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v8 = -1;
  }
  else
  {
    v8 = *(_DWORD *)(v12 + 8);
  }
  *(_DWORD *)(v7 + 40) = v8;
  BugCheckParameter2 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v7 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_10:
  v9 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v9;
  if ( !v9 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(BugCheckParameter2, BugCheckParameter1, a3);
LABEL_11:
  result = _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(v4, v7, v4);
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 32);
    *(_BYTE *)(v7 + 26) |= 1u;
  }
  return result;
}
