/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F570
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180014690 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180013890 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017B00 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Stop@CAudioStream@@UEAAJXZ @ 0x18001DC70 (-Stop@CAudioStream@@UEAAJXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001E410 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dq @ 0x18007C584 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::StopStream(CAudioSession *this, struct CAudioStream *a2)
{
  CAudioStream *v2; // r14
  int v3; // r15d
  unsigned int updated; // ebp
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(CAudioStream *__hidden); // rbx
  bool v11; // zf
  void (__fastcall *v12)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState); // rbx
  bool v13; // r8
  __int64 (__fastcall *v14)(CAudioSession *); // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  CAudioStream *v20; // rdi
  _BYTE v21[16]; // [rsp+30h] [rbp-68h] BYREF
  void **v22; // [rsp+40h] [rbp-58h]
  CAudioSession *v23; // [rsp+48h] [rbp-50h]
  __int64 v24; // [rsp+50h] [rbp-48h]
  CAudioStream *v25; // [rsp+58h] [rbp-40h]
  void **v26; // [rsp+60h] [rbp-38h]
  CAudioSession *v27; // [rsp+68h] [rbp-30h]
  __int64 v28; // [rsp+70h] [rbp-28h]
  CAudioStream *v29; // [rsp+78h] [rbp-20h]

  v2 = 0LL;
  v3 = 0;
  updated = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      108LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this,
      a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v7 = *((_QWORD *)this + 13);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = 0LL;
    while ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v9) != a2 )
    {
      v8 = (unsigned int)(v8 + 1);
      v9 = (unsigned int)v8;
      if ( (unsigned int)v8 >= v7 )
        goto LABEL_24;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      if ( (unsigned int)v8 >= v7 )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        109LL,
        (unsigned int)v8,
        (unsigned int)v8,
        *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v8));
    }
    if ( (unsigned __int64)(unsigned int)v8 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v2 = *(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v8);
    v10 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v2 + 88LL);
    if ( v10 == CAudioStream::Stop )
      CAudioStream::Stop(v2);
    else
      v10(v2);
    v11 = (*((_DWORD *)this + 50))-- == 1;
    v3 = 1;
    if ( v11 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          110LL,
          &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          0LL);
      }
      v12 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState))(*(_QWORD *)this + 88LL);
      if ( v12 == CPerStreamVolumeAudioSession::NewState )
        CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateInactive);
      else
        v12(this, AudioSessionStateInactive);
    }
    updated = CAudioStream::UpdateStreamPriority(v2);
  }
LABEL_24:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v2 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v22 = &CAudioStreamStateChanged::`vftable';
    v23 = this;
    v24 = 1LL;
    v25 = v2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 472));
    v14 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v14 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v14(this);
  }
  if ( !v3 )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v21, (struct _RTL_CRITICAL_SECTION *)((char *)this + 128), v13);
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x6Fu,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids);
      v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    v17 = 0LL;
    if ( *((_QWORD *)this + 22) )
    {
      v18 = 0LL;
      while ( 1 )
      {
        v19 = *((_QWORD *)this + 21);
        if ( *(struct CAudioStream **)(v19 + 8 * v18) == a2 )
          break;
        v17 = (unsigned int)(v17 + 1);
        v18 = (unsigned int)v17;
        if ( (unsigned __int64)(unsigned int)v17 >= *((_QWORD *)this + 22) )
          goto LABEL_54;
      }
      if ( (struct _GUID *)v16 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(v16 + 28) & 0x40) != 0
        && *(_BYTE *)(v16 + 25) >= 4u )
      {
        if ( (unsigned __int64)(unsigned int)v17 >= *((_QWORD *)this + 22) )
          ATL::AtlThrowImpl(-2147024809);
        WPP_SF_dq(*(_QWORD *)(v16 + 16), 112LL, (unsigned int)v17, (unsigned int)v17, *(_QWORD *)(v19 + 8 * v17));
      }
      if ( (unsigned __int64)(unsigned int)v17 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      _mm_lfence();
      v20 = *(CAudioStream **)(*((_QWORD *)this + 21) + 8 * v17);
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v20 + 88LL))(v20);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      v26 = &CAudioStreamStateChanged::`vftable';
      v27 = this;
      v28 = 1LL;
      v29 = v20;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 472));
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
      updated = CAudioStream::UpdateStreamPriority(v20);
    }
LABEL_54:
    if ( v21[8] )
      ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v21);
  }
  return updated;
}
