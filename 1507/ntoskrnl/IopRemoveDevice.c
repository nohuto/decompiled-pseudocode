/*
 * XREFs of IopRemoveDevice @ 0x1405383EC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14011BB6C (PnpRemoveLockedDeviceNode.c)
 *     PnpDeleteLockedDeviceNode @ 0x140536DF4 (PnpDeleteLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405392C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14058D9C4 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x14067E214 (PnpDisableDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PnpFindMountableDevice @ 0x14011BEE8 (PnpFindMountableDevice.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401F201C (IopDecrementDeviceObjectHandleCount.c)
 *     PnpLockMountableDevice @ 0x1401FB32C (PnpLockMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1401FB380 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1401FB45C (PnpUnlockMountableDevice.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     IopUncacheInterfaceInformation @ 0x14045E660 (IopUncacheInterfaceInformation.c)
 *     PipClearDevNodeUserFlags @ 0x1404615D0 (PipClearDevNodeUserFlags.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     PoFxAbandonDevice @ 0x140538568 (PoFxAbandonDevice.c)
 *     PiSwProcessParentRemoveIrp @ 0x1405386E4 (PiSwProcessParentRemoveIrp.c)
 *     PiSwStopDestroy @ 0x1405388DC (PiSwStopDestroy.c)
 *     IopDecDisableableDepends @ 0x1405C2A74 (IopDecDisableableDepends.c)
 *     IopInvalidateVolumesForDevice @ 0x140671B84 (IopInvalidateVolumesForDevice.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, int a2)
{
  int v2; // r15d
  _DWORD *DeviceNode; // rsi
  struct _DEVICE_OBJECT *v6; // rbp
  __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // rax
  unsigned __int64 v11; // rax
  void *v12; // rbp
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v14[80]; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v13 = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  PiPnpRtlBeginOperation((__int64 **)&P);
  if ( a2 == 2 )
    IopUncacheInterfaceInformation((__int64)DeviceObject, 1);
  memset(v14, 0, 0x48uLL);
  v14[0] = 27;
  v14[1] = a2;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v2 = 1;
    PnpLockMountableDevice(DeviceObject);
    v6 = (struct _DEVICE_OBJECT *)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)&v13);
    PnpUnlockMountableDevice((__int64)DeviceObject);
  }
  else
  {
    v6 = DeviceObject;
  }
  if ( a2 == 2 || a2 == 23 )
  {
    if ( (DeviceNode[100] & 8) != 0 )
    {
      PipClearDevNodeUserFlags((__int64)DeviceNode, 8);
      IopDecDisableableDepends(DeviceNode);
    }
    if ( a2 == 2 )
    {
      PiSwProcessParentRemoveIrp(DeviceObject);
      PiSwStopDestroy(v7, *((_QWORD *)DeviceNode + 6));
    }
  }
  v8 = IopSynchronousCall(v6, (__int64)v14, -1073741637, 0LL, 0LL);
  if ( v2 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( (unsigned int)(a2 - 2) <= 1 )
      PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 0, (ULONG_PTR *)&v13);
    v12 = (void *)*((_QWORD *)&v13 + 1);
    if ( *((_QWORD *)&v13 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v13 + 1));
      ObfDereferenceObject(v12);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( (a2 != 1 || v8 < 0) && a2 != 23 )
    {
LABEL_14:
      if ( a2 != 2 )
        goto LABEL_17;
      goto LABEL_15;
    }
    v8 = IopInvalidateVolumesForDevice(DeviceObject);
  }
  if ( a2 != 23 )
    goto LABEL_14;
LABEL_15:
  PoFxAbandonDevice(DeviceNode);
  DeviceNode[35] = 0;
  if ( a2 == 2 )
  {
    PipClearDevNodeFlags((__int64)DeviceNode, 4104);
    v9 = *((_QWORD *)DeviceNode + 81);
    if ( v9 )
    {
      if ( (v9 & 1) != 0 )
      {
        v11 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
        *((_QWORD *)DeviceNode + 81) = v11;
        --*(_DWORD *)(v11 + 656);
      }
    }
  }
LABEL_17:
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return (unsigned int)v8;
}
