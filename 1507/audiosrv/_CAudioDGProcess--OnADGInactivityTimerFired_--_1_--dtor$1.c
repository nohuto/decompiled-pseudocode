/*
 * XREFs of _CAudioDGProcess::OnADGInactivityTimerFired_::_1_::dtor$1 @ 0x1800455D2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDGProcess::OnADGInactivityTimerFired_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<ISaProvider>::~CComPtr<ISaProvider>(a2 + 80);
}
