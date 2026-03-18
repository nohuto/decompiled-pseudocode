/*
 * XREFs of IopIrpExtensionControl @ 0x1401F28A4
 * Callers:
 *     IopEtwEnableCallback @ 0x140671534 (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x1406758D8 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x140675A3C (IoUnregisterIoTracking.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1401F2AA4 (IopUpdateFunctionPointers.c)
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
      ++dword_14036CC8C;
    if ( (a1 & 2) != 0 )
      ++dword_14036CC90;
    if ( v4 )
    {
      LOBYTE(v4) = 1;
LABEL_17:
      IopUpdateFunctionPointers(4LL, v5, v4);
    }
  }
  else
  {
    if ( (a1 & 1) == 0 || (--dword_14036CC8C, dword_14036CC8C) )
    {
      v6 = IopIrpExtensionStatus;
    }
    else
    {
      v6 = IopIrpExtensionStatus & 0xFFFFFFFE;
      IopIrpExtensionStatus &= ~1u;
    }
    if ( (a1 & 2) != 0 && !--dword_14036CC90 )
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
