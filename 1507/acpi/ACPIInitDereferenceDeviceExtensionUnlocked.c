/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0008968
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000830C (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0008528 (ACPIDetectPdoDevices.c)
 *     ACPIFilterIrpSetPower @ 0x1C0022F20 (ACPIFilterIrpSetPower.c)
 *     ACPIDockIntfDereference @ 0x1C0034170 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0034280 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0034BB0 (ACPIBuildMissingEjectionRelations.c)
 *     AcpiDeviceResetDereference @ 0x1C0038FE0 (AcpiDeviceResetDereference.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C003B740 (ACPIFilterIrpRemoveDevice.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C003DE60 (OSNotifyCreateOperationRegionWorker.c)
 *     DispatchNotificationWorker @ 0x1C00400D0 (DispatchNotificationWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C00408E0 (ACPIRootIrpRemoveDevice.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C0DC (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionUnlocked(volatile signed __int32 *Entry)
{
  KIRQL v2; // di
  char v3; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  if ( _InterlockedExchangeAdd(Entry + 169, 0xFFFFFFFF) == 1 )
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
