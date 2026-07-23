/*
 * XREFs of FsRtlAcquireEofLock @ 0x1400C4AD0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400C508C (FsRtlpWaitForIoAtEof.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall FsRtlAcquireEofLock(__int64 a1, volatile signed __int32 *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v3; // r14
  ULONG_PTR v4; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v6; // rcx
  char *v7; // rsi
  int SessionId; // eax
  __int16 v9; // ax
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v11; // rbx
  unsigned __int8 v12; // di
  signed __int32 v13; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v4, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v7 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v4);
      goto LABEL_33;
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
  if ( !v7 )
  {
LABEL_33:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_7;
  }
  if ( v4 < qword_140326950 || v4 >= qword_140326950 + 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  *((_DWORD *)v7 + 10) = SessionId;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v7 + 4) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_7:
  v9 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v9;
  if ( !v9 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
    ExpAcquireFastMutexContended(v4);
  if ( v7 )
    v7[26] |= 1u;
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  if ( *(struct _KTHREAD **)v3 == CurrentThread )
  {
    ++*(_WORD *)(v3 + 38);
  }
  else if ( *(_QWORD *)v3 )
  {
    FsRtlpWaitForIoAtEof(v3, a2, -1LL);
  }
  else
  {
    *(_QWORD *)v3 = CurrentThread;
    *(_WORD *)(v3 + 38) = 1;
  }
  if ( a2 )
    _InterlockedIncrement(a2);
  v11 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 48LL);
  v12 = *(_BYTE *)(v11 + 48);
  *(_QWORD *)(v11 + 8) = 0LL;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)v11, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v11, v13);
  __writecr8(v12);
  return KeAbPostRelease(v11);
}
