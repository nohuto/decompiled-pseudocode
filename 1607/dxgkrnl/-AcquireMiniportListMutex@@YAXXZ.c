/*
 * XREFs of ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000BA90 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x1C000EB0C (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z.c)
 *     DpiEnterSystemDisplay @ 0x1C000F200 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x1C002B510 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002C100 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C002C600 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C002CA34 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C002D594 (DxgkMiracastStartMiracastSession.c)
 *     DpiValidateDeviceName @ 0x1C00C4B28 (DpiValidateDeviceName.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00C6070 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00DCC84 (DpiPdoHandleOpmIoctls.c)
 *     DpiFdoStopMiracastSession @ 0x1C00E02B0 (DpiFdoStopMiracastSession.c)
 *     DpiAddDevice @ 0x1C00EA390 (DpiAddDevice.c)
 *     DpiFdoStartAdapterThread @ 0x1C00EC3D0 (DpiFdoStartAdapterThread.c)
 *     DpiInitializeEx @ 0x1C00F9FF4 (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C00FB6D8 (DpiLdaValidateSystemChainStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C00FBD74 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiControlEtwLogging @ 0x1C0192CFC (DpiControlEtwLogging.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0194D60 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1C01950D0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C0195AFC (DpiFdoStopAdapter.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01973F8 (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkHandleMiracastEscape @ 0x1C0198270 (DxgkHandleMiracastEscape.c)
 *     DpiCleanup @ 0x1C019A1BC (DpiCleanup.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C019B8E0 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C019BDD0 (DpiAcpiUnregisterAcpiCallbacks.c)
 * Callees:
 *     <none>
 */

void AcquireMiniportListMutex(void)
{
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C0056EC8, (__int64)KeGetCurrentThread());
}
