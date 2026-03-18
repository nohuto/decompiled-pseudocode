/*
 * XREFs of VerifyIrqlExit @ 0x1C0075B78
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00D21F0 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00D2310 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1C00D23B0 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00D24D0 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00D2570 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1C00D26A0 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1C00D2730 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1C00D27C0 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00D2850 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1C00D2970 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1C00D2A00 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1C00D2A90 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1C00D2B20 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1C00D2BB0 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1C00D2C40 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1C00D2CD0 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1C00D2D70 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1C00D2E10 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1C00D2EA0 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00D3060 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00D3230 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00D3400 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1C00D35C0 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1C00D3650 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1C00D3740 (VfEvtIoWrite.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall VerifyIrqlExit(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int8 PrevIrql)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( PrevIrql != CurrentIrql )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
      WDF_VERIFIER_IRQL_MISMATCH,
      PrevIrql,
      CurrentIrql);
}
