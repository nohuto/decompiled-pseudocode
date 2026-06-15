/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800171B0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180016310 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180024BE0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x18007A7B0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x18007BE10 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x180013EA0 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x1800140E0 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18001412C (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180014BB0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x1800168A0 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@H@Z @ 0x1800178A0 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x1800188F0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180018960 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180025A10 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x1800279F0 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x1800357E0 (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x180065D8C (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_SS @ 0x180079A8C (WPP_SF_SS.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x180079E00 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
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
  unsigned int v7; // esi
  struct CAudioSessionInstanceId *v8; // r14
  CAudioSessionManager *v9; // r15
  struct CAudioSession *v10; // rdi
  struct ATL::CStringData *(__fastcall *v11)(ATL::CAtlStringMgr *__hidden); // rbx
  struct ATL::CStringData *NilString; // rax
  int v13; // eax
  wchar_t *v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // esi
  wchar_t *v17; // rcx
  wchar_t i; // ax
  ATL::CAtlStringMgr *v19; // rdi
  void (*v20)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rsi
  char *v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rdi
  __int64 Node; // rdi
  int v25; // eax
  int v26; // eax
  int AudioSession; // esi
  HANDLE ProcessHeap; // rax
  CPerStreamVolumeAudioSession *v29; // rax
  CPerEndpointVolumeAudioSession *v30; // rax
  __int64 (__usercall *v31)@<rax>(CAudioSession *__hidden@<rcx>, struct IAudioProcess *@<rdx>, struct CAudioSessionInstanceId *@<r8>, unsigned int@<r9d>, unsigned int, unsigned int); // rbx
  int v32; // eax
  int (*v33)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rbx
  int v34; // eax
  int (*v35)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rbx
  int v36; // eax
  char v37; // bl
  unsigned int *v39; // rbx
  char v40; // [rsp+30h] [rbp-98h]
  char v41; // [rsp+31h] [rbp-97h]
  wchar_t *String; // [rsp+38h] [rbp-90h] BYREF
  int v43; // [rsp+40h] [rbp-88h] BYREF
  struct CAudioSession *v44; // [rsp+48h] [rbp-80h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-78h] BYREF
  char v46; // [rsp+58h] [rbp-70h]
  struct CAudioSession *v47; // [rsp+60h] [rbp-68h] BYREF
  CPerStreamVolumeAudioSession *v48; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-58h] BYREF
  ATL::CAtlException *v50[10]; // [rsp+78h] [rbp-50h] BYREF

  v50[1] = (ATL::CAtlException *)-2LL;
  v7 = a4;
  v8 = a3;
  v9 = this;
  v40 = 0;
  v41 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v9 + 24);
  v46 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v10 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v9 + 24));
  if ( ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
         (__int64)v9 + 64,
         (__int64)v8,
         &v49,
         (unsigned int *)&v43,
         &v48) )
  {
    v11 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
    if ( v11 == ATL::CAtlStringMgr::GetNilString )
      NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    else
      NilString = v11((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    String = (wchar_t *)((char *)NilString + 24);
    v13 = CAudioSessionInstanceId::ToString((__int64)v8, &String);
    v14 = String;
    if ( v13 < 0 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)String - 2, 0xFFFFFFFF) <= 1 )
      {
        v19 = (ATL::CAtlStringMgr *)*((_QWORD *)v14 - 3);
        v20 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(*(_QWORD *)v19 + 8LL);
        if ( v20 == ATL::CAtlStringMgr::Free )
          ATL::CAtlStringMgr::Free(v19, (struct ATL::CStringData *)(v14 - 12));
        else
          ((void (__fastcall *)(_QWORD, wchar_t *))v20)(*((_QWORD *)v14 - 3), v14 - 12);
      }
      v16 = 0;
    }
    else
    {
      v15 = *((int *)String - 4);
      if ( ((1 - *((_DWORD *)String - 2)) | (*((_DWORD *)String - 3) - (int)v15)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&String, (unsigned int)v15);
        v14 = String;
      }
      _wcsupr_s(v14, (int)v15 + 1);
      if ( (int)v15 < 0 || (int)v15 > *((_DWORD *)v14 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v14 - 4) = v15;
      v14[v15] = 0;
      v16 = 0;
      v17 = v14;
      for ( i = *v14; *v17; i = *v17 )
      {
        v16 = i + 33 * v16;
        ++v17;
      }
      ATL::CStringData::Release((ATL::CStringData *)(v14 - 12));
    }
    v21 = (char *)v9 + 64;
    v22 = v16 % *((_DWORD *)v9 + 20);
    v23 = *((_QWORD *)v9 + 8);
    if ( v23 && (Node = *(_QWORD *)(v23 + 8LL * (v16 % *((_DWORD *)v9 + 20)))) != 0 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(Node + 96) == v16 && !_wcsicmp(*(const wchar_t **)Node, *(const wchar_t **)v8) )
        {
          v25 = *(_DWORD *)(Node + 64);
          if ( v25 == *((_DWORD *)v8 + 16) && (v25 || *(_DWORD *)(Node + 56) == *((_DWORD *)v8 + 14)) )
          {
            v26 = *(_DWORD *)(Node + 48);
            if ( v26 == *((_DWORD *)v8 + 12)
              && (v26 || !_wcsicmp(*(const wchar_t **)(Node + 8), *((const wchar_t **)v8 + 1)))
              && *(_QWORD *)(Node + 24) == *((_QWORD *)v8 + 3)
              && *(_QWORD *)(Node + 32) == *((_QWORD *)v8 + 4) )
            {
              break;
            }
          }
        }
        Node = *(_QWORD *)(Node + 88);
        if ( !Node )
        {
          v21 = (char *)v9 + 64;
          goto LABEL_37;
        }
      }
    }
    else
    {
LABEL_37:
      Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
               v21,
               v8,
               v22,
               v16);
    }
    v10 = *(struct CAudioSession **)(Node + 80);
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10,
        (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        0,
        *((_QWORD *)v8 + 9));
    }
    if ( v10 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v10 + 8LL))(v10);
    v7 = a4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v9 + 24));
  v47 = v10;
  if ( v10 )
  {
    AudioSession = 0;
    if ( (a4 & 0x20) != 0 )
      *((_DWORD *)v10 + 152) = 1;
    goto LABEL_80;
  }
  LeaveCriticalSection(lpCriticalSection);
  v46 = 0;
  if ( (v7 & 8) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    v29 = (CPerStreamVolumeAudioSession *)HeapAlloc(ProcessHeap, 0, 0x418uLL);
    v48 = v29;
    if ( v29 )
      v10 = CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession(v29);
    else
      v10 = 0LL;
  }
  else
  {
    v30 = (CPerEndpointVolumeAudioSession *)operator new(0x3E0uLL);
    v48 = v30;
    if ( v30 )
      v10 = CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession(v30);
    else
      v10 = 0LL;
  }
  v44 = v10;
  if ( !v10 )
  {
    AudioSession = -2147024882;
LABEL_81:
    v37 = 0;
    goto LABEL_82;
  }
  v31 = *(__int64 (__usercall **)@<rax>(CAudioSession *__hidden@<rcx>, struct IAudioProcess *@<rdx>, struct CAudioSessionInstanceId *@<r8>, unsigned int@<r9d>, unsigned int, unsigned int))(*(_QWORD *)v10 + 192LL);
  if ( v31 == CAudioSession::FinishConstruction )
    v32 = CAudioSession::FinishConstruction(v10, a2, v8, v7, a5, a6);
  else
    v32 = ((__int64 (__fastcall *)(struct CAudioSession *, struct IAudioProcess *, struct CAudioSessionInstanceId *, _QWORD, unsigned int, unsigned int))v31)(
            v10,
            a2,
            v8,
            v7,
            a5,
            a6);
  AudioSession = v32;
  if ( v32 < 0 )
    goto LABEL_81;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  AudioSession = CAudioSessionManager::FindAudioSession(v9, v8, &v47, 1);
  if ( AudioSession >= 0 )
  {
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v10 + 16LL))(v10);
    v10 = v47;
