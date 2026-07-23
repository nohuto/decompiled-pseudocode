/*
 * XREFs of EtwpDisableCompression @ 0x14022A660
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1400EB470 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x14022A510 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140051224 (KeGetEffectiveIrql.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     EtwpRelinquishCompressionTarget @ 0x14022AC34 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpDisableCompression(__int64 a1)
{
  __int64 v2; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v7; // rcx
  char *v8; // rbp
  struct _KPROCESS *Process; // rax
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int16 v12; // ax

  if ( *(_DWORD *)(a1 + 988) == 1
    || !_InterlockedExchange((volatile __int32 *)(a1 + 976), 0)
    || *(_DWORD *)(a1 + 944)
    || KeGetEffectiveIrql() >= 2u )
  {
    return;
  }
  CurrentThread = KeGetCurrentThread();
  v4 = a1 + 952;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 952, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, a1 + 952);
      goto LABEL_11;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v2 = 96 * v7;
  v8 = (char *)CurrentThread->LockEntries + v2;
  if ( v8 )
  {
    if ( v4 < qword_140326950
      || v4 >= qword_140326950 + 0x8000000000LL
      || (Process = CurrentThread->ApcState.Process, (v10 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
      || Process == PsInitialSystemProcess )
    {
      v11 = -1;
    }
    else
    {
      v11 = *(_DWORD *)(v10 + 8);
    }
    *((_DWORD *)v8 + 10) = v11;
    v2 = 0x7FFFFFFFFFFFFFFCLL;
    *((_QWORD *)v8 + 4) = v4 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_21;
  }
LABEL_11:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
LABEL_21:
  v12 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v12;
  if ( !v12 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v2);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 952), v8, a1 + 952);
  if ( v8 )
    v8[26] |= 1u;
  EtwpRelinquishCompressionTarget(a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 952));
  KeAbPostRelease(a1 + 952);
}
