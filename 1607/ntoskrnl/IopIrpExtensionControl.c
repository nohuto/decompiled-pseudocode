/*
 * XREFs of IopIrpExtensionControl @ 0x1401C5080
 * Callers:
 *     IopEtwEnableCallback @ 0x140621468 (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x140624FE4 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x140625124 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401C5318 (IopUpdateFunctionPointers.c)
 */

void __fastcall IopIrpExtensionControl(int a1, int a2)
{
  _BOOL8 v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  v5 = 1LL;
  if ( a2 == 1 )
  {
    v4 = IopIrpExtensionStatus == 0;
    IopIrpExtensionStatus |= a1;
    if ( (a1 & 1) != 0 )
      ++dword_14034196C;
    if ( (a1 & 2) != 0 )
      ++dword_140341970;
    if ( v4 )
    {
      LOBYTE(v4) = 1;
LABEL_17:
      IopUpdateFunctionPointers(4LL, v5, v4);
    }
  }
  else
  {
    if ( (a1 & 1) == 0 || (--dword_14034196C, dword_14034196C) )
    {
      v6 = IopIrpExtensionStatus;
    }
    else
    {
      v6 = IopIrpExtensionStatus & 0xFFFFFFFE;
      IopIrpExtensionStatus &= ~1u;
    }
    if ( (a1 & 2) != 0 && !--dword_140341970 )
    {
      v6 &= ~2u;
      IopIrpExtensionStatus = v6;
    }
    if ( !v6 )
    {
      LOBYTE(v4) = 1;
      v5 = 0LL;
      goto LABEL_17;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
