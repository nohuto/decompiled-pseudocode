/*
 * XREFs of VidSchiCompleteAllPendingCommand @ 0x1C0022E60
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0023200 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchiCompletePendingFlip @ 0x1C000248C (VidSchiCompletePendingFlip.c)
 *     VidSchiCompletePreemption @ 0x1C0020D48 (VidSchiCompletePreemption.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0022F10 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 */

__int64 __fastcall VidSchiCompleteAllPendingCommand(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int i; // ebp
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 56); ++i )
  {
    v4 = *(_QWORD *)(a1 + 8LL * i + 376);
    VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 144), 0LL);
    v5 = *(_QWORD *)(a1 + 8LL * i + 376);
    *(_QWORD *)(v5 + 64) = *(_QWORD *)(v5 + 160);
    VidSchiCompletePreemption(*(_QWORD *)(a1 + 8LL * i + 376));
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1824), &LockHandle);
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
      VidSchiCompletePendingFlip(a1, v1++, 9);
    while ( v1 < *(_DWORD *)(a1 + 40) );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
