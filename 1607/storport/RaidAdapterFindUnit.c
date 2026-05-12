/*
 * XREFs of RaidAdapterFindUnit @ 0x1C0002BC8
 * Callers:
 *     StorPortGetLogicalUnit @ 0x1C00017B0 (StorPortGetLogicalUnit.c)
 *     StorPortNotification @ 0x1C0002580 (StorPortNotification.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C0002B20 (StorPortSetDeviceQueueDepth.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0003028 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 *     StorPortPauseDevice @ 0x1C000AC80 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C000AE90 (StorPortResumeDevice.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C0013018 (RaidBusEnumeratorGetUnit.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0018290 (RaidAdapterDeferredRoutine.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0019940 (StorPortpInvokeAcpiMethod.c)
 *     RaidAdapterDeviceBusy @ 0x1C0026D78 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0026E30 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0029370 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C00297C0 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C002D7E0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C002D990 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C002DB30 (StorPortDeviceReady.c)
 *     StorpLogSystemEvent @ 0x1C002F598 (StorpLogSystemEvent.c)
 *     StorpSetUnitAttributes @ 0x1C002F8F4 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C002F9A8 (StorpUnitInitializePoFxPower.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0037CE0 (RaidUnitProcessAsyncNotification.c)
 *     RaidAdapterPassThrough @ 0x1C005E0BC (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterFindUnitAtPassive @ 0x1C0002C38 (RaidAdapterFindUnitAtPassive.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0002CE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0002D64 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0002EC4 (RaidAdapterAcquireInterruptLock.c)
 */

__int64 __fastcall RaidAdapterFindUnit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // al
  __int64 v7; // rsi
  char v9; // bl
  __int64 UnitAtDirql; // rax
  __int64 v11; // rdx
  unsigned int v12; // [rsp+38h] [rbp+10h]

  v12 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return RaidAdapterFindUnitAtPassive();
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 672) )
  {
    v9 = RaidAdapterAcquireInterruptLock(a1, a2, a3, a4);
    UnitAtDirql = RaidAdapterFindUnitAtDirql(a1, v12);
    LOBYTE(v11) = v9;
    v7 = UnitAtDirql;
    RaidAdapterReleaseInterruptLock(a1, v11);
    return v7;
  }
  return ((__int64 (*)(void))RaidAdapterFindUnitAtDirql)();
}
