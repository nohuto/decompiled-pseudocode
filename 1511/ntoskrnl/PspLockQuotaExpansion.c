/*
 * XREFs of PspLockQuotaExpansion @ 0x140012F88
 * Callers:
 *     PspReturnResourceQuota @ 0x140012DFC (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x140012E80 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x140140B78 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x1401F52FC (PspExpandLimit.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

char __fastcall PspLockQuotaExpansion(__int64 a1, _BYTE *AbEntrySummary, __int64 a3)
{
  _BYTE *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 *v5; // rsi
  struct _KTHREAD *v6; // rbx
  __int64 v7; // rcx
  char *v8; // rdi
  int v9; // eax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v11; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  v3 = AbEntrySummary;
  if ( *(_DWORD *)a1 )
  {
    LOBYTE(CurrentThread) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
    *v3 = (_BYTE)CurrentThread;
    return (char)CurrentThread;
  }
  CurrentThread = KeGetCurrentThread();
  *AbEntrySummary = 0;
  --CurrentThread->SpecialApcDisable;
  v5 = (volatile signed __int32 *)(a1 + 16);
  if ( KiAbEnabled )
  {
    v6 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v6, a1 + 16, KeGetCurrentIrql(), 0LL);
    --v6->SpecialApcDisable;
    if ( !v6->AbEntrySummary )
    {
      if ( !v6->AbOrphanedEntrySummary )
      {
        v8 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v6, a1 + 16);
        goto LABEL_24;
      }
      AbOrphanedEntrySummary = v6->AbOrphanedEntrySummary;
      v6->AbOrphanedEntrySummary = 0;
      v6->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = (_BYTE *)v6->AbEntrySummary;
    _BitScanForward((unsigned int *)&v7, (unsigned int)AbEntrySummary);
    v6->AbEntrySummary = (unsigned __int8)AbEntrySummary & ~(1 << v7);
    a1 = 96 * v7;
    v8 = (char *)v6->LockEntries + a1;
    if ( v8 )
    {
      if ( (unsigned __int64)(v5 + 0x1C000000000LL) > 0x7FFFFFFFFFLL
        || (Process = v6->ApcState.Process, (v11 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v9 = -1;
      }
      else
      {
        v9 = *(_DWORD *)(v11 + 8);
      }
      *((_DWORD *)v8 + 10) = v9;
      a1 = 0x7FFFFFFFFFFFFFFCLL;
      *((_QWORD *)v8 + 4) = (unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_11:
      LOWORD(CurrentThread) = v6->SpecialApcDisable + 1;
      v6->SpecialApcDisable = (__int16)CurrentThread;
      if ( !(_WORD)CurrentThread )
      {
        CurrentThread = (struct _KTHREAD *)&v6->152;
        if ( *(struct _KTHREAD **)&CurrentThread->Header.Lock != CurrentThread )
          LOBYTE(CurrentThread) = KiCheckForKernelApcDelivery(a1, AbEntrySummary, a3);
      }
      goto LABEL_14;
    }
LABEL_24:
    _interlockedbittestandset((volatile signed __int32 *)&v6->116 + 1, 0xFu);
    goto LABEL_11;
  }
  v8 = 0LL;
LABEL_14:
  if ( _interlockedbittestandset64(v5, 0LL) )
    LOBYTE(CurrentThread) = ExfAcquirePushLockExclusiveEx(v5, v8, v5);
  if ( v8 )
  {
    CurrentThread = (struct _KTHREAD *)*((_QWORD *)v8 + 4);
    v8[26] |= 1u;
  }
  return (char)CurrentThread;
}
