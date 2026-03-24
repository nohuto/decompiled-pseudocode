/*
 * XREFs of MouSendConnectRequest @ 0x1C000B780
 * Callers:
 *     MouseAddDeviceEx @ 0x1C000B420 (MouseAddDeviceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004F28 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall MouSendConnectRequest(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rdx
  IRP *v3; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  _QWORD InputBuffer[2]; // [rsp+60h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-28h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 5u, 2u, 0x50u);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 16);
  InputBuffer[0] = *(_QWORD *)(a1 + 8);
  InputBuffer[1] = MouseClassServiceCallback;
  v3 = IoBuildDeviceIoControlRequest(0xF0203u, v2, InputBuffer, 0x10u, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v3 )
  {
    result = -1073741670;
    goto LABEL_5;
  }
  result = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 16), v3);
  if ( result != 259 )
  {
LABEL_5:
    IoStatusBlock.Status = result;
    goto LABEL_6;
  }
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  result = IoStatusBlock.Status;
LABEL_6:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 5u, 2u, 0x51u);
    return IoStatusBlock.Status;
  }
  return result;
}
