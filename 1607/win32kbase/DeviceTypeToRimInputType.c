/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C0010A30
 * Callers:
 *     RIMAddNonPnpDeviceOfType @ 0x1C0009D90 (RIMAddNonPnpDeviceOfType.c)
 *     RIMDeviceClassNotify @ 0x1C000BFC0 (RIMDeviceClassNotify.c)
 *     rimCompleteReads @ 0x1C00108C8 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0010984 (rimIssueReads.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C007FBEC (RIMDiscoverDevicesOfInputType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087FB0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00CE230 (RIMAddInjectionDeviceOfType.c)
 *     RIMDeviceNotify @ 0x1C00DA6C0 (RIMDeviceNotify.c)
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
