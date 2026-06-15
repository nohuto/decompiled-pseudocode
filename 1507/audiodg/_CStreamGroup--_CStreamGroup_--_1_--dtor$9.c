/*
 * XREFs of _CStreamGroup::_CStreamGroup_::_1_::dtor$9 @ 0x14001BBFF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::_CStreamGroup_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(*(_QWORD *)(a2 + 80) + 256LL);
}
