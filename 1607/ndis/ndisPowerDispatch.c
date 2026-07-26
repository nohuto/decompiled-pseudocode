/*
 * XREFs of ndisPowerDispatch @ 0x1C001FC10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisQueuePowerIrp @ 0x1C00636F4 (ndisQueuePowerIrp.c)
 *     ?ndisSetupDevicePower@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0073890 (-ndisSetupDevicePower@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C009B98C (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisSetPower @ 0x1C009C35C (ndisSetPower.c)
 *     ndisQueryPower @ 0x1C00E5B80 (ndisQueryPower.c)
 */

int __fastcall ndisPowerDispatch(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  _BYTE *DeviceExtension; // rdi
  struct _IRP *v5; // rdx
  char v6; // cl
  _DEVICE_OBJECT *v7; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  NTSTATUS Power; // eax
  unsigned int v10; // esi
  _IO_STACK_LOCATION *v12; // rax
  _IO_STACK_LOCATION *v13; // rax
  _IO_STACK_LOCATION *v14; // rax

  DeviceExtension = a1->DeviceExtension;
  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDevicePower(a1, v5);
  v6 = byte_1C00895D5;
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
  {
    WPP_SF_qq(104LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, DeviceExtension, v5);
    v6 = byte_1C00895D5;
  }
  if ( *DeviceExtension != 17 )
  {
    if ( (unsigned __int8)v6 >= 4u )
      WPP_SF_qq(105LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a1, Irp);
    v10 = -1073741808;
    Irp->IoStatus.Status = -1073741808;
    goto LABEL_32;
  }
  v7 = (_DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 487);
  if ( (unsigned __int8)v6 >= 4u )
  {
    WPP_SF_q(106LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, DeviceExtension);
    v6 = byte_1C00895D5;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      if ( (unsigned __int8)v6 >= 4u )
        WPP_SF_q(108LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, DeviceExtension);
      CurrentStackLocation->Parameters.Read.Length = *((_DWORD *)DeviceExtension + 333);
      v12 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v12[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
      *(_OWORD *)&v12[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v12->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&v12[-1].Parameters.SetLock + 24) = *(_OWORD *)(&v12->Parameters.SetLock + 24);
      v12[-1].FileObject = v12->FileObject;
      v12[-1].Control = 0;
      v13 = Irp->Tail.Overlay.CurrentStackLocation;
      v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisWaitWakeIoCompletion;
      v13[-1].Context = DeviceExtension;
      v13[-1].Control = -32;
      goto LABEL_26;
    case 1u:
      if ( (unsigned __int8)v6 >= 4u )
        WPP_SF_q(107LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, DeviceExtension);
      v14 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v14->MajorFunction;
      *(_OWORD *)&v14[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v14->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&v14[-1].Parameters.SetLock + 24) = *(_OWORD *)(&v14->Parameters.SetLock + 24);
      v14[-1].FileObject = v14->FileObject;
      v14[-1].Control = 0;
      v10 = IoSynchronousCallDriver(v7, Irp);
      Irp->IoStatus.Status = v10;
LABEL_32:
      IofCompleteRequest(Irp, 0);
      goto LABEL_15;
    case 2u:
      if ( !KeGetCurrentIrql() )
      {
        if ( (unsigned __int8)v6 >= 4u )
          WPP_SF_q(110LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, DeviceExtension);
        Power = ndisSetPower(Irp);
        goto LABEL_14;
      }
LABEL_36:
      ndisQueuePowerIrp(DeviceExtension, Irp);
      v10 = 259;
      goto LABEL_15;
    case 3u:
      if ( !KeGetCurrentIrql() )
      {
        if ( (unsigned __int8)v6 >= 4u )
          WPP_SF_q(109LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, DeviceExtension);
        Power = ndisQueryPower(Irp);
        goto LABEL_14;
      }
      goto LABEL_36;
  }
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qD(
      111LL,
      &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids,
      DeviceExtension,
      CurrentStackLocation->MinorFunction);
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
LABEL_26:
  Power = IofCallDriver(v7, Irp);
LABEL_14:
  v10 = Power;
LABEL_15:
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_qD(112LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, DeviceExtension, v10);
  return v10;
}
