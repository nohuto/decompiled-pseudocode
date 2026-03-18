/*
 * XREFs of PopUpdateWakeSource @ 0x14023AD90
 * Callers:
 *     PopRequestCompletion @ 0x140136608 (PopRequestCompletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     PopAcquireWakeSourceSpinLock @ 0x1401491E4 (PopAcquireWakeSourceSpinLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopUpdateWakeSource(PVOID Object)
{
  PVOID *PoolWithTag; // rax
  unsigned int v3; // ebx
  PVOID *v4; // rdi
  __int64 v5; // rax
  PVOID **v6; // rax
  bool v7; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x206D654Du);
  v3 = 0;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    PopAcquireWakeSourceSpinLock(&LockHandle);
    if ( PopCurrentWakeInfo )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      v5 = PopCurrentWakeInfo;
      v4[3] = (PVOID)PopCurrentWakeInfo;
      v4[2] = Object;
      _InterlockedAdd((volatile signed __int32 *)(v5 + 16), 1u);
      v6 = (PVOID **)qword_14032EFC8;
      *v4 = &PopWakeSourceWorkList;
      v4[1] = v6;
      if ( *v6 != &PopWakeSourceWorkList )
        __fastfail(3u);
      v7 = PopWakeSourceWorkInProgress == 0;
      *v6 = v4;
      qword_14032EFC8 = (__int64)v4;
      v4 = 0LL;
      if ( v7 )
      {
        PopWakeSourceWorkInProgress = 1;
        ExQueueWorkItem(&PopWakeSourceWorkItem, DelayedWorkQueue);
      }
    }
    PopWakeSourceLockOwner = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x206D654Du);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
