/*
 * XREFs of ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002AF60
 * Callers:
 *     ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18001B540 (-OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x18000238C (-GrowBuffer@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018814 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800188B0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x1800188F0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180018960 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?BelongsToPackagedApp@CAudioSession@@UEAAHXZ @ 0x180028950 (-BelongsToPackagedApp@CAudioSession@@UEAAHXZ.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x180028B20 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?IsCommunicationSession@CAudioSession@@UEAAHXZ @ 0x180028B50 (-IsCommunicationSession@CAudioSession@@UEAAHXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0CActiveAudioSession@@QEAA@PEBGH@Z @ 0x180038534 (--0CActiveAudioSession@@QEAA@PEBGH@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??A?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAAEAVCAudioSessionNotificationProcess@@_K@Z @ 0x18006637C (--A-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ??_GCActiveAudioSession@@QEAAPEAXI@Z @ 0x180066D50 (--_GCActiveAudioSession@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x1800A350C (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 *     WPP_SF_dddS @ 0x1800A3D14 (WPP_SF_dddS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDuckingManager::OnStateChanged(
        CDuckingManager *this,
        struct IAudioSessionInfo *a2,
        __int64 a3,
        enum _AudioSessionState a4)
{
  CAudioSession *v4; // r12
  CDuckingManager *v5; // r14
  unsigned int v6; // r13d
  TraceLoggingHProvider v7; // rcx
  __int64 (__fastcall *v8)(CAudioSession *); // rbx
  int v9; // eax
  CActiveAudioSession *i; // rsi
  struct ATL::CStringData *(__fastcall *v11)(ATL::CAtlStringMgr *); // rbx
  struct ATL::CStringData *NilString; // rax
  char *v13; // rdi
  struct ATL::CStringData *(__fastcall *v14)(ATL::CAtlStringMgr *); // rbx
  struct ATL::CStringData *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rbx
  char *v19; // r15
  __int64 v20; // rsi
  unsigned __int64 v21; // r13
  rsize_t v22; // rdx
  const unsigned __int16 *(__fastcall *v23)(CAudioSession *); // rsi
  __int64 v24; // r9
  const unsigned __int16 *v25; // r15
  __int64 v26; // rsi
  unsigned __int64 v27; // r8
  rsize_t v28; // rdx
  __int64 (__fastcall *v29)(CAudioSession *); // rdi
  int v30; // eax
  CActiveAudioSession *v31; // r9
  int v32; // esi
  TraceLoggingHProvider v33; // rcx
  __int64 *v34; // rsi
  __int64 v35; // rbx
  ATL::CAtlStringMgr *v36; // rcx
  HANDLE v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  ATL::CAtlStringMgr *v41; // rdi
  void (__fastcall *v42)(ATL::CAtlStringMgr *, struct ATL::CStringData *); // rsi
  __int64 v43; // rbx
  ATL::CAtlStringMgr *v44; // rdi
  void (__fastcall *v45)(ATL::CAtlStringMgr *, struct ATL::CStringData *); // rsi
  TraceLoggingHProvider v46; // rcx
  __int64 (__fastcall *v47)(CAudioSession *); // rbx
  int IsCommunicationSession; // eax
  int v49; // esi
  HANDLE ProcessHeap; // rax
  unsigned int v51; // edx
  CActiveAudioSession *v52; // rbx
  const unsigned __int16 *(__fastcall *v53)(CAudioSession *); // rdi
  const unsigned __int16 *Identifier; // rax
  CActiveAudioSession *v55; // rdi
  unsigned __int64 v56; // r15
  CActiveAudioSession **v57; // rcx
  ATL::CAtlException *v59; // rbx
  __int64 *v60; // rdx
  ATL::CAtlException *v61; // rbx
  ATL::CAtlException *v62; // rbx
  __int64 v63; // rax
  unsigned __int16 v64; // dx
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // r9
  __int64 v68; // r8
  __int64 v69; // r9
  _QWORD **v70; // rax
  errno_t v71; // eax
  __int64 v72; // [rsp+0h] [rbp-C8h] BYREF
  int v73; // [rsp+40h] [rbp-88h]
  int v74; // [rsp+44h] [rbp-84h]
  char *v75; // [rsp+48h] [rbp-80h] BYREF
  CActiveAudioSession *v76; // [rsp+50h] [rbp-78h]
  char *v77; // [rsp+58h] [rbp-70h] BYREF
  int v78; // [rsp+60h] [rbp-68h]
  void (__fastcall *v79)(ATL::CAtlStringMgr *, struct ATL::CStringData *); // [rsp+68h] [rbp-60h]
  __int64 v80; // [rsp+70h] [rbp-58h]
  ATL::CAtlException *v81; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v82; // [rsp+80h] [rbp-48h] BYREF
  ATL::CAtlException *v83; // [rsp+88h] [rbp-40h] BYREF

  v80 = -2LL;
  v4 = a2;
  v5 = this;
  v6 = 0;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v63 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *, struct IAudioSessionInfo *, __int64))(*(_QWORD *)a2 + 64LL))(
            a2,
            a2,
            a3);
    WPP_SF_dddS(*((_QWORD *)WPP_GLOBAL_Control + 2), *((_DWORD *)v5 + 73), *((_DWORD *)v5 + 72), v63);
    v7 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)v5 + 74) )
  {
    if ( v7 == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_DWORD *)v7 + 7) & 0x8000000) == 0
      || *((_BYTE *)v7 + 25) < 4u )
    {
      return 0LL;
    }
    v64 = 22;
    goto LABEL_107;
  }
  v8 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v4 + 40LL);
  if ( v8 == CAudioSession::BelongsToPackagedApp )
    v9 = CAudioSession::BelongsToPackagedApp(v4);
  else
    v9 = ((__int64 (__fastcall *)(CAudioSession *, struct IAudioSessionInfo *, __int64))v8)(v4, a2, a3);
  if ( v9 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      return 0LL;
    }
    v64 = 23;
LABEL_107:
    WPP_SF_(*((_QWORD *)v7 + 2), v64, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids);
    return 0LL;
  }
  if ( a4 == AudioSessionStateActive )
  {
    v47 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v4 + 48LL);
    if ( v47 == CAudioSession::IsCommunicationSession )
      IsCommunicationSession = CAudioSession::IsCommunicationSession(v4);
    else
      IsCommunicationSession = v47(v4);
    v49 = IsCommunicationSession;
    v74 = IsCommunicationSession;
    ProcessHeap = GetProcessHeap();
    v52 = (CActiveAudioSession *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
    v79 = (void (__fastcall *)(ATL::CAtlStringMgr *, struct ATL::CStringData *))v52;
    if ( v52 )
    {
      v53 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *))(*(_QWORD *)v4 + 64LL);
      if ( v53 == CAudioSession::GetIdentifier )
        Identifier = CAudioSession::GetIdentifier(v4);
      else
        Identifier = v53(v4);
      v55 = CActiveAudioSession::CActiveAudioSession(v52, Identifier, v49);
    }
    else
    {
      v55 = 0LL;
    }
    v76 = v55;
    if ( v55 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v55 - 16LL) )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
        v6 = 0;
        try
        {
          v56 = *((_QWORD *)v5 + 8);
          if ( v56 >= *((_QWORD *)v5 + 9)
            && !ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::GrowBuffer(
                  (__int64)v5 + 56,
                  v56 + 1) )
          {
            ATL::AtlThrowImpl(-2147024882);
          }
          v57 = (CActiveAudioSession **)(*((_QWORD *)v5 + 7) + 8 * v56);
          if ( v57 )
            *v57 = v55;
          ++*((_QWORD *)v5 + 8);
        }
        catch ( ATL::CAtlException *v82 )
        {
          v60 = &v72;
          v59 = v82;
          if ( *(_DWORD *)v82 == -1073741571 )
            _resetstkoflw();
          v73 = *(_DWORD *)v59;
          v6 = v73;
          if ( v73 < 0 )
          {
            CActiveAudioSession::`scalar deleting destructor'(v76, (unsigned int)v60);
            v5 = this;
            v4 = a2;
            v49 = v74;
LABEL_89:
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
            goto LABEL_90;
          }
          v5 = this;
          v4 = a2;
          v49 = v74;
        }
        if ( v49 )
        {
          v65 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v5 + 72);
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, v65);
          }
        }
        goto LABEL_89;
      }
      CActiveAudioSession::`scalar deleting destructor'(v55, v51);
    }
    v6 = -2147024882;
LABEL_90:
    if ( *((_DWORD *)v5 + 73) == 3 || !v49 && !*((_DWORD *)v5 + 72) )
      goto LABEL_93;
    v66 = (*(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v4 + 64LL))(v4);
    v67 = 1LL;
    v68 = *((unsigned int *)v5 + 72);
LABEL_162:
    v6 = CDuckingManager::QueueDuckingWorkItem((char *)v5 - 16, v66, v68, v67, 0);
LABEL_93:
    v46 = WPP_GLOBAL_Control;
    goto LABEL_94;
  }
  if ( a4 )
    return v6;
  v78 = 0;
  v74 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
  for ( i = 0LL; ; i = (CActiveAudioSession *)((char *)v76 + 1) )
  {
    v76 = i;
    if ( (unsigned __int64)i >= *((_QWORD *)v5 + 8) )
      break;
    v11 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
    if ( v11 == ATL::CAtlStringMgr::GetNilString )
      NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    else
      NilString = v11((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v13 = (char *)NilString + 24;
    v77 = (char *)NilString + 24;
    v14 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
    if ( v14 == ATL::CAtlStringMgr::GetNilString )
      v15 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    else
      v15 = v14((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v18 = (char *)v15 + 24;
    v75 = (char *)v15 + 24;
    try
    {
      if ( (unsigned __int64)i >= *((_QWORD *)v5 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      v19 = **(char ***)(*((_QWORD *)v5 + 7) + 8LL * (_QWORD)i);
      if ( !v19 )
        goto LABEL_126;
      v20 = -1LL;
      do
        ++v20;
      while ( *(_WORD *)&v19[2 * v20] );
      if ( (_DWORD)v20 )
      {
        v73 = *((_DWORD *)v13 - 4);
        v21 = (v19 - v13) >> 1;
        if ( ((1 - *((_DWORD *)v13 - 2)) | (*((_DWORD *)v13 - 3) - (int)v20)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v77, v20, v16, v17);
          v13 = v77;
        }
        v22 = 2LL * (int)v20;
        if ( v21 <= (unsigned int)v73 )
          memmove_s(v13, v22, &v13[2 * v21], v22);
        else
          memcpy_s(v13, v22, v19, v22);
        ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v77, v20);
      }
      else
      {
LABEL_126:
        ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)&v77);
        v13 = v77;
      }
    }
    catch ( ATL::CAtlException *v81 )
    {
      v61 = v81;
      if ( *(_DWORD *)v81 == -1073741571 )
        _resetstkoflw();
      v73 = *(_DWORD *)v61;
      v6 = v73;
      if ( v73 < 0 )
      {
LABEL_159:
        v5 = this;
        v4 = a2;
        v13 = v77;
        v18 = v75;
        goto LABEL_160;
      }
      v5 = this;
      v4 = a2;
      v13 = v77;
      v18 = v75;
    }
    v6 = 0;
    try
    {
      v23 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *))(*(_QWORD *)v4 + 64LL);
      if ( v23 == CAudioSession::GetIdentifier )
        v25 = CAudioSession::GetIdentifier(v4);
      else
        v25 = v23(v4);
      if ( !v25 )
        goto LABEL_131;
      v26 = -1LL;
      do
        ++v26;
      while ( v25[v26] );
      if ( (_DWORD)v26 )
      {
        v73 = *((_DWORD *)v18 - 4);
        v27 = ((char *)v25 - v18) >> 1;
        v79 = (void (__fastcall *)(ATL::CAtlStringMgr *, struct ATL::CStringData *))v27;
        if ( ((1 - *((_DWORD *)v18 - 2)) | (*((_DWORD *)v18 - 3) - (int)v26)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v75, v26, v27, v24);
          v18 = v75;
          v27 = (unsigned __int64)v79;
        }
        v28 = 2LL * (int)v26;
        if ( v27 <= (unsigned int)v73 )
          memmove_s(v18, v28, &v18[2 * v27], v28);
        else
          memcpy_s(v18, v28, v25, v28);
        ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v75, v26);
      }
      else
      {
LABEL_131:
        ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)&v75);
        v18 = v75;
      }
    }
    catch ( ATL::CAtlException *v83 )
    {
      v62 = v83;
      if ( *(_DWORD *)v83 == -1073741571 )
        _resetstkoflw();
      v73 = *(_DWORD *)v62;
      v6 = v73;
      if ( v73 < 0 )
        goto LABEL_159;
      v5 = this;
      v4 = a2;
      v13 = v77;
      v18 = v75;
    }
    if ( !_wcsicmp((const wchar_t *)v13, (const wchar_t *)v18) )
    {
      v29 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v4 + 48LL);
      if ( v29 == CAudioSession::IsCommunicationSession )
        v30 = CAudioSession::IsCommunicationSession(v4);
      else
        v30 = v29(v4);
      v74 = v30;
      v31 = v76;
      if ( (unsigned __int64)v76 >= *((_QWORD *)v5 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      v32 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 7) + 8LL * (_QWORD)v76) + 8LL);
      if ( v32 )
      {
        v69 = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)v5 + 72);
        v33 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, v69);
          v18 = v75;
          v31 = v76;
          goto LABEL_45;
        }
        v18 = v75;
        v31 = v76;
      }
      else
      {
LABEL_45:
        v33 = WPP_GLOBAL_Control;
      }
      if ( v74
        && !v32
        && v33 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)v33 + 7) & 0x8000000) != 0
        && *((_BYTE *)v33 + 25) >= 4u )
      {
        v70 = (_QWORD **)ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
                           (char *)v5 + 56,
                           v31);
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, **v70);
        v33 = WPP_GLOBAL_Control;
        v31 = v76;
      }
      if ( (unsigned __int64)v31 >= *((_QWORD *)v5 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      v34 = *(__int64 **)(*((_QWORD *)v5 + 7) + 8LL * (_QWORD)v31);
      if ( v34 )
      {
        if ( v33 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)v33 + 7) & 0x8000000) != 0
          && *((_BYTE *)v33 + 25) >= 5u )
        {
          WPP_SF_(*((_QWORD *)v33 + 2), 0x49u, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids);
        }
        v35 = *v34;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*v34 - 8), 0xFFFFFFFF) <= 1 )
        {
          v36 = *(ATL::CAtlStringMgr **)(v35 - 24);
          v79 = *(void (__fastcall **)(ATL::CAtlStringMgr *, struct ATL::CStringData *))(*(_QWORD *)v36 + 8LL);
          if ( v79 == ATL::CAtlStringMgr::Free )
            ATL::CAtlStringMgr::Free(v36, (struct ATL::CStringData *)(v35 - 24));
          else
            v79(v36, (struct ATL::CStringData *)(v35 - 24));
        }
        v37 = GetProcessHeap();
        HeapFree(v37, 0, v34);
        v18 = v75;
        v31 = v76;
      }
      v38 = (unsigned __int64)v31 + 1;
      if ( (CActiveAudioSession *)((char *)v31 + 1) < v31
        || v31 == (CActiveAudioSession *)-1LL
        || (v39 = *((_QWORD *)v5 + 8), v38 > v39) )
      {
        ATL::AtlThrowImpl(-2147024809);
      }
      v40 = v39 - v38;
      if ( v40 )
      {
        v71 = memmove_s(
                (void *const)(*((_QWORD *)v5 + 7) + 8LL * (_QWORD)v31),
                8 * v40,
                (const void *const)(*((_QWORD *)v5 + 7) + 8 * v38),
                8 * v40);
        if ( v71 )
        {
          if ( v71 == 12 )
            ATL::AtlThrowImpl(-2147024882);
          if ( v71 == 22 || v71 == 34 )
            ATL::AtlThrowImpl(-2147024809);
          if ( v71 != 80 )
            ATL::AtlThrowImpl(-2147467259);
        }
      }
      --*((_QWORD *)v5 + 8);
      v78 = 1;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v18 - 2, 0xFFFFFFFF) <= 1 )
      {
        v41 = (ATL::CAtlStringMgr *)*((_QWORD *)v18 - 3);
        v42 = *(void (__fastcall **)(ATL::CAtlStringMgr *, struct ATL::CStringData *))(*(_QWORD *)v41 + 8LL);
        if ( v42 == ATL::CAtlStringMgr::Free )
          ATL::CAtlStringMgr::Free(v41, (struct ATL::CStringData *)(v18 - 24));
        else
          v42(*((ATL::CAtlStringMgr **)v18 - 3), (struct ATL::CStringData *)(v18 - 24));
      }
      v43 = (__int64)v77;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v77 - 2, 0xFFFFFFFF) <= 1 )
      {
        v44 = *(ATL::CAtlStringMgr **)(v43 - 24);
        v45 = *(void (__fastcall **)(ATL::CAtlStringMgr *, struct ATL::CStringData *))(*(_QWORD *)v44 + 8LL);
        if ( v45 == ATL::CAtlStringMgr::Free )
          ATL::CAtlStringMgr::Free(v44, (struct ATL::CStringData *)(v43 - 24));
        else
          v45(*(ATL::CAtlStringMgr **)(v43 - 24), (struct ATL::CStringData *)(v43 - 24));
      }
      break;
    }
LABEL_160:
    ATL::CStringData::Release((ATL::CStringData *)(v18 - 24));
    ATL::CStringData::Release((ATL::CStringData *)(v13 - 24));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
  v46 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, 0LL, v78);
    v46 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)v5 + 73) != 3 && (v74 || *((_DWORD *)v5 + 72)) )
  {
    v66 = (*(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v4 + 64LL))(v4);
    v67 = 2LL;
    v68 = 0LL;
    goto LABEL_162;
  }
LABEL_94:
  if ( (v6 & 0x80000000) != 0
    && v46 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v46 + 7) & 0x8000000) != 0
    && *((_BYTE *)v46 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v46 + 2), 28LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, v6);
  }
  return v6;
}
