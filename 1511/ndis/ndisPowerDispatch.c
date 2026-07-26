/*
 * XREFs of ndisPowerDispatch @ 0x1C0024480
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisQueuePowerIrp @ 0x1C005F484 (ndisQueuePowerIrp.c)
 *     ?ndisSetupDevicePower@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C006E9E0 (-ndisSetupDevicePower@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C0093CCC (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisSetPower @ 0x1C0097B38 (ndisSetPower.c)
 *     ndisQueryPower @ 0x1C00DF930 (ndisQueryPower.c)
 */

int __fastcall ndisPowerDispatch(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  _BYTE *DeviceExtension; // rdi
  struct _IRP *v5; // rdx
  char v6; // cl
  _DEVICE_OBJECT *v7; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  NTSTATUS Power; // eax
  _IO_STACK_LOCATION *v10; // rax
  _IO_STACK_LOCATION *v11; // rax
  unsigned int v12; // esi
  _IO_STACK_LOCATION *v14; // rax

  DeviceExtension = a1->DeviceExtension;
  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDevicePower(a1, v5);
  v6 = byte_1C0083715;
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
  {
    WPP_SF_qq(103LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, DeviceExtension, v5);
    v6 = byte_1C0083715;
  }
  if ( *DeviceExtension != 17 )
  {
    if ( (unsigned __int8)v6 >= 4u )
      WPP_SF_qq(104LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a1, Irp);
    v12 = -1073741808;
    Irp->IoStatus.Status = -1073741808;
    goto LABEL_32;
  }
  v7 = (_DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 487);
  if ( (unsigned __int8)v6 >= 4u )
  {
    WPP_SF_q(105LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, DeviceExtension);
    v6 = byte_1C0083715;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      if ( (unsigned __int8)v6 >= 4u )
        WPP_SF_q(107LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, DeviceExtension);
      CurrentStackLocation->Parameters.Read.Length = *((_DWORD *)DeviceExtension + 333);
      v10 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v10[-1].MajorFunction = *(_OWORD *)&v10->MajorFunction;
      *(_OWORD *)&v10[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v10->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&v10[-1].Parameters.SetLock + 24) = *(_OWORD *)(&v10->Parameters.SetLock + 24);
      v10[-1].FileObject = v10->FileObject;
      v10[-1].Control = 0;
      v11 = Irp->Tail.Overlay.CurrentStackLocation;
      v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisWaitWakeIoCompletion;
      v11[-1].Context = DeviceExtension;
      v11[-1].Control = -32;
      goto LABEL_17;
    case 1u:
      if ( (unsigned __int8)v6 >= 4u )
        WPP_SF_q(106LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, DeviceExtension);
      v14 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v14->MajorFunction;
      *(_OWORD *)&v14[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v14->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&v14[-1].Parameters.SetLock + 24) = *(_OWORD *)(&v14->Parameters.SetLock + 24);
      v14[-1].FileObject = v14->FileObject;
      v14[-1].Control = 0;
      v12 = IoSynchronousCallDriver(v7, Irp);
      Irp->IoStatus.Status = v12;
LABEL_32:
      IofCompleteRequest(Irp, 0);
      goto LABEL_19;
    case 2u:
      if ( !KeGetCurrentIrql() )
      {
        if ( (unsigned __int8)v6 >= 4u )
          WPP_SF_q(109LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, DeviceExtension);
        Power = ndisSetPower(Irp);
        goto LABEL_18;
      }
LABEL_36:
      ndisQueuePowerIrp(DeviceExtension, Irp);
      v12 = 259;
      goto LABEL_19;
    case 3u:
      if ( !KeGetCurrentIrql() )
      {
        if ( (unsigned __int8)v6 >= 4u )
          WPP_SF_q(108LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, DeviceExtension);
        Power = ndisQueryPower(Irp);
        goto LABEL_18;
      }
      goto LABEL_36;
  }
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qD(
      110LL,
      &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids,
      DeviceExtension,
      CurrentStackLocation->MinorFunction);
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
LABEL_17:
  Power = IofCallDriver(v7, Irp);
LABEL_18:
  v12 = Power;
LABEL_19:
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qD(111LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, DeviceExtension, v12);
  return v12;
}
