/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017E60
 * Callers:
 *     ACPIDetectPdoDevices @ 0x1C0017A20 (ACPIDetectPdoDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C0017ECC (ACPIDetectFilterDevices.c)
 *     ACPIFilterIrpSetPower @ 0x1C00235F0 (ACPIFilterIrpSetPower.c)
 *     ACPIDockIntfDereference @ 0x1C0034EB0 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0034FC0 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0035830 (ACPIBuildMissingEjectionRelations.c)
 *     AcpiDeviceResetDereference @ 0x1C0039BE0 (AcpiDeviceResetDereference.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C003BAD0 (ACPIFilterIrpRemoveDevice.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C003DA50 (OSNotifyCreateOperationRegionWorker.c)
 *     DispatchNotificationWorker @ 0x1C003FB80 (DispatchNotificationWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C0040390 (ACPIRootIrpRemoveDevice.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C46C (ACPIInitDeleteDeviceExtension.c)
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
