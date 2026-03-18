/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C000BC9C
 * Callers:
 *     NewContext @ 0x1C0006698 (NewContext.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0006E60 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C000A528 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildDeviceRequest @ 0x1C000B9BC (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C000BA9C (ACPIBuildDeviceExtension.c)
 *     ACPIDeviceRecordDependencies @ 0x1C001C82C (ACPIDeviceRecordDependencies.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C001CA0C (ACPIDeviceDiscoverDependencies.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0021214 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0021958 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C00222DC (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0022CC8 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C0035B80 (ACPIBuildPowerResourceRequest.c)
 *     DispatchNotification @ 0x1C003FA70 (DispatchNotification.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C00413BC (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C0041A5C (ACPIWakeDisableAsync.c)
 *     ACPIDispatchAddDevice @ 0x1C0087270 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
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
