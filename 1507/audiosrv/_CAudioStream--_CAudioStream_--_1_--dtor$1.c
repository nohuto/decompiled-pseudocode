/*
 * XREFs of _CAudioStream::_CAudioStream_::_1_::dtor$1 @ 0x180046E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::_CAudioStream_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(*(_QWORD *)(a2 + 112) + 64LL);
}
