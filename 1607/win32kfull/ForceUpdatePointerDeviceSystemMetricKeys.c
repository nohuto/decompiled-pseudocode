/*
 * XREFs of ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C00E63C4
 * Callers:
 *     RemoveInputDevices @ 0x1C00E90F0 (RemoveInputDevices.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01D3D14 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00E5A98 (AddRemovePointerDeviceSystemMetricKey.c)
 */

int ForceUpdatePointerDeviceSystemMetricKeys()
{
  AddRemovePointerDeviceSystemMetricKey(gdwSystemMetrics, 1);
  AddRemovePointerDeviceSystemMetricKey(gdwSystemMetrics, 0);
  return AddRemovePointerDevicePresence(gdwHardwareTypes);
}
