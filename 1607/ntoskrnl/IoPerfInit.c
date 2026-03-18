/*
 * XREFs of IoPerfInit @ 0x1401CA614
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140495E58 (EtwpEnableKernelTrace.c)
 *     IoRegisterIoTracking @ 0x140624F30 (IoRegisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401C5478 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfInit(int a1)
{
  bool v2; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  v2 = IopPerfStatus == 0;
  IopPerfStatus |= a1;
  if ( (a1 & 1) != 0 )
    ++dword_1403420CC;
  if ( (a1 & 2) != 0 )
    ++dword_1403420D0;
  if ( v2 )
    IopUpdateFunctionPointers(2, 1, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
