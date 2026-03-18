/*
 * XREFs of IoPerfReset @ 0x1401F7ED8
 * Callers:
 *     EtwpDisableKernelTrace @ 0x14054AC78 (EtwpDisableKernelTrace.c)
 *     IoUnregisterIoTracking @ 0x140675A3C (IoUnregisterIoTracking.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401F2AA4 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfReset(char a1)
{
  unsigned int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( (a1 & 1) == 0 || (--dword_14036E0BC, dword_14036E0BC) )
  {
    v2 = IopPerfStatus;
  }
  else
  {
    v2 = IopPerfStatus & 0xFFFFFFFE;
    IopPerfStatus &= ~1u;
  }
  if ( (a1 & 2) != 0 && !--dword_14036E0C0 )
  {
    v2 &= ~2u;
    IopPerfStatus = v2;
  }
  if ( !v2 )
    IopUpdateFunctionPointers(2, 0, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
