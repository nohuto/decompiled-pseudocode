/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180024BE0
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800235C0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180011AE0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180012000 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800138F0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014360 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180014BB0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800171B0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180018960 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetTsSessionId@CProcess@@UEAAKXZ @ 0x180028B70 (-GetTsSessionId@CProcess@@UEAAKXZ.c)
 *     ?IsPackagedApp@CProcess@@UEAAHXZ @ 0x180028C30 (-IsPackagedApp@CProcess@@UEAAHXZ.c)
 *     ?SetUserDuckingPreference@CDuckingManager@@UEAAXKK@Z @ 0x18002AEA0 (-SetUserDuckingPreference@CDuckingManager@@UEAAXKK@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006558C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVADServer::InitializePolicy(
        struct _RTL_CRITICAL_SECTION *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 **a6)
{
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *); // rbx
  struct ATL::CStringData *NilString; // rax
  char *v12; // rdi
  struct _GUID v13; // xmm0
  TraceLoggingHProvider v14; // rbx
  __int64 (__fastcall *v15)(CProcess *__hidden); // r14
  int IsPackagedApp; // eax
  unsigned int v17; // eax
  unsigned int v18; // r13d
  int AudioSession; // r14d
  __int64 (__fastcall *v20)(CProcess *__hidden); // rbx
  int v21; // eax
  LPCRITICAL_SECTION v22; // r15
  int v23; // r12d
  __int64 p_SpinCount; // rbx
  __int64 *v25; // rsi
  GUID v26; // xmm0
  _WORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  _WORD *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  TraceLoggingHProvider v33; // rcx
  struct IAudioProcess *v34; // r12
  LONG v35; // eax
  __int64 v36; // rbx
  HANDLE ProcessHeap; // rax
  char *v38; // rdx
  void **v39; // rsi
  __int64 v40; // r8
  __int64 v41; // rcx
  __int16 v42; // ax
  CAudioSessionManagerProvider *v43; // rbx
  __int64 (__fastcall *v44)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **); // rsi
  int AudioSessionManager; // eax
  ULONG_PTR SpinCount; // r14
  struct CAudioSessionManager *v47; // r9
  CDuckingManager *v48; // rbx
  unsigned int v49; // esi
  unsigned int (__fastcall *v50)(CProcess *__hidden); // r14
  unsigned int TsSessionId; // eax
  void (*v52)(CDuckingManager *__hidden, unsigned int, unsigned int); // r12
  __int64 v55; // [rsp+48h] [rbp-61h] BYREF
  struct CAudioSessionManager *v56; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v57; // [rsp+58h] [rbp-51h]
  __int64 v58; // [rsp+60h] [rbp-49h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-41h] BYREF
  char v60; // [rsp+70h] [rbp-39h]
  CBackgroundSessionCallbacks *v61; // [rsp+78h] [rbp-31h]
  int v62; // [rsp+80h] [rbp-29h] BYREF
  char *v63; // [rsp+88h] [rbp-21h] BYREF
  unsigned int v64; // [rsp+90h] [rbp-19h]
  const struct _GUID *v65; // [rsp+98h] [rbp-11h]
  __int64 v66; // [rsp+A0h] [rbp-9h]
  GUID v67; // [rsp+A8h] [rbp-1h] BYREF

  v66 = -2LL;
  v65 = a3;
  lpCriticalSection = this;
  v56 = (struct CAudioSessionManager *)a6;
  v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v10 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v12 = (char *)NilString + 24;
  v63 = (char *)NilString + 24;
  v13 = *a3;
  v67 = *a3;
  v58 = 0LL;
  v55 = 0LL;
  v14 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, this, a4);
    v14 = WPP_GLOBAL_Control;
    *(_QWORD *)&v13.Data1 = *(_QWORD *)&v67.Data1;
  }
  v61 = *(CBackgroundSessionCallbacks **)&v13.Data1;
  if ( __PAIR128__(*(unsigned __int64 *)v67.Data4, *(unsigned __int64 *)&v13.Data1) != *(_OWORD *)&GUID_SystemSounds_AudioSessionId )
  {
    v15 = *(__int64 (__fastcall **)(CProcess *__hidden))(*(_QWORD *)a2 + 88LL);
    if ( v15 == CProcess::IsPackagedApp )
    {
      IsPackagedApp = CProcess::IsPackagedApp(a2);
    }
    else
    {
      IsPackagedApp = v15(a2);
      v14 = WPP_GLOBAL_Control;
    }
    a4 |= IsPackagedApp != 0 ? 0x20000000 : 0;
  }
  v17 = HIWORD(a4);
  LOBYTE(v17) = BYTE2(a4) & 1;
  v57 = v17;
  v64 = a4 & 0x60000000;
  v18 = (a4 >> 28) & 1;
  if ( (a4 & 0xA0000) == 0 )
    v18 |= 2u;
  if ( v14 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v14 + 7) & 0x100) != 0
    && *((_BYTE *)v14 + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)v14 + 2), 25LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, this, v18 & 2);
  }
  AudioSession = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   this[5].OwningThread,
                   &v58);
  if ( AudioSession < 0 )
    goto LABEL_133;
  if ( v55 != v58 )
  {
    v55 = 0LL;
    if ( v58 )
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v58)(v58, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v55);
  }
  if ( !v55 )
  {
    AudioSession = -2147467262;
    goto LABEL_133;
  }
  AudioSession = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v55 + 24LL))(v55, &v62);
  if ( AudioSession < 0 )
    goto LABEL_133;
  if ( v62 )
  {
    if ( v62 == 1 )
      v18 &= ~2u;
  }
  else
  {
    v18 |= 8u;
  }
  v20 = *(__int64 (__fastcall **)(CProcess *__hidden))(*(_QWORD *)a2 + 88LL);
  if ( v20 == CProcess::IsPackagedApp )
    v21 = CProcess::IsPackagedApp(a2);
  else
    v21 = v20(a2);
  if ( !v21 && (a4 & 0x2000000) != 0 )
    v18 |= 0x20u;
  v22 = lpCriticalSection;
  HIDWORD(lpCriticalSection[6].SpinCount) = a4;
  v23 = (unsigned __int8)v57;
  p_SpinCount = (__int64)&v22[1].SpinCount;
  AudioSession = CAudioEndpointId::Initialize(
                   (CAudioEndpointId *)&v22[1].SpinCount,
                   (const unsigned __int16 *)v22[5].OwningThread);
  if ( AudioSession < 0 )
  {
    v34 = a2;
    goto LABEL_58;
  }
  v25 = (__int64 *)&v22[2];
  if ( v23
    && __PAIR128__(*(unsigned __int64 *)v67.Data4, (unsigned __int64)v61) == *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 )
  {
    AudioSession = -2147024809;
  }
  else
  {
    if ( &v67 )
      v26 = v67;
    else
      v26 = GUID_00000000_0000_0000_0000_000000000000;
    *(GUID *)&v22[2].OwningThread = v26;
    if ( !v23 )
    {
      v27 = (_WORD *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v22[2].LockCount, v27, v28, v29);
      v30 = (_WORD *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
      ATL::CSimpleStringT<unsigned short,0>::SetString(v25, v30, v31, v32);
      p_SpinCount = (__int64)&v22[1].SpinCount;
    }
    LODWORD(v22[3].DebugInfo) = v23;
    AudioSession = CAppAudioSessionId::CalculateStaticId((const GUID *)v25);
    if ( AudioSession >= 0 )
      goto LABEL_50;
  }
  v33 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
    || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
  {
    goto LABEL_51;
  }
  WPP_SF_D(
    *((_QWORD *)WPP_GLOBAL_Control + 2),
    16LL,
    &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
    (unsigned int)AudioSession);
LABEL_50:
  v33 = WPP_GLOBAL_Control;
LABEL_51:
  if ( AudioSession < 0 )
  {
    v34 = a2;
    goto LABEL_60;
  }
  *(_DWORD *)(p_SpinCount + 64) = v23;
  if ( v23 )
  {
    *(_DWORD *)(p_SpinCount + 56) = 0;
    v34 = a2;
    v35 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
  }
  else
  {
    v22[3].LockCount = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    v35 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
    v34 = a2;
  }
  p_SpinCount = (__int64)&v22[1].SpinCount;
  v22[3].RecursionCount = v35;
  AudioSession = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)&v22[1].SpinCount);
  if ( AudioSession >= 0 )
    goto LABEL_64;
