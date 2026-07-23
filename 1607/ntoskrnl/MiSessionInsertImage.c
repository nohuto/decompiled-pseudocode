/*
 * XREFs of MiSessionInsertImage @ 0x1401300DC
 * Callers:
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x1404B2908 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiManageSubsectionView @ 0x1400138A0 (MiManageSubsectionView.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x140082DF8 (MmUnlockLoadedModuleListExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x140082E18 (MmLockLoadedModuleListExclusive.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiSessionInsertImage(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 *v4; // r14
  __int64 v5; // rbp
  PVOID PoolWithTag; // rsi
  unsigned __int64 v7; // rdi
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // r13
  unsigned __int64 v11; // rbx
  bool v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r15
  __int64 v16; // rdx
  unsigned int v17; // ebx
  unsigned __int8 v19; // cl
  __int64 v20; // rdx
  __int64 v21[21]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int8 v22; // [rsp+E0h] [rbp+18h] BYREF
  unsigned __int64 v23; // [rsp+E8h] [rbp+20h]

  v23 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v4 = (unsigned __int64 *)(v23 + 104);
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x69486D4Du);
  if ( !PoolWithTag )
    return 3221225495LL;
  v7 = *(unsigned int *)(*(_QWORD *)a2 + 8LL);
  if ( *(_DWORD *)(*(_QWORD *)a2 + 8LL)
    && !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, (unsigned int)v7, 0) )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  SharedVm = MiGetSharedVm(v5);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  MmLockLoadedModuleListExclusive(&v22);
  v11 = *v4;
  v12 = 0;
  if ( !v11 )
  {
LABEL_9:
    memset(PoolWithTag, 0, 0x58uLL);
    *((_QWORD *)PoolWithTag + 9) = v7;
    *((_DWORD *)PoolWithTag + 15) = 1;
    *((_QWORD *)PoolWithTag + 5) = a1 | 3;
    v14 = a1 - 1 + (v7 << 12);
    v15 = v23;
    *((_QWORD *)PoolWithTag + 6) = v14;
    *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)(v15 + 8);
    *((_QWORD *)PoolWithTag + 10) = a2;
    RtlAvlInsertNodeEx((unsigned __int64 *)(v15 + 104), v11, v12, (unsigned __int64)PoolWithTag);
    MmUnlockLoadedModuleListExclusive(v22);
    LOBYTE(v16) = v10;
    MiUnlockWorkingSetExclusive(v5, v16);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 48), v7);
    v21[0] = a2;
    MiManageSubsectionView(v21, (_QWORD *)PoolWithTag + 3, 3);
    return 0;
  }
  while ( a1 > *(_QWORD *)(v11 + 48) )
  {
    v13 = *(_QWORD *)(v11 + 8);
    if ( !v13 )
    {
      v12 = 1;
      goto LABEL_9;
    }
LABEL_12:
    v11 = v13;
  }
  if ( a1 < (*(_QWORD *)(v11 + 40) & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v13 = *(_QWORD *)v11;
    if ( !*(_QWORD *)v11 )
    {
      v12 = 0;
      goto LABEL_9;
    }
    goto LABEL_12;
  }
  v19 = v22;
  ++*(_DWORD *)(v11 + 60);
  MmUnlockLoadedModuleListExclusive(v19);
  LOBYTE(v20) = v10;
  MiUnlockWorkingSetExclusive(v5, v20);
  v17 = 272;
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v7 )
    MiReturnCommit((__int64)MiSystemPartition, v7);
  return v17;
}
