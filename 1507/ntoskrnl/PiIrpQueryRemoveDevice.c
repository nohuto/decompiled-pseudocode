/*
 * XREFs of PiIrpQueryRemoveDevice @ 0x14058DA8C
 * Callers:
 *     PnpQueryRemoveLockedDeviceNode @ 0x14058D9C4 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x14067E214 (PnpDisableDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     PnpFindMountableDevice @ 0x14011BEE8 (PnpFindMountableDevice.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401F201C (IopDecrementDeviceObjectHandleCount.c)
 *     PnpLockMountableDevice @ 0x1401FB32C (PnpLockMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1401FB380 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1401FB45C (PnpUnlockMountableDevice.c)
 *     PnpAsynchronousCall @ 0x140461980 (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x140671B84 (IopInvalidateVolumesForDevice.c)
 */

__int64 __fastcall PiIrpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  int v4; // r14d
  struct _DEVICE_OBJECT *v5; // rdi
  int v6; // edi
  PVOID v8; // rsi
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
    v8 = Object[1];
    if ( Object[1] )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)Object[1]);
      ObfDereferenceObject(v8);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( v6 >= 0 )
      return (unsigned int)IopInvalidateVolumesForDevice(DeviceObject);
  }
  return (unsigned int)v6;
}
