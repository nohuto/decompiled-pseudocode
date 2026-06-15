/*
 * XREFs of _CAudioStream::RegisterStream_::_1_::dtor$0 @ 0x180082595
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::RegisterStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<ISaProvider>::~CComPtr<ISaProvider>((__int64 *)(a2 + 72), (volatile int *)a2);
}
