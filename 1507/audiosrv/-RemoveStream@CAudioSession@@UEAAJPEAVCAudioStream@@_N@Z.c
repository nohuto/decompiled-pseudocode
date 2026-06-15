/*
 * XREFs of ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18000F350
 * Callers:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180014540 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180016B88 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017B00 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001D380 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001E630 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z @ 0x1800667D8 (-SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18006755C (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dq @ 0x18007C584 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::RemoveStream(CAudioSession *this, struct CAudioStream *a2, char a3)
{
  char v3; // bp
  CAudioStream *v5; // r14
  unsigned __int64 v8; // r8
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r9
  bool v15; // r8
  __int64 (__fastcall *v16)(CAudioSession *); // rbx
  __int64 v17; // rax
  unsigned int (__fastcall *v18)(CAudioStream *__hidden); // rbx
  errno_t v20; // eax
  __int64 v21; // rbp
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  _BYTE v24[16]; // [rsp+30h] [rbp-58h] BYREF
  void **v25; // [rsp+40h] [rbp-48h]
  CAudioSession *v26; // [rsp+48h] [rbp-40h]
  CAudioStream *v27; // [rsp+50h] [rbp-38h]

  v3 = 0;
  v5 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      115LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this,
      a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v8 = *((_QWORD *)this + 13);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= v8 )
        ATL::AtlThrowImpl(-2147024809);
      if ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v10) == a2 )
        break;
      v9 = (unsigned int)(v9 + 1);
      v10 = (unsigned int)v9;
      if ( (unsigned int)v9 >= v8 )
        goto LABEL_22;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      if ( (unsigned __int64)(unsigned int)v9 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        116LL,
        (unsigned int)v9,
        (unsigned int)v9,
        *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v9));
    }
    v3 = 1;
    if ( (unsigned __int64)(unsigned int)v9 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v11 = *((_QWORD *)this + 12);
    v12 = v9 + 1;
    v5 = *(CAudioStream **)(v11 + 8 * v9);
    if ( v9 + 1 < (unsigned __int64)(unsigned int)v9 || (v13 = *((_QWORD *)this + 13), v12 > v13) )
      ATL::AtlThrowImpl(-2147024809);
    v14 = v13 - v12;
    if ( v14 )
    {
      v20 = memmove_s((void *const)(v11 + 8 * v9), 8 * v14, (const void *const)(v11 + 8 * v12), 8 * v14);
      if ( v20 )
      {
        if ( v20 == 12 )
          ATL::AtlThrowImpl(-2147024882);
        if ( v20 == 22 || v20 == 34 )
          ATL::AtlThrowImpl(-2147024809);
        if ( v20 != 80 )
          ATL::AtlThrowImpl(-2147467259);
      }
    }
    --*((_QWORD *)this + 13);
    --*((_DWORD *)this + 22);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        117LL,
        &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        *((unsigned int *)this + 22));
    }
  }
LABEL_22:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( !v3 )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v24, (struct _RTL_CRITICAL_SECTION *)((char *)this + 128), v15);
    v21 = 0LL;
    if ( *((_QWORD *)this + 22) )
    {
      v22 = (_QWORD *)((char *)this + 168);
      v23 = 0LL;
      while ( *(struct CAudioStream **)(*v22 + 8 * v23) != a2 )
      {
        v21 = (unsigned int)(v21 + 1);
        v23 = (unsigned int)v21;
        if ( (unsigned __int64)(unsigned int)v21 >= *((_QWORD *)this + 22) )
          goto LABEL_60;
      }
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        if ( (unsigned __int64)(unsigned int)v21 >= *((_QWORD *)this + 22) )
          ATL::AtlThrowImpl(-2147024809);
        WPP_SF_dq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          118LL,
          (unsigned int)v21,
          (unsigned int)v21,
          *(_QWORD *)(*v22 + 8 * v21));
      }
      if ( (unsigned __int64)(unsigned int)v21 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      _mm_lfence();
      v5 = *(CAudioStream **)(*v22 + 8 * v21);
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt((char *)this + 168);
    }
LABEL_60:
    if ( v24[8] )
      ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v24);
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v26 = this;
    v25 = &CAudioStreamDestroy::`vftable';
    v27 = v5;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 472));
    v16 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v16 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v16(this);
    if ( a3 )
      CAudioStream::CloseAudioHandle(v5);
    else
      CAudioStream::SetAudioHandle(v5, 0LL, 0LL, 0LL, 0xFFFFFFFF);
    v17 = *(_QWORD *)v5;
    *((_QWORD *)v5 + 9) = 0LL;
    v18 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(v17 + 72);
    if ( v18 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference(v5);
    else
      v18(v5);
  }
  return 0LL;
}
