/*
 * XREFs of MiUnlinkSessionWorkingSet @ 0x140149F10
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14056797C (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiUnlinkWorkingSet @ 0x140124DCC (MiUnlinkWorkingSet.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 */

void __fastcall MiUnlinkSessionWorkingSet(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  *(_DWORD *)(a1 + 4) |= 2u;
  if ( *(_DWORD *)(a1 + 116) )
  {
    *(_DWORD *)(a1 + 124) = 0;
    *(_WORD *)(a1 + 120) = 263;
    *(_BYTE *)(a1 + 122) = 6;
    *(_QWORD *)(a1 + 136) = a1 + 128;
    *(_QWORD *)(a1 + 128) = a1 + 128;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeWaitForGate((_DWORD *)(a1 + 120), 0x12u);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  }
  MiUnlinkWorkingSet(a1 + 2968, &LockHandle);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
