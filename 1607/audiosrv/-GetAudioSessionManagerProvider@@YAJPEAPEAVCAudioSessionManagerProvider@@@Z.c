/*
 * XREFs of ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002B6C0
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x18000192C (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     GetAudioSessionManager @ 0x18002A8F0 (GetAudioSessionManager.c)
 *     VADServerUserSessionChanged @ 0x18002B458 (VADServerUserSessionChanged.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180052F70 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceAccess@@YAJPEAXPEBG1_N@Z @ 0x180063EF8 (-HandleDeviceAccess@@YAJPEAXPEBG1_N@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x18006AD08 (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x18006F1B0 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18000D220 (-AddRef@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAudioSessionManagerProvider(struct CAudioSessionManagerProvider **a1)
{
  unsigned int (__fastcall *v2)(__int64, volatile int *); // rax
  unsigned int v3; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    *a1 = g_SingletonAudioSessionManagerProvider;
    v2 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL);
    if ( v2 == ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
      ATL::CComObject<CAudioSessionManagerProvider>::AddRef(
        (__int64)g_SingletonAudioSessionManagerProvider,
        (volatile int *)ATL::CComObject<CAudioSessionManagerProvider>::AddRef);
    else
      ((void (__fastcall *)(CAudioSessionManagerProvider *))v2)(g_SingletonAudioSessionManagerProvider);
    v3 = 0;
  }
  else
  {
    v3 = -2147467259;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
