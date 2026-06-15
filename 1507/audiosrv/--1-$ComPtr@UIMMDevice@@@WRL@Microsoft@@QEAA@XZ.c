/*
 * XREFs of ??1?$ComPtr@UIMMDevice@@@WRL@Microsoft@@QEAA@XZ @ 0x1800671E0
 * Callers:
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$2 @ 0x1800473A2 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$2.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$3 @ 0x1800473AE (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$3.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$0 @ 0x1800473E4 (_CAudioResourceManager--DestroyStream_--_1_--dtor$0.c)
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$5 @ 0x18004746D (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$5.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$3 @ 0x18004750C (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$3.c)
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18004753C (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$3 @ 0x1800475D4 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$3.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$4 @ 0x1800475E0 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$4.c)
 *     _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$3 @ 0x180047894 (_CDeviceGraphManager--GetStreamGroup_--_1_--dtor$3.c)
 *     _DeriveDeviceGraphFormatsForStream_::_1_::dtor$4 @ 0x1800487B0 (_DeriveDeviceGraphFormatsForStream_--_1_--dtor$4.c)
 *     __lambda_80c14477c5528a734bb27b3f731672ff_::operator()_::_1_::dtor$0 @ 0x180090832 (__lambda_80c14477c5528a734bb27b3f731672ff_--operator()_--_1_--dtor$0.c)
 *     __lambda_80c14477c5528a734bb27b3f731672ff_::operator()_::_1_::dtor$1 @ 0x18009083E (__lambda_80c14477c5528a734bb27b3f731672ff_--operator()_--_1_--dtor$1.c)
 *     __lambda_80c14477c5528a734bb27b3f731672ff_::operator()_::_1_::dtor$2 @ 0x18009084A (__lambda_80c14477c5528a734bb27b3f731672ff_--operator()_--_1_--dtor$2.c)
 *     __lambda_fdf8f02a4d754a1adb6183af8cae6406_::operator()_::_1_::dtor$0 @ 0x180090C04 (__lambda_fdf8f02a4d754a1adb6183af8cae6406_--operator()_--_1_--dtor$0.c)
 *     __lambda_fdf8f02a4d754a1adb6183af8cae6406_::operator()_::_1_::dtor$1 @ 0x180090C10 (__lambda_fdf8f02a4d754a1adb6183af8cae6406_--operator()_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::AnySaDeviceExists_::_1_::dtor$0 @ 0x180090D81 (_CDeviceGraphObjectsStore--AnySaDeviceExists_--_1_--dtor$0.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1493bc94177afcc1968c335a030ba490____::_1_::dtor$0 @ 0x1800916E1 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1800916E1.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_3d5f7157259c9e7ebbadf0f565c7bcb4____::_1_::dtor$0 @ 0x18009176D (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_18009176D.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_4949fb3b75727052a4e52faab9c7ec1c____::_1_::dtor$0 @ 0x1800917F9 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1800917F9.c)
 *     _CAudioResourceManager::RevertToSaDevicesWithDefaultSettings_::_1_::dtor$5 @ 0x180092CD6 (_CAudioResourceManager--RevertToSaDevicesWithDefaultSettings_--_1_--dtor$5.c)
 *     _CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_::_1_::dtor$5 @ 0x1800932E9 (_CAudioResourceManager--SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IMMDevice>::~ComPtr<IMMDevice>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(a1);
}
