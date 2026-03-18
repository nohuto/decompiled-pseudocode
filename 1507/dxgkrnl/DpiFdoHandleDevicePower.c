/*
 * XREFs of DpiFdoHandleDevicePower @ 0x1C00BC6D0
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C00BC1B0 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0005A88 (DpiDisableD3Requests.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C002391C (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C00BBD90 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C00BC5D0 (DpiFdoStopMiracastSession.c)
 *     DpiRequestIoPowerState @ 0x1C00BC9E0 (DpiRequestIoPowerState.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00DBCF0 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoIsDevicePresent @ 0x1C0168260 (DpiFdoIsDevicePresent.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C0168370 (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C016FA30 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C016FC00 (DpiLdaPowerUpAdapterInChain.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C017069C (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoHandleDevicePower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int *DeviceExtension; // rdi
  __int64 Status; // rsi
  bool v7; // r12
  __int64 LowPart; // rbx
  _QWORD *v9; // rax
  int v10; // eax
  struct _IO_STACK_LOCATION *v11; // rax
  struct _IO_STACK_LOCATION *v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  POWER_STATE v18; // ebx
  CCHAR v19; // dl
  int v21; // eax
  _QWORD *v22; // rax
  void *v23; // rcx
  __int64 v24; // rbx
  char v25; // r12
  _QWORD *v26; // rax
  __int64 v27; // rax
  int IsDevicePresent; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  char v31; // r13
  __int64 v32; // r14
  char v33; // al
  _QWORD *v34; // rax
  char v35; // al
  bool v36; // r14
  struct _DEVICE_OBJECT *v37; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  bool v39; // [rsp+90h] [rbp+8h]
  union _LARGE_INTEGER v40; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (int *)DeviceObject->DeviceExtension;
  v39 = 0;
  LODWORD(Status) = 0;
  v7 = 0;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
      goto LABEL_17;
LABEL_42:
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    LODWORD(Status) = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    return (unsigned int)Status;
  }
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v7 = (int)LowPart > 1;
  v39 = (int)LowPart > 1;
  v9 = (_QWORD *)WdLogNewEntry5_WdPower();
  v9[3] = DeviceObject->DeviceExtension;
  v9[4] = LowPart;
  v9[5] = DeviceExtension[62];
  WdLogEvent5_WdPower(v9);
  if ( (int)LowPart > 1
    && (!*((_BYTE *)DeviceExtension + 449) || (unsigned int)DeviceExtension[61] > 1 || *((_BYTE *)DeviceExtension + 450)) )
  {
    v40.QuadPart = -300000000LL;
    DpiFdoStopMiracastSession((__int64)DeviceObject, 1, &v40, 0x83u);
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 451) )
    DpiDisableD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( (int)LowPart <= DeviceExtension[62]
    || (DeviceExtension[118]
      ? (v10 = DpiLdaPowerDownAllAdaptersInChain(DeviceObject, Irp))
      : (v10 = DpiFdoSetAdapterPowerState(
                 DeviceObject,
                 (POWER_STATE)LowPart,
                 (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                 HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                 CurrentStackLocation->Parameters.Create.EaLength)),
        LODWORD(Status) = v10,
        v10 >= 0) )
  {
    if ( (int)LowPart > 1 )
      *((_BYTE *)DeviceExtension + 464) = 1;
  }
  if ( *((_BYTE *)DeviceExtension + 451) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( (_DWORD)Status == -1073741637 )
    goto LABEL_42;
  if ( (int)Status < 0 )
  {
    PoStartNextPowerIrp(Irp);
    v19 = 0;
    Irp->IoStatus.Status = Status;
    goto LABEL_31;
  }
LABEL_17:
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v11 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v11[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
  *(_OWORD *)&v11[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v11->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v11[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v11->Parameters.SetQuota + 6);
  v11[-1].FileObject = v11->FileObject;
  v11[-1].Control = 0;
  v12 = Irp->Tail.Overlay.CurrentStackLocation;
  v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
  v12[-1].Context = &Event;
  v12[-1].Control = -32;
  PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  v13 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  Status = v13;
  if ( v13 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v22[3] = DpiFdoHandleDevicePower;
    v23 = KeWaitForSingleObject;
  }
  else
  {
    Status = Irp->IoStatus.Status;
    if ( (_DWORD)Status == -1073741810 )
    {
      v24 = 0LL;
      v25 = 0;
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      v26[3] = DpiFdoHandleDevicePower;
      v26[4] = DeviceObject;
      v26[5] = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v26[6] = -1073741810LL;
      WdLogEvent5_WdWarning(v26);
      if ( !DeviceExtension[118] || *((_BYTE *)DeviceExtension + 476) )
      {
        v24 = (__int64)DeviceExtension;
      }
      else
      {
        v27 = *((_QWORD *)DeviceExtension + 184);
        if ( v27 )
          v24 = *(_QWORD *)(v27 + 64);
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 451) )
        DpiDisableD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v40);
      v31 = v40.LowPart;
      if ( IsDevicePresent < 0 )
        v31 = 0;
      if ( v24 )
      {
        if ( v31 )
        {
          v25 = 1;
        }
        else
        {
          v32 = *((_QWORD *)DeviceExtension + 5);
          if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
          {
            if ( *((_BYTE *)DeviceExtension + 449) )
            {
              if ( (unsigned int)DeviceExtension[61] <= 1 && !*((_BYTE *)DeviceExtension + 450) )
              {
                v33 = *(_BYTE *)(v24 + 2512);
                if ( (v33 & 0x10) == 0 && ((v33 & 8) == 0 || (*(_BYTE *)(v24 + 2513) & 2) == 0) )
                {
                  v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, v29, v30);
                  v34[3] = 275LL;
                  v34[4] = 25LL;
                  v34[5] = 2 - (*((_BYTE *)DeviceExtension + 1056) != 0);
                  v34[6] = (unsigned int)DeviceExtension[257];
                  v34[7] = (unsigned int)DeviceExtension[258];
                  WdLogEvent5_WdCriticalError(v34);
                }
              }
            }
          }
          if ( (*(_BYTE *)(v24 + 2512) & 0x18) == 8
            && *(_DWORD *)(v32 + 136) >= 0x300Du
            && *(_QWORD *)(v32 + 792)
            && (int)DpiDxgkDdiNotifySurpriseRemoval(v32, *((_QWORD *)DeviceExtension + 6)) >= 0
            || (*(_BYTE *)(v24 + 2512) & 0x10) != 0 )
          {
            v25 = 1;
          }
          v35 = *((_BYTE *)DeviceExtension + 1056);
          if ( v35 || !v25 )
            DpiFdoRebootForSurpriseRemoval(DeviceObject, v35 != 0 ? 1 : 3);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v24 + 2400), 1u);
        if ( !v25 )
          *((_BYTE *)DeviceExtension + 1063) = 1;
        DeviceExtension[60] = DeviceExtension[59];
        DeviceExtension[59] = 6;
        ExReleaseResourceLite((PERESOURCE)(v24 + 2400));
        KeLeaveCriticalRegion();
        DpiRequestIoPowerState(*(_QWORD *)(v24 + 24), 3LL, 0LL, 0LL);
        v36 = v39;
        if ( !v39 && *((_QWORD *)DeviceExtension + 57) )
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v24, 0, 1);
        if ( (int *)v24 != DeviceExtension )
        {
          v37 = *(struct _DEVICE_OBJECT **)(v24 + 152);
          *(_BYTE *)(v24 + 232) = 1;
          IoInvalidateDeviceState(v37);
        }
      }
      else
      {
        v36 = v39;
        DeviceExtension[60] = DeviceExtension[59];
        DeviceExtension[59] = 6;
        *((_BYTE *)DeviceExtension + 1063) = 1;
      }
      if ( (PDEVICE_OBJECT)qword_1C0046E80 == DeviceObject )
      {
        if ( v31 )
        {
          if ( dword_1C0046F30 == 3 && byte_1C0046F50 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C0046E90);
            byte_1C0046F50 = 0;
          }
        }
        else
        {
          qword_1C0046E80 = 0LL;
        }
      }
      if ( *((_BYTE *)DeviceExtension + 451) )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_95;
    }
    if ( (int)Status >= 0 )
      goto LABEL_20;
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v22[3] = DpiFdoHandleDevicePower;
    v23 = PoCallDriver;
  }
  v22[4] = v23;
  v22[5] = Status;
  WdLogEvent5_WdError(v22);
  if ( (int)Status >= 0 )
  {
LABEL_20:
    if ( CurrentStackLocation->MinorFunction == 2 )
    {
      v18.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 451) )
        DpiDisableD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( !v7 )
        *((_BYTE *)DeviceExtension + 464) = 0;
      if ( v18.SystemState < DeviceExtension[62] )
      {
        if ( DeviceExtension[118] )
          v21 = DpiLdaPowerUpAdapterInChain(DeviceObject, Irp);
        else
          v21 = DpiFdoSetAdapterPowerState(
                  DeviceObject,
                  v18,
                  (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                  HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                  CurrentStackLocation->Parameters.Create.EaLength);
        LODWORD(Status) = v21;
      }
      if ( *((_BYTE *)DeviceExtension + 449) && v18.SystemState == PowerSystemWorking )
        DpiSetDevicePowerTransitionStateAtPassiveLevel((__int64)DeviceExtension, 0, 1);
LABEL_27:
      if ( *((_BYTE *)DeviceExtension + 451) )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_30;
    }
    goto LABEL_30;
  }
  v36 = v39;
LABEL_95:
  if ( v36 )
  {
    KeEnterCriticalRegion();
    if ( *((_BYTE *)DeviceExtension + 451) )
      DpiDisableD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    *((_BYTE *)DeviceExtension + 464) = 0;
    goto LABEL_27;
  }
LABEL_30:
  PoStartNextPowerIrp(Irp);
  v19 = 1;
LABEL_31:
  IofCompleteRequest(Irp, v19);
  return (unsigned int)Status;
}
