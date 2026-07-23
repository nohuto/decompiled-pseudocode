/*
 * XREFs of PiIrpQueryRemoveDevice @ 0x14064A1AC
 * Callers:
 *     PnpDisableDevice @ 0x14062D7F4 (PnpDisableDevice.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14062E170 (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PnpFindMountableDevice @ 0x140085DF0 (PnpFindMountableDevice.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401C4928 (IopDecrementDeviceObjectHandleCount.c)
 *     PnpLockMountableDevice @ 0x1401CDBB8 (PnpLockMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1401CDC0C (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1401CDCE8 (PnpUnlockMountableDevice.c)
 *     PnpAsynchronousCall @ 0x1403F0A74 (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x140621B70 (IopInvalidateVolumesForDevice.c)
 */

__int64 __fastcall PiIrpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  int v4; // r14d
  struct _DEVICE_OBJECT *v5; // rdi
  int v6; // edi
  PVOID v7; // rsi
  PVOID Object[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v10; // [rsp+48h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-11h] BYREF
  int v12; // [rsp+68h] [rbp+7h]
  _BYTE v13[72]; // [rsp+70h] [rbp+Fh] BYREF

  v4 = 0;
  *(_OWORD *)Object = 0LL;
  memset(v13, 0, sizeof(v13));
  *(_WORD *)v13 = 283;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v4 = 1;
    PnpLockMountableDevice(DeviceObject);
    v5 = (struct _DEVICE_OBJECT *)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)Object);
    PnpUnlockMountableDevice((__int64)DeviceObject);
  }
  else
  {
    v5 = DeviceObject;
  }
  v10 = 0LL;
  v12 = -1073741823;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = PnpAsynchronousCall(v5, (__int128 *)v13, (IO_COMPLETION_ROUTINE *)PnpDiagnosticCompletionRoutine, &v10);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v12;
  }
  if ( a2 )
    *a2 = v10;
  if ( v4 )
  {
    PnpLockMountableDevice(DeviceObject);
    v7 = Object[1];
    if ( Object[1] )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)Object[1]);
      ObfDereferenceObject(v7);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( v6 >= 0 )
      return (unsigned int)IopInvalidateVolumesForDevice(DeviceObject);
  }
  return (unsigned int)v6;
}
