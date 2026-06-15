/*
 * XREFs of ?InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@U_GUID@@5W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008AD3C
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800153A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180004450 (-GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002CA54 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002CAF0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     GetSAProvider @ 0x18002E018 (GetSAProvider.c)
 *     ?Release@?$CComObject@VCSaProvider@@@ATL@@UEAAKXZ @ 0x18002E1D0 (-Release@-$CComObject@VCSaProvider@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x18006D1E0 (WPP_SF_qS.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 *     ?DoesExclusiveModeOverrideShared@@YAHPEBG@Z @ 0x180089FBC (-DoesExclusiveModeOverrideShared@@YAHPEBG@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEAVCAudioSessionManager@@PEAUISaProvider@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6KPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BC88 (-RetryGetSaDeviceForExclusive@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEA.c)
 *     ?RetryGetSaDeviceForPackagedApp@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEAVCAudioSessionManager@@PEAUISaProvider@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6KPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BE3C (-RetryGetSaDeviceForPackagedApp@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@P.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVADServer::InitializeEngine(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        int a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned int a6,
        struct tWAVEFORMATEX *a7,
        struct _GUID *a8,
        struct _GUID *a9,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a10)
{
  struct IAudioProcess *Process; // rsi
  __int64 v14; // rdi
  int v15; // eax
  volatile int *v16; // rdx
  int SAProvider; // edi
  struct CAudioSessionManagerProvider *v18; // rbx
  __int64 (__fastcall *v19)(__int64, volatile int *); // rsi
  enum _AUDCLNT_SHAREMODE v20; // esi
  __int64 v21; // rcx
  unsigned __int16 v22; // dx
  struct _GUID *v23; // r14
  struct _GUID *v24; // r13
  __int64 (__fastcall *v25)(CAudioSessionManager *); // rsi
  __int64 (__fastcall *v26)(__int64, volatile int *); // rsi
  struct tWAVEFORMATEX *v28; // [rsp+28h] [rbp-E0h]
  CAudioSessionManager *v29; // [rsp+68h] [rbp-A0h] BYREF
  struct ISaProvider *v30; // [rsp+70h] [rbp-98h] BYREF
  struct CAudioSessionManagerProvider *v31; // [rsp+78h] [rbp-90h] BYREF
  struct _GUID v32; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID v33; // [rsp+98h] [rbp-70h] BYREF
  struct _GUID v34; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-50h]
  struct _GUID v36; // [rsp+C8h] [rbp-40h] BYREF
  struct _GUID v37; // [rsp+D8h] [rbp-30h] BYREF
  struct _GUID v38; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v39; // [rsp+F8h] [rbp-10h] BYREF
  struct _GUID v40; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v41; // [rsp+158h] [rbp+50h] BYREF
  __int64 v42; // [rsp+160h] [rbp+58h]

  v42 = a2;
  v35 = -2LL;
  v30 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x46u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      a1,
      a3);
  }
  v41 = -1;
  Process = CAudioSession::GetProcess(*(CAudioSession **)(a1 + 168));
  v14 = *(_QWORD *)g_PolicyManager;
  v15 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 112LL))(Process);
  SAProvider = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, bool, _QWORD, _QWORD, int, unsigned int *))(v14 + 56))(
                 g_PolicyManager,
                 (unsigned int)(a4 - 1) <= 1,
                 *(unsigned int *)(a1 + 304),
                 0LL,
                 v15,
                 &v41);
  if ( SAProvider < 0 )
    goto LABEL_68;
  SAProvider = GetSAProvider((__int64)&v30);
  if ( SAProvider < 0 )
    goto LABEL_68;
  v29 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x47u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      *(const wchar_t **)(a1 + 240));
  }
  v31 = 0LL;
  SAProvider = GetAudioSessionManagerProvider(&v31);
  v18 = v31;
  if ( SAProvider >= 0 )
    SAProvider = (*(__int64 (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, CAudioSessionManager **))(*(_QWORD *)v31 + 40LL))(
                   v31,
                   a3,
                   &v29);
  if ( v18 )
  {
    v19 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v18 + 16LL);
    if ( v19 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release((__int64)v18, v16);
    else
      ((void (__fastcall *)(struct CAudioSessionManagerProvider *))v19)(v18);
  }
  if ( SAProvider < 0 )
    goto LABEL_60;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x48u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      a1,
      v29);
  }
  if ( !DoesExclusiveModeOverrideShared(a3) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x4Cu,
        (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
        a1);
    }
    v38 = *a9;
    v40 = *a8;
    SAProvider = (*(__int64 (__fastcall **)(struct ISaProvider *, const unsigned __int16 *, _QWORD, _QWORD, struct tWAVEFORMATEX *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct _GUID *, struct _GUID *, unsigned int, __int64))(*(_QWORD *)v30 + 24LL))(
                   v30,
                   a3,
                   (unsigned int)a5,
                   a6,
                   a7,
                   a10,
                   &v40,
                   &v38,
                   v41,
                   a1 + 192);
    goto LABEL_55;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x49u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      a1);
  }
  v20 = a5;
  if ( a5 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v29 + 63, GetCurrentThreadId(), 0) )
    {
      v21 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
      {
        goto LABEL_34;
      }
      v22 = v20 + 73;
LABEL_33:
      WPP_SF_q(*(_QWORD *)(v21 + 16), v22, (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids, a1);
      v21 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_34:
      SAProvider = -2005139389;
      goto LABEL_41;
    }
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)v29 + 63, 0, 0) )
  {
    v21 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_34;
    }
    v22 = 75;
    goto LABEL_33;
  }
  v21 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_41:
  if ( SAProvider >= 0 )
  {
    v23 = a9;
    v37 = *a9;
    v24 = a8;
    v32 = *a8;
    SAProvider = (*(__int64 (__fastcall **)(struct ISaProvider *, const unsigned __int16 *, _QWORD, _QWORD, struct tWAVEFORMATEX *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct _GUID *, struct _GUID *, unsigned int, __int64))(*(_QWORD *)v30 + 24LL))(
                   v30,
                   a3,
                   (unsigned int)v20,
                   a6,
                   a7,
                   a10,
                   &v32,
                   &v37,
                   v41,
                   a1 + 192);
    if ( SAProvider == -2005139389 )
    {
      if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v42 + 88LL))(v42) )
      {
        if ( v20 == AUDCLNT_SHAREMODE_EXCLUSIVE )
        {
          v39 = *v23;
          v33 = *v24;
          SAProvider = CVADServer::RetryGetSaDeviceForExclusive(
                         (CVADServer *)a1,
                         a3,
                         AUDCLNT_SHAREMODE_EXCLUSIVE,
                         a6,
                         a7,
                         v29,
                         v30,
                         a10,
                         &v33,
                         &v39,
                         v41,
                         (struct IAudioDeviceGraph **)(a1 + 192));
LABEL_48:
          _InterlockedExchange((volatile __int32 *)v29 + 63, 0);
        }
LABEL_55:
        v21 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        goto LABEL_56;
      }
      v34 = *v23;
      v36 = *v24;
      SAProvider = CVADServer::RetryGetSaDeviceForPackagedApp(
                     (CVADServer *)a1,
                     a3,
                     v20,
                     a6,
                     a7,
                     v29,
                     v30,
                     a10,
                     &v36,
                     &v34,
                     v41,
                     (struct IAudioDeviceGraph **)(a1 + 192));
    }
    if ( v20 == AUDCLNT_SHAREMODE_EXCLUSIVE )
      goto LABEL_48;
    goto LABEL_55;
  }
LABEL_56:
  if ( (struct _GUID *)v21 != &WPP_GLOBAL_Control && (*(_BYTE *)(v21 + 28) & 0x40) != 0 && *(_BYTE *)(v21 + 25) >= 4u )
  {
    WPP_SF_q(*(_QWORD *)(v21 + 16), 0x4Du, (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids, v29);
LABEL_60:
    v21 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v29 )
  {
    v25 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v29 + 16LL);
    if ( v25 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v29);
    else
      v25(v29);
    v21 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( SAProvider >= 0 )
  {
    SAProvider = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 192) + 120LL))(
                   *(_QWORD *)(a1 + 192),
                   0LL,
                   a1 + 200);
LABEL_68:
    v21 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( (struct _GUID *)v21 != &WPP_GLOBAL_Control && (*(_DWORD *)(v21 + 28) & 0x100) != 0 && *(_BYTE *)(v21 + 25) >= 4u )
  {
    LODWORD(v28) = SAProvider;
    WPP_SF_qD(*(_QWORD *)(v21 + 16), 0x4Eu, (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids, a1, v28);
    v21 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( SAProvider < 0
    && (struct _GUID *)v21 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v21 + 28) & 0x100) != 0
    && *(_BYTE *)(v21 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v21 + 16), 0x4Fu, (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids, SAProvider);
  }
  if ( v30 )
  {
    v26 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v30 + 16LL);
    if ( v26 == ATL::CComObject<CSaProvider>::Release )
      ATL::CComObject<CSaProvider>::Release((__int64)v30, v16);
    else
      ((void (__fastcall *)(struct ISaProvider *))v26)(v30);
  }
  return (unsigned int)SAProvider;
}
