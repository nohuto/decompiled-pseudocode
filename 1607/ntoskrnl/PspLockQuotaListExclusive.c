/*
 * XREFs of PspLockQuotaListExclusive @ 0x14014CD74
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x1404BB054 (PspLookupProcessQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x14067D044 (PspRemoveQuotaBlock.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall PspLockQuotaListExclusive(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v7; // rcx
  char *v8; // rbp
  struct _KPROCESS *Process; // rax
  unsigned __int64 v10; // rcx
  int v11; // eax

  --*(_WORD *)(a1 + 484);
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a2, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a2);
      goto LABEL_20;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  a1 = 96 * v7;
  v8 = (char *)CurrentThread->LockEntries + a1;
  if ( !v8 )
  {
LABEL_20:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_23;
  }
  if ( a2 < qword_140326950
    || a2 >= qword_140326950 + 0x8000000000LL
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
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v8 + 4) = a2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_23:
  result = (unsigned int)++CurrentThread->SpecialApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result )
      result = KiCheckForKernelApcDelivery(a1);
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a2, v8, a2);
  if ( v8 )
  {
    result = *((_QWORD *)v8 + 4);
    v8[26] |= 1u;
  }
  return result;
}
