/*
 * XREFs of _CAudioStream::ReleaseSaDevice_::_1_::dtor$0 @ 0x1800827E2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::ReleaseSaDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<ISaProvider>::~CComPtr<ISaProvider>((__int64 *)(a2 + 80), (volatile int *)a2);
}
