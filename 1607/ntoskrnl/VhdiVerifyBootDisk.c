/*
 * XREFs of VhdiVerifyBootDisk @ 0x1406E54BC
 * Callers:
 *     IopCreateArcName @ 0x14054FC84 (IopCreateArcName.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002E060 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400ED0DC (IoBuildDeviceIoControlRequest.c)
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

bool __fastcall VhdiVerifyBootDisk(PDEVICE_OBJECT DeviceObject)
{
  bool v1; // bl
  __int64 v3; // rax
  ULONG OutputBufferLength; // ebp
  PVOID OutputBuffer; // rsi
  IRP *v6; // rax
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v1 = 0;
  if ( DeviceObject )
  {
    if ( NtVhdBootFile )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( *(_WORD *)(NtVhdBootFile + 2 * v3) );
      OutputBufferLength = 2 * v3 + 2;
      OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, OutputBufferLength, 0x42646856u);
      if ( OutputBuffer )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v6 = IoBuildDeviceIoControlRequest(
               0x2D5928u,
               DeviceObject,
               0LL,
               0,
               OutputBuffer,
               OutputBufferLength,
               0,
               &Event,
               &IoStatusBlock);
        if ( v6 )
        {
          Status = IofCallDriver(DeviceObject, v6);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( Status >= 0 )
            v1 = wcsicmp((const wchar_t *)OutputBuffer, (const wchar_t *)(NtVhdBootFile + 2)) == 0;
        }
        ExFreePoolWithTag(OutputBuffer, 0x42646856u);
      }
    }
  }
  return v1;
}
