/*
 * XREFs of ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014330
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180009BD0 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180008C20 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000E430 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180010F2C (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Start@CAudioStream@@UEAAJXZ @ 0x1800197C0 (-Start@CAudioStream@@UEAAJXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001A4DC (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dq @ 0x18005FE98 (WPP_SF_dq.c)
 */

__int64 __fastcall CAudioSession::StartStream(CAudioSession *this, struct CAudioStream *a2)
{
  unsigned int updated; // r14d
  CAudioStream *v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(CAudioStream *__hidden); // rax
  __int64 v10; // rax
  char v11; // si
  void (__fastcall *v12)(CPerStreamVolumeAudioSession *, enum _AudioSessionState); // rax
  void (__fastcall ***v13)(_QWORD, volatile signed __int32 **); // rax
  __int64 (__fastcall *v14)(CAudioSession *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  char v17; // [rsp+38h] [rbp-40h]
  _BYTE v18[32]; // [rsp+40h] [rbp-38h] BYREF

  updated = 0;
  v4 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x45u,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      this,
      a2);
  }
  v17 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
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
        goto LABEL_17;
    }
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 70LL, (unsigned int)v6, (unsigned int)v6, *(_QWORD *)(v8 + 8 * v6));
    }
    if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v4 = *(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v6);
    v9 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v4 + 80LL);
    if ( v9 == CAudioStream::Start )
      CAudioStream::Start(v4);
    else
      v9(v4);
    updated = CAudioStream::UpdateStreamPriority(v4);
  }
LABEL_17:
  if ( ++*((_DWORD *)this + 86) == 1 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 71LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, this, 1);
    }
    LeaveCriticalSection(lpCriticalSection);
    v10 = *(_QWORD *)this;
    v11 = 0;
    v17 = 0;
    v12 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *, enum _AudioSessionState))(v10 + 88);
    if ( v12 == CPerStreamVolumeAudioSession::NewState )
    {
      CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateActive);
      goto LABEL_24;
    }
    v12(this, AudioSessionStateActive);
  }
  else
  {
    v11 = v17;
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&lpCriticalSection);
LABEL_24:
  if ( v4 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v13 = (void (__fastcall ***)(_QWORD, volatile signed __int32 **))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                                       (__int64)v18,
                                                                       (__int64)this,
                                                                       0,
                                                                       1,
                                                                       (__int64)v4,
                                                                       (__int64)L"CAudioSession::StartStream");
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 624), v13);
    v14 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v14 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v14(this);
  }
  return updated;
}
