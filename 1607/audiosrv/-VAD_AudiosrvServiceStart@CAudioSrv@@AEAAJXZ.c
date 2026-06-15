/*
 * XREFs of ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180030560
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180030C50 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x18002F0D4 (--$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x18002F194 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@@Details@WRL@Microsoft@@YAJ.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x180031010 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x180032814 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphStore@@@Z @ 0x180032B18 (--$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x180032E20 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x18003342C (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@@Details@WR.c)
 *     ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x180033F20 (--$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIVolu.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x180053FD0 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStart(CAudioSrv *this)
{
  int v2; // ebx
  CPolicyConfig *v3; // rax
  unsigned int AudioSessionManagerProvider; // eax
  LSTATUS ValueW; // eax
  DWORD v6; // ecx
  LSTATUS v7; // eax
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // ecx
  unsigned int v11; // eax
  bool v12; // cc
  unsigned int v13; // eax
  CAudioSession *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  signed int LastError; // eax
  DWORD pvData; // [rsp+48h] [rbp-19h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-15h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor[3]; // [rsp+50h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+7h] BYREF
  int *v23; // [rsp+88h] [rbp+27h]
  int v24; // [rsp+90h] [rbp+2Fh]
  int v25; // [rsp+94h] [rbp+33h]

  SecurityDescriptor[1] = (PSECURITY_DESCRIPTOR)-2LL;
  v2 = 0;
  SecurityDescriptor[0] = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids);
  }
  v3 = (CPolicyConfig *)operator new(0x250uLL);
  SecurityDescriptor[2] = v3;
  if ( v3 )
    v3 = CPolicyConfig::CPolicyConfig(v3);
  g_PolicyConfig = v3;
  if ( !v3 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_82;
    }
    v16 = 45LL;
    v17 = 0LL;
    goto LABEL_45;
  }
  if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider>() < 0 || !g_pVolumeProvider )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids);
    }
    v2 = -2147024882;
    goto LABEL_82;
  }
  v2 = (*(__int64 (__fastcall **)(CVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 24LL))(g_pVolumeProvider);
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids);
    }
    goto LABEL_82;
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache>();
  v2 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_82;
    }
    v16 = 48LL;
LABEL_54:
    v17 = AudioSessionManagerProvider;
LABEL_45:
    WPP_SF_D(*((_QWORD *)v15 + 2), v16, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids, v17);
LABEL_82:
    CAudioSrv::VAD_AudiosrvServiceStop(this);
    goto LABEL_36;
  }
  pvData = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioSrvWatchDogTimerInMs",
             0x18u,
             0LL,
             &pvData,
             &pcbData);
  v6 = g_AudioSrvWatchDogTimerInMs;
  if ( !ValueW )
    v6 = pvData;
  g_AudioSrvWatchDogTimerInMs = v6;
  pcbData = 4;
  v7 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"EnableInProcOffload",
         0x18u,
         0LL,
         &pvData,
         &pcbData);
  v10 = g_AudioSrvEnableInProcOffloadIfPossible;
  if ( !v7 )
    v10 = pvData;
  g_AudioSrvEnableInProcOffloadIfPossible = v10;
  if ( dword_1800CA040 > 4u )
  {
    v23 = &g_AudioSrvEnableInProcOffloadIfPossible;
    v24 = 4;
    v25 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A7CA3, v8, v9, 3u, &pData);
  }
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphStore,IDeviceGraphStore>();
  if ( v2 >= 0 )
    v2 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager>();
  if ( v2 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_82;
    }
    v16 = 49LL;
    v17 = (unsigned int)v2;
    goto LABEL_45;
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager>();
  v2 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_82;
    }
    v16 = 50LL;
    goto LABEL_54;
  }
  AudioSessionManagerProvider = CreateAudioSessionManagerProvider();
  v2 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_82;
    }
    v16 = 51LL;
    goto LABEL_54;
  }
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)",
          1u,
          SecurityDescriptor,
          0LL) )
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_82;
  }
  if ( !ServerEndpointIsStarted(L"AudioClientRpc") )
  {
    v11 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", v2 + 10, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor[0]);
    v2 = v11;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids, v11);
    }
LABEL_29:
    v12 = v2 <= 0;
    if ( v2 )
      goto LABEL_73;
    goto LABEL_30;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids);
    goto LABEL_29;
  }
LABEL_30:
  v13 = RpcServerRegisterIf3(&unk_180093440, 0LL, 0LL, 33LL, 1234, 0, AudioSrvRpcIfCallback, SecurityDescriptor[0]);
  v2 = v13;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids, v13);
  }
  v12 = v2 <= 0;
  if ( !v2 )
  {
    *((_DWORD *)this + 25) = 1;
    goto LABEL_36;
  }
LABEL_73:
  if ( !v12 )
    v2 = (unsigned __int16)v2 | 0x80070000;
  if ( v2 < 0 )
    goto LABEL_82;
LABEL_36:
  if ( SecurityDescriptor[0] )
    LocalFree(SecurityDescriptor[0]);
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::VAD_AudiosrvServiceStart", 2164, v2);
  return (unsigned int)v2;
}
