/*
 * XREFs of FstubGetDiskGeometry @ 0x1404E86F4
 * Callers:
 *     FstubAllocateDiskInformation @ 0x1404E8640 (FstubAllocateDiskInformation.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140073DD0 (IoBuildDeviceIoControlRequest.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FstubGetDiskGeometry(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _QWORD *OutputBuffer; // rbp
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rsi
  struct _KEVENT *PoolWithTag; // rax
  struct _KEVENT *Event; // rdi
  IRP *v8; // rax
  NTSTATUS Status; // ebx
  IRP *v10; // rax
  LARGE_INTEGER v11; // rax
  LARGE_INTEGER Timeout; // [rsp+90h] [rbp+18h] BYREF

  OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x62747346u);
  if ( !OutputBuffer )
    return (unsigned int)-1073741670;
  IoStatusBlock = (struct _IO_STATUS_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x62747346u);
  if ( !IoStatusBlock )
  {
    Status = -1073741670;
    goto LABEL_15;
  }
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x62747346u);
  Event = PoolWithTag;
  if ( !PoolWithTag )
  {
    Status = -1073741670;
    goto LABEL_14;
  }
  KeInitializeEvent(PoolWithTag, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, OutputBuffer, 0x18u, 0, Event, IoStatusBlock);
  if ( !v8 )
    goto LABEL_17;
  Status = IofCallDriver(DeviceObject, v8);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock->Status;
  }
  if ( Status < 0 )
    goto LABEL_13;
  KeResetEvent(Event);
  v10 = IoBuildDeviceIoControlRequest(0x7405Cu, DeviceObject, 0LL, 0, &Timeout, 8u, 0, Event, IoStatusBlock);
  if ( v10 )
  {
    Status = IofCallDriver(DeviceObject, v10);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock->Status;
    }
    if ( Status >= 0 )
    {
      v11 = Timeout;
      *(_OWORD *)a2 = *(_OWORD *)OutputBuffer;
      *(_QWORD *)(a2 + 16) = OutputBuffer[2];
      *(LARGE_INTEGER *)(a2 + 24) = v11;
    }
  }
  else
  {
LABEL_17:
    Status = -1073741670;
  }
LABEL_13:
  ExFreePoolWithTag(Event, 0);
LABEL_14:
  ExFreePoolWithTag(IoStatusBlock, 0);
LABEL_15:
  ExFreePoolWithTag(OutputBuffer, 0);
  return (unsigned int)Status;
}
