/*
 * XREFs of ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180078B30
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18001EE2C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180077D18 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180077EE4 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 * Callees:
 *     ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180012E30 (-GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$CComPtrBase@VCVolumeStrip@@@ATL@@QEAAXPEAVCVolumeStrip@@@Z @ 0x180050B28 (-Attach@-$CComPtrBase@VCVolumeStrip@@@ATL@@QEAAXPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x18006203C (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180078A08 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
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
  struct CAudioSessionManager *v13; // rbx
  int ExclusiveModeAudioSession; // eax
  CAudioResourceManager *v15; // rcx
  CAudioSession *v16; // rdi
  struct IAudioProcess *Process; // rax
  unsigned __int64 v18; // rbx
  int SaDeviceForExclusive; // esi
  unsigned __int64 v21; // [rsp+28h] [rbp-50h]
  struct IAudioProcess *v22; // [rsp+38h] [rbp-40h]
  CAudioSession *v23; // [rsp+80h] [rbp+8h] BYREF

  v23 = this;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, (__int64)&WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids);
  }
  v23 = 0LL;
  v13 = a9;
  ExclusiveModeAudioSession = CAudioSessionManager::FindExclusiveModeAudioSession(a9, &v23);
  v16 = v23;
  if ( ExclusiveModeAudioSession < 0 )
  {
    SaDeviceForExclusive = CAudioResourceManager::RetryGetSaDeviceForExclusive(
                             v15,
                             a2,
                             a3,
                             a4,
                             a5,
                             v21,
                             a7,
                             v22,
                             v13,
                             a10);
  }
  else
  {
    a6 = 0LL;
    Process = CAudioSession::GetProcess(v23);
    ATL::CComPtrBase<CVolumeStrip>::Attach((__int64 *)&a6, (__int64)Process);
    v18 = a6;
    if ( !(*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)a6 + 96LL))(a6)
      || (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 104LL))(v18) )
    {
      SaDeviceForExclusive = -2005139364;
    }
    else
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 160LL))(v18);
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v16 + 2) + 40LL))((__int64)v16 + 16, 0xFFFFFFFFLL);
      SaDeviceForExclusive = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, _QWORD, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                               g_DeviceGraphManager,
                               a2,
                               a3,
                               a4,
                               a5,
                               0LL,
                               a7,
                               a10);
    }
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( SaDeviceForExclusive < 0
    && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x23u,
      (__int64)&WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
      SaDeviceForExclusive);
  }
  if ( v16 )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)SaDeviceForExclusive;
}
