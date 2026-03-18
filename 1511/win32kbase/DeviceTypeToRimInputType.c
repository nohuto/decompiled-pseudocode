/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C000FDE0
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C00072B4 (RIMDiscoverDevicesOfInputType.c)
 *     rimCompleteReads @ 0x1C000F0AC (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C000F190 (rimIssueReads.c)
 *     RIMDeviceClassNotify @ 0x1C000FE30 (RIMDeviceClassNotify.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0010980 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087110 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C19A0 (RIMAddInjectionDeviceOfType.c)
 *     RIMDeviceNotify @ 0x1C00CA5D0 (RIMDeviceNotify.c)
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
