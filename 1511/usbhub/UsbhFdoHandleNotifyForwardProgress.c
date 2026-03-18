/*
 * XREFs of UsbhFdoHandleNotifyForwardProgress @ 0x1C003E858
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001C0A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001C470 (UsbhDerefPdoDeviceHandle.c)
 */

__int64 __fastcall UsbhFdoHandleNotifyForwardProgress(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  PDEVICE_OBJECT *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9

  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( LODWORD(SecurityContext->SecurityQos) != 1 || HIDWORD(SecurityContext->SecurityQos) < 0x28 )
  {
    v13 = -1073741808;
    a3->IoStatus.Status = -1073741808;
    goto LABEL_7;
  }
  v7 = UsbhRefPdoDeviceHandle(a1, a2, a2, 1145468752LL);
  v11 = v7;
  if ( !v7 )
  {
    v13 = -1073741810;
    a3->IoStatus.Status = -1073741810;
LABEL_7:
    IofCompleteRequest(a3, 0);
    goto LABEL_8;
  }
  SecurityContext->AccessState = (_ACCESS_STATE *)v7;
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  v12 = (PDEVICE_OBJECT *)FdoExt(a1, v8, v9, v10);
  v13 = IofCallDriver(v12[152], a3);
  UsbhDerefPdoDeviceHandle(a1, v11, a2, 1145468752LL);
LABEL_8:
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v14, v15);
  return v13;
}
