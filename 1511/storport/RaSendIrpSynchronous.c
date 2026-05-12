/*
 * XREFs of RaSendIrpSynchronous @ 0x1C0006B58
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     RaQueryInterface @ 0x1C000AB88 (RaQueryInterface.c)
 *     RaForwardIrpSynchronous @ 0x1C000B7A0 (RaForwardIrpSynchronous.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000D4F0 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C000EAC4 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0034674 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C0034E70 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003511C (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C003541C (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C00355F4 (RaidUnitSendSrbProtocolCommandSynchronously.c)
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
