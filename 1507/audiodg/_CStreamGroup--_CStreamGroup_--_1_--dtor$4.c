/*
 * XREFs of _CStreamGroup::_CStreamGroup_::_1_::dtor$4 @ 0x14001BBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::_CStreamGroup_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(*(_QWORD *)(a2 + 80) + 152LL);
}
