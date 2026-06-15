/*
 * XREFs of ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800924F8
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180024F60 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180091F28 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800920F0 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180004450 (-GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Attach@?$CComPtrBase@UIAudioSessionInfo@@@ATL@@QEAAXPEAUIAudioSessionInfo@@@Z @ 0x180067FD4 (-Attach@-$CComPtrBase@UIAudioSessionInfo@@@ATL@@QEAAXPEAUIAudioSessionInfo@@@Z.c)
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x18007F48C (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800923A4 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
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
  int SaDeviceForExclusive; // ebp
  struct CAudioSessionManager *v14; // rbx
  int ExclusiveModeAudioSession; // eax
  CAudioResourceManager *v16; // rcx
  CAudioSession *v17; // rdi
  struct IAudioProcess *Process; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v21; // [rsp+28h] [rbp-60h]
  struct IAudioProcess *v22; // [rsp+38h] [rbp-50h]
  CAudioSession *v23; // [rsp+90h] [rbp+8h] BYREF

  v23 = this;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x24u,
      (__int64)&WPP_87a960f07f9f0e33e55207b25344727f_Traceguids);
  }
  SaDeviceForExclusive = -2005139389;
  v23 = 0LL;
  v14 = a9;
  ExclusiveModeAudioSession = CAudioSessionManager::FindExclusiveModeAudioSession(a9, &v23);
  v17 = v23;
  if ( ExclusiveModeAudioSession >= 0 )
  {
    a6 = 0LL;
    Process = CAudioSession::GetProcess(v23);
    ATL::CComPtrBase<IAudioSessionInfo>::Attach(&a6, (__int64)Process);
    v19 = a6;
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)a6 + 88LL))(a6)
      && !(*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 96LL))(v19) )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 152LL))(v19);
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v17 + 2) + 40LL))((__int64)v17 + 16, 0xFFFFFFFFLL);
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
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_12:
    if ( SaDeviceForExclusive >= 0 )
      goto LABEL_17;
    goto LABEL_13;
  }
  if ( a5 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    SaDeviceForExclusive = CAudioResourceManager::RetryGetSaDeviceForExclusive(
                             v16,
                             a2,
                             a3,
                             a4,
                             AUDCLNT_SHAREMODE_EXCLUSIVE,
                             v21,
                             a7,
                             v22,
                             v14,
                             a10);
    goto LABEL_12;
  }
LABEL_13:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x25u,
      (__int64)&WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
      SaDeviceForExclusive);
  }
LABEL_17:
  if ( v17 )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v17 + 16LL))(v17);
  return (unsigned int)SaDeviceForExclusive;
}
