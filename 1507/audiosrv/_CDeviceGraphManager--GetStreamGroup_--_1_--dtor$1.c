/*
 * XREFs of _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$1 @ 0x18004787C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::Wrappers::Details::SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits>::~SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits>(a2 + 48);
}
