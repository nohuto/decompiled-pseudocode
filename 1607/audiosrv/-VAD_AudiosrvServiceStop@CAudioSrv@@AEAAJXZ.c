/*
 * XREFs of ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x180053FD0
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180030560 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180053EC0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x18000D4C0 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStop(CAudioSrv *this)
{
  CAudioSession *v2; // rcx
  unsigned int v3; // eax
  LPCRITICAL_SECTION v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 25) )
  {
    if ( v2 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v2 + 28) & 4) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_(*((_QWORD *)v2 + 2), 39LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids);
    v3 = RpcServerUnregisterIfEx(&unk_180093440, 0LL, 1);
    if ( v3
      && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids, v3);
    }
    *((_DWORD *)this + 25) = 0;
  }
  if ( g_DuckingManager )
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)g_DuckingManager + 24LL))(g_DuckingManager);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v5, &g_csVadList);
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(&g_VADServerList);
  if ( v6 )
    ATL::CCritSecLock::Unlock(&v5);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v5, &g_SessionManagerProviderLock);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 16LL))(g_SingletonAudioSessionManagerProvider);
    g_SingletonAudioSessionManagerProvider = 0LL;
  }
  if ( v6 )
    ATL::CCritSecLock::Unlock(&v5);
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
  if ( g_pEndpointCharacteristicsCache )
  {
    (*(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)g_pEndpointCharacteristicsCache + 32LL))(g_pEndpointCharacteristicsCache);
    if ( g_pEndpointCharacteristicsCache )
    {
      (*(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)g_pEndpointCharacteristicsCache + 16LL))(g_pEndpointCharacteristicsCache);
      g_pEndpointCharacteristicsCache = 0LL;
    }
  }
  if ( g_pVolumeProvider )
  {
    (*(void (__fastcall **)(CVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 16LL))(g_pVolumeProvider);
    g_pVolumeProvider = 0LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids, 0LL);
  }
  return 0LL;
}
