/*
 * XREFs of _CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor$1 @ 0x1800258FB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 40));
}
