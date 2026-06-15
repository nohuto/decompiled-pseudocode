/*
 * XREFs of _CPipeInstance::GetAPONodeAndConnection_::_1_::dtor$0 @ 0x14003083E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::GetAPONodeAndConnection_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((_QWORD *)(a2 + 128));
}
