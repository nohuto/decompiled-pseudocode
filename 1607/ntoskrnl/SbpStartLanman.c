/*
 * XREFs of SbpStartLanman @ 0x1407D3884
 * Callers:
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400EAF4C (IoBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x1404EB378 (IoGetDeviceObjectPointer.c)
 */

__int64 SbpStartLanman()
{
  char *v0; // rsi
  void *OutputBuffer; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  PFILE_OBJECT v3; // r14
  NTSTATUS Status; // ebx
  char *PoolWithTag; // rax
  PIRP v6; // rax
  IRP *v7; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v9; // rcx
  char *v10; // rax
  struct _DEVICE_OBJECT *v11; // rdx
  PIRP v12; // rax
  IRP *v13; // rdx
  struct _IO_STACK_LOCATION *v14; // rax
  struct _DEVICE_OBJECT *v15; // rcx
  struct _KEVENT Object; // [rsp+58h] [rbp-29h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-11h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-1h] BYREF
  _BYTE InputBuffer[40]; // [rsp+90h] [rbp+Fh] BYREF

  FileObject = 0LL;
  v0 = 0LL;
  OutputBuffer = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(
                          (PUNICODE_STRING)&LanmanRedirectorName,
                          0x10000000u,
                          &FileObject,
                          &DeviceObject);
  v3 = FileObject;
  Status = DeviceObjectPointer;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_12;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x8CuLL, 0x42626D53u);
  OutputBuffer = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_3;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 15) = -1;
  *((_DWORD *)PoolWithTag + 6) = 512;
  *(_DWORD *)PoolWithTag = 3600;
  *((_DWORD *)PoolWithTag + 4) = 5;
  *((_DWORD *)PoolWithTag + 18) = 5;
  *((_DWORD *)PoolWithTag + 5) = 45;
  *((_DWORD *)PoolWithTag + 9) = 10;
  *((_DWORD *)PoolWithTag + 11) = 10;
  *((_DWORD *)PoolWithTag + 10) = 500;
  *((_DWORD *)PoolWithTag + 12) = 500;
  *((_DWORD *)PoolWithTag + 14) = 45;
  *((_DWORD *)PoolWithTag + 2) = 16;
  *((_DWORD *)PoolWithTag + 1) = 250;
  *((_DWORD *)PoolWithTag + 3) = 600;
  *((_DWORD *)PoolWithTag + 7) = 17;
  *((_DWORD *)PoolWithTag + 8) = 6144;
  *((_DWORD *)PoolWithTag + 13) = 40;
  *((_DWORD *)PoolWithTag + 16) = 3;
  *((_DWORD *)PoolWithTag + 17) = 20;
  *(_QWORD *)(PoolWithTag + 76) = 60LL;
  *((_DWORD *)PoolWithTag + 21) = 1;
  *((_DWORD *)PoolWithTag + 22) = 1;
  *((_DWORD *)PoolWithTag + 23) = 1;
  *((_DWORD *)PoolWithTag + 24) = 1;
  *((_DWORD *)PoolWithTag + 25) = 1;
  *((_DWORD *)PoolWithTag + 26) = 1;
  *((_DWORD *)PoolWithTag + 27) = 1;
  *((_DWORD *)PoolWithTag + 28) = 1;
  *((_DWORD *)PoolWithTag + 29) = 1;
  *((_DWORD *)PoolWithTag + 30) = 1;
  *((_DWORD *)PoolWithTag + 31) = 1;
  *((_DWORD *)PoolWithTag + 32) = 1;
  *(_QWORD *)(PoolWithTag + 132) = 1LL;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  LOWORD(Object.Header.Lock) = 1;
  Object.Header.Size = 6;
  Object.Header.SignalState = 0;
  memset(InputBuffer, 0, 0x24uLL);
  v6 = IoBuildDeviceIoControlRequest(
         0x80140191,
         DeviceObject,
         InputBuffer,
         0x24u,
         OutputBuffer,
         0x8Cu,
         0,
         &Object,
         &IoStatusBlock);
  v7 = v6;
  if ( !v6 )
    goto LABEL_3;
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  v9 = DeviceObject;
  CurrentStackLocation[-1].FileObject = v3;
  CurrentStackLocation[-1].MajorFunction = 13;
  Status = IofCallDriver(v9, v7);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4AuLL, 0x42626D53u);
    v0 = v10;
    if ( v10 )
    {
      memset(v10, 0, 0x4AuLL);
      v0[21] &= ~1u;
      v11 = DeviceObject;
      *((_WORD *)v0 + 6) = 30;
      *((_DWORD *)v0 + 8) = 30;
      *((_DWORD *)v0 + 9) = 30;
      *((_WORD *)v0 + 21) = 26;
      v0[40] = 1;
      v0[20] = 31;
      *((_DWORD *)v0 + 6) = 55;
      *((_DWORD *)v0 + 7) = 10;
      *(_OWORD *)(v0 + 44) = *(_OWORD *)L"\\Device\\vmsmb";
      *(_QWORD *)(v0 + 60) = *(_QWORD *)L"vmsmb";
      *((_WORD *)v0 + 34) = aDeviceVmsmb[12];
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      LOWORD(Object.Header.Lock) = 1;
      Object.Header.Size = 6;
      Object.Header.SignalState = 0;
      v12 = IoBuildDeviceIoControlRequest(0x1403A0u, v11, v0, 0x4Au, 0LL, 0, 0, &Object, &IoStatusBlock);
      v13 = v12;
      if ( v12 )
      {
        v14 = v12->Tail.Overlay.CurrentStackLocation;
        v15 = DeviceObject;
        v14[-1].FileObject = v3;
        v14[-1].MajorFunction = 13;
        Status = IofCallDriver(v15, v13);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        goto LABEL_12;
      }
    }
LABEL_3:
    Status = -1073741670;
  }
LABEL_12:
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0x42626D53u);
  if ( v0 )
    ExFreePoolWithTag(v0, 0x42626D53u);
  return (unsigned int)Status;
}
