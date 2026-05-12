/*
 * XREFs of RaidSyncAcpiEvalMethod @ 0x1C0033AC8
 * Callers:
 *     StorPortpInvokeAcpiMethod @ 0x1C002A91C (StorPortpInvokeAcpiMethod.c)
 * Callees:
 *     WPP_SF_q @ 0x1C002786C (WPP_SF_q.c)
 */

__int64 __fastcall RaidSyncAcpiEvalMethod(
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PLARGE_INTEGER Timeout,
        ULONG OutputBufferLength,
        _DWORD *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  NTSTATUS Status; // ebx
  PIRP v12; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  AttachedDeviceReference = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( KeGetCurrentIrql() )
  {
    Status = -1073741496;
LABEL_18:
    if ( a6 && Status < 0 )
      *a6 = 0;
    goto LABEL_21;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v12 = IoBuildDeviceIoControlRequest(
          0x32C000u,
          AttachedDeviceReference,
          InputBuffer,
          InputBufferLength,
          Timeout,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v12 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
        DeviceObject);
    }
    Status = -1073741670;
    goto LABEL_18;
  }
  v12->IoStatus.Status = -1073741637;
  Status = IofCallDriver(AttachedDeviceReference, v12);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 && !IoStatusBlock.Information && OutputBufferLength )
    Status = -1073741823;
  if ( a6 )
  {
    if ( Status >= 0 )
      *a6 = IoStatusBlock.Information;
    goto LABEL_18;
  }
LABEL_21:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)Status;
}
