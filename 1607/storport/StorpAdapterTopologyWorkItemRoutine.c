/*
 * XREFs of StorpAdapterTopologyWorkItemRoutine @ 0x1C003BE90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

void __fastcall StorpAdapterTopologyWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  _DWORD *OutputBuffer; // rbx
  void *DeviceExtension; // r14
  char v4; // r12
  ULONG OutputBufferLength; // edi
  size_t v7; // r15
  PIRP v8; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+Fh] BYREF
  int InputBuffer; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+7Ch] [rbp+23h]

  IoStatusBlock.Pointer = 0LL;
  InputBuffer = 0;
  OutputBuffer = 0LL;
  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = 0;
  IoStatusBlock.Information = 0LL;
  memset(&Event, 0, sizeof(Event));
  v12 = 0LL;
  if ( !KeGetCurrentIrql() )
  {
    OutputBufferLength = 18768;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4950uLL, 0x65546152u);
    if ( OutputBuffer )
    {
      v7 = 18768LL;
      do
      {
        memset(OutputBuffer, 0, v7);
        LODWORD(v12) = 0;
        InputBuffer = 53;
        v8 = IoBuildDeviceIoControlRequest(
               0x2D1400u,
               *((PDEVICE_OBJECT *)DeviceExtension + 1),
               &InputBuffer,
               0xCu,
               OutputBuffer,
               OutputBufferLength,
               0,
               &Event,
               &IoStatusBlock);
        if ( !v8 )
          break;
        v8->IoStatus.Status = -1073741637;
        if ( IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 1), v8) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        if ( OutputBuffer[1] <= OutputBufferLength )
          break;
        if ( v4 )
          break;
        OutputBufferLength = OutputBuffer[1];
        ExFreePoolWithTag(OutputBuffer, 0x65546152u);
        v4 = 1;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v7 = OutputBufferLength;
        OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, OutputBufferLength, 0x65546152u);
      }
      while ( OutputBuffer );
    }
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 32));
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0x65546152u);
  if ( Context )
    IoFreeWorkItem(Context);
}
