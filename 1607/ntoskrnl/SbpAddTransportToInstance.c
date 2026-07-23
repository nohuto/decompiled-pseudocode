/*
 * XREFs of SbpAddTransportToInstance @ 0x1407D36AC
 * Callers:
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400EAF4C (IoBuildDeviceIoControlRequest.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x1404EB378 (IoGetDeviceObjectPointer.c)
 */

__int64 SbpAddTransportToInstance()
{
  char *v0; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  PFILE_OBJECT v2; // rsi
  unsigned int Status; // ebx
  char *PoolWithTag; // rax
  struct _DEVICE_OBJECT *v5; // rdx
  PIRP v6; // rax
  IRP *v7; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v9; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+20h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+28h] BYREF

  v0 = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(
                          (PUNICODE_STRING)&InstanceName,
                          0x10000000u,
                          &FileObject,
                          &DeviceObject);
  v2 = FileObject;
  Status = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x42626D53u);
    v0 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_3;
    memset(PoolWithTag, 0, 0xD0uLL);
    *(_DWORD *)v0 = 16;
    *((_DWORD *)v0 + 1) = 2;
    *((_DWORD *)v0 + 2) = 192;
    *(_OWORD *)(v0 + 12) = *(_OWORD *)L"\\Device\\VMBus\\{4d12e519-17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3"
                                       "493609c0870}-0000";
    *(_OWORD *)(v0 + 28) = *(_OWORD *)L"VMBus\\{4d12e519-17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 44) = *(_OWORD *)L"d12e519-17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 60) = *(_OWORD *)L"17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 76) = *(_OWORD *)L"4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 92) = *(_OWORD *)L"270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 108) = *(_OWORD *)L"db7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    v5 = DeviceObject;
    *(_OWORD *)(v0 + 124) = *(_OWORD *)L"c079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 140) = *(_OWORD *)L"0ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 156) = *(_OWORD *)L"-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 172) = *(_OWORD *)L"93609c0870}-0000";
    *(_OWORD *)(v0 + 188) = *(_OWORD *)L"70}-0000";
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    LOWORD(Object.Header.Lock) = 1;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    Object.Header.SignalState = 0;
    v6 = IoBuildDeviceIoControlRequest(0x1401B0u, v5, v0, 0xD0u, 0LL, 0, 0, &Object, &IoStatusBlock);
    v7 = v6;
    if ( v6 )
    {
      CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
      v9 = DeviceObject;
      CurrentStackLocation[-1].FileObject = v2;
      CurrentStackLocation[-1].MajorFunction = 13;
      Status = IofCallDriver(v9, v7);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
    }
    else
    {
LABEL_3:
      Status = -1073741670;
    }
  }
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  if ( v0 )
    ExFreePoolWithTag(v0, 0x42626D53u);
  return Status;
}
