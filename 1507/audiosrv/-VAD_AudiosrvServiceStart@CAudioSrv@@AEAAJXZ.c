/*
 * XREFs of ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003A328
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18003AA60 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x1800389A0 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x18003AE2C (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?Initialize@CVolumeProvider@@QEAAJXZ @ 0x18003D43C (-Initialize@CVolumeProvider@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x1800419D8 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@@Details@WRL@Microsoft@@YAJ.c)
 *     ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x180041B1C (--$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ??$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphStore@@@Z @ 0x180041DB0 (--$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x1800422C8 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 *     ?InitializeEndpointCharacteristicsCache@@YAJXZ @ 0x180042388 (-InitializeEndpointCharacteristicsCache@@YAJXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x18006AC70 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStart(CAudioSrv *this)
{
  signed int v2; // ebx
  CPolicyConfig *v3; // rax
  CPolicyConfig *v4; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rax
  CVolumeProvider *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  signed int AudioSessionManagerProvider; // eax
  LSTATUS ValueW; // eax
  DWORD v10; // ecx
  RPC_STATUS v11; // eax
  __int64 v12; // rcx
  bool v13; // cc
  int v14; // eax
  __int64 v16; // rcx
  unsigned __int16 v17; // dx
  int v18; // r9d
  bool v19; // al
  int v20; // eax
  signed int LastError; // eax
  CPolicyConfig *v22; // [rsp+48h] [rbp-8h]
  DWORD pvData; // [rsp+98h] [rbp+48h] BYREF
  DWORD pcbData; // [rsp+A0h] [rbp+50h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  SecurityDescriptor = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Au,
      (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids);
  }
  v3 = (CPolicyConfig *)operator new(0x250uLL);
  v22 = v3;
  if ( v3 )
    v4 = CPolicyConfig::CPolicyConfig(v3);
  else
    v4 = 0LL;
  g_PolicyConfig = v4;
  if ( !v4 )
  {
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_89;
    }
    v17 = 59;
    v18 = 0;
    goto LABEL_44;
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)operator new(0x58uLL);
  v7 = v5;
  if ( v5 )
  {
    ATL::CCriticalSection::CCriticalSection(v5);
    v7[1].DebugInfo = 0LL;
    *(_QWORD *)&v7[1].LockCount = 0LL;
    v7[1].OwningThread = 0LL;
    v7[1].LockSemaphore = 0LL;
    v7[1].SpinCount = 0LL;
    LODWORD(v7[2].DebugInfo) = 10;
  }
  else
  {
    v7 = 0LL;
  }
  g_pVolumeProvider = v7;
  if ( !v7 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x3Cu,
        (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids);
    }
    v2 = -2147024882;
    goto LABEL_89;
  }
  v2 = CVolumeProvider::Initialize(v6);
  if ( v2 < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x3Du,
        (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids);
    }
    goto LABEL_89;
  }
  AudioSessionManagerProvider = InitializeEndpointCharacteristicsCache();
  v2 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_89;
    }
    v17 = 62;
LABEL_59:
    v18 = AudioSessionManagerProvider;
LABEL_44:
    WPP_SF_D(*(_QWORD *)(v16 + 16), v17, (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids, v18);
LABEL_89:
    CAudioSrv::VAD_AudiosrvServiceStop(this);
    goto LABEL_34;
  }
  g_SingletonSaProvider = 0LL;
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"UseOldGraphBuilder",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
  {
    v19 = g_UseNewGraphBuilder;
    if ( pvData )
      v19 = 0;
    g_UseNewGraphBuilder = v19;
  }
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"ForceNonModeAwareDriversToRaw",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
  {
    v20 = g_bForceNonModeAwareDriverToRaw;
    if ( pvData )
      v20 = 1;
    g_bForceNonModeAwareDriverToRaw = v20;
  }
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioSrvWatchDogTimerInMs",
             0x18u,
             0LL,
             &pvData,
             &pcbData);
  v10 = g_AudioSrvWatchDogTimerInMs;
  if ( !ValueW )
    v10 = pvData;
  g_AudioSrvWatchDogTimerInMs = v10;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphStore,IDeviceGraphStore>();
  if ( v2 >= 0 )
    v2 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager>();
  if ( v2 )
  {
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_89;
    }
    v17 = 64;
    v18 = v2;
    goto LABEL_44;
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager>();
  v2 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_89;
    }
    v17 = 65;
    goto LABEL_59;
  }
  AudioSessionManagerProvider = CreateAudioSessionManagerProvider();
  v2 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_89;
    }
    v17 = 66;
    goto LABEL_59;
  }
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_89;
  }
  if ( !ServerEndpointIsStarted((wchar_t *)L"AudioClientRpc") )
  {
    v11 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", v2 + 10, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor);
    v2 = v11;
    v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
LABEL_27:
      v13 = v2 <= 0;
      if ( v2 )
        goto LABEL_86;
      goto LABEL_28;
    }
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x43u,
      (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
      v11);
LABEL_85:
    v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_27;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x44u,
      (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids);
    goto LABEL_85;
  }
LABEL_28:
  v14 = RpcServerRegisterIf3(L"`", 0LL, 0LL, 33LL, 1234, 0, AudioSrvRpcIfCallback, SecurityDescriptor, -2LL, v22);
  v2 = v14;
  v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x45u,
      (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
      v14);
    v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v13 = v2 <= 0;
  if ( !v2 )
  {
    *((_DWORD *)this + 21) = 1;
LABEL_34:
    v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_35;
  }
LABEL_86:
  if ( !v13 )
    v2 = (unsigned __int16)v2 | 0x80070000;
  if ( v2 < 0 )
    goto LABEL_89;
LABEL_35:
  if ( SecurityDescriptor )
  {
    LocalFree(SecurityDescriptor);
    v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v2 < 0
    && (struct _GUID *)v12 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v12 + 28) & 0x40) != 0
    && *(_BYTE *)(v12 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v12 + 16), 0x46u, (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids, v2);
  }
  return (unsigned int)v2;
}
