/*
 * XREFs of IopIrpExtensionControl @ 0x1401B7564
 * Callers:
 *     IopEtwEnableCallback @ 0x1405F76AC (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x1405FB380 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x1405FB4C0 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401B770C (IopUpdateFunctionPointers.c)
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
      ++dword_14031C904;
    if ( (a1 & 2) != 0 )
      ++dword_14031C908;
    if ( v4 )
    {
      LOBYTE(v4) = 1;
LABEL_17:
      IopUpdateFunctionPointers(4LL, v5, v4);
    }
  }
  else
  {
    if ( (a1 & 1) == 0 || (--dword_14031C904, dword_14031C904) )
    {
      v6 = IopIrpExtensionStatus;
    }
    else
    {
      v6 = IopIrpExtensionStatus & 0xFFFFFFFE;
      IopIrpExtensionStatus &= ~1u;
    }
    if ( (a1 & 2) != 0 && !--dword_14031C908 )
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
