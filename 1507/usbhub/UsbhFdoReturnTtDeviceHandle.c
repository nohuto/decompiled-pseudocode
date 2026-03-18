/*
 * XREFs of UsbhFdoReturnTtDeviceHandle @ 0x1C003B770
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012F60 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C00139E0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhGetDeviceHandle @ 0x1C00256D4 (UsbhGetDeviceHandle.c)
 */

NTSTATUS __fastcall UsbhFdoReturnTtDeviceHandle(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _DWORD *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PDEVICE_OBJECT *v12; // r13
  int v13; // r11d
  __int64 *SecurityContext; // r15
  __int64 FileName; // r10
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r14
  signed int v17; // ebx
  int v18; // r11d
  __int64 v19; // r9
  __int64 v20; // r10
  int v21; // r11d
  __int64 v22; // r8
  __int64 v23; // rax
  _IO_STACK_LOCATION *v24; // rax
  __int64 v26; // r8
  __int64 v27; // r9

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v8 = PdoExt(a2, a2, (__int64)a3, a4);
  v12 = (PDEVICE_OBJECT *)FdoExt(a1, v9, v10, v11);
  Log(a1, 8, 1950631985, a2, (__int64)a3);
  SecurityContext = (__int64 *)CurrentStackLocation->Parameters.Create.SecurityContext;
  FileName = (__int64)CurrentStackLocation->Parameters.QueryDirectory.FileName;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v17 = 0;
  if ( SecurityContext && Parameters )
  {
    Log(a1, v13, 1950631986, FileName, (__int64)SecurityContext);
    Log(a1, v18, 1950631987, (__int64)Parameters, LOWORD(Parameters->NamedPipeType));
    v22 = *((unsigned int *)v12 + 640);
    if ( (v22 & 0x40) != 0 )
    {
      *SecurityContext = (__int64)UsbhGetDeviceHandle(a1, v20, v22, v19);
      v23 = *((unsigned __int16 *)v8 + 710);
      LOWORD(Parameters->NamedPipeType) = v23;
      Log(a1, 8, 1950631988, *SecurityContext, v23);
      v17 = *SecurityContext == 0 ? 0xC0000001 : 0;
    }
    else
    {
      if ( (v22 & 1) == 0 )
      {
        v24 = a3->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v24[-1].MajorFunction = *(_OWORD *)&v24->MajorFunction;
        *(_OWORD *)&v24[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v24->Parameters.QueryFile.FileInformationClass;
        *(_OWORD *)(&v24[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v24->Parameters.QueryDeviceRelations + 6);
        v24[-1].FileObject = v24->FileObject;
        v24[-1].Control = 0;
        UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v22, v19);
        return IofCallDriver(v12[151], a3);
      }
      *SecurityContext = 0LL;
      LOWORD(Parameters->NamedPipeType) = 0;
      Log(a1, v21, 1950632050, 0LL, 0LL);
    }
  }
  else
  {
    v17 = -1073741811;
  }
  Log(a1, v13, 1950632024, 0LL, v17);
  a3->IoStatus.Status = v17;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v26, v27);
  return v17;
}
