/*
 * XREFs of _CStreamGroup::_CStreamGroup_::_1_::dtor$8 @ 0x14001BBEC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::_CStreamGroup_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(*(_QWORD *)(a2 + 80) + 248LL);
}
