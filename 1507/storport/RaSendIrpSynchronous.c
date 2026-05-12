/*
 * XREFs of RaSendIrpSynchronous @ 0x1C0005B88
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     RaForwardIrpSynchronous @ 0x1C000958C (RaForwardIrpSynchronous.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000B288 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C000C854 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaQueryInterface @ 0x1C00107B0 (RaQueryInterface.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0032D08 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C003346C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C00336F4 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00339DC (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C0033BB4 (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSendIrpSynchronous(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RiSignalCompletion;
  CurrentStackLocation[-1].Context = &Event;
  CurrentStackLocation[-1].Control = -32;
  v5 = IofCallDriver(DeviceObject, Irp);
  if ( v5 == 259 )
  {
    v5 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v5;
}
