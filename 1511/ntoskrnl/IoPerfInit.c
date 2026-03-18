/*
 * XREFs of IoPerfInit @ 0x1401BC5FC
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1404B8278 (EtwpEnableKernelTrace.c)
 *     IoRegisterIoTracking @ 0x1405FB380 (IoRegisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401B770C (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfInit(int a1)
{
  bool v2; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  v2 = IopPerfStatus == 0;
  IopPerfStatus |= a1;
  if ( (a1 & 1) != 0 )
    ++dword_14031D0BC;
  if ( (a1 & 2) != 0 )
    ++dword_14031D0C0;
  if ( v2 )
    IopUpdateFunctionPointers(2, 1, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
