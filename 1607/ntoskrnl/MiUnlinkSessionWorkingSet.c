/*
 * XREFs of MiUnlinkSessionWorkingSet @ 0x1401237A8
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140532010 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     MiUnlinkWorkingSet @ 0x1400FF204 (MiUnlinkWorkingSet.c)
 */

void __fastcall MiUnlinkSessionWorkingSet(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
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
    KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  }
  MiUnlinkWorkingSet(a1 + 3008, &LockHandle);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
