/*
 * XREFs of ??1?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180087128
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x1800080BC (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$1 @ 0x180049895 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$1.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$5 @ 0x1800498C5 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$5.c)
 *     _CAudioResourceManager::RevertToSaDevicesWithDefaultSettings_::_1_::dtor$3 @ 0x180090582 (_CAudioResourceManager--RevertToSaDevicesWithDefaultSettings_--_1_--dtor$3.c)
 *     ?SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800906D0 (-SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointChar.c)
 *     _CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_::_1_::dtor$0 @ 0x180090B53 (_CAudioResourceManager--SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x18008E940 (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
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
