/*
 * XREFs of _CApplicationManager::RpcGetProcess_::_1_::dtor$1 @ 0x18004AEDC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::RpcGetProcess_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 216));
}
