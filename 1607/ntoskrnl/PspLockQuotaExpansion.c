/*
 * XREFs of PspLockQuotaExpansion @ 0x1400C486C
 * Callers:
 *     PspReturnResourceQuota @ 0x1400C46E0 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x1400C4764 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x14014AD68 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x14020EDCC (PspExpandLimit.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

char __fastcall PspLockQuotaExpansion(__int64 a1, _BYTE *a2)
{
  $2B8565053CDC740D4E4887693DD8AC9E *v3; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v8; // rcx
  char *v9; // rsi
  struct _KPROCESS *Process; // rax
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al

  if ( *(_DWORD *)a1 )
  {
    LOBYTE(v3) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
    *a2 = (_BYTE)v3;
    return (char)v3;
  }
  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  --CurrentThread->SpecialApcDisable;
  v5 = KeGetCurrentThread();
  v6 = a1 + 16;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v5, a1 + 16, KeGetCurrentIrql(), 0LL);
  --v5->SpecialApcDisable;
  if ( !v5->AbEntrySummary )
  {
    if ( !v5->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v5, a1 + 16);
      goto LABEL_25;
    }
    AbOrphanedEntrySummary = v5->AbOrphanedEntrySummary;
    v5->AbOrphanedEntrySummary = 0;
    v5->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v5->AbEntrySummary;
  _BitScanForward((unsigned int *)&v8, AbEntrySummary);
  v5->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  a1 = 96 * v8;
  v9 = (char *)v5->LockEntries + a1;
  if ( v9 )
  {
    if ( v6 < qword_140326950
      || v6 >= qword_140326950 + 0x8000000000LL
      || (Process = v5->ApcState.Process, (v11 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
      || Process == PsInitialSystemProcess )
    {
      v12 = -1;
    }
    else
    {
      v12 = *(_DWORD *)(v11 + 8);
    }
    *((_DWORD *)v9 + 10) = v12;
    a1 = 0x7FFFFFFFFFFFFFFCLL;
    *((_QWORD *)v9 + 4) = v6 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_13;
  }
LABEL_25:
  _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0xFu);
LABEL_13:
  LOWORD(v3) = v5->SpecialApcDisable + 1;
  v5->SpecialApcDisable = (__int16)v3;
  if ( !(_WORD)v3 )
  {
    v3 = &v5->152;
    if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v3->ApcState.ApcListHead[0].Flink != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery(a1);
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    LOBYTE(v3) = ExfAcquirePushLockExclusiveEx(v6, v9, v6);
  if ( v9 )
  {
    v3 = ($2B8565053CDC740D4E4887693DD8AC9E *)*((_QWORD *)v9 + 4);
    v9[26] |= 1u;
  }
  return (char)v3;
}
