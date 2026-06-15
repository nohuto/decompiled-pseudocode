/*
 * XREFs of ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F760
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x1800147F0 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180013890 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017B00 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Start@CAudioStream@@UEAAJXZ @ 0x18001DCF0 (-Start@CAudioStream@@UEAAJXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001E410 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dq @ 0x18007C584 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::StartStream(CAudioSession *this, struct CAudioStream *a2)
{
  unsigned int updated; // ebp
  CAudioStream *v4; // r14
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(CAudioStream *__hidden); // rbx
  void (__fastcall *v10)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState); // rbx
  __int64 (__fastcall *v11)(CAudioSession *); // rbx

  updated = 0;
  v4 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      105LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this,
      a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v6 = *((_QWORD *)this + 13);
  v7 = 0LL;
  if ( v6 )
  {
    v8 = 0LL;
    while ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v8) != a2 )
    {
      v7 = (unsigned int)(v7 + 1);
      v8 = (unsigned int)v7;
      if ( (unsigned int)v7 >= v6 )
        goto LABEL_17;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      if ( (unsigned int)v7 >= v6 )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        106LL,
        (unsigned int)v7,
        (unsigned int)v7,
        *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v7));
    }
    if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v4 = *(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v7);
    v9 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v4 + 80LL);
    if ( v9 == CAudioStream::Start )
      CAudioStream::Start(v4);
    else
      v9(v4);
    updated = CAudioStream::UpdateStreamPriority(v4);
  }
LABEL_17:
  if ( ++*((_DWORD *)this + 50) == 1 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        107LL,
        &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        this,
        1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v10 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState))(*(_QWORD *)this + 88LL);
    if ( v10 == CPerStreamVolumeAudioSession::NewState )
      CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateActive);
    else
      v10(this, AudioSessionStateActive);
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 472));
    v11 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v11 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v11(this);
  }
  return updated;
}
