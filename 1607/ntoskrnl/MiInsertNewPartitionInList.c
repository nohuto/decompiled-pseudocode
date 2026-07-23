/*
 * XREFs of MiInsertNewPartitionInList @ 0x1400B3870
 * Callers:
 *     MiCreatePartition @ 0x14066028C (MiCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x14078F270 (MiCreatePfnDatabase.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiInsertNewPartitionInList(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v2 = (_QWORD *)qword_140327010;
  v3 = (_QWORD *)(a1 + 32);
  if ( *(__int64 **)qword_140327010 != &qword_140327008 )
    __fastfail(3u);
  *v3 = &qword_140327008;
  v3[1] = v2;
  *v2 = v3;
  qword_140327010 = (__int64)v3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
