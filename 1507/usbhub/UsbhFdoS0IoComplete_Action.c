/*
 * XREFs of UsbhFdoS0IoComplete_Action @ 0x1C00012D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001D30 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0002320 (UsbhEtwLogHubPowerEvent.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021180 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C002120C (UsbhSetFdoPowerState.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00212F0 (UsbhAcquireFdoPwrLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D1E8 (WPP_RECORDER_SF_q.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045B28 (UsbhFdoPower_PowerFailureEntry.c)
 */

__int64 __fastcall UsbhFdoS0IoComplete_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 Status; // rsi
  int v9; // edx
  NTSTATUS v10; // eax
  int v11; // ecx
  __int64 v12; // rbx

  v6 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1932544323, (_DWORD)Irp, Irp->IoStatus.Status);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids);
  v7 = Context[9];
  UsbhAcquireFdoPwrLock(DeviceObject, v7, 113LL, 825258857LL);
  Status = Irp->IoStatus.Status;
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = 1;
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)DeviceObject, 16, 1346646049, 0, Status);
    v11 = (int)DeviceObject;
LABEL_13:
    UsbhFdoPower_PowerFailureEntry(v11);
    goto LABEL_10;
  }
  *((_DWORD *)Context + 7) = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      1,
      19,
      (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids,
      (char)DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1349665840, 0, Status);
  UsbhSetFdoPowerState(DeviceObject, 0LL, 209LL);
  UsbhReleaseFdoPwrLock(DeviceObject, v7);
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_START, 1, 0);
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 1224), Context, &File, 1u, 0x20u);
  v11 = (int)DeviceObject;
  if ( v10 < 0 )
  {
    LODWORD(Status) = 0;
    goto LABEL_13;
  }
  v12 = PoRequestPowerIrp(DeviceObject, 2u, (POWER_STATE)1, UsbhFdoD0PoComplete_Action, Context, 0LL);
  Log((_DWORD)DeviceObject, 16, 1345406000, 0, v12);
  UsbhAcquireFdoPwrLock(DeviceObject, v7, 113LL, 842036073LL);
  if ( (int)v12 >= 0 && !dword_1C006663C )
  {
    Log((_DWORD)DeviceObject, 16, 1131245651, (_DWORD)Irp, v12);
    LODWORD(Status) = 0;
    UsbhReleaseFdoPwrLock(DeviceObject, v7);
LABEL_10:
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2265LL);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 1224), Irp, 0x20u);
    Log((_DWORD)DeviceObject, 16, 1349669460, (_DWORD)Irp, (int)Status);
    return (unsigned int)Status;
  }
  if ( (_DWORD)v12 != 259 )
  {
    LODWORD(Status) = 0;
    UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 1224), Context, 0x20u);
    goto LABEL_10;
  }
  Log((_DWORD)DeviceObject, 16, 1349411923, (_DWORD)Irp, 259LL);
  UsbhReleaseFdoPwrLock(DeviceObject, v7);
  return 3221225494LL;
}
