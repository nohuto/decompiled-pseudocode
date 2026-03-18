/*
 * XREFs of LeaveDeviceInfoListCrit_ @ 0x1C007A050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void LeaveDeviceInfoListCrit_()
{
  ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
}
