/*
 * XREFs of ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800265A0
 * Callers:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180022060 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18002558C (-FinalRelease@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001FA60 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18002FA3C (-GrowBuffer@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z @ 0x180064B70 (-SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180065DF8 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180065E90 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180071BD4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     WPP_SF_dq @ 0x180077874 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::RemoveStream(CAudioSession *this, struct CAudioStream *a2, char a3)
{
  char v3; // si
  unsigned int v5; // r12d
  __int64 v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  errno_t v21; // eax
  unsigned __int64 v22; // rdi
  _QWORD *v23; // rcx
  __int64 (__fastcall *v24)(CAudioSession *); // rbx
  struct IAudioDeviceGraph *v25; // r8
  int v26; // esi
  __int64 v27; // rdi
  char *v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 (__fastcall *v32)(CAudioStream *); // rbx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  errno_t v35; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-68h] BYREF
  char v38; // [rsp+38h] [rbp-60h]
  void **v39; // [rsp+40h] [rbp-58h] BYREF
  CAudioSession *v40; // [rsp+48h] [rbp-50h]
  __int64 v41; // [rsp+50h] [rbp-48h]
  __int64 v42; // [rsp+A0h] [rbp+8h] BYREF
  char v43; // [rsp+B0h] [rbp+18h]

  v43 = a3;
  v3 = 0;
  v5 = 0;
  v7 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 115LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, this, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v8 = *((_QWORD *)this + 13);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = 0LL;
    v11 = *((_QWORD *)this + 13);
    while ( 1 )
    {
      v12 = *((_QWORD *)this + 12);
      if ( *(struct CAudioStream **)(v12 + 8 * v10) == a2 )
        break;
      v9 = (unsigned int)(v9 + 1);
      v10 = (unsigned int)v9;
      if ( (unsigned int)v9 >= v8 )
        goto LABEL_9;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (unsigned int)v9 >= v11 )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 116LL, v11, (unsigned int)v9, *(_QWORD *)(v12 + 8 * v9));
    }
    v3 = 1;
    if ( v9 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    v17 = *((_QWORD *)this + 12);
    v18 = v9 + 1;
    v7 = *(_QWORD *)(v17 + 8 * v9);
    if ( v9 + 1 < v9 || (v19 = *((_QWORD *)this + 13), v18 > v19) )
      ATL::AtlThrowImpl(-2147024809);
    v20 = v19 - v18;
    if ( v20 )
    {
      v21 = memmove_s((void *const)(v17 + 8 * v9), 8 * v20, (const void *const)(v17 + 8 * v18), 8 * v20);
      if ( v21 )
      {
        if ( v21 == 12 )
          ATL::AtlThrowImpl(-2147024882);
        if ( v21 == 22 || v21 == 34 )
          ATL::AtlThrowImpl(-2147024809);
        if ( v21 != 80 )
          ATL::AtlThrowImpl(-2147467259);
      }
    }
    --*((_QWORD *)this + 13);
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 200);
    v38 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v22 = *((_QWORD *)this + 31);
    if ( v22 >= *((_QWORD *)this + 32)
      && !(unsigned __int8)ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::GrowBuffer(
                             (char *)this + 240,
                             v22 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v23 = (_QWORD *)(*((_QWORD *)this + 30) + 8 * v22);
    if ( v23 )
      *v23 = v7;
    ++*((_QWORD *)this + 31);
    if ( v38 )
      LeaveCriticalSection(lpCriticalSection);
    --*((_DWORD *)this + 22);
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        117LL,
        &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        *((unsigned int *)this + 22));
    }
  }
LABEL_9:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( !v3 )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v39, (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
    v14 = 0LL;
    if ( *((_QWORD *)this + 22) )
    {
      v15 = 0LL;
      v16 = (_QWORD *)((char *)this + 168);
      while ( 1 )
      {
        if ( v15 >= *((_QWORD *)this + 22) )
          ATL::AtlThrowImpl(-2147024809);
        if ( *(struct CAudioStream **)(*v16 + 8 * v15) == a2 )
          break;
        v14 = (unsigned int)(v14 + 1);
        v15 = (unsigned int)v14;
        if ( (unsigned __int64)(unsigned int)v14 >= *((_QWORD *)this + 22) )
          goto LABEL_49;
      }
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        if ( (unsigned __int64)(unsigned int)v14 >= *((_QWORD *)this + 22) )
          ATL::AtlThrowImpl(-2147024809);
        WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 118LL, v13, (unsigned int)v14, *(_QWORD *)(*v16 + 8 * v14));
      }
      if ( v14 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      v7 = *(_QWORD *)(*v16 + 8 * v14);
      v42 = v7;
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(
        (char *)this + 168,
        v14);
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)this + 5);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((char *)this + 240, &v42);
      if ( v38 )
        ATL::CCritSecLock::Unlock(&lpCriticalSection);
    }
LABEL_49:
    if ( (_BYTE)v40 )
      ATL::CCritSecLock::Unlock((LPCRITICAL_SECTION *)&v39);
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v40 = this;
    v39 = &CAudioStreamDestroy::`vftable';
    v41 = v7;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
      (LPCRITICAL_SECTION)((char *)this + 624),
      (void (__fastcall ***)(_QWORD, volatile signed __int32 **))&v39);
    v24 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v24 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v24(this);
    if ( v43 )
    {
      if ( *(_DWORD *)(v7 + 108) == 2 )
      {
        if ( *(_QWORD *)(v7 + 152) )
        {
          Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(v7 + 152));
          if ( *(_QWORD *)(v7 + 152) )
            ATL::AtlComPtrAssign((struct IUnknown **)(v7 + 152), 0LL);
        }
        if ( *(_QWORD *)(v7 + 160) )
        {
          Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(v7 + 160));
          if ( *(_QWORD *)(v7 + 160) )
            ATL::AtlComPtrAssign((struct IUnknown **)(v7 + 160), 0LL);
        }
        if ( *(_QWORD *)(v7 + 168) )
        {
          Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(v7 + 168));
          if ( *(_QWORD *)(v7 + 168) )
            ATL::AtlComPtrAssign((struct IUnknown **)(v7 + 168), 0LL);
        }
      }
      v26 = (*(__int64 (__fastcall **)(CAudioResourceManager *, _QWORD, __int64))(*(_QWORD *)g_AudioResourceManager
                                                                                + 32LL))(
              g_AudioResourceManager,
              *(_QWORD *)(v7 + 56),
              v7 + 8);
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(v7 + 56) + 192LL))(
        *(_QWORD *)(v7 + 56),
        2LL,
        0xFFFFFFFFLL,
        *(unsigned int *)(v7 + 188));
      v27 = *(_QWORD *)(v7 + 56);
      if ( v27 )
      {
        *(_QWORD *)(v7 + 56) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      *(_QWORD *)(v7 + 48) = 0LL;
      if ( v26 < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          14LL,
          &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
          (unsigned int)v26);
      }
      v28 = *(char **)(v7 + 280);
      if ( (unsigned __int64)(v28 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        SetEvent(v28);
    }
    else
    {
      CAudioStream::SetAudioHandle((CAudioStream *)v7, 0LL, v25, 0LL, 0xFFFFFFFF);
    }
    *(_QWORD *)(v7 + 64) = 0LL;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 200);
    v38 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v29 = *((_QWORD *)this + 31);
    if ( v29 )
    {
      v30 = 0LL;
      while ( 1 )
      {
        v31 = *((_QWORD *)this + 30);
        if ( *(_QWORD *)(v31 + 8 * v30) == v7 )
          break;
        v30 = ++v5;
        if ( v5 >= v29 )
          goto LABEL_80;
      }
      v33 = v5 + 1LL;
      if ( v33 < v5 || v5 == -1LL || v33 > v29 )
        ATL::AtlThrowImpl(-2147024809);
      v34 = v29 - v33;
      if ( v34 )
      {
        v35 = memmove_s((void *const)(v31 + 8LL * v5), 8 * v34, (const void *const)(v31 + 8 * v33), 8 * v34);
        if ( v35 )
        {
          if ( v35 == 12 )
            ATL::AtlThrowImpl(-2147024882);
          if ( v35 == 22 || v35 == 34 )
            ATL::AtlThrowImpl(-2147024809);
          if ( v35 != 80 )
            ATL::AtlThrowImpl(-2147467259);
        }
      }
      --*((_QWORD *)this + 31);
    }
LABEL_80:
    v32 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v7 + 72LL);
    if ( v32 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference((CAudioStream *)v7);
    else
      v32((CAudioStream *)v7);
    if ( v38 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return 0LL;
}
