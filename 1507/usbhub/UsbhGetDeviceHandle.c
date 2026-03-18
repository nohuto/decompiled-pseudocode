/*
 * XREFs of UsbhGetDeviceHandle @ 0x1C00256D4
 * Callers:
 *     UsbhCreateDevice @ 0x1C000A574 (UsbhCreateDevice.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0018E48 (UsbhGetHubDeviceInformation.c)
 *     UsbhInitializeTtHub @ 0x1C002555C (UsbhInitializeTtHub.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003B770 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003E54C (UsbhFdoHandleGetDumpDataIoctl.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

PIRP __fastcall UsbhGetDeviceHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  PDEVICE_OBJECT *v7; // rsi
  PIRP result; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  IRP *v11; // rdx
  __int64 v12; // rax
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+18h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  v7 = (PDEVICE_OBJECT *)FdoExt(a1, a2, a3, a4);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = IoBuildDeviceIoControlRequest(0x220437u, v7[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  v11 = result;
  if ( result )
  {
    v12 = (__int64)&result->Tail.Overlay.CurrentStackLocation[-1];
    if ( !v12 )
      UsbhTrapFatal_Dbg(a1, 0LL, v9, v10);
    *(_QWORD *)(v12 + 16) = a2;
    *(_QWORD *)(v12 + 8) = &v16;
    Status = IofCallDriver(v7[151], v11);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    else
    {
      IoStatusBlock.Status = Status;
    }
    Log(a1, 4, 1734633554, Status, v16);
    if ( IoStatusBlock.Status >= 0 )
      return (PIRP)v16;
    return (PIRP)v4;
  }
  return result;
}
