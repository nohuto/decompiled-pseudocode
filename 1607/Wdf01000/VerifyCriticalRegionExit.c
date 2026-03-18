/*
 * XREFs of VerifyCriticalRegionExit @ 0x1C0071F08
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00C6D50 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00C6E80 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1C00C6F10 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00C7040 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00C70D0 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1C00C7200 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1C00C7280 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1C00C7300 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00C7390 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1C00C74C0 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1C00C7540 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1C00C75C0 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1C00C7640 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1C00C76C0 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1C00C7740 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1C00C77C0 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1C00C7860 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1C00C7900 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1C00C7980 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00C7B30 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00C7CF0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00C7EB0 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1C00C8060 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1C00C80E0 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1C00C81D0 (VfEvtIoWrite.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall VerifyCriticalRegionExit(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int8 OldCritRegion,
        unsigned __int64 Pfn)
{
  if ( KeGetCurrentIrql() <= 1u && OldCritRegion != KeAreApcsDisabled() )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
      Pfn,
      0LL);
}
