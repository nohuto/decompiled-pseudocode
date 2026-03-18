/*
 * XREFs of MiGetNextPartition @ 0x1400FF6D4
 * Callers:
 *     MiPurgeTransitionList @ 0x140144F88 (MiPurgeTransitionList.c)
 *     MmEnablePeriodicAccessClearing @ 0x1403EC110 (MmEnablePeriodicAccessClearing.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiDereferencePartition @ 0x140100E94 (MiDereferencePartition.c)
 */

__int64 *__fastcall MiGetNextPartition(_QWORD *P)
{
  __int64 *v2; // rdi
  __int64 *v3; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_14034F0A0, &LockHandle);
  v3 = (__int64 *)qword_14034F0B8;
  if ( P )
    v3 = (__int64 *)P[3];
  while ( v3 != &qword_14034F0B8 )
  {
    if ( (*((_DWORD *)v3 - 5) & 1) == 0 )
    {
      ++*(v3 - 2);
      v2 = v3 - 3;
      break;
    }
    v3 = (__int64 *)*v3;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( P )
    MiDereferencePartition(P);
  return v2;
}
