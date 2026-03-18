/*
 * XREFs of MiTrimAllSystemPagableMemory @ 0x1401D83E0
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x1401D87E0 (MmTrimAllSystemPagableMemory.c)
 *     MmVerifierTrimMemory @ 0x1406B5AA0 (MmVerifierTrimMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiEmptyWorkingSet @ 0x14001F584 (MiEmptyWorkingSet.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     KeAreInterruptsEnabled @ 0x1400840D0 (KeAreInterruptsEnabled.c)
 *     MiReturnWsToExpansionList @ 0x14009B428 (MiReturnWsToExpansionList.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPurgePartitionStandby @ 0x14011236C (MiPurgePartitionStandby.c)
 */

__int64 __fastcall MiTrimAllSystemPagableMemory(int a1, int a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rdi
  unsigned int v5; // esi
  _DWORD *v6; // r9
  LONG *v7; // r8
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v10; // r13d
  LONG *v11; // rdx
  int v12; // r8d
  _KPROCESS *Process; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  KIRQL v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rdx
  int *VmPartition; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  v4 = 1LL;
  if ( a1 )
  {
    v5 = 3;
  }
  else
  {
    v5 = 0;
    v6 = &unk_1402FF328;
    v7 = &dword_1402FF880;
    do
    {
      v4 = (__int64)v7;
      if ( *v6 != v7[49] )
        break;
      ++v5;
      v7 += 64;
      ++v6;
    }
    while ( v5 < 3 );
    if ( v5 == 3 )
      return 0LL;
  }
  if ( KeGetCurrentIrql() > 1u )
    return 0LL;
  CurrentThread = 0LL;
  v10 = 0;
  if ( _InterlockedIncrement(&dword_1402FF308) > 1 || !(unsigned __int8)KeAreInterruptsEnabled() )
    goto LABEL_39;
  CurrentThread = KeGetCurrentThread();
  v10 = v12 + 2;
  CurrentThread->SpecialApcDisable += v12;
  if ( !a1 )
    goto LABEL_17;
  if ( a1 == v10 )
  {
    Process = CurrentThread->ApcState.Process;
    v4 = (__int64)&Process[1].IdealNode[12];
    v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      goto LABEL_31;
    while ( 1 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
      v17 = v4 + 24;
      if ( *(_QWORD *)(v4 + 24) )
      {
        v18 = *(_QWORD *)v17;
        v19 = *(_QWORD **)(v4 + 32);
        if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 || *v19 != v17 )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *(_QWORD *)v17 = 0LL;
        *(_BYTE *)(v4 + 217) = *(_BYTE *)(v4 + 217) & 0xF9 | 2;
        if ( !a1 )
          *((_DWORD *)&MiState[565] + v5) = *(_DWORD *)(v4 + 196);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        LOBYTE(v20) = v16;
        MiEmptyWorkingSet((volatile LONG *)v4, v20, 0);
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
        *(_BYTE *)(v4 + 217) &= 0xF9u;
        MiReturnWsToExpansionList(v4, 0LL);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v2 = v10;
      }
      else
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      }
LABEL_31:
      LOBYTE(v14) = v16;
      MiUnlockWorkingSetExclusive(v4, v14, v15);
      if ( ++v5 >= 3 )
      {
        if ( a2 == v10 && v2 == v10 )
        {
          if ( a1 == v10 )
            VmPartition = MiGetVmPartition(v4);
          else
            VmPartition = MiSystemPartition;
          MiPurgePartitionStandby((__int64)VmPartition, 8u);
        }
        goto LABEL_39;
      }
      v11 = &dword_1402FF880;
      v4 = (__int64)(&dword_1402FF880 + 64 * (unsigned __int64)v5);
      v2 = 0;
LABEL_17:
      if ( (*(_BYTE *)(v4 + 216) & 7) == 3 )
      {
        if ( *((_DWORD *)&MiState[565] + v5) != *(_DWORD *)(v4 + 196) )
          goto LABEL_23;
        v4 = (__int64)&v11[64 * (unsigned __int64)++v5];
      }
      else if ( (*(_BYTE *)(v4 + 216) & 7) - 3 != v10 )
      {
        goto LABEL_23;
      }
      if ( *((_DWORD *)&MiState[565] + v5) == *(_DWORD *)(v4 + 196) )
        goto LABEL_39;
LABEL_23:
      v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v4);
    }
  }
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
  {
    v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968;
    goto LABEL_23;
  }
LABEL_39:
  _InterlockedAdd(&dword_1402FF308, 0xFFFFFFFF);
  if ( v10 == 1 )
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v2;
}
