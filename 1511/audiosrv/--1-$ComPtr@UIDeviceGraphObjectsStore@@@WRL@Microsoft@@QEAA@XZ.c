/*
 * XREFs of ??1?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ @ 0x18006686C
 * Callers:
 *     _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$0 @ 0x180049800 (_CDeviceGraphManager--GetStreamGroup_--_1_--dtor$0.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$0 @ 0x180049889 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$2 @ 0x180049B58 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$2.c)
 *     _CAudioResourceManager::RevertToSaDevicesWithDefaultSettings_::_1_::dtor$1 @ 0x18009056A (_CAudioResourceManager--RevertToSaDevicesWithDefaultSettings_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::~ComPtr<IDeviceGraphObjectsStore>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(a1);
}
