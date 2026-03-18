/*
 * XREFs of DpiFdoHandleDevicePower @ 0x1C00CA970
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C00CA450 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C000B7BC (DpiDisableD3Requests.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0023460 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C00C9E50 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C00CA870 (DpiFdoStopMiracastSession.c)
 *     DpiRequestIoPowerState @ 0x1C00CB040 (DpiRequestIoPowerState.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00CFC00 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoIsDevicePresent @ 0x1C016C990 (DpiFdoIsDevicePresent.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C016CAA0 (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C0174260 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C0174430 (DpiLdaPowerUpAdapterInChain.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C0174ECC (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoHandleDevicePower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int *DeviceExtension; // rdi
  __int64 Status; // rsi
  bool v7; // r12
  struct _IO_STACK_LOCATION *v8; // rax
  struct _IO_STACK_LOCATION *v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  void *v16; // rcx
  __int64 LowPart; // rbx
  _QWORD *v18; // rax
  int v19; // eax
  CCHAR v20; // dl
  __int64 v21; // rbx
  char v22; // r12
  _QWORD *v23; // rax
  __int64 v24; // rax
  int IsDevicePresent; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  char v28; // r13
  __int64 v29; // r14
  char v30; // al
  _QWORD *v31; // rax
  char v32; // al
  int v33; // eax
  bool v34; // r14
  struct _DEVICE_OBJECT *v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  POWER_STATE v39; // ebx
  int v40; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  bool v43; // [rsp+90h] [rbp+8h]
  union _LARGE_INTEGER v44; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (int *)DeviceObject->DeviceExtension;
  v43 = 0;
  LODWORD(Status) = 0;
  v7 = 0;
  if ( CurrentStackLocation->MinorFunction == 2 )
  {
    LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v7 = (int)LowPart > 1;
    v43 = (int)LowPart > 1;
    v18 = (_QWORD *)WdLogNewEntry5_WdPower();
    v18[3] = DeviceObject->DeviceExtension;
    v18[4] = LowPart;
    v18[5] = DeviceExtension[71];
    WdLogEvent5_WdPower(v18);
    if ( (int)LowPart > 1
      && (!*((_BYTE *)DeviceExtension + 481)
       || (unsigned int)DeviceExtension[70] > 1
       || *((_BYTE *)DeviceExtension + 482)) )
    {
      v44.QuadPart = -300000000LL;
      DpiFdoStopMiracastSession((__int64)DeviceObject, 1, &v44, 0x83u);
    }
    KeEnterCriticalRegion();
    if ( *((_BYTE *)DeviceExtension + 483) )
      DpiDisableD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    if ( (int)LowPart <= DeviceExtension[71]
      || (!DeviceExtension[126]
        ? (v19 = DpiFdoSetAdapterPowerState(
                   DeviceObject,
                   (POWER_STATE)LowPart,
                   (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                   HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                   CurrentStackLocation->Parameters.Create.EaLength))
        : (v19 = DpiLdaPowerDownAllAdaptersInChain(DeviceObject, Irp)),
          LODWORD(Status) = v19,
          v19 >= 0) )
    {
      if ( (int)LowPart > 1 )
        *((_BYTE *)DeviceExtension + 496) = 1;
    }
    if ( *((_BYTE *)DeviceExtension + 483) )
      DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
    ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    KeLeaveCriticalRegion();
    if ( (_DWORD)Status != -1073741637 )
    {
      if ( (int)Status < 0 )
      {
        PoStartNextPowerIrp(Irp);
        v20 = 0;
        Irp->IoStatus.Status = Status;
LABEL_95:
        IofCompleteRequest(Irp, v20);
        return (unsigned int)Status;
      }
LABEL_3:
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v8 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
      *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
      v8[-1].FileObject = v8->FileObject;
      v8[-1].Control = 0;
      v9 = Irp->Tail.Overlay.CurrentStackLocation;
      v9[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
      v9[-1].Context = &Event;
      v9[-1].Control = -32;
      PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      v10 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v10;
      if ( v10 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v15[3] = DpiFdoHandleDevicePower;
        v16 = KeWaitForSingleObject;
      }
      else
      {
        Status = Irp->IoStatus.Status;
        if ( (_DWORD)Status == -1073741810 )
        {
          v21 = 0LL;
          v22 = 0;
          v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
          v23[3] = DpiFdoHandleDevicePower;
          v23[4] = DeviceObject;
          v23[5] = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
          v23[6] = -1073741810LL;
          WdLogEvent5_WdWarning(v23);
          if ( !DeviceExtension[126] || *((_BYTE *)DeviceExtension + 508) )
          {
            v21 = (__int64)DeviceExtension;
          }
          else
          {
            v24 = *((_QWORD *)DeviceExtension + 189);
            if ( v24 )
              v21 = *(_QWORD *)(v24 + 64);
          }
          KeEnterCriticalRegion();
          if ( *((_BYTE *)DeviceExtension + 483) )
            DpiDisableD3Requests((__int64)DeviceExtension);
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
          IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v44);
          v28 = v44.LowPart;
          if ( IsDevicePresent < 0 )
            v28 = 0;
          if ( v21 )
          {
            if ( v28 )
            {
              v22 = 1;
            }
            else
            {
              v29 = *((_QWORD *)DeviceExtension + 5);
              if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
              {
                if ( *((_BYTE *)DeviceExtension + 481) )
                {
                  if ( (unsigned int)DeviceExtension[70] <= 1 && !*((_BYTE *)DeviceExtension + 482) )
                  {
                    v30 = *(_BYTE *)(v21 + 2552);
                    if ( (v30 & 0x10) == 0 && ((v30 & 8) == 0 || (*(_BYTE *)(v21 + 2553) & 2) == 0) )
                    {
                      v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, 0LL, v27);
                      v31[3] = 275LL;
                      v31[4] = 25LL;
                      v31[5] = 2 - (*((_BYTE *)DeviceExtension + 1088) != 0);
                      v31[6] = (unsigned int)DeviceExtension[265];
                      v31[7] = (unsigned int)DeviceExtension[266];
                      WdLogEvent5_WdCriticalError(v31);
                    }
                  }
                }
              }
              if ( (int)DpiDxgkDdiNotifySurpriseRemoval(v29, *((_QWORD *)DeviceExtension + 6), v21, 0LL) >= 0
                || (*(_BYTE *)(v21 + 2552) & 0x10) != 0 )
              {
                v22 = 1;
              }
              v32 = *((_BYTE *)DeviceExtension + 1088);
              if ( v32 || !v22 )
                DpiFdoRebootForSurpriseRemoval(DeviceObject, v32 != 0 ? 1 : 3);
            }
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(v21 + 2440), 1u);
            if ( !v22 )
              *((_BYTE *)DeviceExtension + 1096) = 1;
            DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
            v33 = DeviceExtension[59];
            ++DeviceExtension[69];
            DeviceExtension[60] = v33;
            DeviceExtension[59] = 6;
            ExReleaseResourceLite((PERESOURCE)(v21 + 2440));
            KeLeaveCriticalRegion();
            v34 = v43;
            if ( !v43 && *((_QWORD *)DeviceExtension + 61) )
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v21, 0, 1);
            DpiRequestIoPowerState(*(_QWORD *)(v21 + 24), 4LL, 0LL, 0LL);
            if ( (int *)v21 != DeviceExtension )
            {
              v35 = *(struct _DEVICE_OBJECT **)(v21 + 152);
              *(_BYTE *)(v21 + 232) = 1;
              IoInvalidateDeviceState(v35);
            }
          }
          else
          {
            v36 = DeviceExtension[60];
            v37 = DeviceExtension[69] & 7;
            v34 = v43;
            *((_BYTE *)DeviceExtension + 1096) = 1;
            DeviceExtension[v37 + 61] = v36;
            v38 = DeviceExtension[59];
            ++DeviceExtension[69];
            DeviceExtension[60] = v38;
            DeviceExtension[59] = 6;
          }
          if ( (PDEVICE_OBJECT)qword_1C0046F00 == DeviceObject )
          {
            if ( v28 )
            {
              if ( dword_1C0046FB0 == 3 && byte_1C0046FD0 )
              {
                DpiAcquirePostDisplayInfoFromBgfx(&dword_1C0046F10);
                byte_1C0046FD0 = 0;
              }
            }
            else
            {
              qword_1C0046F00 = 0LL;
            }
          }
          if ( *((_BYTE *)DeviceExtension + 483) )
            DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
          ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
          KeLeaveCriticalRegion();
LABEL_74:
          if ( v34 )
          {
            KeEnterCriticalRegion();
            if ( *((_BYTE *)DeviceExtension + 483) )
              DpiDisableD3Requests((__int64)DeviceExtension);
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
            *((_BYTE *)DeviceExtension + 496) = 0;
LABEL_91:
            if ( *((_BYTE *)DeviceExtension + 483) )
              DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
            ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
            KeLeaveCriticalRegion();
            goto LABEL_94;
          }
          goto LABEL_94;
        }
        if ( (int)Status >= 0 )
        {
LABEL_78:
          if ( CurrentStackLocation->MinorFunction == 2 )
          {
            v39.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
            KeEnterCriticalRegion();
            if ( *((_BYTE *)DeviceExtension + 483) )
              DpiDisableD3Requests((__int64)DeviceExtension);
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
            if ( !v7 )
              *((_BYTE *)DeviceExtension + 496) = 0;
            if ( v39.SystemState < DeviceExtension[71] )
            {
              if ( DeviceExtension[126] )
                v40 = DpiLdaPowerUpAdapterInChain(DeviceObject, Irp);
              else
                v40 = DpiFdoSetAdapterPowerState(
                        DeviceObject,
                        v39,
                        (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                        HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                        CurrentStackLocation->Parameters.Create.EaLength);
              LODWORD(Status) = v40;
            }
            if ( *((_BYTE *)DeviceExtension + 481) && v39.SystemState == PowerSystemWorking )
              DpiSetDevicePowerTransitionStateAtPassiveLevel((__int64)DeviceExtension, 0, 1);
            goto LABEL_91;
          }
LABEL_94:
          PoStartNextPowerIrp(Irp);
          v20 = 1;
          goto LABEL_95;
        }
        v15 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v15[3] = DpiFdoHandleDevicePower;
        v16 = PoCallDriver;
      }
      v15[4] = v16;
      v15[5] = Status;
      WdLogEvent5_WdError(v15);
      if ( (int)Status < 0 )
      {
        v34 = v43;
        goto LABEL_74;
      }
      goto LABEL_78;
    }
  }
  else if ( CurrentStackLocation->MinorFunction == 3 )
  {
    goto LABEL_3;
  }
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  LODWORD(Status) = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  return (unsigned int)Status;
}
