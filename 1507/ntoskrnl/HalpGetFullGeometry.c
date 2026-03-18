/*
 * XREFs of HalpGetFullGeometry @ 0x1405630A4
 * Callers:
 *     IoReadPartitionTable @ 0x140562AE0 (IoReadPartitionTable.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpGetFullGeometry(PDEVICE_OBJECT DeviceObject, PLARGE_INTEGER Timeout, __int64 *a3)
{
  struct _KEVENT *PoolWithTag; // rax
  struct _KEVENT *Event; // rdi
  IRP *v8; // rax
  NTSTATUS Status; // ebx
  IRP *v10; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-68h] BYREF
  LARGE_INTEGER Timeouta; // [rsp+60h] [rbp-58h] BYREF
  __int64 v14; // [rsp+68h] [rbp-50h]

  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x62747346u);
  Event = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  KeInitializeEvent(PoolWithTag, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, Timeout, 0x18u, 0, Event, &IoStatusBlock);
  if ( !v8 )
  {
    ExFreePoolWithTag(Event, 0);
    return 3221225626LL;
  }
  Status = IofCallDriver(DeviceObject, v8);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  KeResetEvent(Event);
  if ( Status >= 0 )
  {
    v10 = IoBuildDeviceIoControlRequest(0x74004u, DeviceObject, 0LL, 0, &Timeouta, 0x20u, 0, Event, &IoStatusBlock);
    if ( v10 )
    {
      Status = IofCallDriver(DeviceObject, v10);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
        *a3 = v14 / (unsigned int)Timeout[2].HighPart;
    }
    else
    {
      Status = -1073741670;
    }
  }
  ExFreePoolWithTag(Event, 0);
  return (unsigned int)Status;
}
