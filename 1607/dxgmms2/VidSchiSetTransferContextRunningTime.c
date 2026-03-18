/*
 * XREFs of VidSchiSetTransferContextRunningTime @ 0x1C000E530
 * Callers:
 *     VidSchiIsQuantumLeft @ 0x1C000C920 (VidSchiIsQuantumLeft.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000D694 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0023E58 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0001BA0 (VidSchiDecrementContextReference.c)
 *     VidSchiIncrementContextReference @ 0x1C0001CE0 (VidSchiIncrementContextReference.c)
 */

void __fastcall VidSchiSetTransferContextRunningTime(__int64 a1, __int64 a2, char a3)
{
  struct _VIDSCH_CONTEXT *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 1856LL), &LockHandle);
  if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
  {
    if ( a2 )
      VidSchiIncrementContextReference(a2);
    v6 = *(struct _VIDSCH_CONTEXT **)(a1 + 496);
    if ( v6 )
    {
      VidSchiDecrementContextReference(v6, 1);
      *(_QWORD *)(a1 + 496) = 0LL;
    }
    *(_QWORD *)(a1 + 496) = a2;
  }
  if ( !a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
