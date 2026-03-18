/*
 * XREFs of UsbhFdoReturnRootHubPdo @ 0x1C001EF60
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhFdoChainIrp @ 0x1C0028C38 (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoReturnRootHubPdo(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  _DWORD *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v11; // ebx
  _UNICODE_STRING *FileName; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  __int64 v14; // r8
  __int64 v15; // r9

  v7 = FdoExt(a1, a2, (__int64)a3, a4);
  v9 = (unsigned int)v7[640];
  if ( (v9 & 1) != 0 )
  {
    CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
    v11 = 0;
    FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( FileName && SecurityContext )
    {
      *(_QWORD *)&FileName->Length = *((_QWORD *)v7 + 152);
      ObfReferenceObject(*((PVOID *)v7 + 152));
      SecurityContext->SecurityQos = (_SECURITY_QUALITY_OF_SERVICE *)*((_QWORD *)v7 + 149);
      ObfReferenceObject(*((PVOID *)v7 + 149));
    }
    else
    {
      v11 = -1073741811;
    }
    a3->IoStatus.Status = v11;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v14, v15);
    return v11;
  }
  else
  {
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v8, v9);
    return UsbhFdoChainIrp(a1, a3);
  }
}
