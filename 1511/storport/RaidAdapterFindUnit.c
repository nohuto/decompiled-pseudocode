/*
 * XREFs of RaidAdapterFindUnit @ 0x1C0006838
 * Callers:
 *     StorPortNotification @ 0x1C00059D0 (StorPortNotification.c)
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 *     StorPortGetLogicalUnit @ 0x1C0006740 (StorPortGetLogicalUnit.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C0006790 (StorPortSetDeviceQueueDepth.c)
 *     StorPortPauseDevice @ 0x1C00090B0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C00092C0 (StorPortResumeDevice.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C000EEB0 (RaidBusEnumeratorGetUnit.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterDeferredRoutine @ 0x1C00147E0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterDeviceBusy @ 0x1C00239B0 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0023A68 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C00258CC (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C0025D20 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C0029C50 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0029E10 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0029FB0 (StorPortDeviceReady.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C002A91C (StorPortpInvokeAcpiMethod.c)
 *     StorpLogSystemEvent @ 0x1C002BA58 (StorpLogSystemEvent.c)
 *     StorpSetUnitAttributes @ 0x1C002BDB4 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C002BE68 (StorpUnitInitializePoFxPower.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0034ACC (RaidUnitProcessAsyncNotification.c)
 *     RaidAdapterPassThrough @ 0x1C0056D68 (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00068A8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C000692C (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A2C (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtPassive @ 0x1C00134A0 (RaidAdapterFindUnitAtPassive.c)
 */

__int64 __fastcall RaidAdapterFindUnit(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // al
  __int64 v5; // rsi
  char v7; // bl
  __int64 UnitAtDirql; // rax
  __int64 v9; // rdx

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return RaidAdapterFindUnitAtPassive();
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 672) )
  {
    v7 = RaidAdapterAcquireInterruptLock(a1);
    UnitAtDirql = RaidAdapterFindUnitAtDirql(a1, a2);
    LOBYTE(v9) = v7;
    v5 = UnitAtDirql;
    RaidAdapterReleaseInterruptLock(a1, v9);
    return v5;
  }
  return ((__int64 (*)(void))RaidAdapterFindUnitAtDirql)();
}
