/*
 * XREFs of _CProcess::_CProcess_::_1_::dtor$1 @ 0x1800255E3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::_CProcess_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCriticalSection::~CCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 32LL));
}
