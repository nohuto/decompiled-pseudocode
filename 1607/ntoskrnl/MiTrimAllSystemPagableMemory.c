/*
 * XREFs of MiTrimAllSystemPagableMemory @ 0x1401E9FC8
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x1401EA320 (MmTrimAllSystemPagableMemory.c)
 *     MmVerifierTrimMemory @ 0x140701908 (MmVerifierTrimMemory.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeAreInterruptsEnabled @ 0x140051240 (KeAreInterruptsEnabled.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiPurgePartitionStandby @ 0x140120EAC (MiPurgePartitionStandby.c)
 *     MiEmptyTargetedWorkingSet @ 0x1401E954C (MiEmptyTargetedWorkingSet.c)
 */

__int64 __fastcall MiTrimAllSystemPagableMemory(int a1, int a2)
{
  _DWORD *v2; // r15
  unsigned __int64 v3; // rsi
  __int64 *v4; // r13
  __int64 v5; // r12
  unsigned int v6; // r8d
  _DWORD *v7; // rdx
  unsigned __int64 *v8; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v11; // r14d
  int v12; // r8d
  int v13; // edx
  LONG *SharedVm; // rbx
  KIRQL v15; // al
  KIRQL v16; // di
  __int64 v17; // rdx
  _KPROCESS *Process; // rdi
  LONG *v19; // rbx
  KIRQL v20; // al
  KIRQL v21; // r15
  __int64 v22; // rdx
  LONG *v23; // rbx
  KIRQL v24; // al
  KIRQL v25; // di
  int *v26; // rax

  v2 = &unk_1403277A8;
  v3 = 1LL;
  v4 = (__int64 *)&unk_140326DF8;
  v5 = 3LL;
  if ( !a1 )
  {
    v6 = 0;
    v7 = &unk_1403277A8;
    v8 = (unsigned __int64 *)&unk_140326DF8;
    do
    {
      v3 = *v8;
      if ( *v8 && *v7 != *(_DWORD *)(v3 + 4) )
        break;
      ++v6;
      ++v8;
      ++v7;
    }
    while ( v6 < 3 );
    if ( v6 == 3 )
      return 0LL;
  }
  if ( KeGetCurrentIrql() > 1u )
    return 0LL;
  CurrentThread = 0LL;
  v11 = 0;
  v12 = 0;
  if ( _InterlockedIncrement(&dword_140327788) <= 1 && (unsigned __int8)KeAreInterruptsEnabled() )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( !v13 )
    {
      do
      {
        v3 = *v4;
        if ( *v4 && *v2 != *(_DWORD *)(v3 + 4) )
        {
          v11 = 1;
          SharedVm = MiGetSharedVm(*v4);
          v15 = ExAcquireSpinLockExclusive(SharedVm);
          SharedVm[1] = 0;
          v16 = v15;
          MiEmptyTargetedWorkingSet(v3, v15);
          LOBYTE(v17) = v16;
          *v2 = *(_DWORD *)(v3 + 4);
          MiUnlockWorkingSetExclusive(v3, v17);
        }
        ++v4;
        ++v2;
        --v5;
      }
      while ( v5 );
      goto LABEL_23;
    }
    if ( v13 == 1 )
    {
      Process = CurrentThread->ApcState.Process;
      v3 = (unsigned __int64)&Process[1].IdealNode[12];
      v19 = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
      v20 = ExAcquireSpinLockExclusive(v19);
      v19[1] = 0;
      v21 = v20;
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
LABEL_23:
        v13 = a1;
LABEL_24:
        if ( a2 == 1 && v11 == 1 )
        {
          if ( v13 == 1 )
            v26 = MiPartitionIdToPointer(*(_WORD *)(v3 + 164));
          else
            v26 = MiSystemPartition;
          MiPurgePartitionStandby((__int64)v26, 8u);
        }
        v12 = 1;
        goto LABEL_31;
      }
      MiEmptyTargetedWorkingSet((ULONG_PTR)&Process[1].IdealNode[12], v20);
      LOBYTE(v22) = v21;
    }
    else
    {
      if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
        goto LABEL_24;
      v3 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
      v23 = MiGetSharedVm(v3);
      v24 = ExAcquireSpinLockExclusive(v23);
      v23[1] = 0;
      v25 = v24;
      MiEmptyTargetedWorkingSet(v3, v24);
      LOBYTE(v22) = v25;
    }
    MiUnlockWorkingSetExclusive(v3, v22);
    v11 = 1;
    goto LABEL_23;
  }
LABEL_31:
  _InterlockedAdd(&dword_140327788, 0xFFFFFFFF);
  if ( v12 == 1 )
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v11;
}
