/*
 * XREFs of UsbhFdoPnp_QueryCaps @ 0x1C0026E50
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryCaps(struct _DEVICE_OBJECT *Context, PIRP Irp, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT *v6; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  PDEVICE_OBJECT *v8; // rsi
  _IO_STACK_LOCATION *v10; // rax

  v6 = (PDEVICE_OBJECT *)FdoExt((__int64)Context, (__int64)Irp, a3, a4);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v8 = v6;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(Context, Irp, UsbhQueryCapsComplete, Context, 1u, 0, 0) < 0 )
  {
    v10 = Irp->Tail.Overlay.CurrentStackLocation;
    v10[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhQueryCapsComplete;
    v10[-1].Context = Context;
    v10[-1].Control = 64;
  }
  return IofCallDriver(v8[151], Irp);
}
