/*
 * XREFs of ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0
 * Callers:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B720 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001BF30 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800213E0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x1800218A0 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180021970 (-LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSect.c)
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800219A0 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180021AA0 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x180021C60 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x180021D10 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUI.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180021E00 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180021E80 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022360 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022F30 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180023AC0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800241C0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIO.c)
 *     ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180076C10 (-GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 *     ?GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180076CB0 (-GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV-$vec.c)
 *     ?AcquireShutdownLock@CAudioResourceManager@@IEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180077C74 (-AcquireShutdownLock@CAudioResourceManager@@IEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@.c)
 *     ?Shutdown@CAudioResourceManager@@UEAAXXZ @ 0x180078D70 (-Shutdown@CAudioResourceManager@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@SA?AVSyncLockCriticalSection@Details@234@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18001E7D0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@SA-AVSyncLockCriticalSection@Details@234@PEAU_RTL_.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::CriticalSection::Lock(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a2, a1);
  return a2;
}
