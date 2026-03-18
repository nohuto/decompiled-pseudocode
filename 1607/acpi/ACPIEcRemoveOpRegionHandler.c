/*
 * XREFs of ACPIEcRemoveOpRegionHandler @ 0x1C009AFE4
 * Callers:
 *     ACPIEcStopRemoveDeviceCommon @ 0x1C004D058 (ACPIEcStopRemoveDeviceCommon.c)
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C001FBE8 (OSConvertDeviceHandleToNSHANDLE.c)
 *     UnRegisterOperationRegionHandler @ 0x1C009D98C (UnRegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIEcRemoveOpRegionHandler(ULONG_PTR *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  v3 = OSConvertDeviceHandleToNSHANDLE(*a1);
  if ( v3 )
    return (unsigned int)UnRegisterOperationRegionHandler(v3, a1[10]);
  return v2;
}
