/*
 * XREFs of _CSaProvider::_CSaProvider_::_1_::dtor$1 @ 0x180073AB1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSaProvider::_CSaProvider_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCriticalSection::~CCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 64LL));
}
