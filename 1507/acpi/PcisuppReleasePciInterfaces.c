/*
 * XREFs of PcisuppReleasePciInterfaces @ 0x1C007FB38
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0035D00 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C00044C8 (ACPIInternalClearFlags.c)
 *     ACPIWakeReleasePmeRouting @ 0x1C0042474 (ACPIWakeReleasePmeRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C007FBA0 (PcisuppReleasePciRouting.c)
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
