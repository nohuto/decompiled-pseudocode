/*
 * XREFs of UsbhFdoReturnTopologyAddress @ 0x1C001E608
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhBuildTopologyAddress @ 0x1C001E69C (UsbhBuildTopologyAddress.c)
 */

__int64 __fastcall UsbhFdoReturnTopologyAddress(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // r14
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // r8
  __int64 v18; // r9

  FdoExt(a1, a2, (__int64)a3, a4);
  v10 = PdoExt(a2, v7, v8, v9);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v17, v18);
  }
  v12 = UsbhBuildTopologyAddress(a1, SecurityContext, *((unsigned __int16 *)v10 + 710));
  a3->IoStatus.Status = v12;
  v13 = v12;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v14, v15);
  return v13;
}
