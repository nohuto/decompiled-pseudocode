/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A040
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800163D0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800190D0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x18007F590 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180080C80 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x18000B770 (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x18000B7E0 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x18000BA58 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18000BAA4 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18000BB70 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x18000E7C0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x18000FE10 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x1800137F0 (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017740 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180017970 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800179E0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180019590 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@H@Z @ 0x18001A544 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_SS @ 0x18007E86C (WPP_SF_SS.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x18007EBE0 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  char v7; // bl
  struct CAudioSessionInstanceId *v8; // r14
  struct IAudioProcess *v9; // rsi
  CAudioSessionManager *v10; // r13
  struct CAudioSession *v11; // rdi
  _QWORD *v12; // r12
  struct ATL::CStringData *(__fastcall *v13)(ATL::CAtlStringMgr *); // rbx
  struct ATL::CStringData *NilString; // rax
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  wchar_t *v18; // rbx
  __int64 v19; // rdi
  unsigned int v20; // edi
  wchar_t *v21; // rcx
  wchar_t i; // ax
  unsigned int v23; // esi
  __int64 Node; // rbx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  int AudioSession; // esi
  __int64 result; // rax
  ATL::CAtlStringMgr *v30; // rdi
  void (__fastcall *v31)(ATL::CAtlStringMgr *, struct ATL::CStringData *); // rsi
  HANDLE ProcessHeap; // rax
  CPerStreamVolumeAudioSession *v33; // rax
  __int64 (__fastcall *v34)(CProcess **, struct IAudioProcess *, struct CAudioSessionInstanceId *, unsigned int, unsigned int, unsigned int); // rbx
  int v35; // eax
  char v36; // r12
  __int64 (__fastcall *v37)(CAudioSession *, struct ISessionInternalEvents *); // rbx
  int v38; // eax
  __int64 (__fastcall *v39)(CAudioSession *, struct ISessionInternalEvents *); // rbx
  int v40; // eax
  unsigned int *v41; // rbx
  CPerEndpointVolumeAudioSession *v42; // rax
  char v43; // [rsp+30h] [rbp-98h]
  wchar_t *String; // [rsp+38h] [rbp-90h] BYREF
  int v45; // [rsp+40h] [rbp-88h] BYREF
  struct CAudioSession *v46; // [rsp+48h] [rbp-80h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-78h] BYREF
  char v48; // [rsp+58h] [rbp-70h]
  struct CAudioSession *v49; // [rsp+60h] [rbp-68h] BYREF
  CPerStreamVolumeAudioSession *v50; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v51; // [rsp+70h] [rbp-58h] BYREF
  ATL::CAtlException *v52[10]; // [rsp+78h] [rbp-50h] BYREF

  v52[1] = (ATL::CAtlException *)-2LL;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = this;
  v43 = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xBu,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v10 + 24);
  v48 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v11 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 24));
  v12 = (_QWORD *)((char *)v10 + 64);
  if ( ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
         (__int64)v10 + 64,
         (__int64)v8,
         &v51,
         (unsigned int *)&v45,
         &v50) )
  {
    v13 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
    if ( v13 == ATL::CAtlStringMgr::GetNilString )
      NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    else
      NilString = v13((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    String = (wchar_t *)((char *)NilString + 24);
    v15 = CAudioSessionInstanceId::ToString((__int64)v8, &String);
    v18 = String;
    if ( v15 < 0 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)String - 2, 0xFFFFFFFF) <= 1 )
      {
        v30 = (ATL::CAtlStringMgr *)*((_QWORD *)v18 - 3);
        v31 = *(void (__fastcall **)(ATL::CAtlStringMgr *, struct ATL::CStringData *))(*(_QWORD *)v30 + 8LL);
        if ( v31 == ATL::CAtlStringMgr::Free )
          ATL::CAtlStringMgr::Free(v30, (struct ATL::CStringData *)(v18 - 12));
        else
          v31(*((ATL::CAtlStringMgr **)v18 - 3), (struct ATL::CStringData *)(v18 - 12));
      }
      v20 = 0;
    }
    else
    {
      v19 = *((int *)String - 4);
      if ( ((1 - *((_DWORD *)String - 2)) | (*((_DWORD *)String - 3) - (int)v19)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((int **)&String, v19, v16, v17);
        v18 = String;
      }
      _wcsupr_s(v18, (int)v19 + 1);
      if ( (int)v19 < 0 || (int)v19 > *((_DWORD *)v18 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v18 - 4) = v19;
      v18[v19] = 0;
      v20 = 0;
      v21 = v18;
      for ( i = *v18; *v21; i = *v21 )
      {
        v20 = i + 33 * v20;
        ++v21;
      }
      ATL::CStringData::Release((ATL::CStringData *)(v18 - 12));
    }
    if ( *((_DWORD *)v10 + 20) == 17 )
      v23 = v20 % 0x11;
    else
      v23 = v20 % *((_DWORD *)v10 + 20);
    if ( *v12 && (Node = *(_QWORD *)(*v12 + 8LL * v23)) != 0 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(Node + 96) == v20 && !_wcsicmp(*(const wchar_t **)Node, *(const wchar_t **)v8) )
        {
          v25 = *(_DWORD *)(Node + 64);
          if ( v25 == *((_DWORD *)v8 + 16) && (v25 || *(_DWORD *)(Node + 56) == *((_DWORD *)v8 + 14)) )
          {
            v26 = *(_DWORD *)(Node + 48);
            if ( v26 == *((_DWORD *)v8 + 12)
              && (v26 || !_wcsicmp(*(const wchar_t **)(Node + 8), *((const wchar_t **)v8 + 1))) )
            {
              v27 = *(_QWORD *)(Node + 24) - *((_QWORD *)v8 + 3);
              if ( !v27 )
                v27 = *(_QWORD *)(Node + 32) - *((_QWORD *)v8 + 4);
              if ( !v27 )
                break;
            }
          }
        }
        Node = *(_QWORD *)(Node + 88);
        if ( !Node )
          goto LABEL_76;
      }
    }
    else
    {
LABEL_76:
      Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
               (__int64)v10 + 64,
               v8,
               v23,
               v20);
    }
    v11 = *(struct CAudioSession **)(Node + 80);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_SS(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        10,
        (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        0,
        *((_QWORD *)v8 + 9));
    }
    if ( v11 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v11 + 8LL))(v11);
    v9 = a2;
    v7 = a4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 24));
  v49 = v11;
  if ( v11 )
  {
    AudioSession = 0;
    if ( (v7 & 0x20) != 0 )
      *((_DWORD *)v11 + 114) = 1;
    goto LABEL_39;
  }
  LeaveCriticalSection(lpCriticalSection);
  v48 = 0;
  if ( (v7 & 8) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    v33 = (CPerStreamVolumeAudioSession *)HeapAlloc(ProcessHeap, 0, 0x380uLL);
    v50 = v33;
    if ( v33 )
      v11 = CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession(v33);
    else
      v11 = 0LL;
  }
  else
  {
    v42 = (CPerEndpointVolumeAudioSession *)operator new(0x348uLL);
    v50 = v42;
    if ( v42 )
      v11 = CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession(v42);
    else
      v11 = 0LL;
  }
  v46 = v11;
  if ( !v11 )
  {
    AudioSession = -2147024882;
LABEL_90:
    v36 = 0;
    goto LABEL_91;
  }
  v34 = *(__int64 (__fastcall **)(CProcess **, struct IAudioProcess *, struct CAudioSessionInstanceId *, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v11 + 192LL);
  if ( v34 == CAudioSession::FinishConstruction )
    v35 = CAudioSession::FinishConstruction((CProcess **)v11, v9, v8, a4, a5, a6);
  else
    v35 = v34((CProcess **)v11, v9, v8, a4, a5, a6);
  AudioSession = v35;
  if ( v35 < 0 )
    goto LABEL_90;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  AudioSession = CAudioSessionManager::FindAudioSession(v10, v8, &v49, 1);
  if ( AudioSession >= 0 )
  {
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v11 + 16LL))(v11);
    v11 = v49;
