/*
 * XREFs of UsbhFdoSystemPowerState @ 0x1C0001EB0
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x1C0001DE0 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001D30 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     GET_FDO_PNPSTATE @ 0x1C0002104 (GET_FDO_PNPSTATE.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0002320 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhFdoSetPowerS0_Action @ 0x1C0002690 (UsbhFdoSetPowerS0_Action.c)
 *     UsbhFdoSetPowerSx_Action @ 0x1C00027A8 (UsbhFdoSetPowerSx_Action.c)
 *     UsbhEtwGetActivityId @ 0x1C0004A00 (UsbhEtwGetActivityId.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C00091F4 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C000942C (UsbhReleaseFdoPnpLock.c)
 *     UsbhDisableTimerObject @ 0x1C000E0A0 (UsbhDisableTimerObject.c)
 *     GET_FDO_POWER_STATE @ 0x1C00111D8 (GET_FDO_POWER_STATE.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     Usbh_FDO_Pnp_State @ 0x1C001E0A0 (Usbh_FDO_Pnp_State.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0020500 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C002058C (UsbhSetFdoPowerState.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0020600 (UsbhAcquireFdoPwrLock.c)
 *     UsbhAcquirePowerContext @ 0x1C0024BFC (UsbhAcquirePowerContext.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C00276BC (Usbh_HubRootHubInitNotification.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D168 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhFdoSystemPowerState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int LowPart; // r14d
  __int64 v5; // r15
  int v6; // r9d
  unsigned int v7; // r12d
  unsigned int inited; // edi
  void *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  char v12; // al
  void *v13; // r12
  unsigned int v15; // edi
  int v16; // eax
  void *v17; // r9
  __int64 v18; // r8
  int ActivityId; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v21; // ebx
  _BYTE *v22; // r8
  __int64 v23; // rdx
  void *v24; // r9
  void *v25; // r9
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // rax
  _BYTE v29[16]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v31[16]; // [rsp+60h] [rbp-58h] BYREF

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v5 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1349745011, 0, (__int64)Irp);
  v7 = v6 + 1;
  inited = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, &File, v6 + 1, 0x20u);
  v9 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_DISPATCH;
  if ( LowPart != v7 )
    v9 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_DISPATCH;
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v9, LowPart, 0);
  if ( (inited & 0xC0000000) != 0xC0000000 )
  {
    v10 = FdoExt(DeviceObject);
    v11 = v10 + 1384;
    UsbhAcquireFdoPnpLock((_DWORD)DeviceObject, v10 + 1384, v7 + 100, 812874099, v7);
    if ( (unsigned int)GET_FDO_PNPSTATE(v11) == 6 )
    {
      UsbhReleaseFdoPnpLock(DeviceObject, v11);
      UsbhDisableTimerObject(DeviceObject, *(_QWORD *)(v5 + 2768));
      inited = Usbh_HubRootHubInitNotification(DeviceObject, 0LL, 0LL);
      if ( inited == -1073741536 )
        Usbh_FDO_Pnp_State(v11, 8LL);
      else
        KeWaitForSingleObject((PVOID)(v5 + 2576), Executive, 0, 0, 0LL);
      UsbhAcquireFdoPnpLock((_DWORD)DeviceObject, v11, 101, 863205747, v7);
    }
    if ( (unsigned int)GET_FDO_PNPSTATE(v11) == 5 )
    {
      UsbhReleaseFdoPnpLock(DeviceObject, v11);
      UsbhAcquireFdoPwrLock(DeviceObject, v11, 101LL, 846428531LL);
      if ( (unsigned int)GET_FDO_POWER_STATE(v11) != 213 )
      {
        if ( LowPart != v7 )
        {
          v12 = v7;
          goto LABEL_10;
        }
        if ( *(_DWORD *)(FdoExt(DeviceObject) + 4212) != v7 )
        {
          v12 = 0;
LABEL_10:
          v13 = (void *)UsbhAcquirePowerContext(
                          (_DWORD)DeviceObject,
                          v11,
                          (_DWORD)DeviceObject,
                          (_DWORD)Irp,
                          0LL,
                          11,
                          v12);
          if ( v13 )
          {
            if ( LowPart == 1 )
            {
              *(_QWORD *)(v5 + 5072) = MEMORY[0xFFFFF78000000014];
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                v28 = FdoExt(DeviceObject);
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  22,
                  (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids,
                  *(_DWORD *)(v28 + 4208));
              }
              v15 = GET_FDO_POWER_STATE(v11);
              v16 = GET_FDO_POWER_STATE(v11) - 205;
              if ( !v16 )
                return UsbhFdoSetPowerS0_Action(DeviceObject, Irp, v13);
              if ( v16 == 1 )
                v15 = 201;
              *(_DWORD *)(FdoExt(DeviceObject) + 4212) = 1;
              UsbhSetFdoPowerState(DeviceObject, 0LL, v15);
              UsbhReleaseFdoPwrLock(DeviceObject, v11);
            }
            else if ( LowPart - 2 <= 4 )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                v26 = FdoExt(DeviceObject);
                WPP_RECORDER_SF_dd(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v27,
                  1,
                  21,
                  (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids,
                  LowPart,
                  *(_DWORD *)(v26 + 4208));
              }
              return UsbhFdoSetPowerSx_Action(DeviceObject, Irp, v13);
            }
            UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2821);
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            v21 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
          }
          else
          {
            UsbhReleaseFdoPwrLock(DeviceObject, v11);
            v21 = -1073741670;
            Irp->IoStatus.Status = -1073741670;
            Log((_DWORD)DeviceObject, 16, 829651315, -1073741670, (__int64)Irp);
            UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2740);
            v25 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
            if ( LowPart != 1 )
              v25 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
            UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v25, LowPart, -1073741670);
            IofCompleteRequest(Irp, 0);
          }
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
          return v21;
        }
        UsbhReleaseFdoPwrLock(DeviceObject, v11);
        ActivityId = UsbhEtwGetActivityId(Irp, v31);
        UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2708);
        Irp->CurrentLocation += v7;
        ++Irp->Tail.Overlay.CurrentStackLocation;
        v21 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
        v22 = v31;
        v24 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
LABEL_38:
        if ( ActivityId < 0 )
          v22 = 0LL;
        UsbhEtwLogHubPowerEvent(DeviceObject, 0LL, v22, v24, LowPart, v21);
        return v21;
      }
      if ( LowPart == v7 )
        v23 = v7;
      else
        v23 = LowPart;
      UsbhSetFdoPowerState(DeviceObject, v23, 213LL);
      UsbhReleaseFdoPwrLock(DeviceObject, v11);
      ActivityId = UsbhEtwGetActivityId(Irp, v29);
      UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2680);
      Irp->CurrentLocation += v7;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v21 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
      v22 = v29;
    }
    else
    {
      UsbhReleaseFdoPnpLock(DeviceObject, v11);
      Log((_DWORD)DeviceObject, 16, 846428531, inited, (__int64)Irp);
      UsbhAcquireFdoPwrLock(DeviceObject, v11, 101LL, 829651315LL);
      if ( LowPart == v7 )
        v18 = 201LL;
      else
        v18 = 205LL;
      UsbhSetFdoPowerState(DeviceObject, 0LL, v18);
      UsbhReleaseFdoPwrLock(DeviceObject, v11);
      ActivityId = UsbhEtwGetActivityId(Irp, v30);
      UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2647);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                             + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v21 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
      v22 = v30;
    }
    v24 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != v7 )
      v24 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    goto LABEL_38;
  }
  Irp->IoStatus.Status = inited;
  Log((_DWORD)DeviceObject, 16, 829651315, inited, (__int64)Irp);
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2585);
  v17 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
  if ( LowPart != v7 )
    v17 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v17, LowPart, inited);
  IofCompleteRequest(Irp, 0);
  return inited;
}
