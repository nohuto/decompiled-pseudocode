/*
 * XREFs of KbdSendConnectRequest @ 0x1C000E4CC
 * Callers:
 *     KeyboardAddDeviceEx @ 0x1C000C540 (KeyboardAddDeviceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005388 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KbdSendConnectRequest(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rdx
  IRP *v4; // rax
  __int64 v5; // rdx
  NTSTATUS v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  _QWORD InputBuffer[2]; // [rsp+60h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-28h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 16);
  InputBuffer[0] = *(_QWORD *)(a1 + 8);
  InputBuffer[1] = KeyboardClassServiceCallback;
  v4 = IoBuildDeviceIoControlRequest(0xB0203u, v3, InputBuffer, 0x10u, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( v4 )
  {
    v6 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 16), v4);
    if ( v6 == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    else
      IoStatusBlock.Status = v6;
  }
  else
  {
    IoStatusBlock.Status = -1073741670;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 3LL);
  }
  return (unsigned int)IoStatusBlock.Status;
}
