/*
 * XREFs of LeaveDeviceInfoListCrit_ @ 0x1C0076170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void LeaveDeviceInfoListCrit_()
{
  ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
}
