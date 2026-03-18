/*
 * XREFs of UsbhFdoReturnDeviceConfigInfo @ 0x1C001F3E0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhFreeID @ 0x1C00058A4 (UsbhFreeID.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhCopyPnpString @ 0x1C001F574 (UsbhCopyPnpString.c)
 *     memset @ 0x1C0029180 (memset.c)
 */

__int64 __fastcall UsbhFdoReturnDeviceConfigInfo(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  _DWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DWORD *v13; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int AccessState; // ecx
  int v16; // ecx
  int v17; // edi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rcx

  v7 = PdoExt(a2, a2, (__int64)a3, a4);
  v11 = FdoExt(a1, v8, v9, v10);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v13 = v11;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext || LODWORD(SecurityContext->SecurityQos) != 1 )
  {
    v17 = -1073741811;
    goto LABEL_24;
  }
  if ( HIDWORD(SecurityContext->SecurityQos) != 204 )
  {
    v17 = -1073741789;
    goto LABEL_24;
  }
  memset(CurrentStackLocation->Parameters.Create.SecurityContext, 0, 0xCCuLL);
  LODWORD(SecurityContext->AccessState) = 0;
  AccessState = (int)SecurityContext->AccessState;
  LODWORD(SecurityContext->SecurityQos) = 1;
  HIDWORD(SecurityContext->SecurityQos) = 204;
  if ( (v13[640] & 0x8000) != 0 )
    AccessState = 1;
  LODWORD(SecurityContext->AccessState) = AccessState;
  if ( (v13[640] & 0x80u) != 0 )
    LODWORD(SecurityContext->AccessState) |= 8u;
  if ( (*((_BYTE *)v13 + 2562) & 1) != 0 )
    LODWORD(SecurityContext->AccessState) |= 4u;
  v16 = v13[640];
  if ( (v16 & 0x8001) == 0x8001 || (v16 & 0x40) != 0 )
    LODWORD(SecurityContext->AccessState) |= 2u;
  if ( (v13[640] & 0x80000) != 0 )
    LODWORD(SecurityContext->AccessState) |= 0x20u;
  if ( (v13[640] & 1) != 0 )
    LODWORD(SecurityContext->AccessState) |= 0x10u;
  if ( v13[758] == 100 )
    LODWORD(SecurityContext->AccessState) |= 0x40u;
  if ( (*((_BYTE *)v7 + 1414) & 1) != 0 )
  {
    HIDWORD(SecurityContext[5].AccessState) |= 1u;
    *(_OWORD *)&SecurityContext[5].DesiredAccess = *((_OWORD *)v7 + 161);
    *(_OWORD *)&SecurityContext[6].AccessState = *((_OWORD *)v7 + 162);
    *(_OWORD *)&SecurityContext[7].SecurityQos = *((_OWORD *)v7 + 163);
    *(_OWORD *)&SecurityContext[7].DesiredAccess = *((_OWORD *)v7 + 164);
    LODWORD(SecurityContext[8].AccessState) = v7[660];
  }
  v17 = UsbhCopyPnpString((char *)&SecurityContext[1].SecurityQos + 4, v7 + 526);
  if ( v17 >= 0 )
  {
    v17 = UsbhCopyPnpString((char *)&SecurityContext->AccessState + 4, v7 + 522);
    if ( v17 < 0 )
    {
      v21 = (__int64)&SecurityContext[1].SecurityQos + 4;
    }
    else
    {
      v17 = UsbhCopyPnpString(&SecurityContext[1].FullCreateOptions, v7 + 550);
      if ( v17 >= 0 )
        goto LABEL_24;
      UsbhFreeID((__int64)&SecurityContext[1].SecurityQos + 4);
      v21 = (__int64)&SecurityContext->AccessState + 4;
    }
    UsbhFreeID(v21);
  }
LABEL_24:
  a3->IoStatus.Status = v17;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v18, v19);
  return (unsigned int)v17;
}
