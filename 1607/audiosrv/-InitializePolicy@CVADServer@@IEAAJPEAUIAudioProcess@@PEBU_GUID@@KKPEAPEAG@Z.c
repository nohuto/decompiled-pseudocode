/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18000C060
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x18000AB50 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180005F40 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?AddRef@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18000D220 (-AddRef@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18000DBC0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800117D0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180011930 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800124C0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180012A64 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180017B24 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18002A440 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002B750 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVADServer::InitializePolicy(
        CVADServer *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 **a6)
{
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  char *v12; // rdi
  struct _GUID v13; // xmm0
  CAudioSession *v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int AudioSession; // r14d
  __int64 v21; // rcx
  unsigned int v22; // r14d
  int v23; // ebx
  __int64 v24; // rsi
  GUID v25; // xmm0
  struct IAudioProcess *v26; // rsi
  struct IAudioProcess *v27; // rcx
  __int64 v28; // rbx
  HANDLE ProcessHeap; // rax
  char *v30; // rax
  void **v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int16 v34; // cx
  CAudioSessionManagerProvider *v35; // rbx
  void (__fastcall *v36)(CAudioSessionManagerProvider *); // rax
  const unsigned __int16 *v37; // rdx
  __int64 (__fastcall *v38)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **); // rax
  int AudioSessionManager; // eax
  __int64 v40; // rcx
  struct CAudioSessionManager *v41; // r9
  unsigned int v42; // esi
  __int64 v43; // rbx
  struct IAudioProcess *v44; // r14
  unsigned int v45; // eax
  __int64 v46; // rax
  unsigned int v47; // ebx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // [rsp+40h] [rbp-69h]
  __int64 v54; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v55; // [rsp+50h] [rbp-59h]
  struct IAudioProcess *v56; // [rsp+58h] [rbp-51h]
  struct CAudioSessionManager *v57; // [rsp+60h] [rbp-49h] BYREF
  int v58; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v59; // [rsp+6Ch] [rbp-3Dh]
  char *v60; // [rsp+70h] [rbp-39h] BYREF
  __int64 v61; // [rsp+78h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-29h] BYREF
  char v63; // [rsp+88h] [rbp-21h]
  CAudioSessionManagerProvider *v64; // [rsp+90h] [rbp-19h]
  const struct _GUID *v65; // [rsp+98h] [rbp-11h]
  __int64 v66; // [rsp+A0h] [rbp-9h]
  GUID v67; // [rsp+A8h] [rbp-1h] BYREF

  v66 = -2LL;
  v65 = a3;
  v56 = a2;
  v57 = (struct CAudioSessionManager *)a6;
  v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v10 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v12 = (char *)NilString + 24;
  v60 = (char *)NilString + 24;
  v13 = *a3;
  v67 = *a3;
  v61 = 0LL;
  v54 = 0LL;
  v14 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, this, a4);
    v14 = WPP_GLOBAL_Control;
    *(_QWORD *)&v13.Data1 = *(_QWORD *)&v67.Data1;
  }
  v15 = *(_QWORD *)v67.Data4;
  v16 = *(_QWORD *)&v13.Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
  if ( *(_QWORD *)&v13.Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
    v16 = *(_QWORD *)v67.Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
  if ( v16 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 88LL))(a2) )
      v17 = 0x20000000;
    else
      v17 = 0;
    a4 |= v17;
    v14 = WPP_GLOBAL_Control;
  }
  v18 = HIWORD(a4);
  LOBYTE(v18) = BYTE2(a4) & 1;
  v55 = v18;
  v59 = a4 & 0x60000000;
  v19 = (a4 & 0x10000000) != 0;
  v53 = v19;
  if ( (a4 & 0xA0000) == 0 )
  {
    v19 |= 2u;
    v53 = v19;
  }
  if ( v14 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_DWORD *)v14 + 7) & 0x100) != 0 && *((_BYTE *)v14 + 25) >= 4u )
    WPP_SF_qD(*((_QWORD *)v14 + 2), 21LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, this, v19 & 2);
  AudioSession = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   *((_QWORD *)this + 27),
                   &v61);
  if ( AudioSession < 0 )
    goto LABEL_144;
  v21 = v54;
  if ( v54 != v61 )
  {
    v21 = 0LL;
    v54 = 0LL;
    if ( v61 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v61)(v61, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v54);
      v21 = v54;
    }
  }
  if ( !v21 )
  {
    AudioSession = -2147467262;
    goto LABEL_144;
  }
  AudioSession = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 24LL))(v21, &v58);
  if ( AudioSession >= 0 )
  {
    v22 = v53;
    if ( v58 )
    {
      if ( v58 != 1 )
        goto LABEL_28;
      v22 = v53 & 0xFFFFFFFD;
    }
    else
    {
      v22 = v53 | 8;
    }
    v53 = v22;
LABEL_28:
    if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 96LL))(a2) && (a4 & 0x2000000) != 0 )
      v53 = v22 | 0x20;
    *((_DWORD *)this + 69) = a4;
    v23 = (unsigned __int8)v55;
    AudioSession = CAudioEndpointId::Initialize(
                     (CVADServer *)((char *)this + 72),
                     *((const unsigned __int16 **)this + 27));
    if ( AudioSession < 0 )
      goto LABEL_124;
    if ( !v23 )
      goto LABEL_36;
    v24 = *(_QWORD *)&v13.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&v13.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v24 = v15 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v24 )
    {
      AudioSession = -2147024809;
      v26 = v56;
    }
    else
    {
LABEL_36:
      if ( &v67 )
        v25 = v67;
      else
        v25 = GUID_00000000_0000_0000_0000_000000000000;
      *((GUID *)this + 6) = v25;
      v26 = v56;
      if ( !v23 )
      {
        v49 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v56 + 72LL))(v56);
        if ( v49 )
        {
          v50 = -1LL;
          do
            ++v50;
          while ( *(_WORD *)(v49 + 2 * v50) );
        }
        else
        {
          LODWORD(v50) = 0;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 88, v49, (unsigned int)v50);
        v51 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v26 + 80LL))(v26);
        if ( v51 )
        {
          v52 = -1LL;
          do
            ++v52;
          while ( *(_WORD *)(v51 + 2 * v52) );
        }
        else
        {
          LODWORD(v52) = 0;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 80, v51, (unsigned int)v52);
      }
      *((_DWORD *)this + 30) = v23;
      AudioSession = CAppAudioSessionId::CalculateStaticId((CVADServer *)((char *)this + 80));
      if ( AudioSession >= 0 )
      {
LABEL_40:
        if ( AudioSession >= 0 )
        {
          *((_DWORD *)this + 34) = v23;
          v27 = v26;
          if ( v23 )
          {
            *((_DWORD *)this + 32) = 0;
          }
          else
          {
            *((_DWORD *)this + 32) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v26 + 40LL))(v26);
            v27 = v26;
          }
          *((_DWORD *)this + 33) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v26 + 48LL))(v27);
          AudioSession = CAudioSessionInstanceId::CalculateStaticId((CVADServer *)((char *)this + 72));
          if ( AudioSession >= 0 )
          {
LABEL_44:
            if ( AudioSession < 0 )
              goto LABEL_144;
            AudioSession = CAudioSessionInstanceId::ToString((char *)this + 72, &v60);
            v12 = v60;
            if ( AudioSession < 0 )
              goto LABEL_144;
            v28 = (unsigned int)(*((_DWORD *)v60 - 4) + 1);
            if ( (unsigned __int64)(2 * v28) > 0x40000 )
            {
              *(_QWORD *)v57 = 0LL;
            }
            else
            {
              ProcessHeap = GetProcessHeap();
              v30 = (char *)HeapAlloc(ProcessHeap, 0, 2 * v28);
              v31 = (void **)v57;
              *(_QWORD *)v57 = v30;
              if ( v30 )
              {
                AudioSession = 0;
                if ( (unsigned __int64)(v28 - 1) > 0x7FFFFFFE )
                  AudioSession = -2147024809;
                if ( AudioSession < 0 )
                {
                  if ( !v28 )
                    goto LABEL_58;
                }
                else
                {
                  AudioSession = 0;
                  if ( v28 )
                  {
                    v32 = 2147483646 - v28;
                    v33 = v12 - v30;
                    while ( v32 + v28 )
                    {
                      v34 = *(_WORD *)&v30[v33];
                      if ( !v34 )
                        break;
                      *(_WORD *)v30 = v34;
                      v30 += 2;
                      if ( !--v28 )
                        goto LABEL_126;
                    }
                  }
                  else
                  {
LABEL_126:
                    v30 -= 2;
                    AudioSession = -2147024774;
                  }
                }
                *(_WORD *)v30 = 0;
LABEL_58:
                if ( AudioSession < 0 )
                {
                  operator delete(*v31);
                  *v31 = 0LL;
                  goto LABEL_95;
                }
                v64 = 0LL;
                lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
                v63 = 0;
                ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
                v35 = g_SingletonAudioSessionManagerProvider;
                if ( g_SingletonAudioSessionManagerProvider )
                {
                  v64 = g_SingletonAudioSessionManagerProvider;
                  v36 = *(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider
                                                                              + 8LL);
                  if ( (char *)v36 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
                    ATL::CComObject<CAudioSessionManagerProvider>::AddRef(g_SingletonAudioSessionManagerProvider);
                  else
                    v36(g_SingletonAudioSessionManagerProvider);
                  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
                  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    WPP_SF_S(
                      *((_QWORD *)WPP_GLOBAL_Control + 2),
                      22LL,
                      &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
                      *((_QWORD *)this + 27));
                  }
                  v37 = (const unsigned __int16 *)*((_QWORD *)this + 27);
                  v38 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v35 + 40LL);
                  if ( v38 == CAudioSessionManagerProvider::GetAudioSessionManager )
                    AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v35, v37, &v57);
                  else
                    AudioSessionManager = v38(v35, v37, &v57);
                  AudioSession = AudioSessionManager;
                  if ( AudioSessionManager < 0 )
                  {
                    if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v35 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
                      ATL::CComObject<CAudioSessionManagerProvider>::Release(v35);
                    else
                      (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v35 + 16LL))(v35);
                  }
                  else
                  {
                    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                    {
                      WPP_SF_q(
                        *((_QWORD *)WPP_GLOBAL_Control + 2),
                        23LL,
                        &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
                        *((_QWORD *)this + 19));
                    }
                    v40 = *((_QWORD *)this + 19);
                    if ( v40 )
                    {
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
                      *((_QWORD *)this + 19) = 0LL;
                    }
                    v41 = v57;
                    *((_QWORD *)this + 19) = v57;
                    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                    {
                      WPP_SF_q(
                        *((_QWORD *)WPP_GLOBAL_Control + 2),
                        24LL,
                        &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
                        v41);
                    }
                    if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v35 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
                      ATL::CComObject<CAudioSessionManagerProvider>::Release(v35);
                    else
                      (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v35 + 16LL))(v35);
                    if ( g_DuckingManager )
                    {
                      v42 = a5;
                      if ( a5 > 3 )
                        v42 = 1;
                      v43 = *(_QWORD *)g_DuckingManager;
                      v44 = v56;
                      v45 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v56 + 48LL))(v56);
                      (*(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD, _QWORD))(v43 + 48))(
                        g_DuckingManager,
                        v42,
                        v45);
                    }
                    else
                    {
                      v44 = v56;
                    }
                    if ( (_BYTE)v55 )
                    {
                      v46 = *(_QWORD *)&v65->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
                      if ( *(_QWORD *)&v65->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
                        v46 = *(_QWORD *)v65->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
                      v47 = v53;
                      if ( !v46 )
                        v47 = v53 | 4;
                    }
                    else
                    {
                      v47 = v53;
                    }
                    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                    {
                      WPP_SF_q(
                        *((_QWORD *)WPP_GLOBAL_Control + 2),
                        26LL,
                        &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
                        this);
                    }
                    AudioSession = CAudioSessionManager::CreateAudioSession(
                                     *((CAudioSessionManager **)this + 19),
                                     v44,
                                     (CVADServer *)((char *)this + 72),
                                     v47,
                                     v59,
                                     *((_DWORD *)this + 16),
                                     (struct CAudioSession **)this + 21);
                  }
LABEL_95:
                  if ( AudioSession >= 0 )
                    goto LABEL_96;
                  goto LABEL_144;
                }
                if ( v63 )
                  LeaveCriticalSection(lpCriticalSection);
                if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids);
                }
                AudioSession = -2004287487;
                goto LABEL_144;
              }
            }
            AudioSession = -2147024882;
            goto LABEL_144;
          }
        }
LABEL_124:
        AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x382u, AudioSession);
        goto LABEL_44;
      }
    }
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, AudioSession);
    goto LABEL_40;
  }
LABEL_144:
  AudSrvTraceLoggingErrorHelper("CVADServer::InitializePolicy", 0x49Au, AudioSession);
LABEL_96:
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  if ( v61 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v12 - 3) + 8LL))(*((_QWORD *)v12 - 3));
  return (unsigned int)AudioSession;
}
