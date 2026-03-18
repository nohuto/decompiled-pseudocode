/*
 * XREFs of IoPerfReset @ 0x1401BC674
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1404B8504 (EtwpDisableKernelTrace.c)
 *     IoUnregisterIoTracking @ 0x1405FB4C0 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401B770C (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfReset(char a1)
{
  unsigned int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( (a1 & 1) == 0 || (--dword_14031D0BC, dword_14031D0BC) )
  {
    v2 = IopPerfStatus;
  }
  else
  {
    v2 = IopPerfStatus & 0xFFFFFFFE;
    IopPerfStatus &= ~1u;
  }
  if ( (a1 & 2) != 0 && !--dword_14031D0C0 )
  {
    v2 &= ~2u;
    IopPerfStatus = v2;
  }
  if ( !v2 )
    IopUpdateFunctionPointers(2, 0, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
