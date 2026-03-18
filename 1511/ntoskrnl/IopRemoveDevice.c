/*
 * XREFs of IopRemoveDevice @ 0x1404A0FEC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1400DA4F4 (PnpRemoveLockedDeviceNode.c)
 *     PnpDeleteLockedDeviceNode @ 0x1404A0664 (PnpDeleteLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404A0A7C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x1406033A8 (PnpDisableDevice.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140603CC0 (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PnpFindMountableDevice @ 0x1400DA848 (PnpFindMountableDevice.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401B6EF8 (IopDecrementDeviceObjectHandleCount.c)
 *     PnpLockMountableDevice @ 0x1401BF7E4 (PnpLockMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1401BF838 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1401BF914 (PnpUnlockMountableDevice.c)
 *     IopSynchronousCall @ 0x1403D2C78 (IopSynchronousCall.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeFlags @ 0x1404574A4 (PipClearDevNodeFlags.c)
 *     PiSwStopDestroy @ 0x1404967A0 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140496838 (PiSwProcessParentRemoveIrp.c)
 *     IopUncacheInterfaceInformation @ 0x1404A0F04 (IopUncacheInterfaceInformation.c)
 *     PoFxAbandonDevice @ 0x1404A1158 (PoFxAbandonDevice.c)
 *     PipClearDevNodeUserFlags @ 0x1404ECD04 (PipClearDevNodeUserFlags.c)
 *     IopDecDisableableDepends @ 0x14054B5C8 (IopDecDisableableDepends.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F7CFC (IopInvalidateVolumesForDevice.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, int a2)
{
  int v2; // r15d
  const WCHAR **DeviceNode; // rsi
  struct _DEVICE_OBJECT *v6; // rbp
  __int64 v7; // rcx
  int v8; // r14d
  const WCHAR *v9; // rax
  unsigned __int64 v10; // rax
  void *v12; // rbp
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v14[80]; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v13 = 0LL;
  if ( DeviceObject )
    DeviceNode = (const WCHAR **)DeviceObject->DeviceObjectExtension->DeviceNode;
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
  if ( a2 == 23 || a2 == 2 )
  {
    if ( ((_DWORD)DeviceNode[50] & 8) != 0 )
    {
      PipClearDevNodeUserFlags(DeviceNode);
      IopDecDisableableDepends(DeviceNode);
    }
    if ( a2 == 2 )
    {
      PiSwProcessParentRemoveIrp((__int64)DeviceObject);
      PiSwStopDestroy(v7, DeviceNode[6]);
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
LABEL_15:
      if ( a2 != 2 )
        goto LABEL_20;
      goto LABEL_16;
    }
    v8 = IopInvalidateVolumesForDevice(DeviceObject);
  }
  if ( a2 != 23 )
    goto LABEL_15;
LABEL_16:
  PoFxAbandonDevice(DeviceNode);
  *((_DWORD *)DeviceNode + 35) = 0;
  if ( a2 == 2 )
  {
    PipClearDevNodeFlags((__int64)DeviceNode, 4104);
    v9 = DeviceNode[81];
    if ( v9 )
    {
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
        v10 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFEuLL;
        DeviceNode[81] = (const WCHAR *)v10;
        --*(_DWORD *)(v10 + 656);
      }
    }
  }
LABEL_20:
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return (unsigned int)v8;
}
