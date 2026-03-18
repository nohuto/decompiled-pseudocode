/*
 * XREFs of DeRegisterOpRegionHandler @ 0x1C007C4E0
 * Callers:
 *     <none>
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C0018488 (OSConvertDeviceHandleToNSHANDLE.c)
 */

NTSTATUS __stdcall DeRegisterOpRegionHandler(PDEVICE_OBJECT DeviceObject, PVOID OperationRegionObject)
{
  __int64 v4; // rax

  if ( !DeviceObject )
    return -1073741811;
  v4 = OSConvertDeviceHandleToNSHANDLE((ULONG_PTR)DeviceObject);
  return UnRegisterOperationRegionHandler(v4, OperationRegionObject);
}
