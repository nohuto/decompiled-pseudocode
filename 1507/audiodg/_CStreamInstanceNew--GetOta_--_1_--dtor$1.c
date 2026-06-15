/*
 * XREFs of _CStreamInstanceNew::GetOta_::_1_::dtor$1 @ 0x14001BD6C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamInstanceNew::GetOta_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 104);
}
