/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18000C060 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x18000F460 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180062150 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180063590 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ @ 0x180003000 (-Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x180003050 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x180008B80 (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18000FB70 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180010DAC (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800117D0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180012460 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800124C0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012BE0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180012FC0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180014D80 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180015E90 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x18002C19C (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18002C1E8 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800503F8 (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_SS @ 0x1800615EC (WPP_SF_SS.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  __int64 *v7; // r12
  struct CAudioSession *v9; // r15
  char *v10; // rbx
  struct ATL::CStringData *(__fastcall *v11)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rdi
  unsigned int v15; // edi
  __int64 *v16; // rcx
  unsigned __int16 i; // ax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rbx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  struct ATL::CStringData *(__fastcall *v24)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  volatile signed __int32 *v26; // rbx
  __int64 v27; // rdi
  unsigned int v28; // edi
  unsigned __int16 *v29; // rcx
  unsigned __int16 j; // ax
  char *v31; // r14
  unsigned int v32; // esi
  __int64 Node; // rbx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  struct CAudioSession *v37; // rbx
  int AudioSession; // edi
  __int64 (__fastcall *v39)(CPerEndpointVolumeAudioSession *); // rax
  __int64 *v41; // rdx
  void (*v42)(void); // rax
  HANDLE *v43; // rcx
  ATL::CAtlStringMgr **v44; // rdx
  void (*v45)(void); // rax
  HANDLE ProcessHeap; // rax
  CPerStreamVolumeAudioSession *v47; // rax
  __int64 (__usercall *v48)@<rax>(CAudioSession *__hidden@<rcx>, struct IAudioProcess *@<rdx>, struct CAudioSessionInstanceId *@<r8>, unsigned int@<r9d>, unsigned int, unsigned int); // rax
  int v49; // eax
  CAudioSessionManager *v50; // rsi
  char v51; // r15
  int (*v52)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int v53; // eax
  int (*v54)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int v55; // eax
  __int64 (__fastcall *v56)(CAudioSession *__hidden, unsigned int *); // rax
  int ProcessId; // eax
  CPerEndpointVolumeAudioSession *v58; // rax
  ATL::CAtlException *v59; // rbx
  char v60; // [rsp+40h] [rbp-128h]
  signed int v62; // [rsp+44h] [rbp-124h]
  struct CAudioSession *v63; // [rsp+48h] [rbp-120h] BYREF
  unsigned int v64; // [rsp+50h] [rbp-118h] BYREF
  __int64 *v65; // [rsp+58h] [rbp-110h] BYREF
  volatile signed __int32 *v66; // [rsp+60h] [rbp-108h] BYREF
  char *v67; // [rsp+68h] [rbp-100h]
  struct CAudioSession *v68; // [rsp+70h] [rbp-F8h] BYREF
  LPCRITICAL_SECTION v69; // [rsp+78h] [rbp-F0h] BYREF
  char v70; // [rsp+80h] [rbp-E8h]
  CAudioSessionManager *v71; // [rsp+88h] [rbp-E0h]
  struct IAudioProcess *v72; // [rsp+90h] [rbp-D8h]
  CAudioSessionManager *v73; // [rsp+98h] [rbp-D0h]
  struct CAudioSessionInstanceId *v74; // [rsp+A0h] [rbp-C8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A8h] [rbp-C0h] BYREF
  char v76; // [rsp+B0h] [rbp-B8h]
  struct CAudioSession **v77; // [rsp+B8h] [rbp-B0h]
  _DWORD v78[2]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-A0h]
  __int64 v80; // [rsp+D0h] [rbp-98h]
  ATL::CAtlException *v81; // [rsp+D8h] [rbp-90h] BYREF
  void *v82; // [rsp+E0h] [rbp-88h] BYREF
  int v83; // [rsp+E8h] [rbp-80h]
  int v84; // [rsp+ECh] [rbp-7Ch]
  void *v85; // [rsp+F0h] [rbp-78h]
  int v86; // [rsp+F8h] [rbp-70h]
  int v87; // [rsp+FCh] [rbp-6Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp-68h] BYREF
  unsigned int *v89; // [rsp+110h] [rbp-58h]
  __int64 v90; // [rsp+118h] [rbp-50h]

  v80 = -2LL;
  v7 = (__int64 *)a3;
  v72 = a2;
  v71 = this;
  v73 = this;
  v74 = a3;
  v77 = a7;
  v60 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids);
  }
  v69 = (LPCRITICAL_SECTION)((char *)this + 24);
  v70 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v69);
  v9 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v76 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v10 = (char *)this + 64;
  v67 = (char *)this + 64;
  v11 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v11 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(&dword_1800CB020);
    v12 = &qword_1800CB010;
  }
  else
  {
    v12 = (__int64 *)v11((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  v65 = v12 + 3;
  if ( (int)CAudioSessionInstanceId::ToString(v7, &v65) < 0 )
  {
    v41 = v65 - 3;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v65 - 2, 0xFFFFFFFF) <= 1 )
    {
      v42 = *(void (**)(void))(*(_QWORD *)*v41 + 8LL);
      if ( (char *)v42 == (char *)ATL::CAtlStringMgr::Free
        && (v43 = *(HANDLE **)(*v41 + 8),
            v42 = (void (*)(void))*((_QWORD *)*v43 + 1),
            (char *)v42 == (char *)ATL::CWin32Heap::Free) )
      {
        HeapFree(v43[1], 0, v41);
      }
      else
      {
        v42();
      }
    }
    v15 = 0;
  }
  else
  {
    v13 = v65;
    v14 = *((int *)v65 - 4);
    if ( ((1 - *((_DWORD *)v65 - 2)) | (*((_DWORD *)v65 - 3) - (int)v14)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v65, (unsigned int)v14);
      v13 = v65;
    }
    _o__wcsupr_s(v13, (int)v14 + 1);
    if ( (int)v14 < 0 || (int)v14 > *((_DWORD *)v13 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v13 - 4) = v14;
    *((_WORD *)v13 + v14) = 0;
    v15 = 0;
    v16 = v13;
    for ( i = *(_WORD *)v13; *(_WORD *)v16; i = *(_WORD *)v16 )
    {
      v15 = i + 33 * v15;
      v16 = (__int64 *)((char *)v16 + 2);
    }
    ATL::CStringData::Release((ATL::CStringData *)(v13 - 3));
    v10 = v67;
  }
  if ( *((_DWORD *)v10 + 4) == 17 )
    v18 = v15 % 0x11;
  else
    v18 = v15 % *((_DWORD *)v10 + 4);
  v19 = *(_QWORD *)v10;
  if ( v19 )
  {
    v20 = *(_QWORD *)(v19 + 8 * v18);
    if ( v20 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v20 + 96) == v15 && !(unsigned int)_o__wcsicmp(*(_QWORD *)v20, *v7) )
        {
          v21 = *(_DWORD *)(v20 + 64);
          if ( v21 == *((_DWORD *)v7 + 16) && (v21 || *(_DWORD *)(v20 + 56) == *((_DWORD *)v7 + 14)) )
          {
            v22 = *(_DWORD *)(v20 + 48);
            if ( v22 == *((_DWORD *)v7 + 12) && (v22 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(v20 + 8), v7[1])) )
            {
              v23 = *(_QWORD *)(v20 + 24) - v7[3];
              if ( !v23 )
                v23 = *(_QWORD *)(v20 + 32) - v7[4];
              if ( !v23 )
                break;
            }
          }
        }
        v20 = *(_QWORD *)(v20 + 88);
        if ( !v20 )
          goto LABEL_114;
      }
      v24 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
      if ( v24 == ATL::CAtlStringMgr::GetNilString )
        NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        NilString = v24((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      v66 = (volatile signed __int32 *)((char *)NilString + 24);
      if ( (int)CAudioSessionInstanceId::ToString(v7, &v66) < 0 )
      {
        v44 = (ATL::CAtlStringMgr **)(v66 - 6);
        if ( _InterlockedExchangeAdd(v66 - 2, 0xFFFFFFFF) <= 1 )
        {
          v45 = *(void (**)(void))(*(_QWORD *)*v44 + 8LL);
          if ( (char *)v45 == (char *)ATL::CAtlStringMgr::Free )
            ATL::CAtlStringMgr::Free(*v44, (struct ATL::CStringData *)v44);
          else
            v45();
        }
        v28 = 0;
      }
      else
      {
        v26 = v66;
        v27 = *((int *)v66 - 4);
        if ( ((1 - *((_DWORD *)v66 - 2)) | (*((_DWORD *)v66 - 3) - (int)v27)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v66, (unsigned int)v27);
          v26 = v66;
        }
        _o__wcsupr_s(v26, (int)v27 + 1);
        if ( (int)v27 < 0 || (int)v27 > *((_DWORD *)v26 - 3) )
          ATL::AtlThrowImpl(-2147024809);
        *((_DWORD *)v26 - 4) = v27;
        *((_WORD *)v26 + v27) = 0;
        v28 = 0;
        v29 = (unsigned __int16 *)v26;
        for ( j = *(_WORD *)v26; *v29; j = *v29 )
        {
          v28 = j + 33 * v28;
          ++v29;
        }
        ATL::CStringData::Release((ATL::CStringData *)(v26 - 6));
      }
      v31 = v67;
      if ( *((_DWORD *)v67 + 4) == 17 )
        v32 = v28 % 0x11;
      else
        v32 = v28 % *((_DWORD *)v67 + 4);
      if ( *(_QWORD *)v67 && (Node = *(_QWORD *)(*(_QWORD *)v67 + 8LL * v32)) != 0 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(Node + 96) == v28 && !(unsigned int)_o__wcsicmp(*(_QWORD *)Node, *v7) )
          {
            v34 = *(_DWORD *)(Node + 64);
            if ( v34 == *((_DWORD *)v7 + 16) && (v34 || *(_DWORD *)(Node + 56) == *((_DWORD *)v7 + 14)) )
            {
              v35 = *(_DWORD *)(Node + 48);
              if ( v35 == *((_DWORD *)v7 + 12) && (v35 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(Node + 8), v7[1])) )
              {
                v36 = *(_QWORD *)(Node + 24) - v7[3];
                if ( !v36 )
                  v36 = *(_QWORD *)(Node + 32) - v7[4];
                if ( !v36 )
                  break;
              }
            }
          }
          Node = *(_QWORD *)(Node + 88);
          if ( !Node )
            goto LABEL_128;
        }
      }
      else
      {
LABEL_128:
        Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
                 v31,
                 v7,
                 v32,
                 v28);
      }
      v9 = *(struct CAudioSession **)(Node + 80);
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10,
          (unsigned int)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
          0,
          v7[9]);
      }
      if ( v9 )
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v9 + 8LL))(v9);
    }
    else
    {
LABEL_114:
      v31 = v67;
    }
    v37 = v9;
    v68 = v9;
    if ( v9 )
    {
      AudioSession = 0;
      goto LABEL_59;
    }
  }
  else
  {
    v37 = 0LL;
    v68 = 0LL;
    v31 = v67;
  }
  AudioSession = -2147024894;
