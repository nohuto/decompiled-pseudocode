/*
 * XREFs of ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003B888
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18003C210 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     _TlgKeywordOn @ 0x180005DB8 (_TlgKeywordOn.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x18003C5DC (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18003DE44 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x18003F4CC (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18004320C (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x1800441F4 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@@Details@WRL@Microsoft@@YAJ.c)
 *     ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x180044344 (--$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ??$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphStore@@@Z @ 0x1800444F0 (--$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x180069980 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     _TlgWrite @ 0x180069F24 (_TlgWrite.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStart(CAudioSrv *this)
{
  signed int v2; // ebx
  void *v3; // rax
  CPolicyConfig *v4; // rax
  TraceLoggingHProvider v5; // rcx
  unsigned __int16 v6; // dx
  int v7; // r9d
  struct _RTL_CRITICAL_SECTION *v8; // rax
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  void *v10; // rax
  CEndpointCharacteristicsCache *v11; // rax
  int v12; // eax
  LSTATUS ValueW; // eax
  DWORD v14; // ecx
  LSTATUS v15; // eax
  unsigned __int64 v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  signed int AudioSessionManagerProvider; // eax
  signed int LastError; // eax
  RPC_STATUS v22; // eax
  TraceLoggingHProvider v23; // rcx
  bool v24; // cc
  int v25; // eax
  TraceLoggingHProvider hProvider; // [rsp+48h] [rbp-29h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor[3]; // [rsp+50h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  int *v30; // [rsp+88h] [rbp+17h]
  __int64 v31; // [rsp+90h] [rbp+1Fh]

  SecurityDescriptor[2] = (PSECURITY_DESCRIPTOR)-2LL;
  v2 = 0;
  SecurityDescriptor[0] = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Au, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids);
  }
  v3 = operator new(0x250uLL);
  SecurityDescriptor[1] = v3;
  if ( v3 )
    v4 = CPolicyConfig::CPolicyConfig((CPolicyConfig *)v3);
  else
    v4 = 0LL;
  g_PolicyConfig = v4;
  if ( !v4 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_83;
    }
    v6 = 59;
    v7 = 0;
LABEL_13:
    WPP_SF_D(*((_QWORD *)v5 + 2), v6, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v7);
LABEL_83:
    CAudioSrv::VAD_AudiosrvServiceStop(this);
    goto LABEL_84;
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)operator new(0x58uLL);
  v9 = v8;
  if ( v8 )
  {
    ATL::CCriticalSection::CCriticalSection(v8);
    v9[1].DebugInfo = 0LL;
    *(_QWORD *)&v9[1].LockCount = 0LL;
    v9[1].OwningThread = 0LL;
    v9[1].LockSemaphore = 0LL;
    v9[1].SpinCount = 0LL;
    LODWORD(v9[2].DebugInfo) = 10;
  }
  else
  {
    v9 = 0LL;
  }
  g_pVolumeProvider = v9;
  if ( !v9 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Cu, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids);
    }
    v2 = -2147024882;
    goto LABEL_83;
  }
  v10 = operator new(0x60uLL);
  if ( v10 )
    v11 = CEndpointCharacteristicsCache::CEndpointCharacteristicsCache(v10);
  else
    v11 = 0LL;
  g_pEndpointCharacteristicsCache = v11;
  if ( !v11 )
  {
    v2 = -2147024882;
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_83;
    }
    v6 = 62;
    v7 = -2147024882;
    goto LABEL_13;
  }
  hProvider = (TraceLoggingHProvider)0x400000000LL;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"ForceNonModeAwareDriversToRaw",
          0x18u,
          0LL,
          &hProvider,
          (LPDWORD)&hProvider + 1) )
  {
    v12 = g_bForceNonModeAwareDriverToRaw;
    if ( (_DWORD)hProvider )
      v12 = 1;
    g_bForceNonModeAwareDriverToRaw = v12;
  }
  HIDWORD(hProvider) = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioSrvWatchDogTimerInMs",
             0x18u,
             0LL,
             &hProvider,
             (LPDWORD)&hProvider + 1);
  v14 = g_AudioSrvWatchDogTimerInMs;
  if ( !ValueW )
    v14 = (unsigned int)hProvider;
  g_AudioSrvWatchDogTimerInMs = v14;
  HIDWORD(hProvider) = 4;
  v15 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"EnableInProcOffload",
          0x18u,
          0LL,
          &hProvider,
          (LPDWORD)&hProvider + 1);
  v16 = (unsigned int)g_AudioSrvEnableInProcOffloadIfPossible;
  if ( !v15 )
    v16 = (unsigned int)hProvider;
  g_AudioSrvEnableInProcOffloadIfPossible = v16;
  if ( (unsigned int)dword_1800E5500 > 4 && TlgKeywordOn((TraceLoggingHProvider)v16, 0LL) )
  {
    v30 = &g_AudioSrvEnableInProcOffloadIfPossible;
    v31 = 4LL;
    TlgWrite(v17, &unk_1800C4A31, v18, v19, 3u, &pData);
  }
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphStore,IDeviceGraphStore>();
  if ( v2 >= 0 )
    v2 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager>();
  if ( v2 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_83;
    }
    v6 = 63;
    v7 = v2;
    goto LABEL_13;
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager>();
  v2 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_83;
    }
    v6 = 64;
    goto LABEL_54;
  }
  AudioSessionManagerProvider = CreateAudioSessionManagerProvider();
  v2 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_83;
    }
    v6 = 65;
LABEL_54:
    v7 = AudioSessionManagerProvider;
    goto LABEL_13;
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
    goto LABEL_83;
  }
  if ( !ServerEndpointIsStarted((wchar_t *)L"AudioClientRpc") )
  {
    v22 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor[0]);
    v2 = v22;
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
LABEL_73:
      v24 = v2 <= 0;
      if ( v2 )
        goto LABEL_80;
      goto LABEL_74;
    }
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x42u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v22);
LABEL_72:
    v23 = WPP_GLOBAL_Control;
    goto LABEL_73;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x43u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids);
    goto LABEL_72;
  }
LABEL_74:
  v25 = RpcServerRegisterIf3(L"`", 0LL, 0LL, 33LL, 1234, 0, AudioSrvRpcIfCallback, SecurityDescriptor[0]);
  v2 = v25;
  v23 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x44u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v25);
    v23 = WPP_GLOBAL_Control;
  }
  v24 = v2 <= 0;
  if ( !v2 )
  {
    *((_DWORD *)this + 21) = 1;
LABEL_84:
    v23 = WPP_GLOBAL_Control;
    goto LABEL_85;
  }
LABEL_80:
  if ( !v24 )
    v2 = (unsigned __int16)v2 | 0x80070000;
  if ( v2 < 0 )
    goto LABEL_83;
LABEL_85:
  if ( SecurityDescriptor[0] )
  {
    LocalFree(SecurityDescriptor[0]);
    v23 = WPP_GLOBAL_Control;
  }
  if ( v2 < 0
    && v23 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v23 + 28) & 0x40) != 0
    && *((_BYTE *)v23 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v23 + 2), 0x45u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v2);
  }
  return (unsigned int)v2;
}
