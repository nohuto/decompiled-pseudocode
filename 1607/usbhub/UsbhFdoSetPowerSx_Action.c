/*
 * XREFs of UsbhFdoSetPowerSx_Action @ 0x1C00029A8
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C00020B0 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     UsbhSshEnterSx @ 0x1C0002AD4 (UsbhSshEnterSx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021CE0 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0021E0C (UsbhSetFdoPowerState.c)
 */

__int64 __fastcall UsbhFdoSetPowerSx_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  unsigned int LowPart; // ebx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v12; // rax

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v7 = FdoExt(DeviceObject);
  v8 = Context[9];
  v9 = v7;
  Log((_DWORD)DeviceObject, 16, 1349283703, 0, (__int64)Irp);
  UsbhSetFdoPowerState(DeviceObject, LowPart, 202LL);
  UsbhReleaseFdoPwrLock(DeviceObject, v8);
  UsbhSshEnterSx(DeviceObject, v8);
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
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
         (PIO_COMPLETION_ROUTINE)UsbhFdoSxIoComplete_Action,
         Context,
         1u,
         1u,
         1u) < 0 )
  {
    v12 = Irp->Tail.Overlay.CurrentStackLocation;
    v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoSxIoComplete_Action;
    v12[-1].Context = Context;
    v12[-1].Control = -32;
  }
  PoCallDriver(*(PDEVICE_OBJECT *)(v9 + 1208), Irp);
  Log((_DWORD)DeviceObject, 16, 1886156606, 0, 0LL);
  return 259LL;
}
