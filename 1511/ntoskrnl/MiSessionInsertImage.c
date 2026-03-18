/*
 * XREFs of MiSessionInsertImage @ 0x14012599C
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1403CC454 (MiGetSystemAddressForImage.c)
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14001A804 (MmUnlockLoadedModuleListExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x14001A824 (MmLockLoadedModuleListExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiManageSubsectionView @ 0x1400B12D0 (MiManageSubsectionView.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionInsertImage(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r15
  PVOID PoolWithTag; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  bool v8; // bp
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // ebx
  unsigned __int8 v14; // cl
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD v17[21]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int8 v18; // [rsp+E0h] [rbp+18h] BYREF
  KIRQL v19; // [rsp+E8h] [rbp+20h]

  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x69486D4Du);
  if ( !PoolWithTag )
    return 3221225495LL;
  v6 = *(unsigned int *)(*(_QWORD *)a2 + 8LL);
  if ( *(_DWORD *)(*(_QWORD *)a2 + 8LL)
    && !(unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, (unsigned int)v6, 0LL) )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 2968));
  MmLockLoadedModuleListExclusive(&v18);
  v7 = *(_QWORD *)(v4 + 104);
  v8 = 0;
  if ( !v7 )
  {
LABEL_9:
    memset(PoolWithTag, 0, 0x58uLL);
    *((_QWORD *)PoolWithTag + 9) = v6;
    *((_DWORD *)PoolWithTag + 15) = 1;
    *((_QWORD *)PoolWithTag + 5) = a1 | 3;
    *((_QWORD *)PoolWithTag + 6) = a1 + (v6 << 12) - 1;
    *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)(v4 + 8);
    *((_QWORD *)PoolWithTag + 10) = a2;
    RtlAvlInsertNodeEx((unsigned __int64 *)(v4 + 104), v7, v8, (unsigned __int64)PoolWithTag);
    MmUnlockLoadedModuleListExclusive(v18);
    LOBYTE(v10) = v19;
    MiUnlockWorkingSetExclusive(v4 + 2968, v10, v11);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 48), v6);
    v17[0] = a2;
    MiManageSubsectionView((__int64)v17, (_QWORD *)PoolWithTag + 3, 3);
    return 0;
  }
  while ( a1 > *(_QWORD *)(v7 + 48) )
  {
    v9 = *(_QWORD *)(v7 + 8);
    if ( !v9 )
    {
      v8 = 1;
      goto LABEL_9;
    }
LABEL_12:
    v7 = v9;
  }
  if ( a1 < (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v9 = *(_QWORD *)v7;
    if ( !*(_QWORD *)v7 )
    {
      v8 = 0;
      goto LABEL_9;
    }
    goto LABEL_12;
  }
  v14 = v18;
  ++*(_DWORD *)(v7 + 60);
  MmUnlockLoadedModuleListExclusive(v14);
  LOBYTE(v15) = v19;
  MiUnlockWorkingSetExclusive(v4 + 2968, v15, v16);
  v12 = 272;
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 )
    MiReturnCommit((__int64)MiSystemPartition, v6);
  return v12;
}
