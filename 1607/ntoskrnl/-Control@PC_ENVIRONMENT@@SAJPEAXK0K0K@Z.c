/*
 * XREFs of ?Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z @ 0x140574D84
 * Callers:
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x1401475BC (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002E060 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400ED0DC (IoBuildDeviceIoControlRequest.c)
 */

NTSTATUS __fastcall PC_ENVIRONMENT::Control(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        void *a3,
        __int64 a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  IRP *v8; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(
         IoControlCode,
         DeviceObject,
         0LL,
         0,
         OutputBuffer,
         OutputBufferLength,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v8 )
    return -1073741670;
  result = IofCallDriver(DeviceObject, v8);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
