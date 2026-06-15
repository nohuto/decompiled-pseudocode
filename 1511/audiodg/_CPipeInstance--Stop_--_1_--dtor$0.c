/*
 * XREFs of _CPipeInstance::Stop_::_1_::dtor$0 @ 0x14001B720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::Stop_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpointControl>::~CComPtr<IAudioEndpointControl>((_QWORD *)(a2 + 64));
}
