/*
 * XREFs of MiUnlinkSessionWorkingSet @ 0x140123238
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140531AD0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForGate @ 0x140097C98 (KeWaitForGate.c)
 *     MiUnlinkWorkingSet @ 0x140101484 (MiUnlinkWorkingSet.c)
 */

void __fastcall MiUnlinkSessionWorkingSet(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
  *(_DWORD *)(a1 + 4) |= 2u;
  if ( *(_DWORD *)(a1 + 116) )
  {
    *(_DWORD *)(a1 + 124) = 0;
    *(_WORD *)(a1 + 120) = 263;
    *(_BYTE *)(a1 + 122) = 6;
    *(_QWORD *)(a1 + 136) = a1 + 128;
    *(_QWORD *)(a1 + 128) = a1 + 128;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeWaitForGate(a1 + 120, 0x12u);
    KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
  }
  MiUnlinkWorkingSet(a1 + 3008, &LockHandle);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
