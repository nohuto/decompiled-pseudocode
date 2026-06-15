/*
 * XREFs of ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18008F7B8
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008A60 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18008FC64 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18008FDB8 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForExclusiveStream(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        const wchar_t **a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned __int64 a6,
        unsigned int a7,
        bool a8,
        struct IAudioProcess *a9,
        struct CAudioSessionManager *a10,
        struct ISaDeviceProxy **a11)
{
  int v14; // eax
  int v15; // ebx
  TraceLoggingHProvider v16; // rcx
  CAudioResourceManager *v17; // rcx
  int SaDeviceForPackagedApp; // eax

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids, *a3);
  }
  v14 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, const wchar_t **, _QWORD, enum _AUDCLNT_SHAREMODE))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
          g_DeviceGraphManager,
          a2,
          a3,
          a4,
          a5);
  v15 = v14;
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids, v14);
    v16 = WPP_GLOBAL_Control;
  }
  if ( (v15 == -2005139389 || v15 == -2005139368) && a8 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a9 + 88LL))(a9) )
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                                 v17,
                                 a2,
                                 (struct SaDeviceParams *)a3,
                                 a4,
                                 a5,
                                 0LL,
                                 a7,
                                 (struct IAudioProcess *)a11,
                                 a10,
                                 a11);
    else
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForExclusive(
                                 v17,
                                 a2,
                                 (struct SaDeviceParams *)a3,
                                 a4,
                                 a5,
                                 0LL,
                                 a7,
                                 (struct IAudioProcess *)a11,
                                 a10,
                                 a11);
    v16 = WPP_GLOBAL_Control;
    v15 = SaDeviceForPackagedApp;
  }
  if ( v15 < 0
    && v16 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v16 + 7) & 0x100) != 0
    && *((_BYTE *)v16 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v16 + 2), 0x15u, (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids, v15);
  }
  return (unsigned int)v15;
}
