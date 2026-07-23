/*
 * XREFs of IopUpdateFunctionPointers @ 0x1401B770C
 * Callers:
 *     IopIrpExtensionControl @ 0x1401B7564 (IopIrpExtensionControl.c)
 *     IoPerfInit @ 0x1401BC5FC (IoPerfInit.c)
 *     IoPerfReset @ 0x1401BC674 (IoPerfReset.c)
 *     IoVerifierInit @ 0x1406B47D8 (IoVerifierInit.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall IopUpdateFunctionPointers(int a1, char a2, char a3)
{
  int v6; // eax
  __int64 (__fastcall *v7)(PVOID); // rax
  void (__fastcall *v8)(ULONG_PTR, char); // rcx
  _SLIST_ENTRY *(__fastcall *v9)(__int64, char, char); // rax
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
      v8 = (void (__fastcall *)(ULONG_PTR, char))IopPerfCompleteRequest;
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
