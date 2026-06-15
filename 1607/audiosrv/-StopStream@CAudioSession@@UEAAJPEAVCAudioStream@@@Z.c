/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014130
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180009920 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180008C20 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000E430 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180010F2C (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Stop@CAudioStream@@UEAAJXZ @ 0x180019760 (-Stop@CAudioStream@@UEAAJXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001A4DC (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_dq @ 0x18005FE98 (WPP_SF_dq.c)
 */

__int64 __fastcall CAudioSession::StopStream(CAudioSession *this, struct CAudioStream *a2)
{
  CAudioStream *v2; // rbx
  int v3; // r14d
  int updated; // ebp
  bool v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 (__fastcall *v11)(CAudioStream *__hidden); // rax
  bool v12; // zf
  void (__fastcall *v13)(CPerStreamVolumeAudioSession *, enum _AudioSessionState); // rax
  void (__fastcall ***v14)(_QWORD, volatile signed __int32 **); // rax
  __int64 (__fastcall *v15)(CAudioSession *); // rax
  CAudioSession *v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  CAudioStream *v21; // rbx
  void (__fastcall ***v22)(_QWORD, volatile signed __int32 **); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-78h] BYREF
  char v24; // [rsp+38h] [rbp-70h]
  _BYTE v25[16]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v26[32]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v27[32]; // [rsp+70h] [rbp-38h] BYREF

  v2 = 0LL;
  v3 = 0;
  updated = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x48u,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      this,
      a2);
  }
  v24 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = *((_QWORD *)this + 12);
      if ( *(struct CAudioStream **)(v10 + 8 * v9) == a2 )
        break;
      v8 = (unsigned int)(v8 + 1);
      v9 = (unsigned int)v8;
      if ( (unsigned __int64)(unsigned int)v8 >= *((_QWORD *)this + 13) )
        goto LABEL_24;
    }
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (unsigned __int64)(unsigned int)v8 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        73LL,
        (unsigned int)v8,
        (unsigned int)v8,
        *(_QWORD *)(v10 + 8 * v8));
    }
    if ( (unsigned __int64)(unsigned int)v8 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v2 = *(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v8);
    v11 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v2 + 88LL);
    if ( v11 == CAudioStream::Stop )
      CAudioStream::Stop(v2);
    else
      v11(v2);
    v12 = (*((_DWORD *)this + 86))-- == 1;
    v3 = 1;
    if ( v12 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 74LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, 0LL);
      }
      v13 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *, enum _AudioSessionState))(*(_QWORD *)this + 88LL);
      if ( v13 == CPerStreamVolumeAudioSession::NewState )
        CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateInactive);
      else
        v13(this, AudioSessionStateInactive);
    }
    updated = CAudioStream::UpdateStreamPriority(v2);
  }
LABEL_24:
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v2 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v14 = (void (__fastcall ***)(_QWORD, volatile signed __int32 **))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                                       (__int64)v26,
                                                                       (__int64)this,
                                                                       1,
                                                                       0,
                                                                       (__int64)v2,
                                                                       (__int64)L"CAudioSession::StopStream: in _Streams");
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 624), v14);
    v15 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v15 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v15(this);
  }
  if ( !v3 )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v25, (struct _RTL_CRITICAL_SECTION *)((char *)this + 128), v7);
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 75LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids);
      v17 = WPP_GLOBAL_Control;
    }
    v18 = 0LL;
    if ( *((_QWORD *)this + 22) )
    {
      v19 = 0LL;
      while ( 1 )
      {
        v20 = *((_QWORD *)this + 21);
        if ( *(struct CAudioStream **)(v20 + 8 * v19) == a2 )
          break;
        v18 = (unsigned int)(v18 + 1);
        v19 = (unsigned int)v18;
        if ( (unsigned __int64)(unsigned int)v18 >= *((_QWORD *)this + 22) )
          goto LABEL_58;
      }
      if ( v17 != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v17 + 28) & 0x40) != 0
        && *((_BYTE *)v17 + 25) >= 4u )
      {
        if ( (unsigned __int64)(unsigned int)v18 >= *((_QWORD *)this + 22) )
          ATL::AtlThrowImpl(-2147024809);
        WPP_SF_dq(*((_QWORD *)v17 + 2), 76LL, (unsigned int)v18, (unsigned int)v18, *(_QWORD *)(v20 + 8 * v18));
      }
      if ( v18 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      _mm_lfence();
      v21 = *(CAudioStream **)(*((_QWORD *)this + 21) + 8 * v18);
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v21 + 88LL))(v21);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      v22 = (void (__fastcall ***)(_QWORD, volatile signed __int32 **))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                                         (__int64)v27,
                                                                         (__int64)this,
                                                                         1,
                                                                         0,
                                                                         (__int64)v21,
                                                                         (__int64)L"CAudioSession::StopStream: in _DisconnectedStreams");
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 624), v22);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
      updated = CAudioStream::UpdateStreamPriority(v21);
    }
LABEL_58:
    if ( v25[8] )
      ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v25);
  }
  if ( updated < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::StopStream", 0xE25u, updated);
  return (unsigned int)updated;
}
