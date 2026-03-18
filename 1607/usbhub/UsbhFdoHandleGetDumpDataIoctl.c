/*
 * XREFs of UsbhFdoHandleGetDumpDataIoctl @ 0x1C003EA9C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     Usbh_HubDerefDeviceHandle @ 0x1C0003D38 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     UsbhGetDeviceHandle @ 0x1C0007C44 (UsbhGetDeviceHandle.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

__int64 __fastcall UsbhFdoHandleGetDumpDataIoctl(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  _DWORD *v7; // rax
  unsigned int v8; // ebx
  _IRP *MasterIrp; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  PDEVICE_OBJECT *v15; // rax
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  PIRP DeviceHandle; // [rsp+28h] [rbp-10h]

  v7 = PdoExt(a2, a2, (__int64)a3, a4);
  if ( a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x20 )
  {
    MasterIrp = a3->AssociatedIrp.MasterIrp;
    v17 = *((_QWORD *)v7 + 144);
    DeviceHandle = UsbhGetDeviceHandle(a1, a1);
    if ( DeviceHandle )
    {
      MasterIrp->AssociatedIrp.MasterIrp = (_IRP *)&v17;
      v15 = (PDEVICE_OBJECT *)FdoExt(a1, v10, v11, v12);
      ++a3->CurrentLocation;
      ++a3->Tail.Overlay.CurrentStackLocation;
      v8 = IofCallDriver(v15[152], a3);
      Usbh_HubDerefDeviceHandle(a1, (__int64)DeviceHandle, a1, 0x48447472u);
      goto LABEL_7;
    }
    v8 = -1073741823;
  }
  else
  {
    v8 = -1073741789;
  }
  a3->IoStatus.Status = v8;
  IofCompleteRequest(a3, 0);
LABEL_7:
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v13, v14);
  return v8;
}
