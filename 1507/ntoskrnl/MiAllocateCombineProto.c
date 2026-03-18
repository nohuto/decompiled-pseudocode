/*
 * XREFs of MiAllocateCombineProto @ 0x140226FF8
 * Callers:
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiGetCrossPartitionCharges @ 0x14021D2F4 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x14021D8F0 (MiReturnCrossPartitionCharges.c)
 *     MiInsertNewCombineBlocks @ 0x14022A9B4 (MiInsertNewCombineBlocks.c)
 *     MiLocateCombineBlock @ 0x14022AA70 (MiLocateCombineBlock.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiAllocateCombineProto(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  __int64 inserted; // r14
  _DWORD *v10; // rsi
  unsigned __int8 CurrentIrql; // r12
  signed __int32 v12; // ett
  __int64 CombineBlock; // rax
  __int64 v14; // rbp
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 *v17; // rax
  _QWORD *v18; // rcx
  char *PoolWithTag; // rax
  void *v20; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( !a2 )
    return 0LL;
  inserted = 0LL;
  v10 = (_DWORD *)(16 * (a2 & 0xF) + a1 + 104);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(16 * (a2 & 0xF) + a1 + 104);
  }
  else
  {
    _m_prefetchw(v10);
    v12 = *v10 & 0x7FFFFFFF;
    if ( v12 != _InterlockedCompareExchange(v10, v12 + 1, v12) )
      ExpWaitForSpinLockSharedAndAcquire(v10);
  }
  CombineBlock = MiLocateCombineBlock(a1, a2, a3);
  v14 = CombineBlock;
  if ( CombineBlock )
  {
    v15 = *(_QWORD *)(CombineBlock + 32);
    do
    {
      if ( !v15 )
      {
        a4 = 0;
        goto LABEL_12;
      }
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 32), v15 + 1, v15);
    }
    while ( v16 != v15 );
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
    }
    else
    {
      _InterlockedAnd(v10, 0xBFFFFFFF);
      _InterlockedDecrement(v10);
    }
    __writecr8(CurrentIrql);
    result = v14;
    goto LABEL_34;
  }
LABEL_12:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
  }
  else
  {
    _InterlockedAnd(v10, 0xBFFFFFFF);
    _InterlockedDecrement(v10);
  }
  __writecr8(CurrentIrql);
  if ( !a4 || (_UNKNOWN *)a1 == &unk_14034EF18 && !(unsigned int)MiGetCrossPartitionCharges(qword_14034E8E0, 1LL) )
    return 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
  v17 = (__int64 *)(a1 + 72);
  if ( (__int64 *)*v17 != v17 )
  {
    inserted = *v17;
    v18 = *(_QWORD **)*v17;
    if ( *(__int64 **)(*v17 + 8) != v17 || v18[1] != inserted )
      __fastfail(3u);
    *v17 = (__int64)v18;
    v18[1] = v17;
    ++*(_DWORD *)((inserted & 0xFFFFFFFFFFFFF000uLL) + 8);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !inserted )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6D75534Du);
    v20 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_30;
    *((_DWORD *)PoolWithTag + 2) = 1;
    *((_QWORD *)PoolWithTag + 2) = a1;
    inserted = MiInsertNewCombineBlocks(a1, PoolWithTag + 56);
    if ( !inserted )
    {
      ExFreePoolWithTag(v20, 0);
LABEL_30:
      if ( (_UNKNOWN *)a1 == &unk_14034EF18 )
        MiReturnCrossPartitionCharges(qword_14034E8E0, 1LL);
      return 0LL;
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 380), 1u);
  *(_QWORD *)(inserted + 32) = 1LL;
  result = inserted;
  *(_DWORD *)(inserted + 40) = a3;
LABEL_34:
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 384), 1u);
  return result;
}
