/*
 * XREFs of UsbhFdoSelectConfigurationPdo @ 0x1C0026804
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D738 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C003D9E4 (WPP_RECORDER_SF_qd.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoSelectConfigurationPdo(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR BugCheckParameter3,
        IRP *BugCheckParameter4,
        __int64 a4)
{
  __int64 v7; // rdx
  PDEVICE_OBJECT *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 PortData; // rax
  __int64 v13; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  char v16; // cl
  int v17; // eax
  int Length_low; // ebp
  int v19; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v22; // edi
  _IO_STACK_LOCATION *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // [rsp+48h] [rbp-40h]
  _DWORD *v27; // [rsp+50h] [rbp-38h]
  int v28; // [rsp+A8h] [rbp+20h]

  v7 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      BugCheckParameter3);
  v8 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject, v7, (__int64)BugCheckParameter4, a4);
  v27 = PdoExt(BugCheckParameter3, v9, v10, v11);
  PortData = UsbhGetPortData((__int64)DeviceObject, *((_WORD *)v27 + 710));
  v13 = PortData;
  if ( !PortData )
  {
    v22 = -1073741811;
    goto LABEL_23;
  }
  SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = SecurityContext[1].SecurityQos;
  if ( SecurityQos )
  {
    v16 = 1;
    if ( BYTE1(SecurityQos->Length) == 2 )
    {
      v17 = v28;
    }
    else
    {
      v17 = -1073737984;
      v16 = 0;
    }
    Length_low = 9;
    if ( LOBYTE(SecurityQos->Length) < 9u )
    {
      v17 = -1073737984;
      v16 = 0;
    }
    if ( v16 )
    {
      v19 = 2 * SecurityQos->ContextTrackingMode;
      *(_DWORD *)(v13 + 432) = v19;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qd(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          -1073737984,
          18,
          (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
          BugCheckParameter3,
          v19);
      if ( *(_DWORD *)(v13 + 432) <= *((_DWORD *)v8 + 758) )
        goto LABEL_13;
      HIDWORD(SecurityContext->SecurityQos) = -1073737728;
      _InterlockedExchange((volatile __int32 *)(v13 + 428), 5);
      v22 = -1073741670;
      LOBYTE(v26) = 0;
      UsbhException(
        (int)DeviceObject,
        *((unsigned __int16 *)v27 + 710),
        35,
        (int)SecurityQos,
        9,
        -1073741670,
        HIDWORD(SecurityContext->SecurityQos),
        usbfile_hub_c,
        2573,
        v26);
    }
    else
    {
      HIDWORD(SecurityContext->SecurityQos) = v17;
      if ( LOBYTE(SecurityQos->Length) < 9u )
        Length_low = LOBYTE(SecurityQos->Length);
      LOBYTE(v26) = 0;
      v22 = -1073741811;
      UsbhException(
        (int)DeviceObject,
        *((unsigned __int16 *)v27 + 710),
        33,
        (int)SecurityQos,
        Length_low,
        -1073741811,
        v17,
        usbfile_hub_c,
        2550,
        v26);
    }
LABEL_23:
    BugCheckParameter4->IoStatus.Status = v22;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v24, v25);
    return v22;
  }
  *(_DWORD *)(PortData + 432) = 0;
LABEL_13:
  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(
         DeviceObject,
         BugCheckParameter4,
         (PIO_COMPLETION_ROUTINE)UsbhSelectConfigOrInterfaceComplete,
         (PVOID)BugCheckParameter3,
         1u,
         1u,
         1u) < 0 )
  {
    v23 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
    v23[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhSelectConfigOrInterfaceComplete;
    v23[-1].Context = (void *)BugCheckParameter3;
    v23[-1].Control = -32;
  }
  return IofCallDriver(v8[152], BugCheckParameter4);
}
