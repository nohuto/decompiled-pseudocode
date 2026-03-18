/*
 * XREFs of IopAssignBootDriveLetter @ 0x1407538E4
 * Callers:
 *     IopMarkBootPartition @ 0x140753448 (IopMarkBootPartition.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     IoBuildDeviceIoControlRequest @ 0x140073DD0 (IoBuildDeviceIoControlRequest.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoGetDeviceObjectPointer @ 0x1404D8270 (IoGetDeviceObjectPointer.c)
 */

NTSTATUS IopAssignBootDriveLetter()
{
  NTSTATUS result; // eax
  IRP *v1; // rax
  NTSTATUS Status; // ebx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+27h] BYREF
  struct _KEVENT Object; // [rsp+70h] [rbp+37h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+6Fh] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  result = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    Object.Header.SignalState = 0;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    LOWORD(Object.Header.Lock) = 0;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    v1 = IoBuildDeviceIoControlRequest(0x6DC044u, DeviceObject, 0LL, 0, 0LL, 0, 0, &Object, &IoStatusBlock);
    if ( v1 )
    {
      Status = IofCallDriver(DeviceObject, v1);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
    }
    else
    {
      Status = -1073741670;
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    return Status;
  }
  return result;
}
