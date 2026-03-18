/*
 * XREFs of PcisuppAcquirePciInterfaces @ 0x1C00905F8
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C0082A70 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0003AA0 (ACPIInternalSetFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C0029FBC (ACPIWakeInitializePmeRouting.c)
 *     PcisuppInitializePciRouting @ 0x1C009068C (PcisuppInitializePciRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C00A18C8 (PcisuppReleasePciRouting.c)
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
      if ( (*(_BYTE *)(DeviceExtension + 912) & 2) != 0 )
      {
        PcisuppReleasePciRouting();
      }
      else
      {
        ACPIInternalSetFlags((void *)(DeviceExtension + 912), 2uLL);
        _InterlockedIncrement(&PciRoutingInterfaceCount);
      }
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
