/*
 * XREFs of PopUpdateWakeSource @ 0x140205918
 * Callers:
 *     PopRequestCompletion @ 0x14012B590 (PopRequestCompletion.c)
 *     PoSetSystemWakeDevice @ 0x1401FF4A8 (PoSetSystemWakeDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopUpdateWakeSource(PVOID Object)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rax
  bool v7; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x206D654Du);
  v3 = 0;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    if ( PopCurrentWakeInfo )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      v5 = PopCurrentWakeInfo;
      v4[3] = PopCurrentWakeInfo;
      v4[2] = Object;
      _InterlockedAdd((volatile signed __int32 *)(v5 + 16), 1u);
      v6 = (_QWORD *)qword_140304248;
      if ( *(PVOID **)qword_140304248 != &PopWakeSourceWorkList )
        __fastfail(3u);
      v7 = PopWakeSourceWorkInProgress == 0;
      *v4 = &PopWakeSourceWorkList;
      v4[1] = v6;
      *v6 = v4;
      qword_140304248 = (__int64)v4;
      v4 = 0LL;
      if ( v7 )
      {
        PopWakeSourceWorkInProgress = 1;
        ExQueueWorkItem(&PopWakeSourceWorkItem, DelayedWorkQueue);
      }
    }
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
