/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18004FFE0
 * Callers:
 *     _CEndpointCharacteristics::GetMixFormat_::_1_::dtor$0 @ 0x18003AD10 (_CEndpointCharacteristics--GetMixFormat_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetDevicePipeFormat_::_1_::dtor$0 @ 0x18003AD30 (_CEndpointCharacteristics--GetDevicePipeFormat_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$0 @ 0x18003B060 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$1 @ 0x18003B15C (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::AddSaDevice_::_1_::dtor$0 @ 0x18003B192 (_CDeviceGraphObjectsStore--AddSaDevice_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::AddStreamGroup_::_1_::dtor$0 @ 0x18003B1C6 (_CDeviceGraphObjectsStore--AddStreamGroup_--_1_--dtor$0.c)
 *     _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$1 @ 0x18003B4CC (_CDeviceGraphManager--GetStreamGroup_--_1_--dtor$1.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$2 @ 0x1800788BB (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$2.c)
 *     _CAudioResourceManager::ReevaluateSaDevicesForEndpoint_::_1_::dtor$0 @ 0x1800789F4 (_CAudioResourceManager--ReevaluateSaDevicesForEndpoint_--_1_--dtor$0.c)
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
