/*
 * XREFs of ExTryAcquirePushLockSharedEx @ 0x1400F7760
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400F78D4 (ExfTryAcquirePushLockShared.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquirePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v5; // rcx
  ULONG_PTR v6; // rdi
  int SessionId; // eax
  __int16 v8; // ax
  unsigned __int8 AbOrphanedEntrySummary; // di

  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 || !KiAbEnabled )
  {
    v6 = 0LL;
    goto LABEL_14;
  }
  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() >= 2u )
  {
    v6 = 0LL;
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_14;
  }
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    v6 = 0LL;
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  v6 = (ULONG_PTR)&CurrentThread->LockEntries[v5];
LABEL_7:
  if ( v6 )
  {
    if ( BugCheckParameter2 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v6 + 40) = SessionId;
    *(_QWORD *)(v6 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
  }
  v8 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v8;
  if ( !v8 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
LABEL_14:
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
    || (unsigned __int8)ExfTryAcquirePushLockShared(BugCheckParameter2) )
  {
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    return 1;
  }
  else
  {
    if ( v6 )
      KeAbPostReleaseEx(BugCheckParameter2, v6);
    return 0;
  }
}
