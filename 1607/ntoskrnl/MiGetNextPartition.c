/*
 * XREFs of MiGetNextPartition @ 0x140001E08
 * Callers:
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x1400A2238 (MiFreeExcessSegments.c)
 *     MiFinishResume @ 0x140120AE0 (MiFinishResume.c)
 *     MiPurgeTransitionList @ 0x1401F378C (MiPurgeTransitionList.c)
 *     MmEnablePeriodicAccessClearing @ 0x1403C8460 (MmEnablePeriodicAccessClearing.c)
 * Callees:
 *     MiDereferencePartition @ 0x140001E80 (MiDereferencePartition.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 *__fastcall MiGetNextPartition(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v3 = (__int64 *)qword_140327008;
  if ( a1 )
    v3 = (__int64 *)a1[4];
  while ( v3 != &qword_140327008 )
  {
    if ( (*((_DWORD *)v3 - 7) & 1) == 0 )
    {
      ++*(v3 - 2);
      v2 = v3 - 4;
      break;
    }
    v3 = (__int64 *)*v3;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a1 )
    MiDereferencePartition(a1);
  return v2;
}
