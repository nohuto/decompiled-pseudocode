/*
 * XREFs of PopUpdateWakeSource @ 0x1401ECAD4
 * Callers:
 *     PopRequestCompletion @ 0x140120C64 (PopRequestCompletion.c)
 *     PoSetSystemWakeDevice @ 0x1401E6B24 (PoSetSystemWakeDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14011A800 (PopAcquireWakeSourceSpinLock.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
      v6 = (PVOID **)qword_1402DECC8;
      *v4 = &PopWakeSourceWorkList;
      v4[1] = v6;
      if ( *v6 != &PopWakeSourceWorkList )
        __fastfail(3u);
      v7 = PopWakeSourceWorkInProgress == 0;
      *v6 = v4;
      qword_1402DECC8 = (__int64)v4;
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
