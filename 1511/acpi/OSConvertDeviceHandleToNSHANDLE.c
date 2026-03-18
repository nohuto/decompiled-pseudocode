/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x1C0018488
 * Callers:
 *     ACPIQueryDeviceBiosName @ 0x1C0068370 (ACPIQueryDeviceBiosName.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C007A254 (ACPIEcRemoveOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C007A900 (AcpiGetFullyQualifiedBiosName.c)
 *     DeRegisterOpRegionHandler @ 0x1C007C4E0 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C007C510 (RegisterOpRegionHandler.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 704);
}
