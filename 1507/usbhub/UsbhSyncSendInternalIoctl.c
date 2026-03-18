/*
 * XREFs of UsbhSyncSendInternalIoctl @ 0x1C001F960
 * Callers:
 *     UsbhGetTopOfBusStack @ 0x1C0009EA0 (UsbhGetTopOfBusStack.c)
 *     UsbhSshSuspendHub @ 0x1C0017B8C (UsbhSshSuspendHub.c)
 *     UsbhInitialize @ 0x1C00189A0 (UsbhInitialize.c)
 *     UsbhConfigureUsbHub @ 0x1C001F340 (UsbhConfigureUsbHub.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001F6F0 (UsbhSyncSendCommandToDevice.c)
 *     UsbhGetHubCount @ 0x1C00207A4 (UsbhGetHubCount.c)
 *     UsbhLogStartFailure @ 0x1C003C34C (UsbhLogStartFailure.c)
 *     UsbhResetIrqPipe @ 0x1C0044140 (UsbhResetIrqPipe.c)
 *     UsbhResetHubUpstreamPort @ 0x1C0046BD8 (UsbhResetHubUpstreamPort.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

NTSTATUS __fastcall UsbhSyncSendInternalIoctl(__int64 a1, ULONG a2, unsigned __int64 a3, _UNICODE_STRING *a4)
{
  __int64 v7; // rbx
  PIRP v8; // rax
  IRP *v9; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(a2, *(PDEVICE_OBJECT *)(v7 + 1208), 0LL, 0, 0LL, 0, 1u, &Object, &IoStatusBlock);
  v9 = v8;
  if ( !v8 )
    return -1073741670;
  CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = a3;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a4;
  result = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 1208), v9);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
