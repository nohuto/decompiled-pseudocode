/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x1401E09C4
 * Callers:
 *     MmOutSwapProcess @ 0x1400909CC (MmOutSwapProcess.c)
 * Callees:
 *     MiUnlockVad @ 0x140014020 (MiUnlockVad.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     SmStoreExistsForProcess @ 0x1400C712C (SmStoreExistsForProcess.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     SmpProcessQueryStoreStats @ 0x1401357D4 (SmpProcessQueryStoreStats.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF30C (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1401DF850 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1401DFA2C (MiLogOutswappedProcessCommitRelease.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall MiReleaseOutSwappedProcessCommit(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  int *v4; // rax
  struct _KTHREAD *v5; // r13
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // r14
  LONG *v8; // rbx
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 v11; // rbx
  BOOL v12; // r12d
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  unsigned int *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  LONG *v25; // rbx
  KIRQL v26; // al
  __int64 v27; // rdx
  int v28; // ecx
  char v29; // cl
  int *v30; // [rsp+30h] [rbp-6A8h]
  LONG *SharedVm; // [rsp+38h] [rbp-6A0h]
  struct _KTHREAD v32; // [rsp+40h] [rbp-698h] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 1, (__int64)&v32.StackLimit);
  SharedVm = MiGetSharedVm(BugCheckParameter1 + 1280);
  v4 = MiPartitionIdToPointer(*(_WORD *)(BugCheckParameter1 + 1444));
  v5 = KeGetCurrentThread();
  v30 = v4;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7243694Du);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v8 = MiGetSharedVm(BugCheckParameter1 + 1280);
    v9 = ExAcquireSpinLockExclusive(v8);
    v8[1] = 0;
    LOBYTE(v10) = v9;
    *(_BYTE *)(BugCheckParameter1 + 1467) |= 0xC0u;
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v10);
    v11 = (__int64)v30;
    v12 = 0;
    v13 = 0LL;
    if ( v30[266] )
      v12 = SmStoreExistsForProcess();
    LOCK_ADDRESS_SPACE((__int64)v5, BugCheckParameter1);
    v14 = *(_QWORD **)(BugCheckParameter1 + 1568);
    v15 = 0LL;
    while ( v14 )
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
    }
    while ( v15 )
    {
      MiLockVad((__int64)v5, (__int64)v15);
      if ( MiIsVadEligibleForCommitRelease((__int64)v15) )
      {
        v16 = MiCheckCommitReleaseFromVad(v11, BugCheckParameter1, BugCheckParameter1 + 1280, (__int64)v15, v12, v7 + 4);
        MiUnlockVad((__int64)v5, (__int64)v15);
        v13 += v16;
        v11 = (__int64)v30;
      }
      else
      {
        MiUnlockVad((__int64)v5, (__int64)v15);
      }
      v17 = (_QWORD *)v15[1];
      v18 = v15;
      if ( v17 )
      {
        do
        {
          v15 = v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
      else
      {
        while ( 1 )
        {
          v15 = (_QWORD *)(v15[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v15 || (_QWORD *)*v15 == v18 )
            break;
          v18 = v15;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE((__int64)v5, BugCheckParameter1);
    _InterlockedExchange64((volatile __int64 *)(BugCheckParameter1 + 1488), 0LL);
    if ( v12 )
    {
      if ( (int)SmpProcessQueryStoreStats(BugCheckParameter1) < 0 )
      {
        v23 = (unsigned __int64)SharedVm;
      }
      else
      {
        v19 = 0LL;
        v20 = (unsigned int *)&v32.FirstArgument + 1;
        v21 = 8LL;
        do
        {
          v22 = *v20;
          v20 += 2;
          v19 += v22;
          --v21;
        }
        while ( v21 );
        v23 = HIDWORD(v32.SchedulingGroup) * v19;
      }
      v24 = ((v23 & 0xFFF) != 0) + (v23 >> 12);
      if ( v13 <= v24 )
        v13 = 0LL;
      else
        v13 -= v24;
    }
    if ( v13 )
      MiReturnCommit(v11, v13);
    v25 = MiGetSharedVm(BugCheckParameter1 + 1280);
    v26 = ExAcquireSpinLockExclusive(v25);
    v25[1] = 0;
    LOBYTE(v27) = v26;
    v28 = *(_DWORD *)(BugCheckParameter1 + 1464);
    if ( v13 )
    {
      v29 = HIBYTE(v28) & 0x3F | 0x80;
      *((_QWORD *)SharedVm + 4) = v7;
      v7 = 0LL;
      *((_QWORD *)SharedVm + 1) = v13;
    }
    else
    {
      v29 = HIBYTE(v28) & 0x3F;
    }
    *(_BYTE *)(BugCheckParameter1 + 1467) = v29;
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v27);
    MiLogOutswappedProcessCommitRelease(BugCheckParameter1, v13);
  }
  v32.QuantumTarget = 0LL;
  KiUnstackDetachProcess(&v32, 1);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