LABEL_59:
  if ( v76 )
    LeaveCriticalSection(lpCriticalSection);
  if ( AudioSession >= 0 )
  {
    if ( (a4 & 0x20) != 0 )
      *((_DWORD *)v9 + 152) = 1;
    goto LABEL_64;
  }
  LeaveCriticalSection(v69);
  v70 = 0;
  if ( (a4 & 8) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    v47 = (CPerStreamVolumeAudioSession *)HeapAlloc(ProcessHeap, 0, 0x460uLL);
    v63 = v47;
    if ( v47 )
      v37 = CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession(v47);
    else
      v37 = 0LL;
  }
  else
  {
    v58 = (CPerEndpointVolumeAudioSession *)operator new(0x428uLL);
    v63 = v58;
    if ( v58 )
      v37 = CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession(v58);
    else
      v37 = 0LL;
  }
  v63 = v37;
  if ( !v37 )
  {
    AudioSession = -2147024882;
LABEL_139:
    v51 = 0;
    v50 = v71;
LABEL_140:
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
        (unsigned int)AudioSession);
    }
    if ( v51
      && (unsigned __int8)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
                            (char *)v50 + 64,
                            v7) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids);
      }
      if ( v60 )
        (*(void (__fastcall **)(struct CAudioSession *, CAudioSessionManager *))(*(_QWORD *)v37 + 184LL))(v37, v50);
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v37 + 16LL))(v37);
    }
    if ( v37 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v37 + 16LL))(v37);
    v37 = 0LL;
    goto LABEL_66;
  }
  v48 = *(__int64 (__usercall **)@<rax>(CAudioSession *__hidden@<rcx>, struct IAudioProcess *@<rdx>, struct CAudioSessionInstanceId *@<r8>, unsigned int@<r9d>, unsigned int, unsigned int))(*(_QWORD *)v37 + 192LL);
  if ( v48 == CAudioSession::FinishConstruction )
    v49 = CAudioSession::FinishConstruction(v37, v72, (struct CAudioSessionInstanceId *)v7, a4, a5, a6);
  else
    v49 = ((__int64 (__fastcall *)(struct CAudioSession *, struct IAudioProcess *, __int64 *, _QWORD, unsigned int, unsigned int))v48)(
            v37,
            v72,
            v7,
            a4,
            a5,
            a6);
  AudioSession = v49;
  if ( v49 < 0 )
    goto LABEL_139;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v69);
  v50 = v71;
  AudioSession = CAudioSessionManager::FindAudioSession(v71, (struct CAudioSessionInstanceId *)v7, &v68);
  if ( AudioSession >= 0 )
  {
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v37 + 16LL))(v37);
    v37 = v68;