LABEL_39:
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v11 + 208LL))(v11);
    goto LABEL_40;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      12,
      (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      0,
      *((_QWORD *)v8 + 9));
  }
  try
  {
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
      (__int64)v10 + 64,
      v8,
      &v46);
  }
  catch ( ATL::CAtlException *v52 )
  {
    v41 = (unsigned int *)v52[0];
    if ( *(_DWORD *)v52[0] == -1073741571 )
      _resetstkoflw();
    v45 = *v41;
    AudioSession = v45;
    v10 = this;
    v8 = a3;
    v11 = v46;
    if ( v45 >= 0 )
    {
      v43 = 0;
      goto LABEL_60;
    }
    v36 = 0;
    v43 = 0;
LABEL_91:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        14LL,
        &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        (unsigned int)AudioSession);
    }
    if ( v36
      && ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
           (__int64)v10 + 64,
           (__int64)v8) )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0xFu,
          (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
      }
      if ( v43 )
        (*(void (__fastcall **)(struct CAudioSession *, CAudioSessionManager *))(*(_QWORD *)v11 + 184LL))(v11, v10);
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v11 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v11 + 16LL))(v11);
    v11 = 0LL;
LABEL_40:
    *a7 = v11;
    if ( AudioSession < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        13LL,
        &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        (unsigned int)AudioSession);
    }
    if ( v48 )
      LeaveCriticalSection(lpCriticalSection);
    result = (unsigned int)AudioSession;
  }
LABEL_60:
  (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v11 + 8LL))(v11);
  v36 = 1;
  v37 = *(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v11 + 176LL);
  if ( v37 == CAudioSession::AddSessionNotification )
    v38 = CAudioSession::AddSessionNotification(v11, v10);
  else
    v38 = v37(v11, v10);
  AudioSession = v38;
  if ( v38 >= 0 )
  {
    v43 = 1;
    v39 = *(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v11 + 176LL);
    v40 = v39 == CAudioSession::AddSessionNotification
        ? CAudioSession::AddSessionNotification(v11, g_PolicyEventsHandler)
        : v39(v11, g_PolicyEventsHandler);
    AudioSession = v40;
    if ( v40 >= 0 )
    {
      CAudioSessionManager::NotifyActiveSession(v10, v11);
      goto LABEL_40;
    }
  }
  goto LABEL_91;
}
