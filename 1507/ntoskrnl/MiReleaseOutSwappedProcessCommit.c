/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x14021023C
 * Callers:
 *     MmOutSwapProcess @ 0x14011029C (MmOutSwapProcess.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     SmStoreExistsForProcess @ 0x1400F0054 (SmStoreExistsForProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020EB90 (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14020F22C (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14020F404 (MiLogOutswappedProcessCommitRelease.c)
 *     SmpProcessQueryStoreStats @ 0x14025697C (SmpProcessQueryStoreStats.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall MiReleaseOutSwappedProcessCommit(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  volatile signed __int32 *v4; // rdi
  __int16 *VmPartition; // rax
  struct _KTHREAD *v6; // r12
  __int64 v7; // rbx
  void *v8; // r13
  unsigned __int8 CurrentIrql; // si
  unsigned int v10; // ebx
  signed __int32 v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  BOOL v14; // r15d
  unsigned __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  void **p_FirstArgument; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int8 v29; // si
  unsigned int v30; // ebx
  signed __int32 v31; // eax
  char v32; // al
  PVOID PoolWithTag; // [rsp+30h] [rbp-6A8h]
  __int64 v34; // [rsp+38h] [rbp-6A0h]
  struct _KTHREAD v35; // [rsp+40h] [rbp-698h] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 1, (__int64)&v35.StackLimit);
  v4 = (volatile signed __int32 *)(BugCheckParameter1 + 1272);
  VmPartition = MiGetVmPartition(BugCheckParameter1 + 1272);
  v6 = KeGetCurrentThread();
  v34 = (__int64)VmPartition;
  v7 = (__int64)VmPartition;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7243694Du);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(BugCheckParameter1 + 1272);
    }
    else
    {
      v10 = 0;
      if ( _interlockedbittestandset(v4, 0x1Fu) )
        v10 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(BugCheckParameter1 + 1272));
      while ( 1 )
      {
        v11 = *v4;
        if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v11 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v4, v11 | 0x40000000, v11);
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      v7 = v34;
    }
    *(_BYTE *)(BugCheckParameter1 + 1491) |= 0xC0u;
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1272, CurrentIrql);
    v14 = 0;
    v15 = 0LL;
    if ( *(_DWORD *)(v7 + 1048) )
      v14 = SmStoreExistsForProcess();
    LOCK_ADDRESS_SPACE((__int64)v6, BugCheckParameter1, v12, v13);
    v18 = *(_QWORD **)(BugCheckParameter1 + 1544);
    v19 = 0LL;
    while ( v18 )
    {
      v19 = v18;
      v18 = (_QWORD *)*v18;
    }
    if ( v19 )
    {
      do
      {
        MiLockVad((__int64)v6, (__int64)v19, v16, v17);
        if ( MiIsVadEligibleForCommitRelease((__int64)v19) )
        {
          v20 = MiCheckCommitReleaseFromVad(
                  v34,
                  BugCheckParameter1,
                  (volatile signed __int32 *)(BugCheckParameter1 + 1272),
                  (__int64)v19,
                  v14);
          MiUnlockVad((__int64)v6, (__int64)v19);
          v15 += v20;
        }
        else
        {
          MiUnlockVad((__int64)v6, (__int64)v19);
        }
        v21 = (_QWORD *)v19[1];
        v22 = v19;
        if ( v21 )
        {
          do
          {
            v19 = v21;
            v21 = (_QWORD *)*v21;
          }
          while ( v21 );
        }
        else
        {
          while ( 1 )
          {
            v19 = (_QWORD *)(v19[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v19 || (_QWORD *)*v19 == v22 )
              break;
            v22 = v19;
          }
        }
      }
      while ( v19 );
      v8 = PoolWithTag;
      v7 = v34;
    }
    UNLOCK_ADDRESS_SPACE((__int64)v6, BugCheckParameter1);
    if ( v14 )
    {
      if ( (int)SmpProcessQueryStoreStats(BugCheckParameter1, &v35.StateSaveArea) < 0 )
      {
        v27 = (unsigned __int64)PoolWithTag;
      }
      else
      {
        v23 = 0LL;
        p_FirstArgument = &v35.FirstArgument;
        v25 = 8LL;
        do
        {
          v26 = *(unsigned int *)p_FirstArgument++;
          v23 += v26;
          --v25;
        }
        while ( v25 );
        v8 = PoolWithTag;
        v27 = HIDWORD(v35.SchedulingGroup) * v23;
      }
      v28 = ((v27 & 0xFFF) != 0) + (v27 >> 12);
      if ( v15 <= v28 )
        v15 = 0LL;
      else
        v15 -= v28;
    }
    if ( v15 )
      MiReturnCommit(v7, v15);
    v29 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(BugCheckParameter1 + 1272);
    }
    else
    {
      v30 = 0;
      if ( _interlockedbittestandset(v4, 0x1Fu) )
        v30 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(BugCheckParameter1 + 1272));
      while ( 1 )
      {
        v31 = *v4;
        if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v31 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v4, v31 | 0x40000000, v31);
        if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v30);
      }
      v8 = PoolWithTag;
    }
    if ( v15 )
    {
      v32 = *(_BYTE *)(BugCheckParameter1 + 1491) & 0x3F;
      *(_QWORD *)(BugCheckParameter1 + 1512) = v8;
      *(_QWORD *)(BugCheckParameter1 + 1496) = v15;
      *(_BYTE *)(BugCheckParameter1 + 1491) = v32 | 0x80;
      v8 = 0LL;
    }
    else
    {
      *(_BYTE *)(BugCheckParameter1 + 1491) &= 0x3Fu;
    }
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1272, v29);
    MiLogOutswappedProcessCommitRelease();
  }
  v35.QuantumTarget = 0LL;
  KiUnstackDetachProcess(&v35, 1);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
