/*
 * XREFs of EtwpLockBufferList @ 0x1400E9530
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     EtwpAdjustTraceBuffers @ 0x140086D7C (EtwpAdjustTraceBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x140086F48 (EtwpAllocateFreeBuffers.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1400B2424 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1400D4790 (EtwpReserveTraceBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400EB050 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x1400EB470 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x14022A510 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x14022AB8C (EtwpReenableCompression.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall EtwpLockBufferList(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v4; // rsi
  unsigned int AbEntrySummary; // edx
  __int64 v6; // rcx
  char *v7; // rbp
  struct _KPROCESS *Process; // rax
  unsigned __int64 v9; // rcx
  int v10; // eax
  __int16 v11; // ax
  unsigned __int8 AbOrphanedEntrySummary; // al

  if ( *(_DWORD *)(a1 + 300) != 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    *a2 = CurrentIrql;
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 696));
    return;
  }
  CurrentThread = KeGetCurrentThread();
  v4 = a1 + 696;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 696, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v7 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 696);
      goto LABEL_25;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v6, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
  a1 = 96 * v6;
  v7 = (char *)CurrentThread->LockEntries + a1;
  if ( v7 )
  {
    if ( v4 < qword_140326950
      || v4 >= qword_140326950 + 0x8000000000LL
      || (Process = CurrentThread->ApcState.Process, (v9 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
      || Process == PsInitialSystemProcess )
    {
      v10 = -1;
    }
    else
    {
      v10 = *(_DWORD *)(v9 + 8);
    }
    *((_DWORD *)v7 + 10) = v10;
    a1 = 0x7FFFFFFFFFFFFFFCLL;
    *((_QWORD *)v7 + 4) = v4 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_13;
  }
LABEL_25:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
LABEL_13:
  v11 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v11;
  if ( !v11 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(a1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v7, v4);
  if ( v7 )
    v7[26] |= 1u;
}
