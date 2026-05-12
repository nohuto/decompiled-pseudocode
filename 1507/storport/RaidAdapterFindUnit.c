/*
 * XREFs of RaidAdapterFindUnit @ 0x1C0005768
 * Callers:
 *     StorPortNotification @ 0x1C0004A70 (StorPortNotification.c)
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C00056C0 (StorPortSetDeviceQueueDepth.c)
 *     StorPortPauseDevice @ 0x1C00072E0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0007560 (StorPortResumeDevice.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C000CC40 (RaidBusEnumeratorGetUnit.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000E438 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0012790 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterDeviceBusy @ 0x1C00212D0 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0021388 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002338C (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C00238C0 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C00279A0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0027B50 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0027CF0 (StorPortDeviceReady.c)
 *     StorPortGetLogicalUnit @ 0x1C0027E80 (StorPortGetLogicalUnit.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C00286AC (StorPortpInvokeAcpiMethod.c)
 *     StorpLogSystemEvent @ 0x1C0029A10 (StorpLogSystemEvent.c)
 *     StorpSetUnitAttributes @ 0x1C0029DF4 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0029EA8 (StorpUnitInitializePoFxPower.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0033160 (RaidUnitProcessAsyncNotification.c)
 *     RaidAdapterPassThrough @ 0x1C0052E00 (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00057D8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C000585C (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C000595C (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtPassive @ 0x1C0010EE0 (RaidAdapterFindUnitAtPassive.c)
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
