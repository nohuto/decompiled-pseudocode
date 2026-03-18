/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000D7F4
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000D120 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C000D384 (ACPIDetectPdoDevices.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0029820 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpSetPower @ 0x1C002A600 (ACPIFilterIrpSetPower.c)
 *     ACPIDockIntfDereference @ 0x1C0043200 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0043390 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C00444EC (ACPIBuildMissingEjectionRelations.c)
 *     AcpiDeviceResetDereference @ 0x1C004BB10 (AcpiDeviceResetDereference.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C0051210 (OSNotifyCreateOperationRegionWorker.c)
 *     DispatchNotificationWorker @ 0x1C0054B20 (DispatchNotificationWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C0056270 (ACPIRootIrpRemoveDevice.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F634 (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionUnlocked(volatile signed __int32 *Entry)
{
  KIRQL v2; // di
  char v3; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  if ( _InterlockedExchangeAdd(Entry + 171, 0xFFFFFFFF) == 1 )
  {
    ACPIInitDeleteDeviceExtension((PVOID)Entry);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  return v3;
}
