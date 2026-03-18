/*
 * XREFs of DpiFdoHandleDevicePower @ 0x1C00DFFA0
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C00DFB20 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C000C490 (DpiDisableD3Requests.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0029FAC (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C00DF6A8 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C00E02B0 (DpiFdoStopMiracastSession.c)
 *     DpiRequestIoPowerState @ 0x1C00E0898 (DpiRequestIoPowerState.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00E3564 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C014D450 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiFdoIsDevicePresent @ 0x1C01956B8 (DpiFdoIsDevicePresent.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C01957B4 (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C019DCA8 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C019DE30 (DpiLdaPowerUpAdapterInChain.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C019E878 (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoHandleDevicePower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v3; // r12
  int *DeviceExtension; // rdi
  __int64 Status; // rsi
  bool v8; // r13
  __int64 LowPart; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  struct _IO_STACK_LOCATION *v13; // rax
  struct _IO_STACK_LOCATION *v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  POWER_STATE v17; // ebx
  CCHAR v18; // dl
  int v20; // eax
  __int64 v21; // rbx
  _QWORD *v22; // rax
  char v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r13
  char v29; // al
  _QWORD *v30; // rax
  char v31; // al
  int v32; // eax
  __int64 v33; // r8
  struct _DEVICE_OBJECT *v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  bool v40; // [rsp+90h] [rbp+8h]
  __int64 v41; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  DeviceExtension = (int *)DeviceObject->DeviceExtension;
  v40 = 0;
  LODWORD(Status) = 0;
  v8 = 0;
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
  v8 = (int)LowPart > 1;
  v40 = (int)LowPart > 1;
  v10 = (_QWORD *)WdLogNewEntry5_WdPower();
  v10[3] = DeviceObject->DeviceExtension;
  v10[4] = LowPart;
  v10[5] = DeviceExtension[71];
  WdLogEvent5_WdPower(v10);
  if ( (int)LowPart > 1
    && (!*((_BYTE *)DeviceExtension + 481) || (unsigned int)DeviceExtension[70] > 1 || *((_BYTE *)DeviceExtension + 482)) )
  {
    v41 = -300000000LL;
    LOBYTE(v11) = 1;
    DpiFdoStopMiracastSession(DeviceObject, v11, &v41, 131LL);
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( (int)LowPart <= DeviceExtension[71]
    || (DeviceExtension[126]
      ? (v12 = DpiLdaPowerDownAllAdaptersInChain(DeviceObject, Irp))
      : (v12 = DpiFdoSetAdapterPowerState(
                 DeviceObject,
                 (POWER_STATE)LowPart,
                 (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                 HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                 CurrentStackLocation->Parameters.Create.EaLength)),
        LODWORD(Status) = v12,
        v12 >= 0) )
  {
    if ( (int)LowPart > 1 )
      *((_BYTE *)DeviceExtension + 496) = 1;
  }
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( (_DWORD)Status == -1073741637 )
    goto LABEL_42;
  if ( (int)Status < 0 )
  {
    PoStartNextPowerIrp(Irp);
    v18 = 0;
    Irp->IoStatus.Status = Status;
    goto LABEL_31;
  }
LABEL_17:
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v13 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v13[-1].MajorFunction = *(_OWORD *)&v13->MajorFunction;
  *(_OWORD *)&v13[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v13->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v13[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v13->Parameters.SetQuota + 6);
  v13[-1].FileObject = v13->FileObject;
  v13[-1].Control = 0;
  v14 = Irp->Tail.Overlay.CurrentStackLocation;
  v14[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
  v14[-1].Context = &Event;
  v14[-1].Control = -32;
  PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  v15 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  Status = v15;
  if ( !v15 )
  {
    Status = Irp->IoStatus.Status;
    if ( (_DWORD)Status == -1073741810 )
    {
      v21 = 0LL;
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v22[3] = DpiFdoHandleDevicePower;
      v22[4] = DeviceObject;
      v22[5] = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v22[6] = -1073741810LL;
      WdLogEvent5_WdError(v22);
      v23 = 0;
      if ( !DeviceExtension[126] || *((_BYTE *)DeviceExtension + 508) )
      {
        v21 = (__int64)DeviceExtension;
      }
      else
      {
        v24 = *((_QWORD *)DeviceExtension + 324);
        if ( v24 )
          v21 = *(_QWORD *)(v24 + 64);
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 483) )
        DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( (int)DpiFdoIsDevicePresent(DeviceExtension, &v41) >= 0 )
      {
        v23 = v41;
        if ( !(_BYTE)v41 )
          *((_BYTE *)DeviceExtension + 1148) = 1;
      }
      if ( DeviceExtension[59] == 6 )
      {
        if ( !v8 && *((_QWORD *)DeviceExtension + 61) )
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v21, 0, 1);
      }
      else if ( v21 )
      {
        if ( v23 )
        {
          v3 = 1;
        }
        else
        {
          v28 = *((_QWORD *)DeviceExtension + 5);
          if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
          {
            if ( *((_BYTE *)DeviceExtension + 481) )
            {
              if ( (unsigned int)DeviceExtension[70] <= 1 && !*((_BYTE *)DeviceExtension + 482) )
              {
                v29 = *(_BYTE *)(v21 + 3696);
                if ( (v29 & 0x10) == 0 && ((v29 & 8) == 0 || *(int *)(v21 + 3704) < 0x2000) )
                {
                  v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27);
                  v30[3] = 275LL;
                  v30[4] = 25LL;
                  v30[5] = 2 - (*((_BYTE *)DeviceExtension + 1136) != 0);
                  v30[6] = (unsigned int)DeviceExtension[277];
                  v30[7] = (unsigned int)DeviceExtension[278];
                  WdLogEvent5_WdCriticalError(v30);
                }
              }
            }
          }
          if ( (int)DpiDxgkDdiNotifySurpriseRemoval(v28, *((_QWORD *)DeviceExtension + 6), v21, 0LL) >= 0
            || (*(_BYTE *)(v21 + 3696) & 0x10) != 0 )
          {
            v3 = 1;
          }
          v31 = *((_BYTE *)DeviceExtension + 1136);
          if ( v31 || !v3 )
            DpiFdoRebootForSurpriseRemoval(DeviceObject, v31 != 0 ? 1 : 3);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v21 + 3584), 1u);
        if ( !v3 )
          *((_BYTE *)DeviceExtension + 1149) = 1;
        DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
        v32 = DeviceExtension[59];
        ++DeviceExtension[69];
        DeviceExtension[60] = v32;
        DeviceExtension[59] = 6;
        ExReleaseResourceLite((PERESOURCE)(v21 + 3584));
        KeLeaveCriticalRegion();
        v8 = v40;
        if ( !v40 && *((_QWORD *)DeviceExtension + 61) )
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v21, 0, 1);
        DpiRequestIoPowerState(*(_QWORD *)(v21 + 24), 4LL, v33, 0LL);
        if ( (int *)v21 != DeviceExtension )
        {
          v34 = *(struct _DEVICE_OBJECT **)(v21 + 152);
          *(_BYTE *)(v21 + 232) = 1;
          IoInvalidateDeviceState(v34);
          DxgCreateLiveDumpWithWdLogs(0x193u, 0x803uLL, 0xFFFFFFFFC000000EuLL, *(int *)(v21 + 236), *(int *)(v21 + 240));
        }
      }
      else
      {
        v35 = DeviceExtension[60];
        v36 = DeviceExtension[69] & 7;
        *((_BYTE *)DeviceExtension + 1149) = 1;
        DeviceExtension[v36 + 61] = v35;
        v37 = DeviceExtension[59];
        ++DeviceExtension[69];
        DeviceExtension[60] = v37;
        DeviceExtension[59] = 6;
      }
      if ( (PDEVICE_OBJECT)qword_1C00570C0 == DeviceObject )
      {
        if ( v23 )
        {
          if ( dword_1C0057170 == 3 && byte_1C0057190 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C00570D0);
            byte_1C0057190 = 0;
          }
        }
        else
        {
          qword_1C00570C0 = 0LL;
        }
      }
      if ( *((_BYTE *)DeviceExtension + 483) )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_94;
    }
    if ( (int)Status >= 0 )
      goto LABEL_20;
  }
  v38 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v38 + 24) = Status;
  WdLogEvent5_WdError(v38);
  if ( (int)Status >= 0 )
  {
LABEL_20:
    if ( CurrentStackLocation->MinorFunction == 2 )
    {
      v17.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 483) )
        DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( !v8 )
        *((_BYTE *)DeviceExtension + 496) = 0;
      if ( v17.SystemState < DeviceExtension[71] )
      {
        if ( DeviceExtension[126] )
          v20 = DpiLdaPowerUpAdapterInChain(DeviceObject, Irp);
        else
          v20 = DpiFdoSetAdapterPowerState(
                  DeviceObject,
                  v17,
                  (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                  HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                  CurrentStackLocation->Parameters.Create.EaLength);
        LODWORD(Status) = v20;
      }
      if ( *((_BYTE *)DeviceExtension + 481) && v17.SystemState == PowerSystemWorking )
        DpiSetDevicePowerTransitionStateAtPassiveLevel((__int64)DeviceExtension, 0, 1);
LABEL_27:
      if ( *((_BYTE *)DeviceExtension + 483) )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_30;
    }
    goto LABEL_30;
  }
LABEL_94:
  if ( v8 )
  {
    KeEnterCriticalRegion();
    if ( *((_BYTE *)DeviceExtension + 483) )
      DpiDisableD3Requests(*((_QWORD *)DeviceExtension + 3));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    *((_BYTE *)DeviceExtension + 496) = 0;
    goto LABEL_27;
  }
LABEL_30:
  PoStartNextPowerIrp(Irp);
  v18 = 1;
LABEL_31:
  IofCompleteRequest(Irp, v18);
  return (unsigned int)Status;
}
