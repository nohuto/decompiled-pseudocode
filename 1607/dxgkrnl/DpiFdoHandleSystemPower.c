/*
 * XREFs of DpiFdoHandleSystemPower @ 0x1C00DFB38
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C00DFB20 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     DpiCorrectPowerAction @ 0x1C000EFE4 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C2FD0 (DpiFdoInvalidateChildRelations.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C00DFF00 (DpiDxgkDdiSetPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C00E02B0 (DpiFdoStopMiracastSession.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00E3564 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

NTSTATUS __fastcall DpiFdoHandleSystemPower(PDEVICE_OBJECT DeviceObject, IRP *Context)
{
  char *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  char v5; // di
  IRP *v6; // r15
  struct _IO_REMOVE_LOCK *v7; // rbx
  struct _IO_STACK_LOCATION *v8; // rax
  struct _IO_STACK_LOCATION *v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  unsigned int LowPart; // eax
  __int64 v17; // rdx
  POWER_STATE v18; // ebx
  char v19; // di
  __int64 v20; // rcx
  NTSTATUS v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int EaLength; // [rsp+34h] [rbp-B4h]
  __int64 v28; // [rsp+38h] [rbp-B0h] BYREF
  PIO_REMOVE_LOCK RemoveLock; // [rsp+40h] [rbp-A8h]
  struct _KEVENT Event; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v31[8]; // [rsp+60h] [rbp-88h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Context->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  v6 = Context;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction != 3 )
    {
      ++Context->CurrentLocation;
      Context->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Context);
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    {
      v28 = -300000000LL;
      LOBYTE(Context) = 1;
      DpiFdoStopMiracastSession(DeviceObject, Context, &v28, 131LL);
    }
  }
  v7 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
  RemoveLock = (PIO_REMOVE_LOCK)(DeviceExtension + 64);
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, v6, &byte_1C00FF410, 1u, 0x20u);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = v6->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
  *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
  v8[-1].FileObject = v8->FileObject;
  v8[-1].Control = 0;
  v9 = v6->Tail.Overlay.CurrentStackLocation;
  v9[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
  v9[-1].Context = &Event;
  v9[-1].Control = -32;
  PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v6);
  v10 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v15 = v10;
  if ( v10 )
  {
    v24 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v24 + 24) = v15;
    WdLogEvent5_WdError(v24);
  }
  else
  {
    LODWORD(v15) = v6->IoStatus.Status;
    if ( (int)v15 < 0 )
    {
      v25 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v25 + 24) = CurrentStackLocation->MinorFunction;
      WdLogEvent5_WdWarning(v25);
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
      v17 = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v18.SystemState = *(SYSTEM_POWER_STATE *)&DeviceExtension[4 * v17 + 1176];
      if ( !DeviceExtension[1143] )
      {
        if ( DeviceExtension[480] )
        {
          LODWORD(v15) = 0;
          if ( *((_DWORD *)DeviceExtension + 4) == 1953656900
            && *((_DWORD *)DeviceExtension + 5) == 2
            && *((_DWORD *)DeviceExtension + 59) == 2
            && CurrentStackLocation->MinorFunction == 2 )
          {
            EaLength = CurrentStackLocation->Parameters.Create.EaLength;
            if ( !DeviceExtension[1139] || (v19 = 1, (unsigned int)(dword_1C0057170 - 4) > 1) )
              v19 = 0;
            if ( v18.SystemState == PowerSystemWorking )
              EaLength = DpiCorrectPowerAction(
                           (__int64)DeviceObject,
                           v17,
                           CurrentStackLocation->Parameters.Create.EaLength);
            if ( v19 && v18.SystemState < *((_DWORD *)DeviceExtension + 71) && byte_1C0057190 )
            {
              DpiAcquirePostDisplayInfoFromBgfx(&dword_1C00570D0);
              byte_1C0057190 = 0;
              qword_1C0057178 = (__int64)KeGetCurrentThread();
              qword_1C0057180 = (__int64)DeviceObject;
            }
            ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
              *((_QWORD *)DeviceExtension + 5),
              *((_QWORD *)DeviceExtension + 6),
              -1,
              (POWER_STATE)v18.SystemState,
              EaLength);
            if ( v19 )
            {
              if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 5 )
              {
                byte_1C0057190 = 1;
                LOBYTE(v20) = 1;
                InbvNotifyDisplayOwnershipChange(v20, DpiEnterSystemDisplay);
              }
              else if ( v18.SystemState < *((_DWORD *)DeviceExtension + 71) )
              {
                memset(&dword_1C00570D0, 0, 0x20uLL);
                dword_1C00570E8 = -1;
                memset(&xmmword_1C00570F0, 0, 0x80uLL);
                qword_1C0057180 = 0LL;
                qword_1C0057178 = (__int64)KeGetCurrentThread();
              }
            }
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3584), 1u);
            *((POWER_STATE *)DeviceExtension + 71) = v18;
            ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3584));
            KeLeaveCriticalRegion();
            if ( v18.SystemState == PowerSystemWorking )
            {
              memset(v31, 0, sizeof(v31));
              EtwActivityIdControl(3u, (LPGUID)&v31[1]);
              v31[7] = MEMORY[0xFFFFF78000000014];
              LODWORD(v31[3]) = 11;
              DpiFdoInvalidateChildRelations((__int64)DeviceObject, 0x18u, (__int64)v31);
            }
            v5 = 0;
          }
          *((_DWORD *)DeviceExtension + 70) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        }
        else
        {
          v5 = 1;
          v6->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          v22 = PoRequestPowerIrp(
                  DeviceObject,
                  CurrentStackLocation->MinorFunction,
                  v18,
                  (PREQUEST_POWER_COMPLETE)DpiFdoDevicePowerCompletionCallback,
                  v6,
                  0LL);
          v15 = v22;
          if ( v22 != 259 )
          {
            v26 = WdLogNewEntry5_WdError(v23);
            *(_QWORD *)(v26 + 24) = v15;
            WdLogEvent5_WdError(v26);
          }
        }
      }
      if ( DeviceExtension[483] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      v7 = RemoveLock;
    }
  }
  if ( (_DWORD)v15 != 259 )
  {
    PoStartNextPowerIrp(v6);
    v6->IoStatus.Status = v15;
    IofCompleteRequest(v6, 0);
    IoReleaseRemoveLockEx(v7, v6, 0x20u);
    if ( v5 )
      LODWORD(v15) = 259;
  }
  return v15;
}
