/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C000D860
 * Callers:
 *     ACPIFixedFeatureButtonInitialize @ 0x1C000530C (ACPIFixedFeatureButtonInitialize.c)
 *     OSNotifyCreateProcessor @ 0x1C000B1B0 (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000D088 (OSNotifyCreateOperationRegion.c)
 *     ACPIDetectFilterDevices @ 0x1C000D120 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C000D384 (ACPIDetectPdoDevices.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001E8A0 (ACPIGpeBuildWakeMasks.c)
 *     OSNotifyCreateThermalZone @ 0x1C0028E8C (OSNotifyCreateThermalZone.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0029820 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpSetPower @ 0x1C002A600 (ACPIFilterIrpSetPower.c)
 *     AcpiDeviceResetInterface @ 0x1C004BB60 (AcpiDeviceResetInterface.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F634 (ACPIInitDeleteDeviceExtension.c)
 *     DispatchNotification @ 0x1C0054A10 (DispatchNotification.c)
 *     ACPIRootInitialize @ 0x1C0081114 (ACPIRootInitialize.c)
 *     ACPIDockIntfReference @ 0x1C0097DB0 (ACPIDockIntfReference.c)
 *     OSInitializeCallbacks @ 0x1C00A8F0C (OSInitializeCallbacks.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIInitReferenceDeviceExtension(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 684) )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 684));
  return 1;
}
