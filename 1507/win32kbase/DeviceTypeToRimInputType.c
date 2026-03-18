/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C0077280
 * Callers:
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C006F3B0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00758D8 (RIMDiscoverDevicesOfInputType.c)
 *     rimCompleteReads @ 0x1C0075A68 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0075B20 (rimIssueReads.c)
 *     RIMDeviceClassNotify @ 0x1C0075BD0 (RIMDeviceClassNotify.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0084B00 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C0E60 (RIMAddInjectionDeviceOfType.c)
 *     RIMDeviceNotify @ 0x1C00C96D0 (RIMDeviceNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceTypeToRimInputType(int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( !a1 )
    return 1LL;
  if ( a1 == 1 )
    return 2LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
    return 60;
  return v1;
}
