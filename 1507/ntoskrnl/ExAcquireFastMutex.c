/*
 * XREFs of ExAcquireFastMutex @ 0x1400F10C0
 * Callers:
 *     ViExAcquireFastMutexCommon @ 0x140751EEC (ViExAcquireFastMutexCommon.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  unsigned __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v4; // rcx
  char *v5; // rsi
  int SessionId; // eax
  __int16 v7; // ax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 AbOrphanedEntrySummary; // si

  v1 = (unsigned __int64)FastMutex;
  if ( !KiAbEnabled )
  {
    v5 = 0LL;
    goto LABEL_11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    v5 = 0LL;
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_21;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v4, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v4);
  FastMutex = (PFAST_MUTEX)(96 * v4);
  v5 = (char *)CurrentThread->LockEntries + (_QWORD)FastMutex;
  if ( !v5 )
  {
LABEL_21:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *((_DWORD *)v5 + 10) = SessionId;
  FastMutex = (PFAST_MUTEX)0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v5 + 4) = v1 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v7 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v7;
  if ( !v7 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(FastMutex);
LABEL_11:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v1, 0) )
    ExpAcquireFastMutexContended(v1);
  if ( v5 )
    v5[26] |= 1u;
  *(_QWORD *)(v1 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 48) = CurrentIrql;
}