LABEL_58:
  v33 = WPP_GLOBAL_Control;
LABEL_60:
  if ( v33 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v33 + 28) & 0x40) != 0
    && *((_BYTE *)v33 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v33 + 2), 24LL, &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids, (unsigned int)AudioSession);
LABEL_64:
    v33 = WPP_GLOBAL_Control;
  }
  if ( AudioSession < 0 )
  {
LABEL_134:
    if ( v33 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v33 + 7) & 0x100) != 0
      && *((_BYTE *)v33 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v33 + 2), 31LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, (unsigned int)AudioSession);
    }
    goto LABEL_138;
  }
  AudioSession = CAudioSessionInstanceId::ToString(p_SpinCount, &v63);
  v12 = v63;
  if ( AudioSession < 0 )
  {
LABEL_133:
    v33 = WPP_GLOBAL_Control;
    goto LABEL_134;
  }
  v36 = (unsigned int)(*((_DWORD *)v63 - 4) + 1);
  if ( (unsigned __int64)(2 * v36) > 0x40000 )
  {
    *(_QWORD *)v56 = 0LL;
LABEL_132:
    AudioSession = -2147024882;
    goto LABEL_133;
  }
  ProcessHeap = GetProcessHeap();
  v38 = (char *)HeapAlloc(ProcessHeap, 0, 2 * v36);
  v39 = (void **)v56;
  *(_QWORD *)v56 = v38;
  if ( !v38 )
    goto LABEL_132;
  AudioSession = 0;
  if ( (unsigned __int64)(v36 - 1) > 0x7FFFFFFE )
    AudioSession = -2147024809;
  if ( AudioSession < 0 )
  {
    if ( !v36 )
      goto LABEL_83;
  }
  else
  {
    AudioSession = 0;
    if ( v36 )
    {
      v40 = 2147483646 - v36;
      v41 = v12 - v38;
      while ( v40 + v36 )
      {
        v42 = *(_WORD *)&v38[v41];
        if ( !v42 )
          break;
        *(_WORD *)v38 = v42;
        v38 += 2;
        if ( !--v36 )
          goto LABEL_80;
      }
    }
    else
    {
LABEL_80:
      v38 -= 2;
      AudioSession = -2147024774;
    }
  }
  *(_WORD *)v38 = 0;
