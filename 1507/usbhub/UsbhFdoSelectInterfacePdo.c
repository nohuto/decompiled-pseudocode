/*
 * XREFs of UsbhFdoSelectInterfacePdo @ 0x1C003B948
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012F60 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoSelectInterfacePdo(PDEVICE_OBJECT DeviceObject, PVOID Context, PIRP Irp, __int64 a4)
{
  PDEVICE_OBJECT *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _IO_STACK_LOCATION *v12; // rax

  v7 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject, (__int64)Context, (__int64)Irp, a4);
  PdoExt((__int64)Context, v8, v9, v10);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(
         DeviceObject,
         Irp,
         (PIO_COMPLETION_ROUTINE)UsbhSelectConfigOrInterfaceComplete,
         Context,
         1u,
         1u,
         1u) < 0 )
  {
    v12 = Irp->Tail.Overlay.CurrentStackLocation;
    v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhSelectConfigOrInterfaceComplete;
    v12[-1].Context = Context;
    v12[-1].Control = -32;
  }
  return IofCallDriver(v7[152], Irp);
}
