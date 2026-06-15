/*
 * XREFs of ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x180069980
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003B888 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180069810 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180031460 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180065AC4 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x180070E18 (-Cleanup@CVolumeProvider@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAXXZ @ 0x1800A6FD4 (-RemoveAll@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStop(CAudioSrv *this)
{
  TraceLoggingHProvider v2; // rcx
  RPC_STATUS v3; // eax
  PTP_WORK *v4; // rbx
  struct _TP_WORK *v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  LPCRITICAL_SECTION v8; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 21) )
  {
    if ( v2 != (TraceLoggingHProvider)&WPP_GLOBAL_Control && (*((_BYTE *)v2 + 28) & 4) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_(*((_QWORD *)v2 + 2), 0x30u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids);
    v3 = RpcServerUnregisterIfEx(L"`", 0LL, 1);
    if ( v3
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x31u,
        (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
        v3);
    }
    *((_DWORD *)this + 21) = 0;
  }
  if ( g_DuckingManager )
    (*(void (__fastcall **)(CDuckingManager *))(*(_QWORD *)g_DuckingManager + 24LL))(g_DuckingManager);
  EnterCriticalSection(&g_csVadList);
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(&g_VADServerList);
  LeaveCriticalSection(&g_csVadList);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, &g_SessionManagerProviderLock);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    (*(void (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 16LL))(g_SingletonAudioSessionManagerProvider);
    g_SingletonAudioSessionManagerProvider = 0LL;
  }
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
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
  v4 = (PTP_WORK *)g_pEndpointCharacteristicsCache;
  if ( g_pEndpointCharacteristicsCache )
  {
    *((_BYTE *)g_pEndpointCharacteristicsCache + 88) = 1;
    v5 = v4[10];
    if ( v5 )
    {
      WaitForThreadpoolWorkCallbacks(v5, 1);
      CloseThreadpoolWork(v4[10]);
      v4[10] = 0LL;
      v4 = (PTP_WORK *)g_pEndpointCharacteristicsCache;
    }
    if ( v4 )
    {
      ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::RemoveAll(v4 + 1);
      operator delete(v4);
    }
  }
  g_pEndpointCharacteristicsCache = 0LL;
  v6 = g_pVolumeProvider;
  if ( g_pVolumeProvider )
  {
    CVolumeProvider::Cleanup((CVolumeProvider *)g_pVolumeProvider);
    ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)&v6[1]);
    DeleteCriticalSection(v6);
    operator delete(v6);
  }
  g_pVolumeProvider = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, 0);
  }
  return 0LL;
}
