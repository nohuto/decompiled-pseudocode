/*
 * XREFs of _CPipeInstance::GetAPONodeAndConnection_::_1_::dtor$1 @ 0x14003084A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::GetAPONodeAndConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((_QWORD *)(a2 + 112));
}
