/*
 * XREFs of ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00010A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C0025C90 (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 */

__int64 __fastcall FxDevice::DispatchWithLock(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdi
  _QWORD *v10; // r8
  _IO_STACK_LOCATION *v11; // rax
  unsigned __int64 v12; // r11
  __int64 v13; // r10
  _QWORD *v14; // r9
  int v15; // ecx
  __int64 v16; // rcx
  unsigned int v17; // esi
  NTSTATUS v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // esi
  _IO_STACK_LOCATION *v22; // rax
  unsigned __int8 v23; // bp
  unsigned __int8 MinorFunction; // r14
  _IO_STACK_LOCATION *v25; // rax
  unsigned __int8 RemlockSize; // [rsp+20h] [rbp-38h]
  unsigned __int8 v27; // [rsp+28h] [rbp-30h]
  unsigned __int8 v28; // [rsp+30h] [rbp-28h]
  FxIrp v29; // [rsp+68h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction < 0x16u )
    goto LABEL_2;
  if ( MajorFunction <= 0x17u )
    goto LABEL_21;
  if ( MajorFunction != 27 )
  {
LABEL_2:
    v6 = 3;
    goto LABEL_3;
  }
  if ( CurrentStackLocation->MinorFunction == 2 )
    v6 = 2;
  else
LABEL_21:
    v6 = 1;
LABEL_3:
  v7 = v6 - 1;
  if ( !v7 )
  {
    v19 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, &id, 1u, 0x20u);
    v17 = v19;
    if ( v19 >= 0 )
      goto LABEL_7;
    goto LABEL_44;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v19 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, &id, 1u, 0x20u);
    v17 = v19;
    if ( v19 >= 0 )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, 0x20u);
      goto LABEL_7;
    }
LABEL_44:
    Irp->IoStatus.Status = v19;
    IofCompleteRequest(Irp, 0);
    return v17;
  }
  if ( v8 == 1 )
  {
    v29.m_Irp = Irp;
    if ( ((__int64)DeviceObject[1].CurrentIrp & 1) != 0 )
    {
      v19 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, &id, 1u, 0x20u);
      v17 = v19;
      if ( v19 >= 0 )
      {
        v25 = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v25[-1].MajorFunction = *(_OWORD *)&v25->MajorFunction;
        *(_OWORD *)&v25[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v25->Parameters.QueryFile.FileInformationClass;
        *(_OWORD *)(&v25[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v25->Parameters.QueryDeviceRelations + 6);
        v25[-1].FileObject = v25->FileObject;
        v25[-1].Control = 0;
        FxIrp::SetCompletionRoutineEx(
          &v29,
          DeviceObject,
          FxDevice::_CompletionRoutineForRemlockMaintenance,
          DeviceObject,
          RemlockSize,
          v27,
          v28);
        --Irp->CurrentLocation;
        --Irp->Tail.Overlay.CurrentStackLocation;
        goto LABEL_7;
      }
      goto LABEL_44;
    }
  }
LABEL_7:
  v9 = *((_QWORD *)DeviceObject->DeviceExtension - 6);
  v10 = *(_QWORD **)(v9 + 368);
  if ( v10 == (_QWORD *)(v9 + 368) )
  {
LABEL_11:
    v15 = Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
    if ( v15 == 27 )
    {
LABEL_15:
      v16 = *(_QWORD *)(v9 + 648);
      if ( !v16 )
LABEL_40:
        v16 = *(_QWORD *)(v9 + 672);
    }
    else if ( v15 == 14 )
    {
LABEL_24:
      v16 = *(_QWORD *)(v9 + 640);
    }
    else
    {
      switch ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
      {
        case 0u:
        case 2u:
        case 0x10u:
        case 0x12u:
          v16 = *(_QWORD *)(v9 + 656);
          break;
        case 3u:
        case 4u:
        case 0xFu:
          goto LABEL_24;
        case 0x16u:
          goto LABEL_15;
        case 0x17u:
          v16 = *(_QWORD *)(v9 + 664);
          break;
        default:
          goto LABEL_40;
      }
    }
    return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v16 + 64LL))(v16, Irp);
  }
  else
  {
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = 0LL;
    v13 = 3LL * v11->MajorFunction;
    while ( 1 )
    {
      v14 = v10;
      v10 = (_QWORD *)*v10;
      if ( v14[v13 + 2] )
        break;
LABEL_10:
      if ( v10 == (_QWORD *)(v9 + 368) )
        goto LABEL_11;
    }
    v20 = v14[v13 + 3];
    if ( v20 )
    {
      v21 = 0;
      while ( *(_BYTE *)(v21 + v14[v13 + 4]) != v11->MinorFunction )
      {
        if ( ++v21 >= v20 )
          goto LABEL_10;
      }
    }
    v22 = Irp->Tail.Overlay.CurrentStackLocation;
    v23 = v22->MajorFunction;
    MinorFunction = v22->MinorFunction;
    if ( *((_BYTE *)v14 + 688) )
    {
      if ( *(_WORD *)(v9 + 10) )
        v12 = v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
    }
    else if ( *(_WORD *)(v9 + 10) )
    {
      v12 = v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
    }
    v17 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v14[3 * v23 + 2])(v12, Irp, v10);
    if ( v23 >= 0x16u && (v23 <= 0x17u || v23 == 27 && MinorFunction != 2) )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(v9 + 144) + 336LL), Irp, 0x20u);
  }
  return v17;
}
