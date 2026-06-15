/*
 * XREFs of _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x140028D02
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpuManager::RegisterThread_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 72));
}
