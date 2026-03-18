/*
 * XREFs of PcisuppAcquirePciInterfaces @ 0x1C0072FA4
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C00686B0 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x1C00044E0 (ACPIInternalSetFlags.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C00228A0 (ACPIWakeInitializePmeRouting.c)
 *     PcisuppInitializePciRouting @ 0x1C0073038 (PcisuppInitializePciRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C007FBA0 (PcisuppReleasePciRouting.c)
 */

__int64 __fastcall PcisuppAcquirePciInterfaces(PDEVICE_OBJECT DeviceObject)
{
  __int64 DeviceExtension; // rsi
  int v3; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&PciRouteInterfaceLock, 1u);
  v3 = PcisuppInitializePciRouting(DeviceObject);
  if ( v3 >= 0 )
  {
    v3 = ACPIWakeInitializePmeRouting(DeviceObject);
    if ( v3 >= 0 )
    {
      if ( (*(_BYTE *)(DeviceExtension + 904) & 2) != 0 )
      {
        PcisuppReleasePciRouting();
      }
      else
      {
        ACPIInternalSetFlags((void *)(DeviceExtension + 904), 2uLL);
        _InterlockedIncrement(&PciRoutingInterfaceCount);
      }
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
