/*
 * XREFs of UsbhGetDeviceHandle @ 0x1C0007C44
 * Callers:
 *     UsbhInitializeTtHub @ 0x1C0005090 (UsbhInitializeTtHub.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0007A3C (UsbhGetHubDeviceInformation.c)
 *     UsbhCreateDevice @ 0x1C0009548 (UsbhCreateDevice.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003BD40 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003EA9C (UsbhFdoHandleGetDumpDataIoctl.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 */

PIRP __fastcall UsbhGetDeviceHandle(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  PIRP result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  IRP *v9; // rdx
  __int64 v10; // rax
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+18h] BYREF

  v2 = 0LL;
  v14 = 0LL;
  v5 = FdoExt(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = IoBuildDeviceIoControlRequest(
             0x220437u,
             *(PDEVICE_OBJECT *)(v5 + 1208),
             0LL,
             0,
             0LL,
             0,
             1u,
             &Event,
             &IoStatusBlock);
  v9 = result;
  if ( result )
  {
    v10 = (__int64)&result->Tail.Overlay.CurrentStackLocation[-1];
    if ( !v10 )
      UsbhTrapFatal_Dbg(a1, 0LL, v7, v8);
    *(_QWORD *)(v10 + 16) = a2;
    *(_QWORD *)(v10 + 8) = &v14;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), v9);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    else
    {
      IoStatusBlock.Status = Status;
    }
    Log(a1, 4, 1734633554, Status, v14);
    if ( IoStatusBlock.Status >= 0 )
      return (PIRP)v14;
    return (PIRP)v2;
  }
  return result;
}
