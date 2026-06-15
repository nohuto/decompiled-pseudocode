/*
 * XREFs of _CApplicationManager::RemoveProcess_::_1_::dtor$0 @ 0x18002581A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::RemoveProcess_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 64));
}
