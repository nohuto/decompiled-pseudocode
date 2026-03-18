/*
 * XREFs of UsbhFdoReturnRootHubPdo @ 0x1C0007028
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhFdoChainIrp @ 0x1C00292F8 (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoReturnRootHubPdo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  __int64 v6; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v8; // ebx
  _UNICODE_STRING *FileName; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r14

  v6 = FdoExt(a1);
  if ( (*(_DWORD *)(v6 + 2560) & 1) != 0 )
  {
    CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
    v8 = 0;
    FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( FileName && SecurityContext )
    {
      *(_QWORD *)&FileName->Length = *(_QWORD *)(v6 + 1216);
      ObfReferenceObject(*(PVOID *)(v6 + 1216));
      SecurityContext->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(v6 + 1192);
      ObfReferenceObject(*(PVOID *)(v6 + 1192));
    }
    else
    {
      v8 = -1073741811;
    }
    a3->IoStatus.Status = v8;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return v8;
  }
  else
  {
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return UsbhFdoChainIrp(a1, a3);
  }
}
