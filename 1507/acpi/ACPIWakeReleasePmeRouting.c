/*
 * XREFs of ACPIWakeReleasePmeRouting @ 0x1C0042474
 * Callers:
 *     PcisuppReleasePciInterfaces @ 0x1C007FB38 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

void ACPIWakeReleasePmeRouting()
{
  KIRQL v0; // al
  void *v1; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v1 = (void *)PciPmeInterface;
  PciPmeInterface = 0LL;
  PciPmeInterfaceInstantiated = 0;
  KeReleaseSpinLock(&AcpiPowerLock, v0);
  ExFreePoolWithTag(v1, 0);
}
