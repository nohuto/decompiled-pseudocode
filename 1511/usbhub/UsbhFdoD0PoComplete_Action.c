/*
 * XREFs of UsbhFdoD0PoComplete_Action @ 0x1C0001510
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
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C0024888 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045C58 (UsbhFdoPower_PowerFailureEntry.c)
 */

void __fastcall UsbhFdoD0PoComplete_Action(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v7; // rsi
  __int64 v8; // r12
  char v9; // r15
  int Status; // ebp
  IRP *v11; // r14
  int v12; // ecx
  __int64 v13; // rax

  v7 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1680896111, (_DWORD)Context, IoStatus->Status);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids);
  v8 = Context[9];
  v9 = 0;
  Status = IoStatus->Status;
  v11 = (IRP *)Context[7];
  Log((_DWORD)DeviceObject, 16, 1685090097, (_DWORD)Context, v8);
  UsbhAcquireFdoPwrLock(DeviceObject, v8, 110LL, 829436004LL);
  *(_QWORD *)(v7 + 5088) = MEMORY[0xFFFFF78000000014];
  v12 = (int)DeviceObject;
  if ( (Status & 0xC0000000) != 0xC0000000 )
  {
    v13 = FdoExt(DeviceObject);
    UsbhSetFdoPowerState(DeviceObject, *(unsigned int *)(v13 + 4212), 210LL);
    *(_DWORD *)(FdoExt(DeviceObject) + 4208) = 1;
    UsbhReleaseFdoPwrLock(DeviceObject, v8);
    if ( (UsbhFdoScheduleDeferredPowerRequest(DeviceObject, UsbhFdoD0Worker_Action, Context, 0LL) & 0xC0000000) != 0xC0000000 )
    {
      v9 = 1;
      goto LABEL_6;
    }
    *(_QWORD *)(v7 + 5096) = MEMORY[0xFFFFF78000000014];
    UsbhAcquireFdoPwrLock(DeviceObject, v8, 132LL, 846213220LL);
    v12 = (int)DeviceObject;
  }
  UsbhFdoPower_PowerFailureEntry(v12);
LABEL_6:
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))UsbhEtwLogHubPowerEvent)(
    DeviceObject,
    0LL,
    Context + 15,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COMPLETE,
    (POWER_STATE)PowerState.SystemState,
    Status);
  if ( dword_1C006763C )
  {
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, v11, 2047LL);
    IofCompleteRequest(v11, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 1224), v11, 0x20u);
  }
  *(_QWORD *)(v7 + 5080) = MEMORY[0xFFFFF78000000014];
  if ( !v9 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 1224), Context, 0x20u);
}
