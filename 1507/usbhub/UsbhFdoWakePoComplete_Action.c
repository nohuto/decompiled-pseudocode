/*
 * XREFs of UsbhFdoWakePoComplete_Action @ 0x1C0020FC0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     GET_FDO_POWER_STATE @ 0x1C0015DA0 (GET_FDO_POWER_STATE.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021180 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C002120C (UsbhSetFdoPowerState.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024A80 (UsbhQueueWorkItemEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhFdoWakePoComplete_Action(
        __int64 DeviceObject,
        __int64 MinorFunction,
        __int64 PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rdx
  struct _KEVENT *v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  KSPIN_LOCK *v15; // rbx
  KIRQL v16; // al
  int v17; // ecx
  unsigned int Status; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax

  v7 = (struct _KEVENT *)FdoExt(DeviceObject, MinorFunction, PowerState, Context);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids);
  v10 = FdoExt(DeviceObject, v6, v8, v9);
  v7[203].Header.WaitListHead.Blink = 0LL;
  HIDWORD(v7[203].Header.WaitListHead.Flink) = 1;
  v11 = (__int64)(v10 + 346);
  v15 = (KSPIN_LOCK *)FdoExt(DeviceObject, v12, v13, v14);
  v16 = KeAcquireSpinLockRaiseToDpc(v15 + 632);
  v17 = *((_DWORD *)v15 + 1043);
  *((_BYTE *)v15 + 5064) = v16;
  *(_DWORD *)(v11 + 40) = v17;
  *(_DWORD *)(v11 + 44) = 122;
  *(_DWORD *)(v11 + 32) = 844055622;
  *(_DWORD *)(v11 + 36) = 829120887;
  *(_QWORD *)(v11 + 24) = KeGetCurrentThread();
  v15[168] = v11;
  Status = IoStatus->Status;
  if ( IoStatus->Status >= 0 )
  {
    Log(DeviceObject, 16, 1750548811, 0LL, 0LL);
    LODWORD(v7[106].Header.WaitListHead.Blink) |= 0x20000u;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        14,
        (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids);
    if ( (unsigned int)GET_FDO_POWER_STATE(v11, v19, v20, v21) == 201 )
    {
      v25 = (unsigned int)FdoExt(DeviceObject, v22, v23, v24);
      Status = UsbhQueueWorkItemEx(DeviceObject, 1, (unsigned int)UsbhSShResumeWorker, v25 + 1912, 0, 2001228627, 0LL);
    }
  }
  KeSetEvent(v7 + 204, 0, 0);
  v29 = GET_FDO_POWER_STATE(v11, v26, v27, v28);
  UsbhSetFdoPowerState(DeviceObject, Status, v29);
  UsbhReleaseFdoPwrLock(DeviceObject, v11);
}
