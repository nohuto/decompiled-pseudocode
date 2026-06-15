/*
 * XREFs of _CMonitorManager::ProcessDeviceStateChanged_::_1_::dtor$2 @ 0x1800977A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitorManager::ProcessDeviceStateChanged_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>::~CAutoPtr<CMonitorManager::DeviceStateChangedContext>(
           (CMonitorManager::DeviceStateChangedContext **)(a2 + 104),
           a2);
}
