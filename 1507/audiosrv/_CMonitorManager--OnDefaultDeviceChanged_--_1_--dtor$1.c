/*
 * XREFs of _CMonitorManager::OnDefaultDeviceChanged_::_1_::dtor$1 @ 0x1800969C2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitorManager::OnDefaultDeviceChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<DefaultChangedContext>::~CAutoPtr<DefaultChangedContext>((DefaultChangedContext **)(a2 + 56), a2);
}
