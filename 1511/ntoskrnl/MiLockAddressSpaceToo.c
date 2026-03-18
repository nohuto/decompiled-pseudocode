/*
 * XREFs of MiLockAddressSpaceToo @ 0x1400D5E5C
 * Callers:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiPrepareVadDelete @ 0x14049CCA4 (MiPrepareVadDelete.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int32 *v5; // rbx
  ULONG_PTR v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  ULONG_PTR v9; // r14
  struct _KTHREAD *v10; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // eax
  __int16 v15; // ax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v17; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (volatile signed __int32 *)(a1 + 872);
  v6 = KeAbPreAcquire(a1 + 872, 0LL, 1LL);
  if ( _interlockedbittestandset64(v5, 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx((ULONG_PTR)v5, v6);
    LOBYTE(result) = 0;
  }
  else
  {
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    LOBYTE(result) = 1;
  }
  result = (unsigned __int8)result;
  if ( (_BYTE)result )
  {
    BYTE4(CurrentThread[1].Queue) |= 1u;
    return result;
  }
  MiUnlockVad((__int64)CurrentThread, a2);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  --CurrentThread->SpecialApcDisable;
  v9 = a2 + 40;
  if ( KiAbEnabled )
  {
    v10 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v10, v9, KeGetCurrentIrql(), 0LL);
    --v10->SpecialApcDisable;
    if ( !v10->AbEntrySummary )
    {
      if ( !v10->AbOrphanedEntrySummary )
      {
        v13 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v10, v9);
        goto LABEL_31;
      }
      AbOrphanedEntrySummary = v10->AbOrphanedEntrySummary;
      v10->AbOrphanedEntrySummary = 0;
      v10->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v10->AbEntrySummary;
    _BitScanForward((unsigned int *)&v12, AbEntrySummary);
    v10->AbEntrySummary = AbEntrySummary & ~(1 << v12);
    v8 = 96 * v12;
    v13 = (__int64)v10->LockEntries + v8;
    if ( v13 )
    {
      if ( v9 + 0x70000000000LL > 0x7FFFFFFFFFLL
        || (Process = v10->ApcState.Process, (v17 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v14 = -1;
      }
      else
      {
        v14 = *(_DWORD *)(v17 + 8);
      }
      *(_DWORD *)(v13 + 40) = v14;
      v8 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v13 + 32) = v9 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_17:
      v15 = v10->SpecialApcDisable + 1;
      v10->SpecialApcDisable = v15;
      if ( !v15 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
        KiCheckForKernelApcDelivery(v8);
      goto LABEL_20;
    }
LABEL_31:
    _interlockedbittestandset((volatile signed __int32 *)&v10->116 + 1, 0xFu);
    goto LABEL_17;
  }
  v13 = 0LL;
LABEL_20:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v9, v13, v9);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  BYTE4(CurrentThread[1].Queue) |= 0x80u;
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
