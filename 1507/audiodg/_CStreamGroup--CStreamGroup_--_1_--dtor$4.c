/*
 * XREFs of _CStreamGroup::CStreamGroup_::_1_::dtor$4 @ 0x14001BC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CStreamGroup_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(*(_QWORD *)(a2 + 64) + 152LL);
}
