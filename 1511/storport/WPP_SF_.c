/*
 * XREFs of WPP_SF_ @ 0x1C00277A8
 * Callers:
 *     StorPortNotification @ 0x1C00059D0 (StorPortNotification.c)
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 *     StorpAcquireMSISpinLock @ 0x1C000746C (StorpAcquireMSISpinLock.c)
 *     StorpReleaseMSISpinLock @ 0x1C0007504 (StorpReleaseMSISpinLock.c)
 *     RaUnitRequestPowerUp @ 0x1C0008EC4 (RaUnitRequestPowerUp.c)
 *     StorpInitializeTimer @ 0x1C00098CC (StorpInitializeTimer.c)
 *     RaidResumeIoQueue @ 0x1C0009E74 (RaidResumeIoQueue.c)
 *     StorpInitializeWorkItem @ 0x1C000A02C (StorpInitializeWorkItem.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C000B970 (RaidpBuildAdapterBusRelations.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000D8A8 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C000E750 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidAdapterConnectInterrupt @ 0x1C0012B84 (RaidAdapterConnectInterrupt.c)
 *     RaCallMiniportFindAdapter @ 0x1C0012FA0 (RaCallMiniportFindAdapter.c)
 *     StorpAllocatePool @ 0x1C0013B04 (StorpAllocatePool.c)
 *     StorpGetMSIInfo @ 0x1C00142D4 (StorpGetMSIInfo.c)
 *     RaidGetStartIoPerfParams @ 0x1C0014A80 (RaidGetStartIoPerfParams.c)
 *     RaidInitializePerfOpts @ 0x1C00266E4 (RaidInitializePerfOpts.c)
 *     StorpAllocateMdl @ 0x1C002AD94 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C002AEC4 (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C002AF60 (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C002B154 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C002B1F0 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C002B414 (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C002B654 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C002B6BC (StorpGetExtendedTable.c)
 *     StorpGetOriginalMdl @ 0x1C002B870 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C002B8E8 (StorpGetSystemAddress.c)
 *     StorpPutScatterGatherList @ 0x1C002BB8C (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C002BC88 (StorpQueueWorkItem.c)
 *     RaUnitRequestPowerDown @ 0x1C002C758 (RaUnitRequestPowerDown.c)
 *     StorWaitForSingleObject @ 0x1C0031934 (StorWaitForSingleObject.c)
 *     RaidUnitRequestTimeout @ 0x1C0034BF4 (RaidUnitRequestTimeout.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C003C480 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimHookDeviceControl @ 0x1C003C830 (SrbShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C003C900 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C0056F70 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
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
