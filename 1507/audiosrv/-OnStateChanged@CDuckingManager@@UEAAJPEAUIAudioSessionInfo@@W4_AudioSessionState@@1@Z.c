/*
 * XREFs of ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000DD60
 * Callers:
 *     ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180021A10 (-OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x180001720 (-GrowBuffer@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?BelongsToPackagedApp@CAudioSession@@UEAAHXZ @ 0x180010B50 (-BelongsToPackagedApp@CAudioSession@@UEAAHXZ.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x180010D10 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?IsCommunicationSession@CAudioSession@@UEAAHXZ @ 0x180010D40 (-IsCommunicationSession@CAudioSession@@UEAAHXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017740 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017890 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180017928 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180017970 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800179E0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ??0CActiveAudioSession@@QEAA@PEBGH@Z @ 0x18003053C (--0CActiveAudioSession@@QEAA@PEBGH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??A?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAAEAVCAudioSessionNotificationProcess@@_K@Z @ 0x180067A64 (--A-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ??_GCActiveAudioSession@@QEAAPEAXI@Z @ 0x180068654 (--_GCActiveAudioSession@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_Dd @ 0x18007C094 (WPP_SF_Dd.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x1800A61CC (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 *     WPP_SF_dddS @ 0x1800A69D4 (WPP_SF_dddS.c)
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
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(CAudioSession *__hidden); // rbx
  int v9; // eax
  CActiveAudioSession *i; // rsi
  struct ATL::CStringData *(__fastcall *v11)(ATL::CAtlStringMgr *__hidden); // rbx
  struct ATL::CStringData *NilString; // rax
  char *v13; // rdi
  struct ATL::CStringData *(__fastcall *v14)(ATL::CAtlStringMgr *__hidden); // rbx
  struct ATL::CStringData *v15; // rax
  char *v16; // rbx
  char *v17; // r15
  __int64 v18; // rsi
  unsigned __int64 v19; // r13
  rsize_t v20; // rdx
  const unsigned __int16 *(__fastcall *v21)(CAudioSession *__hidden); // rsi
  const unsigned __int16 *v22; // r15
  __int64 v23; // rsi
  unsigned __int64 v24; // r8
  rsize_t v25; // rdx
  __int64 (__fastcall *v26)(CAudioSession *__hidden); // rdi
  int v27; // eax
  CActiveAudioSession *v28; // r9
  int v29; // esi
  __int64 v30; // rcx
  __int64 *v31; // rsi
  __int64 v32; // rbx
  ATL::CAtlStringMgr *v33; // rcx
  HANDLE v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  ATL::CAtlStringMgr *v38; // rdi
  void (*v39)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rsi
  char *v40; // rbx
  ATL::CAtlStringMgr *v41; // rdi
  void (*v42)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rsi
  __int64 v43; // rcx
  __int64 (__fastcall *v44)(CAudioSession *__hidden); // rbx
  int IsCommunicationSession; // eax
  int v46; // esi
  HANDLE ProcessHeap; // rax
  unsigned int v48; // edx
  CActiveAudioSession *v49; // rbx
  const unsigned __int16 *(__fastcall *v50)(CAudioSession *__hidden); // rdi
  const unsigned __int16 *Identifier; // rax
  CActiveAudioSession *v52; // rdi
  unsigned __int64 v53; // r15
  CActiveAudioSession **v54; // rcx
  ATL::CAtlException *v56; // rbx
  __int64 *v57; // rdx
  ATL::CAtlException *v58; // rbx
  ATL::CAtlException *v59; // rbx
  __int64 v60; // rax
  unsigned __int16 v61; // dx
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // r9
  __int64 v65; // r8
  __int64 v66; // r9
  _QWORD **v67; // rax
  errno_t v68; // eax
  __int64 v69; // [rsp+0h] [rbp-C8h] BYREF
  int v70; // [rsp+40h] [rbp-88h]
  int v71; // [rsp+44h] [rbp-84h]
  char *v72; // [rsp+48h] [rbp-80h] BYREF
  CActiveAudioSession *v73; // [rsp+50h] [rbp-78h]
  char *v74; // [rsp+58h] [rbp-70h] BYREF
  int v75; // [rsp+60h] [rbp-68h]
  void (*v76)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // [rsp+68h] [rbp-60h]
  __int64 v77; // [rsp+70h] [rbp-58h]
  ATL::CAtlException *v78; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v79; // [rsp+80h] [rbp-48h] BYREF
  ATL::CAtlException *v80; // [rsp+88h] [rbp-40h] BYREF

  v77 = -2LL;
  v4 = a2;
  v5 = this;
  v6 = 0;
  v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v60 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *, struct IAudioSessionInfo *, __int64))(*(_QWORD *)a2 + 64LL))(
            a2,
            a2,
            a3);
    WPP_SF_dddS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      *((_DWORD *)v5 + 73),
      *((_DWORD *)v5 + 72),
      v60);
    v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( *((_DWORD *)v5 + 74) )
  {
    if ( (struct _GUID *)v7 == &WPP_GLOBAL_Control
      || (*(_DWORD *)(v7 + 28) & 0x8000000) == 0
      || *(_BYTE *)(v7 + 25) < 4u )
    {
      return 0LL;
    }
    v61 = 22;
    goto LABEL_107;
  }
  v8 = *(__int64 (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v4 + 40LL);
  if ( v8 == CAudioSession::BelongsToPackagedApp )
    v9 = CAudioSession::BelongsToPackagedApp(v4);
  else
    v9 = ((__int64 (__fastcall *)(CAudioSession *, struct IAudioSessionInfo *, __int64))v8)(v4, a2, a3);
  if ( v9 )
  {
    v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      return 0LL;
    }
    v61 = 23;
LABEL_107:
    WPP_SF_(*(_QWORD *)(v7 + 16), v61, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids);
    return 0LL;
  }
  if ( a4 == AudioSessionStateActive )
  {
    v44 = *(__int64 (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v4 + 48LL);
    if ( v44 == CAudioSession::IsCommunicationSession )
      IsCommunicationSession = CAudioSession::IsCommunicationSession(v4);
    else
      IsCommunicationSession = v44(v4);
    v46 = IsCommunicationSession;
    v71 = IsCommunicationSession;
    ProcessHeap = GetProcessHeap();
    v49 = (CActiveAudioSession *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
    v76 = (void (*)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))v49;
    if ( v49 )
    {
      v50 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v4 + 64LL);
      if ( v50 == CAudioSession::GetIdentifier )
        Identifier = CAudioSession::GetIdentifier(v4);
      else
        Identifier = v50(v4);
      v52 = CActiveAudioSession::CActiveAudioSession(v49, Identifier, v46);
    }
    else
    {
      v52 = 0LL;
    }
    v73 = v52;
    if ( v52 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v52 - 16LL) )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
        v6 = 0;
        try
        {
          v53 = *((_QWORD *)v5 + 8);
          if ( v53 >= *((_QWORD *)v5 + 9)
            && !ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::GrowBuffer(
                  (__int64)v5 + 56,
                  v53 + 1) )
          {
            ATL::AtlThrowImpl(-2147024882);
          }
          v54 = (CActiveAudioSession **)(*((_QWORD *)v5 + 7) + 8 * v53);
          if ( v54 )
            *v54 = v52;
          ++*((_QWORD *)v5 + 8);
        }
        catch ( ATL::CAtlException *v79 )
        {
          v57 = &v69;
          v56 = v79;
          if ( *(_DWORD *)v79 == -1073741571 )
            _resetstkoflw();
          v70 = *(_DWORD *)v56;
          v6 = v70;
          if ( v70 < 0 )
          {
            CActiveAudioSession::`scalar deleting destructor'(v73, (unsigned int)v57);
            v5 = this;
            v4 = a2;
            v46 = v71;
LABEL_89:
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
            goto LABEL_90;
          }
          v5 = this;
          v4 = a2;
          v46 = v71;
        }
        if ( v46 )
        {
          v62 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v5 + 72);
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_D(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              24LL,
              &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
              v62);
          }
        }
        goto LABEL_89;
      }
      CActiveAudioSession::`scalar deleting destructor'(v52, v48);
    }
    v6 = -2147024882;
LABEL_90:
    if ( *((_DWORD *)v5 + 73) == 3 || !v46 && !*((_DWORD *)v5 + 72) )
      goto LABEL_93;
    v63 = (*(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v4 + 64LL))(v4);
    v64 = 1LL;
    v65 = *((unsigned int *)v5 + 72);
LABEL_162:
    v6 = CDuckingManager::QueueDuckingWorkItem((char *)v5 - 16, v63, v65, v64, 0);
LABEL_93:
    v43 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_94;
  }
  if ( a4 )
    return v6;
  v75 = 0;
  v71 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
  for ( i = 0LL; ; i = (CActiveAudioSession *)((char *)v73 + 1) )
  {
    v73 = i;
    if ( (unsigned __int64)i >= *((_QWORD *)v5 + 8) )
      break;
    v11 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
    if ( v11 == ATL::CAtlStringMgr::GetNilString )
      NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    else
      NilString = v11((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v13 = (char *)NilString + 24;
    v74 = (char *)NilString + 24;
    v14 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
    if ( v14 == ATL::CAtlStringMgr::GetNilString )
      v15 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    else
      v15 = v14((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v16 = (char *)v15 + 24;
    v72 = (char *)v15 + 24;
    try
    {
      if ( (unsigned __int64)i >= *((_QWORD *)v5 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      v17 = **(char ***)(*((_QWORD *)v5 + 7) + 8LL * (_QWORD)i);
      if ( !v17 )
        goto LABEL_126;
      v18 = -1LL;
      do
        ++v18;
      while ( *(_WORD *)&v17[2 * v18] );
      if ( (_DWORD)v18 )
      {
        v70 = *((_DWORD *)v13 - 4);
        v19 = (v17 - v13) >> 1;
        if ( ((1 - *((_DWORD *)v13 - 2)) | (*((_DWORD *)v13 - 3) - (int)v18)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v74, (unsigned int)v18);
          v13 = v74;
        }
        v20 = 2LL * (int)v18;
        if ( v19 <= (unsigned int)v70 )
          memmove_s(v13, v20, &v13[2 * v19], v20);
        else
          memcpy_s(v13, v20, v17, v20);
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&v74, (unsigned int)v18);
      }
      else
      {
LABEL_126:
        ATL::CSimpleStringT<unsigned short,0>::Empty(&v74);
        v13 = v74;
      }
    }
    catch ( ATL::CAtlException *v78 )
    {
      v58 = v78;
      if ( *(_DWORD *)v78 == -1073741571 )
        _resetstkoflw();
      v70 = *(_DWORD *)v58;
      v6 = v70;
      if ( v70 < 0 )
      {
LABEL_159:
        v5 = this;
        v4 = a2;
        v13 = v74;
        v16 = v72;
        goto LABEL_160;
      }
      v5 = this;
      v4 = a2;
      v13 = v74;
      v16 = v72;
    }
    v6 = 0;
    try
    {
      v21 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v4 + 64LL);
      if ( v21 == CAudioSession::GetIdentifier )
        v22 = CAudioSession::GetIdentifier(v4);
      else
        v22 = v21(v4);
      if ( !v22 )
        goto LABEL_131;
      v23 = -1LL;
      do
        ++v23;
      while ( v22[v23] );
      if ( (_DWORD)v23 )
      {
        v70 = *((_DWORD *)v16 - 4);
        v24 = ((char *)v22 - v16) >> 1;
        v76 = (void (*)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))v24;
        if ( ((1 - *((_DWORD *)v16 - 2)) | (*((_DWORD *)v16 - 3) - (int)v23)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v72, (unsigned int)v23);
          v16 = v72;
          v24 = (unsigned __int64)v76;
        }
        v25 = 2LL * (int)v23;
        if ( v24 <= (unsigned int)v70 )
          memmove_s(v16, v25, &v16[2 * v24], v25);
        else
          memcpy_s(v16, v25, v22, v25);
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&v72, (unsigned int)v23);
      }
      else
      {
LABEL_131:
        ATL::CSimpleStringT<unsigned short,0>::Empty(&v72);
        v16 = v72;
      }
    }
    catch ( ATL::CAtlException *v80 )
    {
      v59 = v80;
      if ( *(_DWORD *)v80 == -1073741571 )
        _resetstkoflw();
      v70 = *(_DWORD *)v59;
      v6 = v70;
      if ( v70 < 0 )
        goto LABEL_159;
      v5 = this;
      v4 = a2;
      v13 = v74;
      v16 = v72;
    }
    if ( !_wcsicmp((const wchar_t *)v13, (const wchar_t *)v16) )
    {
      v26 = *(__int64 (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v4 + 48LL);
      if ( v26 == CAudioSession::IsCommunicationSession )
        v27 = CAudioSession::IsCommunicationSession(v4);
      else
        v27 = v26(v4);
      v71 = v27;
      v28 = v73;
      if ( (unsigned __int64)v73 >= *((_QWORD *)v5 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      v29 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 7) + 8LL * (_QWORD)v73) + 8LL);
      if ( v29 )
      {
        v66 = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)v5 + 72);
        v30 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            25LL,
            &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
            v66);
          v16 = v72;
          v28 = v73;
          goto LABEL_45;
        }
        v16 = v72;
        v28 = v73;
      }
      else
      {
LABEL_45:
        v30 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( v71
        && !v29
        && (struct _GUID *)v30 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v30 + 28) & 0x8000000) != 0
        && *(_BYTE *)(v30 + 25) >= 4u )
      {
        v67 = (_QWORD **)ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
                           (char *)v5 + 56,
                           v28);
        WPP_SF_S(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          26LL,
          &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
          **v67);
        v30 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        v28 = v73;
      }
      if ( (unsigned __int64)v28 >= *((_QWORD *)v5 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      v31 = *(__int64 **)(*((_QWORD *)v5 + 7) + 8LL * (_QWORD)v28);
      if ( v31 )
      {
        if ( (struct _GUID *)v30 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(v30 + 28) & 0x8000000) != 0
          && *(_BYTE *)(v30 + 25) >= 5u )
        {
          WPP_SF_(*(_QWORD *)(v30 + 16), 0x49u, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids);
        }
        v32 = *v31;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*v31 - 8), 0xFFFFFFFF) <= 1 )
        {
          v33 = *(ATL::CAtlStringMgr **)(v32 - 24);
          v76 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(*(_QWORD *)v33 + 8LL);
          if ( v76 == ATL::CAtlStringMgr::Free )
            ATL::CAtlStringMgr::Free(v33, (struct ATL::CStringData *)(v32 - 24));
          else
            ((void (__fastcall *)(ATL::CAtlStringMgr *, __int64))v76)(v33, v32 - 24);
        }
        v34 = GetProcessHeap();
        HeapFree(v34, 0, v31);
        v16 = v72;
        v28 = v73;
      }
      v35 = (unsigned __int64)v28 + 1;
      if ( (CActiveAudioSession *)((char *)v28 + 1) < v28
        || v28 == (CActiveAudioSession *)-1LL
        || (v36 = *((_QWORD *)v5 + 8), v35 > v36) )
      {
        ATL::AtlThrowImpl(-2147024809);
      }
      v37 = v36 - v35;
      if ( v37 )
      {
        v68 = memmove_s(
                (void *const)(*((_QWORD *)v5 + 7) + 8LL * (_QWORD)v28),
                8 * v37,
                (const void *const)(*((_QWORD *)v5 + 7) + 8 * v35),
                8 * v37);
        if ( v68 )
        {
          if ( v68 == 12 )
            ATL::AtlThrowImpl(-2147024882);
          if ( v68 == 22 || v68 == 34 )
            ATL::AtlThrowImpl(-2147024809);
          if ( v68 != 80 )
            ATL::AtlThrowImpl(-2147467259);
        }
      }
      --*((_QWORD *)v5 + 8);
      v75 = 1;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16 - 2, 0xFFFFFFFF) <= 1 )
      {
        v38 = (ATL::CAtlStringMgr *)*((_QWORD *)v16 - 3);
        v39 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(*(_QWORD *)v38 + 8LL);
        if ( v39 == ATL::CAtlStringMgr::Free )
          ATL::CAtlStringMgr::Free(v38, (struct ATL::CStringData *)(v16 - 24));
        else
          ((void (__fastcall *)(_QWORD, char *))v39)(*((_QWORD *)v16 - 3), v16 - 24);
      }
      v40 = v74;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v74 - 2, 0xFFFFFFFF) <= 1 )
      {
        v41 = (ATL::CAtlStringMgr *)*((_QWORD *)v40 - 3);
        v42 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(*(_QWORD *)v41 + 8LL);
        if ( v42 == ATL::CAtlStringMgr::Free )
          ATL::CAtlStringMgr::Free(v41, (struct ATL::CStringData *)(v40 - 24));
        else
          ((void (__fastcall *)(_QWORD, char *))v42)(*((_QWORD *)v40 - 3), v40 - 24);
      }
      break;
    }
LABEL_160:
    ATL::CStringData::Release((ATL::CStringData *)(v16 - 24));
    ATL::CStringData::Release((ATL::CStringData *)(v13 - 24));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
  v43 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      27LL,
      &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
      0LL,
      v75);
    v43 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( *((_DWORD *)v5 + 73) != 3 && (v71 || *((_DWORD *)v5 + 72)) )
  {
    v63 = (*(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v4 + 64LL))(v4);
    v64 = 2LL;
    v65 = 0LL;
    goto LABEL_162;
  }
LABEL_94:
  if ( (v6 & 0x80000000) != 0
    && (struct _GUID *)v43 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v43 + 28) & 0x8000000) != 0
    && *(_BYTE *)(v43 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v43 + 16), 28LL, &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, v6);
  }
  return v6;
}
