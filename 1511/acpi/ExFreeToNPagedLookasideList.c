/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C0021C10
 * Callers:
 *     ACPIBuildRunMethodRequest @ 0x1C0006E60 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C000A528 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildDeviceRequest @ 0x1C000B9BC (ACPIBuildDeviceRequest.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001C684 (ACPIDeviceCompleteRequest.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001D0C0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0021214 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0021B20 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C00222DC (ACPIBuildThermalZoneRequest.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C46C (ACPIInitDeleteDeviceExtension.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C0041684 (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x1C00418F0 (ACPIFreeWaitWakePowerRequest.c)
 *     FreeContext @ 0x1C00465D4 (FreeContext.c)
 *     ACPIDispatchAddDevice @ 0x1C0087270 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
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
