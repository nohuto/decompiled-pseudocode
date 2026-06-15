/*
 * XREFs of _CAudioDGProcess::LockADGProcess_::_1_::dtor$1 @ 0x18003A87C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioDGProcess::LockADGProcess_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 56));
}
