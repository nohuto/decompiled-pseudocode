/*
 * XREFs of MiChargeControlAreaPartition @ 0x14006DBF0
 * Callers:
 *     MiInsertSharedCommitNode @ 0x14041B4F0 (MiInsertSharedCommitNode.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiGetCrossPartitionCharges @ 0x1401D948C (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x1401D98AC (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiChargeControlAreaPartition(__int64 a1, __int64 AbEntrySummary)
{
  int *v2; // r9
  __int64 v3; // r8
  unsigned __int16 v4; // ax
  __int64 v5; // rdi
  int *v6; // rbx
  unsigned __int16 v7; // ax
  int *v8; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v11; // r13
  volatile signed __int32 *v12; // rsi
  struct _KTHREAD *v13; // rbp
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v15; // rcx
  __int64 v16; // r14
  struct _KPROCESS *Process; // rax
  unsigned __int64 v18; // rcx
  int v19; // eax
  __int16 v20; // ax
  unsigned __int64 v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rcx

  v2 = &MiSystemPartition;
  v3 = qword_1402FEC28;
  v4 = *(_WORD *)(a1 + 60) & 0x3FF;
  v5 = a1;
  if ( v4 == 1023 )
  {
    v6 = &MiSystemPartition;
  }
  else
  {
    a1 = v4;
    v6 = *(int **)(qword_1402FEC28 + 8LL * v4);
  }
  v7 = *(_WORD *)(AbEntrySummary + 1460);
  if ( v7 == 1023 )
    v8 = &MiSystemPartition;
  else
    v8 = *(int **)(qword_1402FEC28 + 8LL * v7);
  if ( v6 == v8 )
    return 0LL;
  if ( v6 != &MiSystemPartition )
    return 3221225539LL;
  CurrentThread = KeGetCurrentThread();
  v11 = *(_QWORD *)v5;
  --CurrentThread->SpecialApcDisable;
  v12 = (volatile signed __int32 *)(v11 + 40);
  if ( !KiAbEnabled )
  {
    v16 = 0LL;
    goto LABEL_31;
  }
  v13 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v13, v11 + 40, KeGetCurrentIrql(), 0LL);
  --v13->SpecialApcDisable;
  if ( !v13->AbEntrySummary )
  {
    if ( !v13->AbOrphanedEntrySummary )
    {
      v16 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v13, v11 + 40);
      goto LABEL_24;
    }
    AbOrphanedEntrySummary = v13->AbOrphanedEntrySummary;
    v13->AbOrphanedEntrySummary = 0;
    v13->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v13->AbEntrySummary;
  _BitScanForward((unsigned int *)&v15, AbEntrySummary);
  v13->AbEntrySummary = AbEntrySummary & ~(1 << v15);
  a1 = 96 * v15;
  v16 = (__int64)v13->LockEntries + a1;
  if ( !v16 )
  {
LABEL_24:
    _interlockedbittestandset((volatile signed __int32 *)&v13->116 + 1, 0xFu);
    goto LABEL_27;
  }
  if ( (unsigned __int64)(v11 + 0x70000000028LL) > 0x7FFFFFFFFFLL
    || (Process = v13->ApcState.Process, (v18 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v19 = -1;
  }
  else
  {
    v19 = *(_DWORD *)(v18 + 8);
  }
  *(_DWORD *)(v16 + 40) = v19;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v16 + 32) = (unsigned __int64)v12 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_27:
  v20 = v13->SpecialApcDisable + 1;
  v13->SpecialApcDisable = v20;
  if ( !v20 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery(a1);
LABEL_31:
  if ( _interlockedbittestandset64(v12, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 40), v16, v11 + 40);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  if ( (*(_DWORD *)(v5 + 60) & 0xFFFFFC00) == 0 )
  {
    v21 = *(unsigned int *)(v11 + 8);
    if ( (*(_DWORD *)(v5 + 56) & 0x40000000) != 0 )
    {
      v21 = 0LL;
      v22 = v5 + 120;
      if ( v5 != -120 )
      {
        do
        {
          if ( !(unsigned int)MiSubsectionUsingExtents(v22, AbEntrySummary, v3) )
            v21 += *(unsigned int *)(v23 + 44);
          v22 = *(_QWORD *)(v23 + 16);
        }
        while ( v22 );
      }
    }
    if ( v21 )
    {
      if ( !(unsigned int)MiGetCrossPartitionCharges(&unk_1402FE3F0, v21, v3, v2) )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 40));
        KeAbPostRelease(v11 + 40);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        return 3221225773LL;
      }
      if ( !(unsigned int)MiChargeCommit((unsigned __int64)v6, v21, 0LL) )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 40));
        KeAbPostRelease(v11 + 40);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        MiReturnCrossPartitionCharges(&unk_1402FE3F0, v21);
        return 3221225773LL;
      }
      if ( !(unsigned int)MiChargeResident(v6, v21, 0LL) )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 40));
        KeAbPostRelease(v11 + 40);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        MiReturnCommit((__int64)v6, v21);
        MiReturnCrossPartitionCharges(&unk_1402FE3F0, v21);
        return 3221225495LL;
      }
      _InterlockedExchangeAdd64(&qword_1402FF590, v21);
    }
  }
  if ( (*(_DWORD *)(v5 + 60) & 0xFFFFFC00) != 0xFFFFFC00 )
    *(_DWORD *)(v5 + 60) = *(_DWORD *)(v5 + 60) & 0x3FF ^ ((*(_DWORD *)(v5 + 60) & 0xFFFFFC00) + 1024);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 40));
  KeAbPostRelease(v11 + 40);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
