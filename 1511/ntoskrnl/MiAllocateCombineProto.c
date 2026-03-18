/*
 * XREFs of MiAllocateCombineProto @ 0x140128770
 * Callers:
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiProcessCrcList @ 0x14050E300 (MiProcessCrcList.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInsertNewCombineBlocks @ 0x14012B8A4 (MiInsertNewCombineBlocks.c)
 *     MiGetCrossPartitionCharges @ 0x1401D948C (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x1401D98AC (MiReturnCrossPartitionCharges.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14021424C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateCombineProto(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v5; // r12d
  __int64 inserted; // r13
  _DWORD *v9; // rsi
  KIRQL CurrentIrql; // r15
  signed __int32 v11; // ett
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 result; // rax
  unsigned int v15; // eax
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 *v18; // rax
  _QWORD *v19; // rcx
  char *PoolWithTag; // rax
  void *v21; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v4 = a4;
  v5 = a3;
  if ( !a2 )
    return 0LL;
  inserted = 0LL;
  v9 = (_DWORD *)(16 * (a2 & 0xF) + a1 + 104);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, CurrentIrql);
  }
  else
  {
    _m_prefetchw(v9);
    v11 = *v9 & 0x7FFFFFFF;
    if ( v11 != _InterlockedCompareExchange(v9, v11 + 1, v11) )
      ExpWaitForSpinLockSharedAndAcquire(v9, CurrentIrql, a3);
  }
  v12 = *(_QWORD *)(a1 + 16 * ((a2 & 0xF) + 6));
  if ( !v12 )
  {
LABEL_11:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v9, retaddr);
    }
    else
    {
      _InterlockedAnd(v9, 0xBFFFFFFF);
      _InterlockedDecrement(v9);
    }
    __writecr8(CurrentIrql);
    if ( v4
      && ((_UNKNOWN *)a1 != &unk_1402FEA58 || (unsigned int)MiGetCrossPartitionCharges(&unk_1402FE418, 1LL, a3, a4)) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
      v18 = (__int64 *)(a1 + 72);
      if ( (__int64 *)*v18 != v18 )
      {
        inserted = *v18;
        v19 = *(_QWORD **)*v18;
        if ( *(__int64 **)(*v18 + 8) != v18 || v19[1] != inserted )
          __fastfail(3u);
        *v18 = (__int64)v19;
        v19[1] = v18;
        ++*(_DWORD *)((inserted & 0xFFFFFFFFFFFFF000uLL) + 8);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( inserted )
        goto LABEL_27;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6D75534Du);
      v21 = PoolWithTag;
      if ( PoolWithTag )
      {
        *((_DWORD *)PoolWithTag + 2) = 1;
        *((_QWORD *)PoolWithTag + 2) = a1;
        inserted = MiInsertNewCombineBlocks(a1, PoolWithTag + 56);
        if ( inserted )
        {
LABEL_27:
          _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 380), 1u);
          *(_QWORD *)(inserted + 32) = 1LL;
          result = inserted;
          *(_DWORD *)(inserted + 40) = v5;
          goto LABEL_20;
        }
        ExFreePoolWithTag(v21, 0);
      }
      if ( (_UNKNOWN *)a1 == &unk_1402FEA58 )
        MiReturnCrossPartitionCharges(&unk_1402FE418, 1LL);
    }
    return 0LL;
  }
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 + 24);
    if ( a2 > v13 )
    {
LABEL_9:
      v12 = *(_QWORD *)(v12 + 8);
      goto LABEL_10;
    }
    if ( a2 >= v13 )
    {
      v15 = *(_DWORD *)(v12 + 40);
      if ( v5 > v15 )
        goto LABEL_9;
      if ( v5 >= v15 )
        break;
    }
    v12 = *(_QWORD *)v12;
LABEL_10:
    if ( !v12 )
      goto LABEL_11;
  }
  v16 = *(_QWORD *)(v12 + 32);
  if ( !v16 )
  {
LABEL_34:
    v4 = 0;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v17 = v16;
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 32), v16 + 1, v16);
    if ( v17 == v16 )
      break;
    if ( !v16 )
      goto LABEL_34;
  }
  ExReleaseSpinLockShared(v9, CurrentIrql);
  result = v12;
LABEL_20:
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 384), 1u);
  return result;
}
