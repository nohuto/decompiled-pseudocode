/*
 * XREFs of PcisuppReleasePciInterfaces @ 0x1C007FD18
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00369C0 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0004320 (ACPIInternalClearFlags.c)
 *     ACPIWakeReleasePmeRouting @ 0x1C0041EB4 (ACPIWakeReleasePmeRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C007FD80 (PcisuppReleasePciRouting.c)
 */

void __fastcall PcisuppReleasePciInterfaces(__int64 a1)
{
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&PciRouteInterfaceLock, 1u);
  if ( (*(_BYTE *)(a1 + 904) & 2) != 0 )
  {
    ACPIInternalClearFlags((void *)(a1 + 904), 2LL);
    if ( _InterlockedExchangeAdd(&PciRoutingInterfaceCount, 0xFFFFFFFF) == 1 )
    {
      PcisuppReleasePciRouting();
      ACPIWakeReleasePmeRouting();
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
}