LABEL_80:
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v10 + 208LL))(v10);
    goto LABEL_98;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12,
      (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      0,
      *((_QWORD *)v8 + 9));
  }
  try
  {
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
      (__int64)v9 + 64,
      v8,
      &v44);
  }
  catch ( ATL::CAtlException *v50 )
  {
    v39 = (unsigned int *)v50[0];
    if ( *(_DWORD *)v50[0] == -1073741571 )
      _resetstkoflw();
    v43 = *v39;
    AudioSession = v43;
    v9 = this;
    v8 = a3;
    v10 = v44;
    if ( v43 < 0 )
    {
      v40 = 0;
      v37 = 0;
      goto LABEL_82;
    }
    v41 = 0;
  }
  (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v10 + 8LL))(v10);
  v40 = 1;
  v33 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v10 + 176LL);
  if ( v33 == CAudioSession::AddSessionNotification )
    v34 = CAudioSession::AddSessionNotification(v10, v9);
  else
    v34 = ((__int64 (__fastcall *)(struct CAudioSession *, CAudioSessionManager *))v33)(v10, v9);
  AudioSession = v34;
  if ( v34 >= 0 )
  {
    v41 = 1;
    v35 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v10 + 176LL);
    v36 = v35 == CAudioSession::AddSessionNotification
        ? CAudioSession::AddSessionNotification(v10, g_PolicyEventsHandler)
        : ((__int64 (__fastcall *)(struct CAudioSession *, struct ISessionInternalEvents *))v35)(
            v10,
            g_PolicyEventsHandler);
    AudioSession = v36;
    if ( v36 >= 0 )
    {
      CAudioSessionManager::NotifyActiveSession(v9, v10);
      goto LABEL_98;
    }
  }
  v37 = v41;
LABEL_82:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      (unsigned int)AudioSession);
  }
  if ( v40
    && ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
         (__int64)v9 + 64,
         (__int64)v8) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
    }
    if ( v37 )
      (*(void (__fastcall **)(struct CAudioSession *, CAudioSessionManager *))(*(_QWORD *)v10 + 184LL))(v10, v9);
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v10 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v10 + 16LL))(v10);
  v10 = 0LL;
LABEL_98:
  *a7 = v10;
  if ( AudioSession < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      (unsigned int)AudioSession);
  }
  if ( v46 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)AudioSession;
}
