/*
 * XREFs of UsbhFdoDevicePowerState @ 0x1C000232C
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x1C0001FE0 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000120C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoSetPowerD0_Action @ 0x1C0001E98 (UsbhFdoSetPowerD0_Action.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001F30 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0002520 (UsbhEtwLogHubPowerEvent.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021CE0 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0021D6C (UsbhAcquireFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0021E0C (UsbhSetFdoPowerState.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

NTSTATUS __fastcall UsbhFdoDevicePowerState(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v5; // r15
  int v6; // ebp
  int LowPart; // ebx
  int v8; // r9d
  ULONG v9; // r12d
  NTSTATUS v10; // ebp
  __int64 v11; // r14
  __int64 v12; // rdx
  _IO_STACK_LOCATION *v14; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = FdoExt(a1);
  v6 = 16;
  Log((_DWORD)a1, 16, 1348756854, 0, (__int64)a2);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v9 = v8 + 1;
  if ( LowPart != v8 + 1 )
  {
    v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), a2, &File, v9, 0x20u);
    if ( (v10 & 0xC0000000) == 0xC0000000 )
    {
      a2->IoStatus.Status = v10;
      UsbhPoStartNextPowerIrp_Fdo((__int64)a1, a2, 2881);
      Log((_DWORD)a1, 16, 1348761121, v10, (__int64)a2);
      IofCompleteRequest(a2, 0);
      return v10;
    }
    v6 = v9 + 15;
  }
  v11 = FdoExt(a1) + 1384;
  UsbhAcquireFdoPwrLock(a1, v11, 102LL, 1937139044LL);
  if ( LowPart == v9 )
  {
    Log((_DWORD)a1, v6, 1348420656, 0, (__int64)a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v9,
        23,
        (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids);
    UsbhEtwLogHubPowerEvent(a1, a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_DISPATCH, LowPart, 0);
    UsbhSetFdoPowerState(a1, 0LL, 211LL);
    UsbhReleaseFdoPwrLock(a1, v11);
    return UsbhFdoSetPowerD0_Action((__int64)a1, v11, a2);
  }
  else
  {
    if ( LowPart > (int)v9 )
    {
      if ( LowPart <= 3 )
      {
        Log((_DWORD)a1, v6, 1348420728, LowPart, (__int64)a2);
        UsbhEtwLogHubPowerEvent(a1, a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_DISPATCH, LowPart, 0);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            v9,
            24,
            (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids,
            LowPart);
        v12 = v9;
        goto LABEL_11;
      }
      if ( LowPart == 4 )
      {
        Log((_DWORD)a1, v6, 1348420728, 4, (__int64)a2);
        UsbhEtwLogHubPowerEvent(a1, a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_DISPATCH, 4, 0);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            v9,
            25,
            (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids,
            4);
        v12 = 0LL;
LABEL_11:
        UsbhSetFdoPowerState(a1, v12, 204LL);
        UsbhReleaseFdoPwrLock(a1, v11);
        return UsbhFdoSetPowerDx_Action(a1, *(_QWORD *)(v5 + 912), a2);
      }
    }
    UsbhReleaseFdoPwrLock(a1, v11);
    UsbhPoStartNextPowerIrp_Fdo((__int64)a1, a2, 2945);
    v14 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v14->MajorFunction;
    *(_OWORD *)&v14[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v14->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v14[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v14->Parameters.QueryDeviceRelations + 6);
    v14[-1].FileObject = v14->FileObject;
    v14[-1].Control = 0;
    return PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), a2);
  }
}
