/*
 * XREFs of USBHwSubmitUrbToUsbdSynch @ 0x1C001B3B4
 * Callers:
 *     USBDeviceStop @ 0x1C001B210 (USBDeviceStop.c)
 *     USBHwGetSetProperty @ 0x1C001B4E8 (USBHwGetSetProperty.c)
 *     USBHwGetDescriptor @ 0x1C001B818 (USBHwGetDescriptor.c)
 *     USBHwSelectAudioConfiguration @ 0x1C001B9F8 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C001BB9C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C001BE54 (USBHwSelectStreamingMIDIInterface.c)
 *     USBHwAbortOrResetPipe @ 0x1C001C428 (USBHwAbortOrResetPipe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBHwSubmitUrbToUsbdSynch(PDEVICE_OBJECT DeviceObject, ULONG_PTR a2)
{
  PIRP v4; // rax
  IRP *v5; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v8; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+18h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0x220003u, DeviceObject, 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  v5 = v4;
  if ( !v4 )
    return 3221225626LL;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBHwIrpCompleteSynch;
  CurrentStackLocation[-1].Context = &Event;
  CurrentStackLocation[-1].Control = -32;
  v5->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
  v8 = IofCallDriver(DeviceObject, v5);
  if ( v8 == 259 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) == 258 )
    {
      IoCancelIrp(v5);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      IoStatusBlock.Status = 258;
    }
  }
  else
  {
    IoStatusBlock.Status = v8;
  }
  IofCompleteRequest(v5, 0);
  return (unsigned int)IoStatusBlock.Status;
}
