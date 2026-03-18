/*
 * XREFs of UsbhFdoDxPoComplete_Action @ 0x1C0001A40
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001D30 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0002320 (UsbhEtwLogHubPowerEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0020500 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C002058C (UsbhSetFdoPowerState.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0020600 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleasePowerContext @ 0x1C00206A0 (UsbhReleasePowerContext.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhFdoDxPoComplete_Action(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  IRP *v5; // r14
  __int64 v7; // rbx
  __int64 v9; // r15
  int v10; // r10d
  __int64 v11; // rbx
  int Status; // edi

  v5 = (IRP *)Context[7];
  v7 = MinorFunction;
  v9 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1685606467, (_DWORD)Context, v7);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      v10,
      (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids,
      PowerState.SystemState);
  v11 = Context[9];
  UsbhAcquireFdoPwrLock(DeviceObject, v11, 108LL, 1869641828LL);
  Status = IoStatus->Status;
  v5->IoStatus.Status = IoStatus->Status;
  *(_BYTE *)(v9 + 4184) = 1;
  *(POWER_STATE *)(FdoExt(DeviceObject) + 4208) = PowerState;
  UsbhSetFdoPowerState(DeviceObject, 0LL, 205LL);
  UsbhReleaseFdoPwrLock(DeviceObject, v11);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))UsbhEtwLogHubPowerEvent)(
    DeviceObject,
    v5,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_COMPLETE,
    (POWER_STATE)PowerState.SystemState,
    Status);
  UsbhReleasePowerContext(DeviceObject, Context);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, v5, 1913LL);
  IofCompleteRequest(v5, 0);
  *(_QWORD *)(v9 + 5080) = MEMORY[0xFFFFF78000000014];
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 1224), v5, 0x20u);
}
