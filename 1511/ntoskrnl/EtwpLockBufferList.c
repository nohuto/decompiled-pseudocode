/*
 * XREFs of EtwpLockBufferList @ 0x14009D480
 * Callers:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     EtwpAdjustTraceBuffers @ 0x14009BAD0 (EtwpAdjustTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x14009D240 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueFreeBuffer @ 0x14009D39C (EtwpEnqueueFreeBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x14009FC90 (EtwpReserveTraceBuffer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1400F2E7C (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1400F485C (EtwpAllocateFreeBuffers.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall EtwpLockBufferList(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v3; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  __int16 v9; // ax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v11; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  if ( *(_DWORD *)(a1 + 316) != 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    *a2 = CurrentIrql;
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 712));
    return;
  }
  v3 = a1 + 712;
  if ( KiAbEnabled )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 712, KeGetCurrentIrql(), 0LL);
    --CurrentThread->SpecialApcDisable;
    if ( !CurrentThread->AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v7 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 712);
        goto LABEL_24;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v6, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
    a1 = 96 * v6;
    v7 = (__int64)CurrentThread->LockEntries + a1;
    if ( v7 )
    {
      if ( v3 + 0x70000000000LL > 0x7FFFFFFFFFLL
        || (Process = CurrentThread->ApcState.Process, (v11 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v8 = -1;
      }
      else
      {
        v8 = *(_DWORD *)(v11 + 8);
      }
      *(_DWORD *)(v7 + 40) = v8;
      a1 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v7 + 32) = v3 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_11:
      v9 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v9;
      if ( !v9
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(a1);
      }
      goto LABEL_14;
    }
LABEL_24:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_11;
  }
  v7 = 0LL;
LABEL_14:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, v7, v3);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
}
