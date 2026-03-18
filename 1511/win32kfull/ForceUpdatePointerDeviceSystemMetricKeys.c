/*
 * XREFs of ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C0098734
 * Callers:
 *     RemoveInputDevices @ 0x1C009A070 (RemoveInputDevices.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01DC31C (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C009601C (AddRemovePointerDeviceSystemMetricKey.c)
 */

int ForceUpdatePointerDeviceSystemMetricKeys()
{
  AddRemovePointerDeviceSystemMetricKey(gdwSystemMetrics, 1);
  AddRemovePointerDeviceSystemMetricKey(gdwSystemMetrics, 0);
  return AddRemovePointerDevicePresence(gdwHardwareTypes);
}
