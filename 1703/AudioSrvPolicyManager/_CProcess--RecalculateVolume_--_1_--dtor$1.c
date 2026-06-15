/*
 * XREFs of _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x1800225D3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::RecalculateVolume_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 72));
}
