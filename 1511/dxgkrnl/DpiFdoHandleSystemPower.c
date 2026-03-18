/*
 * XREFs of DpiFdoHandleSystemPower @ 0x1C00CA470
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C00CA450 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCorrectPowerAction @ 0x1C000D540 (DpiCorrectPowerAction.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00AA5F0 (DpiFdoInvalidateChildRelations.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C00CA7C8 (DpiDxgkDdiSetPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C00CA870 (DpiFdoStopMiracastSession.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00CFC00 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

NTSTATUS __fastcall DpiFdoHandleSystemPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  char *DeviceExtension; // rsi
  char v5; // di
  __int64 v7; // rdx
  struct _IO_REMOVE_LOCK *v8; // rbx
  struct _IO_STACK_LOCATION *v9; // rax
  struct _IO_STACK_LOCATION *v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  unsigned int LowPart; // eax
  __int64 v18; // rdx
  POWER_STATE v19; // ebx
  bool v20; // di
  __int64 v21; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  int EaLength; // [rsp+A8h] [rbp+10h]
  __int64 v30; // [rsp+B0h] [rbp+18h] BYREF
  PIO_REMOVE_LOCK RemoveLock; // [rsp+B8h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = 0;
  v7 = (unsigned int)CurrentStackLocation->MinorFunction - 2;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction != 3 )
    {
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    {
      v30 = -300000000LL;
      LOBYTE(v7) = 1;
      DpiFdoStopMiracastSession(DeviceObject, v7, &v30, 131LL);
    }
  }
  v8 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
  RemoveLock = (PIO_REMOVE_LOCK)(DeviceExtension + 64);
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, Irp, &byte_1C00ED620, 1u, 0x20u);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v9 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v9[-1].MajorFunction = *(_OWORD *)&v9->MajorFunction;
  *(_OWORD *)&v9[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v9->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v9[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v9->Parameters.SetQuota + 6);
  v9[-1].FileObject = v9->FileObject;
  v9[-1].Control = 0;
  v10 = Irp->Tail.Overlay.CurrentStackLocation;
  v10[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
  v10[-1].Context = &Event;
  v10[-1].Control = -32;
  PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v16 = v11;
  if ( v11 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v25[3] = DpiFdoHandleDevicePower;
    v25[4] = KeWaitForSingleObject;
    v25[5] = v16;
    WdLogEvent5_WdError(v25);
  }
  else
  {
    LODWORD(v16) = Irp->IoStatus.Status;
    if ( (int)v16 < 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v26 + 24) = DpiFdoHandleSystemPower;
      *(_QWORD *)(v26 + 32) = CurrentStackLocation->MinorFunction;
      WdLogEvent5_WdWarning(v26);
    }
    else
    {
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( LowPart > 1 )
          *((_DWORD *)DeviceExtension + 70) = LowPart;
      }
      v18 = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v19.SystemState = *(SYSTEM_POWER_STATE *)&DeviceExtension[4 * v18 + 1128];
      if ( DeviceExtension[480] )
      {
        LODWORD(v16) = 0;
        if ( *((_DWORD *)DeviceExtension + 4) == 1953656900
          && *((_DWORD *)DeviceExtension + 5) == 2
          && *((_DWORD *)DeviceExtension + 59) == 2
          && CurrentStackLocation->MinorFunction == 2 )
        {
          EaLength = CurrentStackLocation->Parameters.Create.EaLength;
          v20 = DeviceExtension[1091] && (unsigned int)(dword_1C0046FB0 - 4) <= 1;
          if ( v19.SystemState == PowerSystemWorking )
            EaLength = DpiCorrectPowerAction(
                         (__int64)DeviceObject,
                         v18,
                         CurrentStackLocation->Parameters.Create.EaLength);
          if ( v20 && v19.SystemState < *((_DWORD *)DeviceExtension + 71) && byte_1C0046FD0 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C0046F10);
            byte_1C0046FD0 = 0;
            qword_1C0046FB8 = (__int64)KeGetCurrentThread();
            qword_1C0046FC0 = (__int64)DeviceObject;
          }
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
            *((_QWORD *)DeviceExtension + 5),
            *((_QWORD *)DeviceExtension + 6),
            -1,
            (POWER_STATE)v19.SystemState,
            EaLength);
          if ( v20 )
          {
            if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 5 )
            {
              byte_1C0046FD0 = 1;
              LOBYTE(v21) = 1;
              InbvNotifyDisplayOwnershipChange(v21, DpiEnterSystemDisplay);
            }
            else if ( v19.SystemState < *((_DWORD *)DeviceExtension + 71) )
            {
              memset(&dword_1C0046F10, 0, 0x20uLL);
              dword_1C0046F28 = -1;
              memset(&xmmword_1C0046F30, 0, 0x80uLL);
              qword_1C0046FC0 = 0LL;
              qword_1C0046FB8 = (__int64)KeGetCurrentThread();
            }
          }
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 2440), 1u);
          *((POWER_STATE *)DeviceExtension + 71) = v19;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 2440));
          KeLeaveCriticalRegion();
          if ( v19.SystemState == PowerSystemWorking )
            DpiFdoInvalidateChildRelations((__int64)DeviceObject, 0x18u);
          v5 = 0;
        }
        *((_DWORD *)DeviceExtension + 70) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      }
      else
      {
        v5 = 1;
        Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        v23 = PoRequestPowerIrp(
                DeviceObject,
                CurrentStackLocation->MinorFunction,
                v19,
                (PREQUEST_POWER_COMPLETE)DpiFdoDevicePowerCompletionCallback,
                Irp,
                0LL);
        v16 = v23;
        if ( v23 != 259 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v27[3] = DpiFdoHandleSystemPower;
          v27[4] = PoRequestPowerIrp;
          v27[5] = v16;
          WdLogEvent5_WdError(v27);
        }
      }
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      v8 = RemoveLock;
    }
  }
  if ( (_DWORD)v16 != 259 )
  {
    PoStartNextPowerIrp(Irp);
    Irp->IoStatus.Status = v16;
    IofCompleteRequest(Irp, 0);
    IoReleaseRemoveLockEx(v8, Irp, 0x20u);
    if ( v5 )
      LODWORD(v16) = 259;
  }
  return v16;
}
