/*
 * XREFs of UsbhFdoReturnDeviceConfigInfo @ 0x1C0005208
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhCopyPnpString @ 0x1C000539C (UsbhCopyPnpString.c)
 *     UsbhFreeID @ 0x1C00059B4 (UsbhFreeID.c)
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     memset @ 0x1C0029900 (memset.c)
 */

__int64 __fastcall UsbhFdoReturnDeviceConfigInfo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v9; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int AccessState; // eax
  int v12; // ecx
  int v13; // edi
  __int64 v15; // rcx

  v6 = PdoExt(a2);
  v7 = FdoExt(a1);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext || LODWORD(SecurityContext->SecurityQos) != 1 )
  {
    v13 = -1073741811;
    goto LABEL_24;
  }
  if ( HIDWORD(SecurityContext->SecurityQos) != 204 )
  {
    v13 = -1073741789;
    goto LABEL_24;
  }
  memset(CurrentStackLocation->Parameters.Create.SecurityContext, 0, 0xCCuLL);
  LODWORD(SecurityContext->AccessState) = 0;
  AccessState = (int)SecurityContext->AccessState;
  LODWORD(SecurityContext->SecurityQos) = 1;
  HIDWORD(SecurityContext->SecurityQos) = 204;
  if ( (*(_DWORD *)(v9 + 2560) & 0x8000) != 0 )
    AccessState = 1;
  LODWORD(SecurityContext->AccessState) = AccessState;
  if ( (*(_DWORD *)(v9 + 2560) & 0x80u) != 0 )
    LODWORD(SecurityContext->AccessState) |= 8u;
  if ( (*(_BYTE *)(v9 + 2562) & 1) != 0 )
    LODWORD(SecurityContext->AccessState) |= 4u;
  v12 = *(_DWORD *)(v9 + 2560);
  if ( (v12 & 0x8001) == 0x8001 || (v12 & 0x40) != 0 )
    LODWORD(SecurityContext->AccessState) |= 2u;
  if ( (*(_DWORD *)(v9 + 2560) & 0x80000) != 0 )
    LODWORD(SecurityContext->AccessState) |= 0x20u;
  if ( (*(_DWORD *)(v9 + 2560) & 1) != 0 )
    LODWORD(SecurityContext->AccessState) |= 0x10u;
  if ( *(_DWORD *)(v9 + 3032) == 100 )
    LODWORD(SecurityContext->AccessState) |= 0x40u;
  if ( (*(_BYTE *)(v6 + 1414) & 1) != 0 )
  {
    HIDWORD(SecurityContext[5].AccessState) |= 1u;
    *(_OWORD *)&SecurityContext[5].DesiredAccess = *(_OWORD *)(v6 + 2576);
    *(_OWORD *)&SecurityContext[6].AccessState = *(_OWORD *)(v6 + 2592);
    *(_OWORD *)&SecurityContext[7].SecurityQos = *(_OWORD *)(v6 + 2608);
    *(_OWORD *)&SecurityContext[7].DesiredAccess = *(_OWORD *)(v6 + 2624);
    LODWORD(SecurityContext[8].AccessState) = *(_DWORD *)(v6 + 2640);
  }
  v13 = UsbhCopyPnpString((char *)&SecurityContext[1].SecurityQos + 4, v6 + 2104);
  if ( v13 >= 0 )
  {
    v13 = UsbhCopyPnpString((char *)&SecurityContext->AccessState + 4, v6 + 2088);
    if ( v13 < 0 )
    {
      v15 = (__int64)&SecurityContext[1].SecurityQos + 4;
    }
    else
    {
      v13 = UsbhCopyPnpString(&SecurityContext[1].FullCreateOptions, v6 + 2200);
      if ( v13 >= 0 )
        goto LABEL_24;
      UsbhFreeID((char *)&SecurityContext[1].SecurityQos + 4);
      v15 = (__int64)&SecurityContext->AccessState + 4;
    }
    UsbhFreeID(v15);
  }
LABEL_24:
  a3->IoStatus.Status = v13;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return (unsigned int)v13;
}
