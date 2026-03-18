/*
 * XREFs of ACPIGetRootDeviceObject @ 0x1C0007E84
 * Callers:
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C0007C88 (ACPIThermalQueryCoolingInterfaces.c)
 *     CheckSystemIOAddressValidity @ 0x1C00178B0 (CheckSystemIOAddressValidity.c)
 * Callees:
 *     <none>
 */

__int64 ACPIGetRootDeviceObject()
{
  __int64 result; // rax

  result = RootDeviceExtension;
  if ( RootDeviceExtension )
    return *(_QWORD *)(RootDeviceExtension + 712);
  return result;
}
