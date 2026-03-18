/*
 * XREFs of ACPIWakeReleasePmeRouting @ 0x1C0058B64
 * Callers:
 *     PcisuppReleasePciInterfaces @ 0x1C00A17EC (PcisuppReleasePciInterfaces.c)
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
