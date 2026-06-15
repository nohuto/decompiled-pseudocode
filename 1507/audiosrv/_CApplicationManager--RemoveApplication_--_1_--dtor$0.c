/*
 * XREFs of _CApplicationManager::RemoveApplication_::_1_::dtor$0 @ 0x1800A1E41
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::RemoveApplication_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 48));
}
