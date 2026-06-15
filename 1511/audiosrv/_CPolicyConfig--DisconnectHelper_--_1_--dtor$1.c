/*
 * XREFs of _CPolicyConfig::DisconnectHelper_::_1_::dtor$1 @ 0x18008219E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::DisconnectHelper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>((CAudioSessionManager **)(a2 + 96));
}
