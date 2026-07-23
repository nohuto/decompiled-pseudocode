/*
 * XREFs of FsRtlGetVirtualDiskNestingLevel @ 0x1401120C8
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x140074D38 (IoSetThreadHardErrorMode.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400EAF4C (IoBuildDeviceIoControlRequest.c)
 *     FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x14014B7F4 (FsRtlQueryMaximumVirtualDiskNestingLevel.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __stdcall FsRtlGetVirtualDiskNestingLevel(
        PDEVICE_OBJECT DeviceObject,
        PULONG NestingLevel,
        PULONG NestingFlags)
{
  unsigned __int64 DeviceType; // rax
  ULONG MaximumVirtualDiskNestingLevel; // esi
  ULONG v8; // edi
  __int64 v9; // rcx
  BOOLEAN v10; // r12
  IRP *v11; // rax
  int Status; // ebx
  struct _KEVENT Object; // [rsp+50h] [rbp-29h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  __int64 OutputBuffer; // [rsp+80h] [rbp+7h] BYREF
  __int64 v18; // [rsp+88h] [rbp+Fh]
  ULONG v19; // [rsp+90h] [rbp+17h]

  DeviceType = DeviceObject->DeviceType;
  MaximumVirtualDiskNestingLevel = 0;
  v8 = 1;
  if ( (unsigned int)DeviceType > 0x24 )
    return -1073741808;
  v9 = 0x100000018CLL;
  if ( !_bittest64(&v9, DeviceType) )
    return -1073741808;
  LOWORD(Object.Header.Lock) = 0;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.Size = 6;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  Object.Header.SignalState = 0;
  v10 = IoSetThreadHardErrorMode(0);
  OutputBuffer = 0LL;
  v18 = 0LL;
  v19 = 0;
  InputBuffer = 1LL;
  v11 = IoBuildDeviceIoControlRequest(
          0x2D1190u,
          DeviceObject,
          &InputBuffer,
          8u,
          &OutputBuffer,
          0x14u,
          0,
          &Object,
          &IoStatusBlock);
  if ( v11 )
  {
    Status = IofCallDriver(DeviceObject, v11);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 && IoStatusBlock.Information >= 0x14 && (_DWORD)OutputBuffer == 1 )
    {
      if ( v19 > FsRtlQueryMaximumVirtualDiskNestingLevel() )
      {
        MaximumVirtualDiskNestingLevel = FsRtlQueryMaximumVirtualDiskNestingLevel();
      }
      else if ( v19 )
      {
        MaximumVirtualDiskNestingLevel = v19;
      }
      if ( BYTE4(OutputBuffer) )
        v8 = 0;
      if ( (v18 & 0x200000000LL) != 0 )
        v8 |= 2u;
    }
    else if ( Status != -1073741670 )
    {
      Status = 0;
    }
  }
  else
  {
    Status = -1073741670;
  }
  *NestingLevel = MaximumVirtualDiskNestingLevel;
  if ( NestingFlags )
    *NestingFlags = v8;
  IoSetThreadHardErrorMode(v10);
  return Status;
}
