/*
 * XREFs of VidSchiCompleteAllPendingCommand @ 0x1C001DBE4
 * Callers:
 *     VidSchiReportHwHang @ 0x1C001DFB4 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchiCompletePreemption @ 0x1C0015EC4 (VidSchiCompletePreemption.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C001DC94 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiCompletePendingFlip @ 0x1C001DEE8 (VidSchiCompletePendingFlip.c)
 */

__int64 __fastcall VidSchiCompleteAllPendingCommand(struct _VIDSCH_GLOBAL *a1)
{
  unsigned int v1; // edi
  unsigned int i; // ebp
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)a1 + 14); ++i )
  {
    v4 = *((_QWORD *)a1 + i + 46);
    VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 120), 0LL);
    v5 = *((_QWORD *)a1 + i + 46);
    *(_QWORD *)(v5 + 64) = *(_QWORD *)(v5 + 136);
    VidSchiCompletePreemption(*((_QWORD *)a1 + i + 46));
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &LockHandle);
  if ( *((_DWORD *)a1 + 10) )
  {
    do
    {
      VidSchiCompletePendingFlip(a1);
      ++v1;
    }
    while ( v1 < *((_DWORD *)a1 + 10) );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
