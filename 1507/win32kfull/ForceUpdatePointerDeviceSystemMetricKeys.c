/*
 * XREFs of ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C012F1E8
 * Callers:
 *     RemoveInputDevices @ 0x1C012F0C0 (RemoveInputDevices.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHXZ @ 0x1C01DBCC8 (-RealizePendingRecreateTouchInjectionDevices@@YAHXZ.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C0145F64 (AddRemovePointerDeviceSystemMetricKey.c)
 */

__int64 ForceUpdatePointerDeviceSystemMetricKeys()
{
  AddRemovePointerDeviceSystemMetricKey(gdwSystemMetrics, 1LL);
  AddRemovePointerDeviceSystemMetricKey(gdwSystemMetrics, 0LL);
  return AddRemovePointerDevicePresence(gdwHardwareTypes);
}
