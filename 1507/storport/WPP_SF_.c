/*
 * XREFs of WPP_SF_ @ 0x1C00256C8
 * Callers:
 *     StorPortNotification @ 0x1C0004A70 (StorPortNotification.c)
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 *     RaUnitRequestPowerUp @ 0x1C00074EC (RaUnitRequestPowerUp.c)
 *     RaCallMiniportFindAdapter @ 0x1C0007E88 (RaCallMiniportFindAdapter.c)
 *     RaidAdapterConnectInterrupt @ 0x1C0008414 (RaidAdapterConnectInterrupt.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0009738 (RaidpBuildAdapterBusRelations.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C000C4E0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     StorpAllocatePool @ 0x1C00116B4 (StorpAllocatePool.c)
 *     StorpInitializeTimer @ 0x1C001176C (StorpInitializeTimer.c)
 *     RaidResumeIoQueue @ 0x1C0011B90 (RaidResumeIoQueue.c)
 *     StorpGetMSIInfo @ 0x1C0012194 (StorpGetMSIInfo.c)
 *     StorpInitializeWorkItem @ 0x1C001266C (StorpInitializeWorkItem.c)
 *     RaidGetStartIoPerfParams @ 0x1C0012A30 (RaidGetStartIoPerfParams.c)
 *     RaidInitializePerfOpts @ 0x1C0024268 (RaidInitializePerfOpts.c)
 *     StorpAcquireMSISpinLock @ 0x1C002882C (StorpAcquireMSISpinLock.c)
 *     StorpAllocateMdl @ 0x1C0028BB0 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C0028CE0 (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C0028D7C (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C0028F70 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C002900C (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C0029234 (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C0029474 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C00294DC (StorpGetExtendedTable.c)
 *     StorpGetOriginalMdl @ 0x1C0029690 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C00298A0 (StorpGetSystemAddress.c)
 *     StorpPutScatterGatherList @ 0x1C0029B44 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C0029C40 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C0029D6C (StorpReleaseMSISpinLock.c)
 *     RaUnitRequestPowerDown @ 0x1C002A794 (RaUnitRequestPowerDown.c)
 *     StorWaitForSingleObject @ 0x1C0030810 (StorWaitForSingleObject.c)
 *     RaidUnitRequestTimeout @ 0x1C0033284 (RaidUnitRequestTimeout.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C0039A50 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimHookDeviceControl @ 0x1C0039E00 (SrbShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C0039ED0 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C0053008 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           a3,
           a2,
           0LL);
}
