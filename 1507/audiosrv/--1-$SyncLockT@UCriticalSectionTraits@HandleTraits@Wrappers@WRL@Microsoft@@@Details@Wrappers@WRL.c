/*
 * XREFs of ??1?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800673A4
 * Callers:
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$1 @ 0x1800475BC (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::AddSaDevice_::_1_::dtor$0 @ 0x1800475F2 (_CDeviceGraphObjectsStore--AddSaDevice_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::AddStreamGroup_::_1_::dtor$0 @ 0x180047626 (_CDeviceGraphObjectsStore--AddStreamGroup_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$0 @ 0x180047660 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$0.c)
 *     _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$1 @ 0x18004787C (_CDeviceGraphManager--GetStreamGroup_--_1_--dtor$1.c)
 *     _CAudioResourceManager::ReevaluateNonDefaultStatusForSaDevice_::_1_::dtor$0 @ 0x18009238F (_CAudioResourceManager--ReevaluateNonDefaultStatusForSaDevice_--_1_--dtor$0.c)
 *     _CAudioResourceManager::RevertToSaDevicesWithDefaultSettings_::_1_::dtor$2 @ 0x180092CB2 (_CAudioResourceManager--RevertToSaDevicesWithDefaultSettings_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits>::~SyncLockT<Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *a1 = 0LL;
  }
}
