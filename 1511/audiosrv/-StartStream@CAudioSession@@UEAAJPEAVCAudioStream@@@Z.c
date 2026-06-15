/*
 * XREFs of ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180026EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Start@CAudioStream@@UEAAJXZ @ 0x180020410 (-Start@CAudioStream@@UEAAJXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x1800209E0 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035880 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dq @ 0x180077874 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::StartStream(CAudioSession *this, struct CAudioStream *a2)
{
  unsigned int updated; // r15d
  CAudioStream *v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(CAudioStream *); // rbx
  void (__fastcall *v10)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState); // rbx
  __int64 (__fastcall *v11)(CAudioSession *); // rbx
  void (__fastcall **v13[2])(_QWORD, volatile signed __int32 **); // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+44h] [rbp-24h]
  CAudioStream *v16; // [rsp+48h] [rbp-20h]

  updated = 0;
  v4 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 105LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, this, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v6 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 12);
      if ( *(struct CAudioStream **)(v8 + 8 * v7) == a2 )
        break;
      v6 = (unsigned int)(v6 + 1);
      v7 = (unsigned int)v6;
      if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
        goto LABEL_15;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        106LL,
        (unsigned int)v6,
        (unsigned int)v6,
        *(_QWORD *)(v8 + 8 * v6));
    }
    if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    v4 = *(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v6);
    v9 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v4 + 80LL);
    if ( v9 == CAudioStream::Start )
      CAudioStream::Start(v4);
    else
      v9(v4);
    updated = CAudioStream::UpdateStreamPriority(v4);
  }
LABEL_15:
  if ( ++*((_DWORD *)this + 86) == 1 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 107LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, this, 1);
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
    v14 = 0;
    v13[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioStreamStateChanged::`vftable';
    v13[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))this;
    v15 = 1;
    v16 = v4;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 624), v13);
    v11 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v11 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v11(this);
  }
  return updated;
}
