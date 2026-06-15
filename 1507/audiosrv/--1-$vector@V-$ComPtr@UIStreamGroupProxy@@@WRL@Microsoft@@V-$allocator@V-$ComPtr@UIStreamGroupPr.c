/*
 * XREFs of ??1?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180089DA8
 * Callers:
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$1 @ 0x180047396 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$1.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$5 @ 0x1800473C6 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$5.c)
 *     _CAudioResourceManager::RevertToSaDevicesWithDefaultSettings_::_1_::dtor$3 @ 0x180092CBE (_CAudioResourceManager--RevertToSaDevicesWithDefaultSettings_--_1_--dtor$3.c)
 *     _CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_::_1_::dtor$0 @ 0x1800932C5 (_CAudioResourceManager--SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x180091030 (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(
        _QWORD *a1)
{
  if ( *a1 )
  {
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(a1, *a1, a1[1]);
    operator delete((void *)*a1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
