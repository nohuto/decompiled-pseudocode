/*
 * XREFs of MiGetNextPartition @ 0x14011B670
 * Callers:
 *     MiFinishResume @ 0x1401121BC (MiFinishResume.c)
 *     MiPurgeTransitionList @ 0x1401E4210 (MiPurgeTransitionList.c)
 *     MmEnablePeriodicAccessClearing @ 0x1403A5F24 (MmEnablePeriodicAccessClearing.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDereferencePartition @ 0x1400BC1D4 (MiDereferencePartition.c)
 */

__int64 *__fastcall MiGetNextPartition(_QWORD *P)
{
  __int64 *v2; // rdi
  __int64 *v3; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_1402FEBE0, &LockHandle);
  v3 = (__int64 *)qword_1402FEBF8;
  if ( P )
    v3 = (__int64 *)P[3];
  while ( v3 != &qword_1402FEBF8 )
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
