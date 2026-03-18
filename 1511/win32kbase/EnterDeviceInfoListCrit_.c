/*
 * XREFs of EnterDeviceInfoListCrit_ @ 0x1C0076160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID EnterDeviceInfoListCrit_()
{
  return ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
}
