/*
 * XREFs of IopRemoveDevice @ 0x1404C6038
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14009E908 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404C3474 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDeleteLockedDeviceNode @ 0x1404C58C8 (PnpDeleteLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x14062D740 (PnpDisableDevice.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14062E0BC (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PnpFindMountableDevice @ 0x14009EC90 (PnpFindMountableDevice.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401C4A44 (IopDecrementDeviceObjectHandleCount.c)
 *     PnpLockMountableDevice @ 0x1401CDD6C (PnpLockMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1401CDDC0 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1401CDE9C (PnpUnlockMountableDevice.c)
 *     PipClearDevNodeUserFlags @ 0x1403F14F4 (PipClearDevNodeUserFlags.c)
 *     PipClearDevNodeFlags @ 0x1403F3414 (PipClearDevNodeFlags.c)
 *     PoFxAbandonDevice @ 0x1404C61AC (PoFxAbandonDevice.c)
 *     PiSwStopDestroy @ 0x1404C6264 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1404C62E4 (PiSwProcessParentRemoveIrp.c)
 *     IopUncacheInterfaceInformation @ 0x1404C7A00 (IopUncacheInterfaceInformation.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x14050173C (PiPnpRtlBeginOperation.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 *     IopDecDisableableDepends @ 0x140581614 (IopDecDisableableDepends.c)
 *     IopInvalidateVolumesForDevice @ 0x140621ABC (IopInvalidateVolumesForDevice.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, int a2)
{
  int v2; // r15d
  _DWORD *DeviceNode; // rsi
  int v6; // r9d
  int v7; // ebp
  __int64 v8; // rcx
  int v9; // r14d
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  void *v13; // rbp
  __int128 v14; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v15[72]; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v14 = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  PiPnpRtlBeginOperation(&P);
  if ( a2 == 2 )
    IopUncacheInterfaceInformation(DeviceObject, 1LL);
  memset(v15, 0, sizeof(v15));
  v15[0] = 27;
  v15[1] = a2;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v2 = 1;
    PnpLockMountableDevice(DeviceObject);
    v7 = PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)&v14);
    PnpUnlockMountableDevice((__int64)DeviceObject);
  }
  else
  {
    v7 = (int)DeviceObject;
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
      PiSwStopDestroy(v8, *((_QWORD *)DeviceNode + 6));
    }
  }
  v9 = IopSynchronousCall(v7, (unsigned int)v15, -1073741637, v6, 0LL);
  if ( v2 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( (unsigned int)(a2 - 2) <= 1 )
      PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 0, (ULONG_PTR *)&v14);
    v13 = (void *)*((_QWORD *)&v14 + 1);
    if ( *((_QWORD *)&v14 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v14 + 1));
      ObfDereferenceObject(v13);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( (a2 != 1 || v9 < 0) && a2 != 23 )
    {
LABEL_14:
      if ( a2 != 2 )
        goto LABEL_19;
      goto LABEL_15;
    }
    v9 = IopInvalidateVolumesForDevice(DeviceObject);
  }
  if ( a2 != 23 )
    goto LABEL_14;
LABEL_15:
  PoFxAbandonDevice(DeviceNode);
  DeviceNode[35] = 0;
  if ( a2 == 2 )
  {
    PipClearDevNodeFlags((__int64)DeviceNode, 4104);
    v10 = *((_QWORD *)DeviceNode + 81);
    if ( v10 )
    {
      if ( (v10 & 1) != 0 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        *((_QWORD *)DeviceNode + 81) = v11;
        --*(_DWORD *)(v11 + 656);
      }
    }
  }
LABEL_19:
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)v9;
}
