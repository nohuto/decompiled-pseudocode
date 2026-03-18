/*
 * XREFs of IopUpdateFunctionPointers @ 0x1401F2AA4
 * Callers:
 *     IopIrpExtensionControl @ 0x1401F28A4 (IopIrpExtensionControl.c)
 *     IoPerfInit @ 0x1401F7E60 (IoPerfInit.c)
 *     IoPerfReset @ 0x1401F7ED8 (IoPerfReset.c)
 *     IoVerifierInit @ 0x1407347D8 (IoVerifierInit.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall IopUpdateFunctionPointers(int a1, char a2, char a3)
{
  int v6; // eax
  __int64 (__fastcall *v7)(PVOID, ULONG_PTR); // rax
  void (__fastcall *v8)(ULONG_PTR, unsigned __int8); // rcx
  void *v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 )
    KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( a2 )
    v6 = a1 | IopFunctionPointerMask;
  else
    v6 = ~a1 & IopFunctionPointerMask;
  IopFunctionPointerMask = v6;
  if ( (v6 & 1) != 0 )
  {
    _InterlockedExchange64((volatile __int64 *)&pIoAllocateIrp, (__int64)IovAllocateIrp);
    _InterlockedExchange64((volatile __int64 *)&pIofCallDriver, (__int64)IovCallDriver);
    _InterlockedExchange64((volatile __int64 *)&pIofCompleteRequest, (__int64)IovCompleteRequest);
    _InterlockedExchange64((volatile __int64 *)&pIoFreeIrp, (__int64)IovFreeIrpPrivate);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)&pIoFreeIrp, (__int64)IopFreeIrp);
    if ( (IopFunctionPointerMask & 2) != 0 )
    {
      v7 = IopPerfCallDriver;
      v8 = (void (__fastcall *)(ULONG_PTR, unsigned __int8))IopPerfCompleteRequest;
    }
    else
    {
      v7 = 0LL;
      v8 = IopfCompleteRequest;
    }
    _InterlockedExchange64((volatile __int64 *)&pIofCallDriver, (__int64)v7);
    _InterlockedExchange64((volatile __int64 *)&pIofCompleteRequest, (__int64)v8);
    v9 = IopAllocateIrpWithExtension;
    if ( (IopFunctionPointerMask & 4) == 0 )
      v9 = IopAllocateIrpPrivate;
    _InterlockedExchange64((volatile __int64 *)&pIoAllocateIrp, (__int64)v9);
  }
  if ( !a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
