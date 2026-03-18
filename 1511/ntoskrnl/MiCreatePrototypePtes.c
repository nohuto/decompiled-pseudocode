/*
 * XREFs of MiCreatePrototypePtes @ 0x14000CC94
 * Callers:
 *     MiAddViewsForSection @ 0x140062470 (MiAddViewsForSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUpdatePageFileSectionList @ 0x14000C770 (MiUpdatePageFileSectionList.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A8CA0 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8DA0 (MiDecrementSubsectionViewCount.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiGetSubsectionCharges @ 0x1401E2FC8 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1403C8F74 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiCreatePrototypePtes(__int64 *BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r15
  PVOID PoolWithTag; // rax
  void *v7; // rsi
  __int64 v9; // rbp
  BOOL v10; // ebx
  BOOL v11; // r13d
  int SubsectionCharges; // ebx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 VmPartition; // rax
  __int64 v16; // rcx
  int *v17; // r8
  KIRQL v18; // r15
  __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  int v22; // r12d
  __int64 v23; // r13
  BOOL v24; // [rsp+70h] [rbp+18h]

  v3 = a2;
  v5 = a3;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * a3, 0x74536D4Du);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v9 = *BugCheckParameter2;
  v10 = (*(_DWORD *)(*BugCheckParameter2 + 56) & 0x40000000) == 0;
  MiInitializePrototypePtes(
    PoolWithTag,
    v5,
    BugCheckParameter2,
    (*(_DWORD *)(*BugCheckParameter2 + 56) & 0x40000000) == 0);
  v11 = *(_QWORD *)(v9 + 64) != 0LL;
  v24 = v11;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v9 + 56) & 0x40000000) != 0
        || (v13 = MiPartitionIdToPointer(*(_WORD *)(v9 + 60) & 0x3FF),
            VmPartition = MiGetVmPartition(&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12], v14, v13),
            (int *)VmPartition == v17) )
      {
        v3 = 0LL;
      }
      else
      {
        if ( v17 != &MiSystemPartition )
        {
          SubsectionCharges = -1073741740;
          ++dword_1402FEC38;
          goto LABEL_36;
        }
        SubsectionCharges = MiGetSubsectionCharges(v16, v3);
        if ( SubsectionCharges < 0 )
          goto LABEL_36;
      }
      v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72));
      if ( !v3 )
        break;
      v19 = *((unsigned int *)BugCheckParameter2 + 11);
      if ( v3 == v19 )
        break;
      v20 = v3;
      v3 = (unsigned int)v19;
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72), v18);
      MiReturnSubsectionCharges(v20);
    }
    v21 = 0;
    v22 = 0;
    if ( v11 )
    {
      if ( v3 )
        v21 = 9;
      v22 = MiIncrementSubsectionViewCount(BugCheckParameter2, v21);
      if ( v22 == 1 )
      {
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72), v18);
        SubsectionCharges = -1073741670;
LABEL_34:
        if ( v3 )
          MiReturnSubsectionCharges(v3);
LABEL_36:
        if ( !v7 )
          return (unsigned int)SubsectionCharges;
        goto LABEL_37;
      }
      if ( v22 == 3 )
        v3 = 0LL;
      *((_WORD *)BugCheckParameter2 + 16) |= 1u;
    }
    if ( BugCheckParameter2[1] )
    {
      v23 = 0LL;
      if ( v24 )
        v23 = MiDecrementSubsectionViewCount(BugCheckParameter2, v21);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72), v18);
      if ( v24 && v22 == 3 )
        v3 = v23;
      SubsectionCharges = -1073741302;
    }
    else
    {
      BugCheckParameter2[1] = (__int64)v7;
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72), v18);
      if ( !v11 )
        MiUpdatePageFileSectionList((__int64)BugCheckParameter2, 1);
      v7 = 0LL;
      SubsectionCharges = 0;
    }
    goto LABEL_34;
  }
  SubsectionCharges = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, 5);
  if ( SubsectionCharges < 0 )
LABEL_37:
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)SubsectionCharges;
}