LABEL_83:
  if ( AudioSession < 0 )
  {
    operator delete(*v39);
    *v39 = 0LL;
    goto LABEL_133;
  }
  v61 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
  v60 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v43 = g_SingletonAudioSessionManagerProvider;
  if ( !g_SingletonAudioSessionManagerProvider )
  {
    if ( v60 )
      LeaveCriticalSection(lpCriticalSection);
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids);
      v33 = WPP_GLOBAL_Control;
    }
    AudioSession = -2004287487;
    goto LABEL_134;
  }
  v61 = g_SingletonAudioSessionManagerProvider;
  (*(void (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL))(g_SingletonAudioSessionManagerProvider);
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      26LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      v22[5].OwningThread);
  }
  v44 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v43 + 40LL);
  if ( v44 == CAudioSessionManagerProvider::GetAudioSessionManager )
    AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(
                            v43,
                            (const unsigned __int16 *)v22[5].OwningThread,
                            &v56);
  else
    AudioSessionManager = v44(v43, (const unsigned __int16 *)v22[5].OwningThread, &v56);
  AudioSession = AudioSessionManager;
  if ( AudioSessionManager < 0 )
  {
    (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v43 + 16LL))(v43);
    goto LABEL_133;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      27LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      v22[3].SpinCount);
  }
  SpinCount = v22[3].SpinCount;
  if ( SpinCount )
  {
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(v22[3].SpinCount);
    v22[3].SpinCount = 0LL;
  }
  v47 = v56;
  v22[3].SpinCount = (ULONG_PTR)v56;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v47);
  }
  (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v43 + 16LL))(v43);
  v48 = g_DuckingManager;
  if ( g_DuckingManager )
  {
    v49 = a5;
    if ( a5 > 3 )
      v49 = 1;
    v50 = *(unsigned int (__fastcall **)(CProcess *__hidden))(*(_QWORD *)a2 + 48LL);
    if ( v50 == CProcess::GetTsSessionId )
    {
      TsSessionId = CProcess::GetTsSessionId(a2);
    }
    else
    {
      TsSessionId = v50(a2);
      v48 = g_DuckingManager;
    }
    v52 = *(void (**)(CDuckingManager *__hidden, unsigned int, unsigned int))(*(_QWORD *)v48 + 48LL);
    if ( v52 == CDuckingManager::SetUserDuckingPreference )
      CDuckingManager::SetUserDuckingPreference(v48, v49, TsSessionId);
    else
      ((void (__fastcall *)(CDuckingManager *, _QWORD, _QWORD))v52)(v48, v49, TsSessionId);
    v34 = a2;
  }
  if ( (_BYTE)v57
    && *(_QWORD *)&v65->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1
    && *(_QWORD *)v65->Data4 == *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4 )
  {
    v18 |= 4u;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v22);
  }
  AudioSession = CAudioSessionManager::CreateAudioSession(
                   (CAudioSessionManager *)v22[3].SpinCount,
                   v34,
                   (struct CAudioSessionInstanceId *)&v22[1].SpinCount,
                   v18,
                   v64,
                   (unsigned int)v22[1].LockSemaphore,
                   (struct CAudioSession **)&v22[4].LockCount);
  if ( AudioSession < 0 )
    goto LABEL_133;
LABEL_138:
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  if ( v58 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v12 - 3) + 8LL))(*((_QWORD *)v12 - 3), v12 - 24);
  return (unsigned int)AudioSession;
}
