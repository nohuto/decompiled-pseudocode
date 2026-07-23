/*
 * XREFs of MiAllocateCombineProto @ 0x1401F7974
 * Callers:
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     MiGetCrossPartitionCharges @ 0x1401F191C (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x1401F1D68 (MiReturnCrossPartitionCharges.c)
 *     MiInsertNewCombineBlocks @ 0x1401F9C70 (MiInsertNewCombineBlocks.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiAllocateCombineProto(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  __int64 inserted; // r14
  volatile LONG *v10; // r12
  KIRQL v11; // dl
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 *v17; // rax
  _QWORD *v18; // rcx
  char *PoolWithTag; // rax
  void *v20; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( !a2 )
    return 0LL;
  inserted = 0LL;
  v10 = (volatile LONG *)(16 * (a2 & 0xF) + a1 + 104);
  v11 = ExAcquireSpinLockShared(v10);
  v12 = *(_QWORD *)(a1 + 16 * ((a2 & 0xF) + 6));
  while ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 24);
    if ( a2 > v13 )
      goto LABEL_9;
    if ( a2 < v13 )
      goto LABEL_8;
    v14 = *(_DWORD *)(v12 + 40);
    if ( a3 > v14 )
    {
LABEL_9:
      v12 = *(_QWORD *)(v12 + 8);
    }
    else
    {
      if ( a3 >= v14 )
      {
        v15 = *(_QWORD *)(v12 + 32);
        do
        {
          if ( !v15 )
          {
            a4 = 0;
            goto LABEL_16;
          }
          v16 = v15;
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 32), v15 + 1, v15);
        }
        while ( v16 != v15 );
        ExReleaseSpinLockShared(v10, v11);
        result = v12;
        goto LABEL_32;
      }
LABEL_8:
      v12 = *(_QWORD *)v12;
    }
  }
LABEL_16:
  ExReleaseSpinLockShared(v10, v11);
  if ( a4 && ((_UNKNOWN *)a1 != &unk_140326E58 || (unsigned int)MiGetCrossPartitionCharges(qword_140326720, 1LL)) )
  {
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
    if ( inserted )
      goto LABEL_31;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6D75534Du);
    v20 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 2) = 1;
      *((_QWORD *)PoolWithTag + 2) = a1;
      inserted = MiInsertNewCombineBlocks(a1, PoolWithTag + 56);
      if ( !inserted )
      {
        ExFreePoolWithTag(v20, 0);
        goto LABEL_27;
      }
LABEL_31:
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 380), 1u);
      *(_QWORD *)(inserted + 32) = 1LL;
      result = inserted;
      *(_DWORD *)(inserted + 40) = a3;
LABEL_32:
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 384), 1u);
      return result;
    }
LABEL_27:
    if ( (_UNKNOWN *)a1 == &unk_140326E58 )
      MiReturnCrossPartitionCharges(qword_140326720, 1LL);
  }
  return 0LL;
}
