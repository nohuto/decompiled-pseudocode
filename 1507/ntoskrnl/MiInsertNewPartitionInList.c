/*
 * XREFs of MiInsertNewPartitionInList @ 0x14015F5DC
 * Callers:
 *     MiCreatePartition @ 0x1406A3A54 (MiCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x1407C444C (MiCreatePfnDatabase.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MiInsertNewPartitionInList(__int64 a1)
{
  __int64 **v2; // rax
  __int64 *v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14034F0A0, &LockHandle);
  v2 = (__int64 **)qword_14034F0C0;
  v3 = (__int64 *)(a1 + 24);
  v3[1] = qword_14034F0C0;
  *v3 = (__int64)&qword_14034F0B8;
  if ( *v2 != &qword_14034F0B8 )
    __fastfail(3u);
  *v2 = v3;
  qword_14034F0C0 = (__int64)v3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
