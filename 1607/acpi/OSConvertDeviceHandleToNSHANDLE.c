/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x1C001FBE8
 * Callers:
 *     ACPIQueryDeviceBiosName @ 0x1C0087DB4 (ACPIQueryDeviceBiosName.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C009AFE4 (ACPIEcRemoveOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C009B700 (AcpiGetFullyQualifiedBiosName.c)
 *     DeRegisterOpRegionHandler @ 0x1C009D900 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C009D930 (RegisterOpRegionHandler.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 712);
}
