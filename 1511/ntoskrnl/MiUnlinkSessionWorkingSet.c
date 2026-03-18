/*
 * XREFs of MiUnlinkSessionWorkingSet @ 0x1401144F8
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1404F36F0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiUnlinkWorkingSet @ 0x14001C13C (MiUnlinkWorkingSet.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
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
    KeWaitForGate(a1 + 120, 18);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  }
  MiUnlinkWorkingSet(a1 + 2968, &LockHandle);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
