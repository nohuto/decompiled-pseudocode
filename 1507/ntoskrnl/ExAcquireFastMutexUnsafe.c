/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x140062930
 * Callers:
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x140751A9C (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v2; // rsi
  struct _KTHREAD *v3; // rbx
  __int64 AbEntrySummary; // rdx
  __int64 v5; // rcx
  char *v6; // rdi
  int SessionId; // eax
  __int16 v8; // ax
  unsigned __int8 AbOrphanedEntrySummary; // di

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64)FastMutex;
  if ( !KiAbEnabled )
  {
    v6 = 0LL;
    goto LABEL_11;
  }
  v3 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v3, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  --v3->SpecialApcDisable;
  if ( !v3->AbEntrySummary )
  {
    v6 = 0LL;
    if ( !v3->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v3, FastMutex);
      goto LABEL_21;
    }
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    v3->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v3->AbEntrySummary;
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  v3->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  FastMutex = (PFAST_MUTEX)(96 * v5);
  v6 = (char *)v3->LockEntries + (_QWORD)FastMutex;
  if ( !v6 )
  {
LABEL_21:
    _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v2 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(v3->ApcState.Process, AbEntrySummary);
  else
    SessionId = -1;
  *((_DWORD *)v6 + 10) = SessionId;
  FastMutex = (PFAST_MUTEX)0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v6 + 4) = v2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v8 = v3->SpecialApcDisable + 1;
  v3->SpecialApcDisable = v8;
  if ( !v8 && ($CD287064E7C9F7953DE243E927CFCB99 *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery(FastMutex);
LABEL_11:
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v2, 0) )
    ExpAcquireFastMutexContended(v2);
  if ( v6 )
    v6[26] |= 1u;
  *(_QWORD *)(v2 + 8) = CurrentThread;
}
