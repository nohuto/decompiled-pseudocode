/*
 * XREFs of UsbhFdoReturnDeviceHandle @ 0x1C003BC9C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0020430 (UsbhRefPdoDeviceHandle.c)
 */

__int64 __fastcall UsbhFdoReturnDeviceHandle(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v6; // bp
  unsigned int v9; // ebx
  __int64 *SecurityContext; // r15
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = a4;
  v9 = -1073741811;
  PdoExt(a2, a2, (__int64)a3, a4);
  SecurityContext = (__int64 *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext )
  {
    if ( !v6
      || (v11 = UsbhRefPdoDeviceHandle(
                  a1,
                  a2,
                  (__int64)CurrentStackLocation->Parameters.QueryDirectory.FileName,
                  1212445810LL),
          (*SecurityContext = v11) != 0) )
    {
      v9 = 0;
    }
  }
  a3->IoStatus.Status = v9;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v12, v13);
  return v9;
}
