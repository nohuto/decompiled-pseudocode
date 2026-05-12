/*
 * XREFs of WPP_SF_ @ 0x1C002AE28
 * Callers:
 *     StorPortNotification @ 0x1C0002580 (StorPortNotification.c)
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 *     StorpAcquireMSISpinLock @ 0x1C0009C40 (StorpAcquireMSISpinLock.c)
 *     StorpReleaseMSISpinLock @ 0x1C0009CDC (StorpReleaseMSISpinLock.c)
 *     RaidResumeIoQueue @ 0x1C000C2C8 (RaidResumeIoQueue.c)
 *     RaCallMiniportFindAdapter @ 0x1C000D800 (RaCallMiniportFindAdapter.c)
 *     RaidAdapterConnectInterrupt @ 0x1C000E5A8 (RaidAdapterConnectInterrupt.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C000FC94 (RaidpBuildAdapterBusRelations.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0012704 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     StorpAllocatePool @ 0x1C0017764 (StorpAllocatePool.c)
 *     StorpInitializeTimer @ 0x1C00177B4 (StorpInitializeTimer.c)
 *     StorpGetMSIInfo @ 0x1C0018114 (StorpGetMSIInfo.c)
 *     StorpInitializeWorkItem @ 0x1C0018568 (StorpInitializeWorkItem.c)
 *     RaidGetStartIoPerfParams @ 0x1C0018AE0 (RaidGetStartIoPerfParams.c)
 *     RaidInitializePerfOpts @ 0x1C0018D9C (RaidInitializePerfOpts.c)
 *     SrbShimHookDeviceControl @ 0x1C0019F50 (SrbShimHookDeviceControl.c)
 *     StorpAllocateMdl @ 0x1C002E874 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C002E9A4 (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C002EA40 (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C002EC98 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C002ED34 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C002EF54 (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C002F194 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C002F1FC (StorpGetExtendedTable.c)
 *     StorpGetOriginalMdl @ 0x1C002F3B0 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C002F428 (StorpGetSystemAddress.c)
 *     StorpPutScatterGatherList @ 0x1C002F6CC (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C002F7C8 (StorpQueueWorkItem.c)
 *     RaUnitRequestPowerDown @ 0x1C003046C (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C003059C (RaUnitRequestPowerUp.c)
 *     StorWaitForSingleObject @ 0x1C0034AE4 (StorWaitForSingleObject.c)
 *     RaidUnitRequestTimeout @ 0x1C0037E64 (RaidUnitRequestTimeout.c)
 *     ATADeviceIdShimHookDeviceControl @ 0x1C0042C30 (ATADeviceIdShimHookDeviceControl.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C0042EF0 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C0043310 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C005E2C4 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
