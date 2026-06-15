/*
 * XREFs of _CAudioResourceManager::CAudioResourceManager_::_1_::dtor$5 @ 0x18003BD17
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CAudioResourceManager_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  CVolumeControlBase::ProviderFinalRelease(*(CVolumeControlBase **)(a2 + 72));
}
