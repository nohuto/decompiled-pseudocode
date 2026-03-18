/*
 * XREFs of UsbhFdoPnp_StartDevice @ 0x1C001DF20
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     Usbh_FDO_Pnp_State @ 0x1C001E0A0 (Usbh_FDO_Pnp_State.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoPnp_StartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT *v6; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int Status; // edi
  _DWORD *v12; // rax
  _IO_STACK_LOCATION *v14; // rax
  int v15; // [rsp+48h] [rbp-30h]
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  v6 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject, (__int64)Irp, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_7ca54aefc42ddeaf2f05adb755207832_Traceguids);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhDeferIrpCompletion, &Event, 1u, 1u, 1u) < 0 )
  {
    v14 = Irp->Tail.Overlay.CurrentStackLocation;
    v14[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
    v14[-1].Context = &Event;
    v14[-1].Control = -32;
  }
  Log((__int64)DeviceObject, 2, 1937011287, 0LL, (__int64)Irp);
  if ( IofCallDriver(v6[151], Irp) == 259 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  Status = Irp->IoStatus.Status;
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    LOBYTE(v15) = 0;
    UsbhException((int)DeviceObject, 0, 57, 0, 0, Status, 0, usbfile_pnp_c, 3079, v15);
  }
  else
  {
    v12 = FdoExt((__int64)DeviceObject, v8, v9, v10);
    Status = Usbh_FDO_Pnp_State(v12 + 346, 4LL);
  }
  v6[638] = (PDEVICE_OBJECT)MEMORY[0xFFFFF78000000014];
  Log((__int64)DeviceObject, 2, 1398035028, 0LL, Status);
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
