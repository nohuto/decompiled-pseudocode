/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C0016A14
 * Callers:
 *     ACPIFixedFeatureButtonInitialize @ 0x1C0004FF4 (ACPIFixedFeatureButtonInitialize.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A030 (OSNotifyCreateOperationRegion.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C00153A4 (ACPIGpeBuildWakeMasks.c)
 *     ACPIExtListTestElement @ 0x1C00169B8 (ACPIExtListTestElement.c)
 *     ACPIDetectPdoDevices @ 0x1C0017A20 (ACPIDetectPdoDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C0017ECC (ACPIDetectFilterDevices.c)
 *     OSNotifyCreateProcessor @ 0x1C0021458 (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C00222A0 (OSNotifyCreateThermalZone.c)
 *     ACPIFilterIrpSetPower @ 0x1C00235F0 (ACPIFilterIrpSetPower.c)
 *     AcpiDeviceResetInterface @ 0x1C0039C30 (AcpiDeviceResetInterface.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C003BAD0 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C46C (ACPIInitDeleteDeviceExtension.c)
 *     DispatchNotification @ 0x1C003FA70 (DispatchNotification.c)
 *     ACPIRootInitialize @ 0x1C0065EA0 (ACPIRootInitialize.c)
 *     ACPIDockIntfReference @ 0x1C00783A0 (ACPIDockIntfReference.c)
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
