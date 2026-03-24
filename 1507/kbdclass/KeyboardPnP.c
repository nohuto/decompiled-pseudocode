/*
 * XREFs of KeyboardPnP @ 0x1C0001C50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqc @ 0x1C0001E60 (WPP_RECORDER_SF_qqc.c)
 *     KeyboardStart @ 0x1C00023F0 (KeyboardStart.c)
 *     KeyboardClassCancelPendingIrpLeds @ 0x1C0004190 (KeyboardClassCancelPendingIrpLeds.c)
 *     KeyboardClassRemoveDevice @ 0x1C00048A4 (KeyboardClassRemoveDevice.c)
 *     KbdEnableDisablePort @ 0x1C000CE50 (KbdEnableDisablePort.c)
 *     KeyboardSendIrpSynchronously @ 0x1C000D1E0 (KeyboardSendIrpSynchronously.c)
 */

__int64 __fastcall KeyboardPnP(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // r15d
  UCHAR MinorFunction; // al
  struct _IO_STACK_LOCATION *v12; // rax
  unsigned int v13; // edi
  _QWORD *PoolWithTag; // r15
  PIO_WORKITEM WorkItem; // rax
  struct _IO_STACK_LOCATION *v17; // rax
  struct _IO_STACK_LOCATION *v18; // rax
  bool v19; // zf
  char v20; // di
  char *v21; // r15
  void *v22; // rbp
  struct _IO_STACK_LOCATION *v23; // rax
  unsigned int v24; // ebx
  NTSTATUS v25; // eax
  ULONG RemlockSize; // [rsp+20h] [rbp-48h]
  _QWORD v27[5]; // [rsp+40h] [rbp-28h] BYREF

  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !*((_BYTE *)DeviceExtension + 64) )
  {
    Irp->IoStatus.Status = -1073741637;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return 3221225659LL;
  }
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, &File, 1u, 0x20u);
  v10 = v6;
  if ( v6 < 0 )
  {
    Irp->IoStatus.Status = v6;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return v10;
  }
  WPP_RECORDER_SF_qqc(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    v8,
    v9,
    RemlockSize,
    (char)DeviceObject,
    (char)Irp,
    CurrentStackLocation->MinorFunction);
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction < 0x14u && MinorFunction >= 5u )
    goto LABEL_5;
  if ( !MinorFunction )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x4364624Bu);
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *PoolWithTag = WorkItem;
      if ( WorkItem )
      {
        PoolWithTag[1] = Irp;
        IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, KeyboardStartWorker, &File, 1u, 0x20u);
        v17 = Irp->Tail.Overlay.CurrentStackLocation;
        v13 = 259;
        *(_OWORD *)&v17[-1].MajorFunction = *(_OWORD *)&v17->MajorFunction;
        *(_OWORD *)&v17[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v17->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v17[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v17->Parameters.SetQuota + 6);
        v17[-1].FileObject = v17->FileObject;
        v17[-1].Control = 0;
        v18 = Irp->Tail.Overlay.CurrentStackLocation;
        v18[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&KeyboardPnpStartCompletion;
        v18[-1].Context = PoolWithTag;
        v18[-1].Control = -32;
        Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
        goto LABEL_6;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    KeyboardSendIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
    v27[1] = Irp;
    v27[0] = 0LL;
    v25 = KeyboardStart(DeviceObject, v27);
    Irp->IoStatus.Status = v25;
    Irp->IoStatus.Information = 0LL;
    v13 = v25;
    IofCompleteRequest(Irp, 0);
    goto LABEL_6;
  }
  if ( MinorFunction == 20 )
  {
    if ( !*((_BYTE *)DeviceExtension + 66) )
    {
      LODWORD(Irp->IoStatus.Information) |= 0x20u;
      Irp->IoStatus.Status = 0;
    }
    goto LABEL_5;
  }
  if ( MinorFunction != 2 )
  {
    if ( MinorFunction == 4 )
    {
      if ( *((_BYTE *)DeviceExtension + 65) )
      {
        ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels && SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > 0 )
        {
          v20 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[49] + 16);
          v21 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[49];
          v21[16] = 0;
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          if ( v20 )
          {
            v22 = (void *)_InterlockedExchange64((volatile __int64 *)DeviceExtension + 41, 0LL);
            if ( v22 )
              IoUnregisterPlugPlayNotification(v22);
            KbdEnableDisablePort(0LL, Irp, DeviceExtension, v21);
          }
        }
        else
        {
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        }
      }
      *((_BYTE *)DeviceExtension + 65) = 0;
      goto LABEL_32;
    }
    if ( MinorFunction == 23 )
    {
      KeyboardClassCancelPendingIrpLeds(DeviceExtension);
      v19 = *((_QWORD *)DeviceExtension + 12) == 0LL;
      *((_BYTE *)DeviceExtension + 363) = 1;
      if ( !v19 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 22), 0);
LABEL_32:
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v13 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
      goto LABEL_6;
    }
LABEL_5:
    v12 = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v12[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
    *(_OWORD *)&v12[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v12->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v12[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v12->Parameters.SetQuota + 6);
    v12[-1].FileObject = v12->FileObject;
    v12[-1].Control = 0;
    v13 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
LABEL_6:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
    return v13;
  }
  KeyboardClassCancelPendingIrpLeds(DeviceExtension);
  KeyboardClassRemoveDevice(DeviceExtension);
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
  v23 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v23[-1].MajorFunction = *(_OWORD *)&v23->MajorFunction;
  *(_OWORD *)&v23[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v23->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v23[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v23->Parameters.SetQuota + 6);
  v23[-1].FileObject = v23->FileObject;
  v23[-1].Control = 0;
  v24 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 1 )
    {
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 0;
      if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
      {
        ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
        WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
      }
    }
    else
    {
      *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[49] + 19) = 1;
      *(_OWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[49]) = 0uLL;
    }
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 2));
  RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 22));
  ExFreePoolWithTag(*((PVOID *)DeviceExtension + 13), 0);
  IoDeleteDevice(DeviceObject);
  return v24;
}
