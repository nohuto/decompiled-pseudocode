/*
 * XREFs of ACPIInternalSendSynchronousIrp @ 0x1C006823C
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C001D4E0 (ACPIBusIrpQueryInterface.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C0023020 (ACPIWakeInitializePmeRouting.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C00681C0 (ACPIInternalGetDeviceCapabilities.c)
 *     AcpiQueryPciBusInterface @ 0x1C006E828 (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C006E9E4 (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIMatchHardwareId @ 0x1C0071E58 (ACPIMatchHardwareId.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C0072C20 (ACPIBusIrpDeviceUsageNotification.c)
 *     PcisuppInitializePciRouting @ 0x1C0073250 (PcisuppInitializePciRouting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIInternalSendSynchronousIrp(PDEVICE_OBJECT DeviceObject, __int64 a2, unsigned __int64 *a3)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  PIRP v7; // rax
  IRP *v8; // rdx
  __int64 v9; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v7 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Object, &IoStatusBlock);
  v8 = v7;
  if ( v7 )
  {
    v7->IoStatus.Information = 0LL;
    v7->IoStatus.Status = -1073741637;
    v9 = (__int64)&v7->Tail.Overlay.CurrentStackLocation[-1];
    if ( v9 )
    {
      *(_OWORD *)v9 = *(_OWORD *)a2;
      *(_OWORD *)(v9 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v9 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v9 + 48) = *(_OWORD *)(a2 + 48);
      *(_QWORD *)(v9 + 64) = *(_QWORD *)(a2 + 64);
      CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = 0LL;
      CurrentStackLocation[-1].Context = 0LL;
      CurrentStackLocation[-1].Control = 0;
      Status = IofCallDriver(AttachedDeviceReference, v8);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 && a3 )
        *a3 = IoStatusBlock.Information;
    }
    else
    {
      Status = -1073741811;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)Status;
}
