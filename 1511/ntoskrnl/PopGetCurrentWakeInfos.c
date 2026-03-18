/*
 * XREFs of PopGetCurrentWakeInfos @ 0x14011A654
 * Callers:
 *     PopGetWakeSource @ 0x1404F8AF0 (PopGetWakeSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14011A800 (PopAcquireWakeSourceSpinLock.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopGetCurrentWakeInfos(_QWORD *a1)
{
  _QWORD *v2; // rdi
  unsigned int v3; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rcx
  __int64 i; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v3 = PopWakeInfoCount;
  if ( PopWakeInfoCount )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)PopWakeInfoCount, 0x206D654Du);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = PopWakeInfoList;
      for ( i = 0LL; (__int64 *)v5 != &PopWakeInfoList && (unsigned int)i < v3; i = (unsigned int)(i + 1) )
      {
        PoolWithTag[i] = v5;
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
        v5 = *(_QWORD *)v5;
      }
    }
    else
    {
      v3 = 0;
    }
  }
  PopWakeSourceLockOwner = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = v3;
  *a1 = v2;
  return result;
}
