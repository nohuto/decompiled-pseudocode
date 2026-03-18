/*
 * XREFs of ACPIGetRootDeviceObject @ 0x1C0008444
 * Callers:
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C0008248 (ACPIThermalQueryCoolingInterfaces.c)
 *     CheckSystemIOAddressValidity @ 0x1C001E360 (CheckSystemIOAddressValidity.c)
 * Callees:
 *     <none>
 */

__int64 ACPIGetRootDeviceObject()
{
  __int64 result; // rax

  result = RootDeviceExtension;
  if ( RootDeviceExtension )
    return *(_QWORD *)(RootDeviceExtension + 720);
  return result;
}
