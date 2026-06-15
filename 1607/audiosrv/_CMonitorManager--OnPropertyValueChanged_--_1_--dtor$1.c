/*
 * XREFs of _CMonitorManager::OnPropertyValueChanged_::_1_::dtor$1 @ 0x18007DDD5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitorManager::OnPropertyValueChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<PropertyChangedContext>::~CAutoPtr<PropertyChangedContext>(
           (PropertyChangedContext **)(a2 + 64),
           a2);
}
