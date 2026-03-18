/*
 * XREFs of LeaveDeviceInfoListCrit_ @ 0x1C0013BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void LeaveDeviceInfoListCrit_()
{
  ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
}