LABEL_64:
    v39 = *(__int64 (__fastcall **)(CPerEndpointVolumeAudioSession *))(*(_QWORD *)v37 + 208LL);
    if ( v39 == CPerEndpointVolumeAudioSession::Reused )
      CPerEndpointVolumeAudioSession::Reused(v37);
    else
      v39(v37);
    goto LABEL_66;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12,
      (unsigned int)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
      0,
      v7[9]);
  }
  try
  {
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
      v31,
      v7,
      &v63);
  }
  catch ( ATL::CAtlException *v81 )
  {
    v59 = v81;
    if ( *(_DWORD *)v81 == -1073741571 )
      _o__resetstkoflw();
    v62 = *(_DWORD *)v59;
    AudioSession = *(_DWORD *)v59;
    v37 = v63;
    v50 = v73;
    v7 = (__int64 *)v74;
    v60 = 0;
    if ( v62 < 0 )
    {
      v51 = 0;
      goto LABEL_140;
    }
  }
  (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v37 + 8LL))(v37);
  v51 = 1;
  v52 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v37 + 176LL);
  if ( v52 == CAudioSession::AddSessionNotification )
    v53 = CAudioSession::AddSessionNotification(v37, v50);
  else
    v53 = ((__int64 (__fastcall *)(struct CAudioSession *, CAudioSessionManager *))v52)(v37, v50);
  AudioSession = v53;
  if ( v53 < 0 )
    goto LABEL_140;
  v60 = 1;
  v54 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v37 + 176LL);
  v55 = v54 == CAudioSession::AddSessionNotification
      ? CAudioSession::AddSessionNotification(v37, g_PolicyEventsHandler)
      : ((__int64 (__fastcall *)(struct CAudioSession *, struct ISessionInternalEvents *))v54)(
          v37,
          g_PolicyEventsHandler);
  AudioSession = v55;
  if ( v55 < 0 )
    goto LABEL_140;
  CAudioSessionManager::NotifyActiveSession(v50, v37);
  v68 = v37;
  v56 = *(__int64 (__fastcall **)(CAudioSession *__hidden, unsigned int *))(*(_QWORD *)v37 + 120LL);
  if ( v56 == CAudioSession::GetProcessId )
    ProcessId = CAudioSession::GetProcessId(v37, &v64);
  else
    ProcessId = v56(v37, &v64);
  if ( ProcessId >= 0 && dword_1800CA040 > 4u )
  {
    TlgCreateWsz(&pDesc, *((LPCWSTR *)v37 + 107));
    v89 = &v64;
    v90 = 4LL;
    v78[0] = ((unsigned int)&unk_1800A7F66 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v78[1] = 4;
    v79 = 0LL;
    v82 = off_1800CA048;
    v83 = *(unsigned __int16 *)off_1800CA048;
    v84 = 2;
    v85 = &unk_1800A7F71;
    v86 = 54;
    v87 = 1;
    EtwEventWriteTransfer(qword_1800CA060, v78, 0LL, 0LL, 4, &v82);
    v37 = v68;
  }
LABEL_66:
  *v77 = v37;
  if ( AudioSession < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSession", 0x186u, AudioSession);
  if ( v70 )
  {
    LeaveCriticalSection(v69);
    v70 = 0;
  }
  return (unsigned int)AudioSession;
}
