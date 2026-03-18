/*
 * XREFs of WheapInitializeEventing @ 0x140772188
 * Callers:
 *     WheaInitialize @ 0x140757730 (WheaInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 */

NTSTATUS WheapInitializeEventing()
{
  NTSTATUS result; // eax

  LOWORD(WheapDispatchPtr.CurrentIrp) = 1;
  *(_QWORD *)&WheapDispatchPtr.DeviceType = &WheapDispatchPtr.DeviceExtension;
  WheapDispatchPtr.DeviceExtension = &WheapDispatchPtr.DeviceExtension;
  BYTE2(WheapDispatchPtr.CurrentIrp) = 6;
  *(_QWORD *)&WheapDispatchPtr.Flags = &WheapDispatchPtr.Timer;
  WheapDispatchPtr.Timer = (PIO_TIMER)&WheapDispatchPtr.Timer;
  HIDWORD(WheapDispatchPtr.CurrentIrp) = 1;
  result = EtwRegister(
             &WHEA_ETW_PROVIDER,
             (PETWENABLECALLBACK)WheapEtwEnableCallback,
             0LL,
             (PREGHANDLE)&WheapDispatchPtr.NextDevice);
  if ( result )
    WheapDispatchPtr.NextDevice = 0LL;
  return result;
}
