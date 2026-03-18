/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x1C00180E0
 * Callers:
 *     ACPIQueryDeviceBiosName @ 0x1C006A8B0 (ACPIQueryDeviceBiosName.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C007A0F4 (ACPIEcRemoveOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C007A7A0 (AcpiGetFullyQualifiedBiosName.c)
 *     DeRegisterOpRegionHandler @ 0x1C007C300 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C007C330 (RegisterOpRegionHandler.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 704);
}
