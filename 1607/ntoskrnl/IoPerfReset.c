/*
 * XREFs of IoPerfReset @ 0x1401CA68C
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1404960E4 (EtwpDisableKernelTrace.c)
 *     IoUnregisterIoTracking @ 0x140625070 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401C5478 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfReset(char a1)
{
  unsigned int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( (a1 & 1) == 0 || (--dword_1403420CC, dword_1403420CC) )
  {
    v2 = IopPerfStatus;
  }
  else
  {
    v2 = IopPerfStatus & 0xFFFFFFFE;
    IopPerfStatus &= ~1u;
  }
  if ( (a1 & 2) != 0 && !--dword_1403420D0 )
  {
    v2 &= ~2u;
    IopPerfStatus = v2;
  }
  if ( !v2 )
    IopUpdateFunctionPointers(2, 0, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
