/*
 * XREFs of ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180077D18
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180078A08 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180078B30 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
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
  int v14; // ebx
  CAudioResourceManager *v15; // rcx
  int SaDeviceForExclusive; // eax

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, (__int64)&WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids, *a3);
  }
  v14 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, const wchar_t **, _QWORD, enum _AUDCLNT_SHAREMODE))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
          g_DeviceGraphManager,
          a2,
          a3,
          a4,
          a5);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, (__int64)&WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids, v14);
  }
  if ( v14 != -2005139364 )
  {
    if ( v14 != -2005139363 )
      goto LABEL_18;
    if ( !a8 )
      goto LABEL_19;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a9 + 96LL))(a9) )
  {
    if ( v14 != -2005139363 )
      goto LABEL_18;
    if ( a8 )
    {
      SaDeviceForExclusive = CAudioResourceManager::RetryGetSaDeviceForExclusive(
                               v15,
                               a2,
                               (struct SaDeviceParams *)a3,
                               a4,
                               a5,
                               0LL,
                               a7,
                               (struct IAudioProcess *)a11,
                               a10,
                               a11);
      goto LABEL_17;
    }
LABEL_19:
    AudSrvTraceLoggingErrorHelper("CAudioResourceManager::GetSaDeviceForExclusiveStream", 1403, v14);
    return (unsigned int)v14;
  }
  SaDeviceForExclusive = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                           v15,
                           a2,
                           (struct SaDeviceParams *)a3,
                           a4,
                           a5,
                           0LL,
                           a7,
                           (struct IAudioProcess *)a11,
                           a10,
                           a11);
LABEL_17:
  v14 = SaDeviceForExclusive;
LABEL_18:
  if ( v14 < 0 )
    goto LABEL_19;
  return (unsigned int)v14;
}
