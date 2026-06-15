/*
 * XREFs of ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18008FC64
 * Callers:
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18008F7B8 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18008FDB8 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800024FC (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForExclusive(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct IAudioProcess *a8,
        struct CAudioSessionManager *a9,
        struct ISaDeviceProxy **a10)
{
  __int64 v13; // rsi
  int v14; // ebx

  v13 = 5LL;
  do
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x27u,
        (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
        v13);
    }
    v14 = CAudioSessionManager::Disconnect((__int64)a9, 5u, 1);
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, _QWORD, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              a2,
              a3,
              a4,
              a5,
              0LL,
              a7,
              a10);
      if ( v14 >= 0 )
        return (unsigned int)v14;
      Sleep(0xAu);
    }
  }
  while ( v13-- );
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x28u, (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids, v14);
  }
  return (unsigned int)v14;
}
