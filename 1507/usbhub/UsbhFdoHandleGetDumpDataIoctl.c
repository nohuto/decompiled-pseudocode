/*
 * XREFs of UsbhFdoHandleGetDumpDataIoctl @ 0x1C003E54C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012F60 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     Usbh_HubDerefDeviceHandle @ 0x1C0003B38 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhDecPdoIoCount @ 0x1C00139E0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhGetDeviceHandle @ 0x1C00256D4 (UsbhGetDeviceHandle.c)
 */

__int64 __fastcall UsbhFdoHandleGetDumpDataIoctl(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  _DWORD *v7; // rax
  __int64 v8; // r8
  __int64 CurrentStackLocation; // r9
  unsigned int v10; // ebx
  _IRP *MasterIrp; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  PDEVICE_OBJECT *v17; // rax
  __int64 v19; // [rsp+20h] [rbp-18h] BYREF
  PIRP DeviceHandle; // [rsp+28h] [rbp-10h]

  v7 = PdoExt(a2, a2, (__int64)a3, a4);
  CurrentStackLocation = (__int64)a3->Tail.Overlay.CurrentStackLocation;
  if ( *(_DWORD *)(CurrentStackLocation + 16) >= 0x20u )
  {
    MasterIrp = a3->AssociatedIrp.MasterIrp;
    v19 = *((_QWORD *)v7 + 144);
    DeviceHandle = UsbhGetDeviceHandle(a1, a1, v8, CurrentStackLocation);
    if ( DeviceHandle )
    {
      MasterIrp->AssociatedIrp.MasterIrp = (_IRP *)&v19;
      v17 = (PDEVICE_OBJECT *)FdoExt(a1, v12, v13, v14);
      ++a3->CurrentLocation;
      ++a3->Tail.Overlay.CurrentStackLocation;
      v10 = IofCallDriver(v17[152], a3);
      Usbh_HubDerefDeviceHandle(a1, (__int64)DeviceHandle, a1, 0x48447472u);
      goto LABEL_7;
    }
    v10 = -1073741823;
  }
  else
  {
    v10 = -1073741789;
  }
  a3->IoStatus.Status = v10;
  IofCompleteRequest(a3, 0);
LABEL_7:
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v15, v16);
  return v10;
}
