/*
 * XREFs of _CApplicationManager::RemoveProcess_::_1_::dtor$0 @ 0x180046D79
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::RemoveProcess_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 48));
}
