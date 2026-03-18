/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C0021420
 * Callers:
 *     ACPIBuildRunMethodRequest @ 0x1C0006710 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildDeviceRequest @ 0x1C0017CE8 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0018584 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001C43C (ACPIDeviceCompleteRequest.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001CEA0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0020B1C (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0021310 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C0021B5C (ACPIBuildThermalZoneRequest.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C0DC (ACPIInitDeleteDeviceExtension.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C0041C44 (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x1C0041EB0 (ACPIFreeWaitWakePowerRequest.c)
 *     FreeContext @ 0x1C0046CB4 (FreeContext.c)
 *     ACPIDispatchAddDevice @ 0x1C0087250 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
  else
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
