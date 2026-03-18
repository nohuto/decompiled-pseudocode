/*
 * XREFs of UsbhFdoSelectConfigurationPdo @ 0x1C0007768
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012F60 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     UsbhDecPdoIoCount @ 0x1C00139E0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C003D494 (WPP_RECORDER_SF_qd.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoSelectConfigurationPdo(PDEVICE_OBJECT DeviceObject, PVOID Context, PIRP Irp)
{
  __int64 v6; // r13
  __int64 PortData; // rax
  __int64 v8; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  char v11; // cl
  int v12; // eax
  int Length_low; // ebp
  int v14; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v17; // edi
  _IO_STACK_LOCATION *v18; // rax
  int v19; // [rsp+48h] [rbp-40h]
  __int64 v20; // [rsp+50h] [rbp-38h]
  int v21; // [rsp+A8h] [rbp+20h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids,
      (char)Context);
  v6 = FdoExt(DeviceObject);
  v20 = PdoExt(Context);
  PortData = UsbhGetPortData(DeviceObject, *(unsigned __int16 *)(v20 + 1420));
  v8 = PortData;
  if ( !PortData )
  {
    v17 = -1073741811;
    goto LABEL_23;
  }
  SecurityContext = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = SecurityContext[1].SecurityQos;
  if ( SecurityQos )
  {
    v11 = 1;
    if ( BYTE1(SecurityQos->Length) == 2 )
    {
      v12 = v21;
    }
    else
    {
      v12 = -1073737984;
      v11 = 0;
    }
    Length_low = 9;
    if ( LOBYTE(SecurityQos->Length) < 9u )
    {
      v12 = -1073737984;
      v11 = 0;
    }
    if ( v11 )
    {
      v14 = 2 * SecurityQos->ContextTrackingMode;
      *(_DWORD *)(v8 + 432) = v14;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qd(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          -1073737984,
          18,
          (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids,
          (char)Context,
          v14);
      if ( *(_DWORD *)(v8 + 432) <= *(_DWORD *)(v6 + 3032) )
        goto LABEL_13;
      HIDWORD(SecurityContext->SecurityQos) = -1073737728;
      _InterlockedExchange((volatile __int32 *)(v8 + 428), 5);
      v17 = -1073741670;
      LOBYTE(v19) = 0;
      UsbhException(
        (int)DeviceObject,
        *(unsigned __int16 *)(v20 + 1420),
        35,
        (int)SecurityQos,
        9,
        -1073741670,
        HIDWORD(SecurityContext->SecurityQos),
        usbfile_hub_c,
        2573,
        v19);
    }
    else
    {
      HIDWORD(SecurityContext->SecurityQos) = v12;
      if ( LOBYTE(SecurityQos->Length) < 9u )
        Length_low = LOBYTE(SecurityQos->Length);
      LOBYTE(v19) = 0;
      v17 = -1073741811;
      UsbhException(
        (int)DeviceObject,
        *(unsigned __int16 *)(v20 + 1420),
        33,
        (int)SecurityQos,
        Length_low,
        -1073741811,
        v12,
        usbfile_hub_c,
        2550,
        v19);
    }
LABEL_23:
    Irp->IoStatus.Status = v17;
    IofCompleteRequest(Irp, 0);
    UsbhDecPdoIoCount((ULONG_PTR)Context, (ULONG_PTR)Irp);
    return v17;
  }
  *(_DWORD *)(PortData + 432) = 0;
LABEL_13:
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhSelectConfigOrInterfaceComplete, Context, 1u, 1u, 1u) < 0 )
  {
    v18 = Irp->Tail.Overlay.CurrentStackLocation;
    v18[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhSelectConfigOrInterfaceComplete;
    v18[-1].Context = Context;
    v18[-1].Control = -32;
  }
  return IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1216), Irp);
}
