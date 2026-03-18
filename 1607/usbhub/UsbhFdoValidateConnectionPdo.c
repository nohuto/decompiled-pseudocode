/*
 * XREFs of UsbhFdoValidateConnectionPdo @ 0x1C003C024
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     UsbhQueryPortState @ 0x1C00150B0 (UsbhQueryPortState.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 */

__int64 __fastcall UsbhFdoValidateConnectionPdo(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  PDEVICE_OBJECT *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rbx
  __int64 PortData; // rsi
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+70h] [rbp+18h] BYREF
  int v24; // [rsp+78h] [rbp+20h] BYREF

  v23 = 0;
  v7 = (PDEVICE_OBJECT *)FdoExt(a1, a2, (__int64)a3, a4);
  v11 = PdoExt(a2, v8, v9, v10);
  PortData = UsbhGetPortData(a1, *((_WORD *)v11 + 710));
  Log(a1, 8, 1667973963, PortData, *((unsigned __int16 *)v11 + 710));
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( *((_DWORD *)v7 + 340) == 5 )
  {
    if ( PortData )
    {
      v14 = UsbhQueryPortState(a1, *(_WORD *)(PortData + 4), (__int64)&v23, &v24);
      v15 = v24;
    }
    else
    {
      v14 = -1073741811;
      v15 = -2147482880;
    }
  }
  else
  {
    v14 = -1073741810;
    v15 = -1073713152;
  }
  if ( (v14 & 0xC0000000) == 0xC0000000 )
  {
    HIDWORD(SecurityContext->SecurityQos) = v15;
    a3->IoStatus.Status = v14;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v16, v17);
    Log(a1, 8, 1667973937, PortData, (int)v14);
    return v14;
  }
  if ( (v23 & 1) != 0 && (v23 & 3) != 0 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v14 = IofCallDriver(v7[152], a3);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v19, v20);
    return v14;
  }
  HIDWORD(SecurityContext->SecurityQos) = -1073713152;
  a3->IoStatus.Status = -1073741810;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v21, v22);
  Log(a1, 8, 1667973938, PortData, -1073741810LL);
  return 3221225486LL;
}
