/*
 * XREFs of _CStreamGroup::Initialize_::_1_::dtor$0 @ 0x14001BB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::Initialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 64);
}
