/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x1401D059C
 * Callers:
 *     MmOutSwapProcess @ 0x1400328BC (MmOutSwapProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     SmStoreExistsForProcess @ 0x140092678 (SmStoreExistsForProcess.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401CF434 (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1401CF8BC (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1401CFA94 (MiLogOutswappedProcessCommitRelease.c)
 *     SmpProcessQueryStoreStats @ 0x140207720 (SmpProcessQueryStoreStats.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseOutSwappedProcessCommit(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  int *VmPartition; // rax
  struct _KTHREAD *v5; // r12
  __int64 v6; // rbx
  void *v7; // r13
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  BOOL v11; // r15d
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  char *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  char v27; // al
  int *v28; // [rsp+30h] [rbp-6A8h]
  PVOID PoolWithTag; // [rsp+38h] [rbp-6A0h]
  $D4FCF91253F76F57393CBFE908971F67 v30; // [rsp+40h] [rbp-698h] BYREF
  char v31[48]; // [rsp+70h] [rbp-668h] BYREF
  char v32[12]; // [rsp+A0h] [rbp-638h] BYREF
  unsigned int v33; // [rsp+ACh] [rbp-62Ch]
  char v34; // [rsp+C8h] [rbp-610h] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 1LL, (__int64)v31);
  VmPartition = MiGetVmPartition(BugCheckParameter1 + 1280);
  v5 = KeGetCurrentThread();
  v28 = VmPartition;
  v6 = (__int64)VmPartition;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7243694Du);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(BugCheckParameter1 + 1280));
    *(_BYTE *)(BugCheckParameter1 + 1499) |= 0xC0u;
    LOBYTE(v9) = v8;
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v9, v10);
    v11 = 0;
    v12 = 0LL;
    if ( *(_DWORD *)(v6 + 1080) )
      v11 = SmStoreExistsForProcess();
    LOCK_ADDRESS_SPACE((__int64)v5, BugCheckParameter1);
    v13 = *(_QWORD **)(BugCheckParameter1 + 1552);
    v14 = 0LL;
    while ( v13 )
    {
      v14 = v13;
      v13 = (_QWORD *)*v13;
    }
    if ( v14 )
    {
      v15 = v6;
      do
      {
        MiLockVad((__int64)v5, (__int64)v14);
        if ( MiIsVadEligibleForCommitRelease((__int64)v14) )
        {
          v16 = MiCheckCommitReleaseFromVad(
                  v15,
                  BugCheckParameter1,
                  (volatile LONG *)(BugCheckParameter1 + 1280),
                  (__int64)v14,
                  v11);
          MiUnlockVad((__int64)v5, (__int64)v14);
          v12 += v16;
        }
        else
        {
          MiUnlockVad((__int64)v5, (__int64)v14);
        }
        v17 = (_QWORD *)v14[1];
        v18 = v14;
        if ( v17 )
        {
          do
          {
            v14 = v17;
            v17 = (_QWORD *)*v17;
          }
          while ( v17 );
        }
        else
        {
          while ( 1 )
          {
            v14 = (_QWORD *)(v14[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v14 || (_QWORD *)*v14 == v18 )
              break;
            v18 = v14;
          }
        }
      }
      while ( v14 );
      v7 = PoolWithTag;
      v6 = (__int64)v28;
    }
    UNLOCK_ADDRESS_SPACE((__int64)v5, BugCheckParameter1);
    if ( v11 )
    {
      if ( (int)SmpProcessQueryStoreStats(BugCheckParameter1, v32) < 0 )
      {
        v23 = (unsigned __int64)PoolWithTag;
      }
      else
      {
        v19 = 0LL;
        v20 = &v34;
        v21 = 8LL;
        do
        {
          v22 = *(unsigned int *)v20;
          v20 += 8;
          v19 += v22;
          --v21;
        }
        while ( v21 );
        v23 = v33 * v19;
      }
      v24 = ((v23 & 0xFFF) != 0) + (v23 >> 12);
      if ( v12 <= v24 )
        v12 = 0LL;
      else
        v12 -= v24;
    }
    if ( v12 )
      MiReturnCommit(v6, v12);
    LOBYTE(v25) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(BugCheckParameter1 + 1280));
    if ( v12 )
    {
      v27 = *(_BYTE *)(BugCheckParameter1 + 1499) & 0x3F;
      *(_QWORD *)(BugCheckParameter1 + 1520) = v7;
      *(_QWORD *)(BugCheckParameter1 + 1504) = v12;
      *(_BYTE *)(BugCheckParameter1 + 1499) = v27 | 0x80;
      v7 = 0LL;
    }
    else
    {
      *(_BYTE *)(BugCheckParameter1 + 1499) &= 0x3Fu;
    }
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v25, v26);
    MiLogOutswappedProcessCommitRelease();
  }
  v30.SavedApcState.Process = 0LL;
  KiUnstackDetachProcess(&v30, 1LL);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
