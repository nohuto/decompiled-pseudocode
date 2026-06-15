/*
 * XREFs of ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180028540
 * Callers:
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800266A0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180026D90 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180027630 (-Lock@CDeviceGraphObjectsStore@@UEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@.c)
 *     ?LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180027720 (-LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA-AV-$SyncLockT@UCritica.c)
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x180027750 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180027850 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x180027A80 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUISaDeviceProxy@@@Z @ 0x180027B30 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUIS.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180027C40 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180027CC0 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180028050 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x1800290B0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800297F0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIO.c)
 *     ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180090DE0 (-GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 *     ?GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180090E70 (-GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV-$vec.c)
 *     ?AcquireShutdownLock@CAudioResourceManager@@IEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180091E8C (-AcquireShutdownLock@CAudioResourceManager@@IEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTrai.c)
 *     ?Shutdown@CAudioResourceManager@@UEAAXXZ @ 0x180092D00 (-Shutdown@CAudioResourceManager@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@SA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180028570 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@SA-AV-$SyncLockT@UCriticalSectionTraits@HandleTrai.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::CriticalSection::Lock(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a2, a1);
  return a2;
}
