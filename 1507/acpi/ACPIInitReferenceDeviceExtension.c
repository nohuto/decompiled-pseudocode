/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C00089D4
 * Callers:
 *     ACPIFixedFeatureButtonInitialize @ 0x1C0004AE4 (ACPIFixedFeatureButtonInitialize.c)
 *     OSNotifyCreateProcessor @ 0x1C00072FC (OSNotifyCreateProcessor.c)
 *     ACPIDetectFilterDevices @ 0x1C000830C (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0008528 (ACPIDetectPdoDevices.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A110 (OSNotifyCreateOperationRegion.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C0014474 (ACPIGpeBuildWakeMasks.c)
 *     OSNotifyCreateThermalZone @ 0x1C0021B20 (OSNotifyCreateThermalZone.c)
 *     ACPIFilterIrpSetPower @ 0x1C0022F20 (ACPIFilterIrpSetPower.c)
 *     AcpiDeviceResetInterface @ 0x1C0039030 (AcpiDeviceResetInterface.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C003B740 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C0DC (ACPIInitDeleteDeviceExtension.c)
 *     DispatchNotification @ 0x1C003FFC0 (DispatchNotification.c)
 *     ACPIRootInitialize @ 0x1C006640C (ACPIRootInitialize.c)
 *     ACPIDockIntfReference @ 0x1C0078240 (ACPIDockIntfReference.c)
 *     OSInitializeCallbacks @ 0x1C0084000 (OSInitializeCallbacks.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIInitReferenceDeviceExtension(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 676) )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 676));
  return 1;
}
