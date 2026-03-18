/*
 * XREFs of ACPIGetRootDeviceObject @ 0x1C00051C4
 * Callers:
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C0004FC8 (ACPIThermalQueryCoolingInterfaces.c)
 *     CheckSystemIOAddressValidity @ 0x1C0016A20 (CheckSystemIOAddressValidity.c)
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
