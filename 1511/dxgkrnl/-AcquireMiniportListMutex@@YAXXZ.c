/*
 * XREFs of ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000B700 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@XZ @ 0x1C000D0F8 (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@XZ.c)
 *     DpiEnterSystemDisplay @ 0x1C000D830 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x1C0024050 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0024CF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0025250 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C00256C4 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0026540 (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00B8F70 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiValidateDeviceName @ 0x1C00B9008 (DpiValidateDeviceName.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00B9580 (DpiGetDxgAdapterSafe.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00C7CD0 (DpiPdoHandleOpmIoctls.c)
 *     DpiFdoStopMiracastSession @ 0x1C00CA870 (DpiFdoStopMiracastSession.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C00CEAC8 (DpiLdaValidateSystemChainStatus.c)
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 *     DpiAddDevice @ 0x1C00D2490 (DpiAddDevice.c)
 *     DpiInitializeEx @ 0x1C00E67A8 (DpiInitializeEx.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C00E8D60 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiControlEtwLogging @ 0x1C016B008 (DpiControlEtwLogging.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C016C0C0 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1C016C440 (DpiFdoHandleStopDevice.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C016DC30 (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkHandleMiracastEscape @ 0x1C016ED10 (DxgkHandleMiracastEscape.c)
 *     DpiCleanup @ 0x1C0171604 (DpiCleanup.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C0171CF0 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C017211C (DpiAcpiUnregisterAcpiCallbacks.c)
 * Callees:
 *     <none>
 */

void AcquireMiniportListMutex(void)
{
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C0046D08, (__int64)KeGetCurrentThread());
}
