/*
 * XREFs of ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x18006AC70
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003A328 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x18006AB00 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180008F0C (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x1800674E8 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x180072E34 (-Cleanup@CVolumeProvider@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAXXZ @ 0x1800A9654 (-RemoveAll@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStop(CAudioSrv *this)
{
  __int64 v2; // rcx
  RPC_STATUS v3; // eax
  PSRWLOCK v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  LPCRITICAL_SECTION v7; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x2Fu,
      (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids);
    v2 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( *((_DWORD *)this + 21) )
  {
    if ( (struct _GUID *)v2 != &WPP_GLOBAL_Control && (*(_BYTE *)(v2 + 28) & 4) != 0 && *(_BYTE *)(v2 + 25) >= 4u )
      WPP_SF_(*(_QWORD *)(v2 + 16), 0x30u, (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids);
    v3 = RpcServerUnregisterIfEx(L"`", 0LL, 1);
    if ( v3
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x31u,
        (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
        v3);
    }
    *((_DWORD *)this + 21) = 0;
  }
  if ( g_DuckingManager )
    (*(void (__fastcall **)(CDuckingManager *))(*(_QWORD *)g_DuckingManager + 24LL))(g_DuckingManager);
  EnterCriticalSection(&g_csVadList);
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)&g_VADServerList);
  LeaveCriticalSection(&g_csVadList);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v7, &g_SessionManagerProviderLock);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 16LL))(g_SingletonAudioSessionManagerProvider);
    g_SingletonAudioSessionManagerProvider = 0LL;
  }
  if ( v8 )
    ATL::CCritSecLock::Unlock(&v7);
  if ( g_AudioResourceManager )
  {
    (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
    if ( g_AudioResourceManager )
    {
      (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 16LL))(g_AudioResourceManager);
      g_AudioResourceManager = 0LL;
    }
  }
  if ( g_DeviceGraphManager )
  {
    (*(void (__fastcall **)(CDeviceGraphManager *))(*(_QWORD *)g_DeviceGraphManager + 16LL))(g_DeviceGraphManager);
    g_DeviceGraphManager = 0LL;
  }
  if ( g_DeviceGraphStore )
  {
    (*(void (__fastcall **)(CDeviceGraphStore *))(*(_QWORD *)g_DeviceGraphStore + 16LL))(g_DeviceGraphStore);
    g_DeviceGraphStore = 0LL;
  }
  if ( g_PolicyConfig )
  {
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 16LL))(g_PolicyConfig);
    g_PolicyConfig = 0LL;
  }
  if ( g_SingletonSaProvider )
  {
    (*(void (__fastcall **)(struct ISaProvider *, __int64))(*(_QWORD *)g_SingletonSaProvider + 40LL))(
      g_SingletonSaProvider,
      4294967294LL);
    (*(void (__fastcall **)(struct ISaProvider *))(*(_QWORD *)g_SingletonSaProvider + 16LL))(g_SingletonSaProvider);
    g_SingletonSaProvider = 0LL;
  }
  v4 = g_pEndpointCharacteristicsCache;
  if ( g_pEndpointCharacteristicsCache )
  {
    ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::RemoveAll(&g_pEndpointCharacteristicsCache[1]);
    operator delete(v4);
  }
  g_pEndpointCharacteristicsCache = 0LL;
  v5 = g_pVolumeProvider;
  if ( g_pVolumeProvider )
  {
    CVolumeProvider::Cleanup((CVolumeProvider *)g_pVolumeProvider);
    ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)&v5[1]);
    DeleteCriticalSection(v5);
    operator delete(v5);
  }
  g_pVolumeProvider = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x32u,
      (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
      0);
  }
  return 0LL;
}
