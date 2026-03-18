/*
 * XREFs of MiSessionInsertImage @ 0x140154248
 * Callers:
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140576AF0 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiSessionImageCompare @ 0x14001F3C0 (MiSessionImageCompare.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x1400254F0 (MmUnlockLoadedModuleListExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x14002551C (MmLockLoadedModuleListExclusive.c)
 *     MiManageSubsectionView @ 0x14003DBD0 (MiManageSubsectionView.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiSessionInsertImage(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r15
  volatile signed __int32 *v5; // rdi
  PVOID PoolWithTag; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // r13
  unsigned int v9; // ebx
  signed __int32 v10; // eax
  unsigned __int64 v11; // rbx
  bool v12; // r14
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned __int8 v17; // cl
  __int64 v18[21]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+E0h] [rbp+18h] BYREF

  v20 = a3;
  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v5 = (volatile signed __int32 *)(v4 + 2968);
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
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4 + 2968);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v4 + 2968));
    while ( 1 )
    {
      v10 = *v5;
      if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, v10 | 0x40000000, v10);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  MmLockLoadedModuleListExclusive((unsigned __int8 *)&v20);
  v11 = *(_QWORD *)(v4 + 104);
  v12 = 0;
  if ( !v11 )
  {
LABEL_16:
    memset(PoolWithTag, 0, 0x58uLL);
    *((_QWORD *)PoolWithTag + 9) = v7;
    *((_DWORD *)PoolWithTag + 15) = 1;
    *((_QWORD *)PoolWithTag + 5) = a1 | 3;
    *((_QWORD *)PoolWithTag + 6) = a1 - 1 + (v7 << 12);
    *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)(v4 + 8);
    *((_QWORD *)PoolWithTag + 10) = a2;
    RtlAvlInsertNodeEx((unsigned __int64 *)(v4 + 104), v11, v12, (unsigned __int64)PoolWithTag);
    MmUnlockLoadedModuleListExclusive(v20);
    MiUnlockWorkingSetExclusive(v4 + 2968, CurrentIrql);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 48), v7);
    v18[0] = a2;
    MiManageSubsectionView(v18, (_QWORD *)PoolWithTag + 3, 3);
    return 0;
  }
  while ( 1 )
  {
    v13 = MiSessionImageCompare(a1, v11);
    if ( v13 <= 0 )
      break;
    v14 = *(_QWORD *)(v11 + 8);
    if ( !v14 )
    {
      v12 = 1;
      goto LABEL_16;
    }
LABEL_11:
    v11 = v14;
  }
  if ( v13 < 0 )
  {
    v14 = *(_QWORD *)v11;
    if ( !*(_QWORD *)v11 )
    {
      v12 = 0;
      goto LABEL_16;
    }
    goto LABEL_11;
  }
  v17 = v20;
  ++*(_DWORD *)(v11 + 60);
  MmUnlockLoadedModuleListExclusive(v17);
  MiUnlockWorkingSetExclusive(v4 + 2968, CurrentIrql);
  v15 = 272;
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v7 )
    MiReturnCommit((__int64)MiSystemPartition, v7);
  return v15;
}
