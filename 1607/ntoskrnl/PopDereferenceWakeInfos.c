/*
 * XREFs of PopDereferenceWakeInfos @ 0x1401257A4
 * Callers:
 *     PopGetWakeSource @ 0x140532EB8 (PopGetWakeSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     PopWakeInfoDereference @ 0x14012580C (PopWakeInfoDereference.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PopDereferenceWakeInfos(unsigned int a1, _QWORD *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  if ( (_DWORD)v3 )
  {
    v4 = a2;
    do
    {
      PopWakeInfoDereference(*v4++);
      --v3;
    }
    while ( v3 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExFreePoolWithTag(a2, 0x206D654Du);
}
