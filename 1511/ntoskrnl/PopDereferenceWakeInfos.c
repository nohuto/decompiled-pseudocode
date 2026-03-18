/*
 * XREFs of PopDereferenceWakeInfos @ 0x14011A5D4
 * Callers:
 *     PopGetWakeSource @ 0x1404F8AF0 (PopGetWakeSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     PopWakeInfoDereference @ 0x14011A63C (PopWakeInfoDereference.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14011A800 (PopAcquireWakeSourceSpinLock.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PopDereferenceWakeInfos(unsigned int a1, _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  PopAcquireWakeSourceSpinLock(&LockHandle);
  if ( (_DWORD)v2 )
  {
    v4 = a2;
    do
    {
      PopWakeInfoDereference(*v4++);
      --v2;
    }
    while ( v2 );
  }
  PopWakeSourceLockOwner = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExFreePoolWithTag(a2, 0x206D654Du);
}
