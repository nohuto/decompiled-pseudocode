/*
 * XREFs of FsRtlAcquireEofLock @ 0x1400D57D0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400D5A80 (FsRtlpWaitForIoAtEof.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall FsRtlAcquireEofLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v2; // rsi
  ULONG_PTR v3; // rdi
  struct _KTHREAD *v4; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v6; // rcx
  char *v7; // rbp
  int SessionId; // eax
  __int16 v9; // ax
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v11; // rbx
  unsigned __int8 v12; // di
  unsigned __int32 v13; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  if ( !KiAbEnabled )
  {
    v7 = 0LL;
    goto LABEL_11;
  }
  v4 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v4, v3, KeGetCurrentIrql(), 0LL);
  --v4->SpecialApcDisable;
  if ( !v4->AbEntrySummary )
  {
    if ( !v4->AbOrphanedEntrySummary )
    {
      v7 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v4, v3);
      goto LABEL_28;
    }
    AbOrphanedEntrySummary = v4->AbOrphanedEntrySummary;
    v4->AbOrphanedEntrySummary = 0;
    v4->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v4->AbEntrySummary;
  _BitScanForward((unsigned int *)&v6, AbEntrySummary);
  v4->AbEntrySummary = AbEntrySummary & ~(1 << v6);
  a1 = 96 * v6;
  v7 = (char *)v4->LockEntries + a1;
  if ( !v7 )
  {
LABEL_28:
    _interlockedbittestandset((volatile signed __int32 *)&v4->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v3 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(v4->ApcState.Process);
  else
    SessionId = -1;
  *((_DWORD *)v7 + 10) = SessionId;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v7 + 4) = v3 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v9 = v4->SpecialApcDisable + 1;
  v4->SpecialApcDisable = v9;
  if ( !v9 && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
    KiCheckForKernelApcDelivery(a1);
LABEL_11:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v3, 0) )
    ExpAcquireFastMutexContended(v3);
  if ( v7 )
    v7[26] |= 1u;
  *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 48) = CurrentIrql;
  if ( *(struct _KTHREAD **)v2 == CurrentThread )
  {
    ++*(_WORD *)(v2 + 38);
  }
  else if ( *(_QWORD *)v2 )
  {
    FsRtlpWaitForIoAtEof(v2, -1LL);
  }
  else
  {
    *(_QWORD *)v2 = CurrentThread;
    *(_WORD *)(v2 + 38) = 1;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 48LL);
  v12 = *(_BYTE *)(v11 + 48);
  *(_QWORD *)(v11 + 8) = 0LL;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)v11, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended(v11, v13);
  __writecr8(v12);
  KeAbPostRelease(v11);
}
