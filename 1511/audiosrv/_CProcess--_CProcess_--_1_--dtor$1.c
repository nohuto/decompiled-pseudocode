/*
 * XREFs of _CProcess::_CProcess_::_1_::dtor$1 @ 0x18004B522
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::_CProcess_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCriticalSection::~CCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 32LL));
}
