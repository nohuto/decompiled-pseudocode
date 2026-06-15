/*
 * XREFs of _CAudioStream::UnregisterStream_::_1_::dtor$0 @ 0x180082CF7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::UnregisterStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<ISaProvider>::~CComPtr<ISaProvider>((__int64 *)(a2 + 64), (volatile int *)a2);
}
