/*
 * XREFs of ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180005A64
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180001FD0 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 *     GetAudioSessionManager @ 0x180005890 (GetAudioSessionManager.c)
 *     VADServerUserSessionChanged @ 0x18002FDEC (VADServerUserSessionChanged.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180068B9C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceAccess@@YAJPEAXPEBG1_N@Z @ 0x18007C858 (-HandleDeviceAccess@@YAJPEAXPEBG1_N@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@AEAAXPEAUIMMDevice@@@Z @ 0x180082048 (-DisconnectHelper@CPolicyConfig@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180085620 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?AddRef@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x180005B50 (-AddRef@CBackgroundSessionCallbacks@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAudioSessionManagerProvider(struct CAudioSessionManagerProvider **a1)
{
  unsigned int (__fastcall *v2)(CBackgroundSessionCallbacks *__hidden); // rdi
  unsigned int v3; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
  v6 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    *a1 = g_SingletonAudioSessionManagerProvider;
    v2 = *(unsigned int (__fastcall **)(CBackgroundSessionCallbacks *__hidden))(*(_QWORD *)g_SingletonAudioSessionManagerProvider
                                                                              + 8LL);
    if ( v2 == CBackgroundSessionCallbacks::AddRef )
      CBackgroundSessionCallbacks::AddRef(g_SingletonAudioSessionManagerProvider);
    else
      v2(g_SingletonAudioSessionManagerProvider);
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
