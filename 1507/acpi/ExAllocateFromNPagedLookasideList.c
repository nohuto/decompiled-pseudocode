/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C001720C
 * Callers:
 *     NewContext @ 0x1C00062E8 (NewContext.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0006710 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C001700C (ACPIBuildDeviceExtension.c)
 *     ACPIBuildDeviceRequest @ 0x1C0017CE8 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0018584 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIDeviceRecordDependencies @ 0x1C001C5E4 (ACPIDeviceRecordDependencies.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C001C7EC (ACPIDeviceDiscoverDependencies.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0020B1C (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0021140 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C0021B5C (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0022548 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C0034F00 (ACPIBuildPowerResourceRequest.c)
 *     DispatchNotification @ 0x1C003FFC0 (DispatchNotification.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C004197C (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C004201C (ACPIWakeDisableAsync.c)
 *     ACPIDispatchAddDevice @ 0x1C0087250 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = ExpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
