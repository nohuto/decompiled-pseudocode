/*
 * XREFs of _CStreamInstanceNew::GetOta_::_1_::dtor$0 @ 0x14001BD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamInstanceNew::GetOta_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 32);
}
