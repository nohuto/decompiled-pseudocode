/*
 * XREFs of _CAudioStream::UpdateStreamPriority_::_1_::dtor$1 @ 0x180046F4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::UpdateStreamPriority_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<ISaProvider>::~CComPtr<ISaProvider>(a2 + 128);
}
