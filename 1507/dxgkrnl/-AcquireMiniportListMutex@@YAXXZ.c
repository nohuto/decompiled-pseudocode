/*
 * XREFs of ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000A590 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@XZ @ 0x1C000AA00 (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@XZ.c)
 *     DpiEnterSystemDisplay @ 0x1C000CCE0 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x1C0024520 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00251B0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0025700 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00269F0 (DxgkMiracastStartMiracastSession.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00949E0 (DpiGetDxgAdapterSafe.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00B2490 (DpiPdoHandleOpmIoctls.c)
 *     DpiValidateDeviceName @ 0x1C00BB978 (DpiValidateDeviceName.c)
 *     DpiFdoStopMiracastSession @ 0x1C00BC5D0 (DpiFdoStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00BE440 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiAddDevice @ 0x1C00C5300 (DpiAddDevice.c)
 *     DpiFdoStartAdapterThread @ 0x1C00C7120 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C00D8A20 (DpiLdaValidateSystemChainStatus.c)
 *     DpiInitializeEx @ 0x1C00D9938 (DpiInitializeEx.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C00DDC70 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiControlEtwLogging @ 0x1C0166AD8 (DpiControlEtwLogging.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0167A10 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1C0167D70 (DpiFdoHandleStopDevice.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01694B0 (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkHandleMiracastEscape @ 0x1C016A500 (DxgkHandleMiracastEscape.c)
 *     DpiCleanup @ 0x1C016CDF4 (DpiCleanup.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C016D4E0 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C016D90C (DpiAcpiUnregisterAcpiCallbacks.c)
 * Callees:
 *     <none>
 */

void AcquireMiniportListMutex(void)
{
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C0046C88, (__int64)KeGetCurrentThread());
}
