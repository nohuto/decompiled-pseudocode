/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180026CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Stop@CAudioStream@@UEAAJXZ @ 0x1800203A0 (-Stop@CAudioStream@@UEAAJXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x1800209E0 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035880 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dq @ 0x180077874 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::StopStream(CAudioSession *this, struct CAudioStream *a2)
{
  CAudioStream *v2; // rdi
  int v3; // r15d
  unsigned int updated; // r14d
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(CAudioStream *); // rbx
  bool v11; // zf
  void (__fastcall *v12)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState); // rbx
  __int64 (__fastcall *v13)(CAudioSession *); // rbx
  TraceLoggingHProvider v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rax
  void (__fastcall **v19)(_QWORD, volatile signed __int32 **); // rdi
  void **v20; // [rsp+30h] [rbp-40h] BYREF
  CAudioSession *v21; // [rsp+38h] [rbp-38h]
  __int64 v22; // [rsp+40h] [rbp-30h]
  CAudioStream *v23; // [rsp+48h] [rbp-28h]
  void (__fastcall **v24[4])(_QWORD, volatile signed __int32 **); // [rsp+50h] [rbp-20h] BYREF

  v2 = 0LL;
  v3 = 0;
  updated = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 108LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, this, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v7 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *((_QWORD *)this + 12);
      if ( *(struct CAudioStream **)(v9 + 8 * v8) == a2 )
        break;
      v7 = (unsigned int)(v7 + 1);
      v8 = (unsigned int)v7;
      if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)this + 13) )
        goto LABEL_22;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        109LL,
        (unsigned int)v7,
        (unsigned int)v7,
        *(_QWORD *)(v9 + 8 * v7));
    }
    if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    v2 = *(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v7);
    v10 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v2 + 88LL);
    if ( v10 == CAudioStream::Stop )
      CAudioStream::Stop(v2);
    else
      v10(v2);
    v11 = (*((_DWORD *)this + 86))-- == 1;
    v3 = 1;
    if ( v11 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 110LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, 0LL);
      }
      v12 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState))(*(_QWORD *)this + 88LL);
      if ( v12 == CPerStreamVolumeAudioSession::NewState )
        CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateInactive);
      else
        v12(this, AudioSessionStateInactive);
    }
    updated = CAudioStream::UpdateStreamPriority(v2);
  }
LABEL_22:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v2 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v21 = this;
    v20 = &CAudioStreamStateChanged::`vftable';
    v22 = 1LL;
    v23 = v2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
      (LPCRITICAL_SECTION)((char *)this + 624),
      (void (__fastcall ***)(_QWORD, volatile signed __int32 **))&v20);
    v13 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v13 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v13(this);
  }
  if ( !v3 )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v20, (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x6Fu, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids);
      v15 = WPP_GLOBAL_Control;
    }
    v16 = 0;
    if ( *((_QWORD *)this + 22) )
    {
      v17 = 0LL;
      while ( 1 )
      {
        v18 = *((_QWORD *)this + 21);
        if ( *(struct CAudioStream **)(v18 + 8 * v17) == a2 )
          break;
        v17 = ++v16;
        if ( (unsigned __int64)v16 >= *((_QWORD *)this + 22) )
          goto LABEL_54;
      }
      if ( v15 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)v15 + 28) & 0x40) != 0
        && *((_BYTE *)v15 + 25) >= 4u )
      {
        if ( (unsigned __int64)v16 >= *((_QWORD *)this + 22) )
          ATL::AtlThrowImpl(-2147024809);
        WPP_SF_dq(*((_QWORD *)v15 + 2), 112LL, v16, v16, *(_QWORD *)(v18 + 8LL * v16));
      }
      if ( (unsigned __int64)v16 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      v19 = *(void (__fastcall ***)(_QWORD, volatile signed __int32 **))(*((_QWORD *)this + 21) + 8LL * v16);
      (*((void (__fastcall **)(void (__fastcall **)(_QWORD, volatile signed __int32 **)))*v19 + 11))(v19);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      v24[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))this;
      v24[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioStreamStateChanged::`vftable';
      v24[2] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))1;
      v24[3] = v19;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 624), v24);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
      updated = CAudioStream::UpdateStreamPriority((CAudioStream *)v19);
    }
LABEL_54:
    if ( (_BYTE)v21 )
      ATL::CCritSecLock::Unlock((LPCRITICAL_SECTION *)&v20);
  }
  return updated;
}
