/*
 * XREFs of MiInsertNewPartitionInList @ 0x140132030
 * Callers:
 *     MiCreatePartition @ 0x140624224 (MiCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x14074882C (MiCreatePfnDatabase.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiInsertNewPartitionInList(__int64 a1)
{
  __int64 **v2; // rax
  __int64 *v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1402FEBE0, &LockHandle);
  v2 = (__int64 **)qword_1402FEC00;
  v3 = (__int64 *)(a1 + 24);
  v3[1] = qword_1402FEC00;
  *v3 = (__int64)&qword_1402FEBF8;
  if ( *v2 != &qword_1402FEBF8 )
    __fastfail(3u);
  *v2 = v3;
  qword_1402FEC00 = (__int64)v3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
