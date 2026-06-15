/*
 * XREFs of _CAudioChannelVolumeChanged::Invoke_::_1_::dtor$0 @ 0x1800748EE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioChannelVolumeChanged::Invoke_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<ISessionInternalEvents>::~CComPtr<ISessionInternalEvents>(*(CAudioSessionManager ***)(a2 + 88));
}
