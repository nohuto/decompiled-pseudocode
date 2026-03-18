/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C000CFF4
 * Callers:
 *     ACPIWakeEnableDisableAsync @ 0x1C0005BD8 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildRunMethodRequest @ 0x1C00067C0 (ACPIBuildRunMethodRequest.c)
 *     NewContext @ 0x1C000712C (NewContext.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C000C6F0 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildDeviceRequest @ 0x1C000CD08 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C000CDE8 (ACPIBuildDeviceExtension.c)
 *     ACPIDeviceRecordDependencies @ 0x1C0025914 (ACPIDeviceRecordDependencies.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0025B04 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0028220 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C0028EF4 (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0029D78 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C0044860 (ACPIBuildPowerResourceRequest.c)
 *     DispatchNotification @ 0x1C0054A10 (DispatchNotification.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C0057EE0 (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C0058538 (ACPIWakeDisableAsync.c)
 *     ACPIDispatchAddDevice @ 0x1C00A7150 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
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
