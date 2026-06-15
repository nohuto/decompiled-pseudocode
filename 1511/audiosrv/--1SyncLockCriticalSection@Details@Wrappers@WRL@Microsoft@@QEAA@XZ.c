/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180065A44
 * Callers:
 *     _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$1 @ 0x18004980C (_CDeviceGraphManager--GetStreamGroup_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$1 @ 0x180049A9C (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::AddSaDevice_::_1_::dtor$0 @ 0x180049AD2 (_CDeviceGraphObjectsStore--AddSaDevice_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::AddStreamGroup_::_1_::dtor$0 @ 0x180049B06 (_CDeviceGraphObjectsStore--AddStreamGroup_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$0 @ 0x180049B40 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateNonDefaultStatusForSaDevice_::_1_::dtor$0 @ 0x18008FC4F (_CAudioResourceManager--ReevaluateNonDefaultStatusForSaDevice_--_1_--dtor$0.c)
 *     _CAudioResourceManager::RevertToSaDevicesWithDefaultSettings_::_1_::dtor$2 @ 0x180090576 (_CAudioResourceManager--RevertToSaDevicesWithDefaultSettings_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
