/*
 * XREFs of _CAudioSessionIconPathChanged::Invoke_::_1_::dtor$0 @ 0x18005CC64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionIconPathChanged::Invoke_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComPtr<ISessionInternalEvents>::~CComPtr<ISessionInternalEvents>(*(CAudioSessionManager ***)(a2 + 88));
}
