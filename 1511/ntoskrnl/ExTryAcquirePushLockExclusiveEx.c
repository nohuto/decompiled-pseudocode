/*
 * XREFs of ExTryAcquirePushLockExclusiveEx @ 0x14001FE20
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquirePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1, __int64 a3)
{
  ULONG_PTR v3; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rcx
  ULONG_PTR v6; // rdi
  int SessionId; // eax
  __int16 v8; // ax
  unsigned __int8 AbOrphanedEntrySummary; // di

  v3 = BugCheckParameter2;
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
  BugCheckParameter1 = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v5, BugCheckParameter1);
  CurrentThread->AbEntrySummary = BugCheckParameter1 & ~(1 << v5);
  BugCheckParameter2 = 96 * v5;
  v6 = (ULONG_PTR)CurrentThread->LockEntries + BugCheckParameter2;
LABEL_7:
  if ( v6 )
  {
    if ( v3 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v6 + 40) = SessionId;
    BugCheckParameter2 = 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)(v6 + 32) = v3 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
  }
  v8 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v8;
  if ( !v8 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(BugCheckParameter2, BugCheckParameter1, a3);
LABEL_14:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx(v3);
    return 0;
  }
  else
  {
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    return 1;
  }
}
