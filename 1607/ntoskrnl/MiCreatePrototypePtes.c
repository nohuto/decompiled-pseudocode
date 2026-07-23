/*
 * XREFs of MiCreatePrototypePtes @ 0x14008F5E4
 * Callers:
 *     MiAddViewsForSection @ 0x14002C210 (MiAddViewsForSection.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x1400223E0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x14002CAA0 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiUpdatePageFileSectionList @ 0x14008F97C (MiUpdatePageFileSectionList.c)
 *     MiGetSubsectionCharges @ 0x1401F4F24 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1404A2E54 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiCreatePrototypePtes(__int64 *BugCheckParameter2, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r14
  __int64 v7; // rdi
  PVOID PoolWithTag; // rax
  void *v10; // rbp
  BOOL v11; // ebx
  BOOL v12; // r13d
  int v13; // r12d
  KIRQL v14; // r15
  unsigned int v15; // ebx
  int v16; // r12d
  int FileExtents; // ebx
  int *v19; // rax
  __int64 v20; // rcx
  int *v21; // r8
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned int v24; // ebx
  BOOL v25; // [rsp+78h] [rbp+20h]

  v4 = *BugCheckParameter2;
  v7 = a3;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * a4, 0x74536D4Du);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    v11 = (*(_DWORD *)(v4 + 56) & 0x40000000) == 0;
    MiInitializePrototypePtes(PoolWithTag, a4, BugCheckParameter2, (*(_DWORD *)(v4 + 56) & 0x40000000) == 0);
    v12 = *(_QWORD *)(v4 + 64) != 0LL;
    v25 = v12;
    if ( !v11 )
    {
      FileExtents = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, 5);
      if ( FileExtents >= 0 )
        return (unsigned int)FileExtents;
      goto LABEL_31;
    }
    v13 = a2 & 1;
    while ( 1 )
    {
      if ( v13
        || (*(_DWORD *)(v4 + 56) & 0x40000000) != 0
        || (MiPartitionIdToPointer(*(_WORD *)(v4 + 60) & 0x3FF),
            v19 = MiPartitionIdToPointer(WORD2(KeGetCurrentThread()->ApcState.Process[1].InstrumentationCallback)),
            v19 == v21) )
      {
        v7 = 0LL;
      }
      else
      {
        if ( v21 != MiSystemPartition )
        {
          FileExtents = -1073741740;
          ++dword_140327048;
          goto LABEL_20;
        }
        FileExtents = MiGetSubsectionCharges(v20, v7);
        if ( FileExtents < 0 )
          goto LABEL_20;
      }
      v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
      if ( !v7 )
        break;
      v23 = *((unsigned int *)BugCheckParameter2 + 11);
      if ( v7 == v23 )
        break;
      v24 = v7;
      v7 = (unsigned int)v23;
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72), v14);
      MiReturnSubsectionCharges(v24);
    }
    v15 = 0;
    v16 = 0;
    if ( v12 )
    {
      if ( v7 )
        v15 = 9;
      v16 = MiIncrementSubsectionViewCount((__int64)BugCheckParameter2, v15);
      if ( v16 == 1 )
      {
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72), v14);
        FileExtents = -1073741670;
LABEL_18:
        if ( v7 )
          MiReturnSubsectionCharges(v7);
LABEL_20:
        if ( !v10 )
          return (unsigned int)FileExtents;
LABEL_31:
        ExFreePoolWithTag(v10, 0);
        return (unsigned int)FileExtents;
      }
      if ( v16 == 3 )
        v7 = 0LL;
      *((_WORD *)BugCheckParameter2 + 16) |= 1u;
    }
    if ( BugCheckParameter2[1] )
    {
      v22 = 0LL;
      if ( v25 )
        v22 = MiDecrementSubsectionViewCount((__int64)BugCheckParameter2, v15);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72), v14);
      if ( v25 && v16 == 3 )
        v7 = v22;
      FileExtents = -1073741302;
    }
    else
    {
      BugCheckParameter2[1] = (__int64)v10;
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72), v14);
      if ( !v12 )
        MiUpdatePageFileSectionList(BugCheckParameter2, 1LL);
      v10 = 0LL;
      FileExtents = 0;
    }
    goto LABEL_18;
  }
  return 3221225626LL;
}
