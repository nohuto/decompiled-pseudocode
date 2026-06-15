/*
 * XREFs of ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x180013D40
 * Callers:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x1800097B0 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x180002690 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000E430 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x180019910 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022F30 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x1800288E8 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18002890C (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z @ 0x18004F364 (-SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18004FFB4 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180050484 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180050510 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_dq @ 0x18005FE98 (WPP_SF_dq.c)
 */

__int64 __fastcall CAudioSession::RemoveStream(CAudioSession *this, struct CAudioStream *a2, char a3, char a4)
{
  char v4; // r13
  char v5; // r15
  unsigned int v6; // r14d
  __int64 v8; // rdi
  struct IAudioDeviceGraph *v10; // r8
  unsigned int v11; // esi
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  const void *v17; // r9
  void *v18; // rcx
  unsigned __int64 v19; // r15
  _QWORD *v20; // rcx
  __int64 (__fastcall *v21)(CPerEndpointVolumeAudioSession *); // rax
  struct IStreamGroupProxy *v22; // rdx
  struct IAudioStreamInfo *v23; // r8
  int (*v24)(CAudioResourceManager *__hidden, struct IStreamGroupProxy *, struct IAudioStreamInfo *); // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r9
  int v28; // esi
  void (__fastcall *v29)(__int64, __int64, __int64, __int64); // rax
  __int64 v30; // rcx
  char *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  unsigned int (__fastcall *v37)(CAudioStream *__hidden); // rax
  unsigned int v39; // r15d
  _QWORD *v40; // rsi
  __int64 v41; // rcx
  bool v42; // r8
  const void *v43; // r9
  void *v44; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  char v46; // [rsp+38h] [rbp-28h]
  LPCRITICAL_SECTION v47; // [rsp+40h] [rbp-20h] BYREF
  CAudioSession *v48; // [rsp+48h] [rbp-18h]
  __int64 v49; // [rsp+50h] [rbp-10h]
  __int64 v50; // [rsp+A0h] [rbp+40h] BYREF
  char v51; // [rsp+B0h] [rbp+50h]
  char v52; // [rsp+B8h] [rbp+58h]

  v52 = a4;
  v51 = a3;
  v4 = 0;
  v5 = a4;
  v6 = 0;
  v8 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x4Fu,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      this,
      a2);
  }
  LOBYTE(v48) = 0;
  v47 = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v47);
  v10 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 13);
  v11 = 0;
  if ( v10 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned __int64)v10 )
        ATL::AtlThrowImpl(-2147024809);
      if ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v12) == a2 )
        break;
      v12 = ++v11;
      if ( v11 >= (unsigned __int64)v10 )
        goto LABEL_32;
    }
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (unsigned __int64)v11 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 80LL, v11, v11, *(_QWORD *)(*((_QWORD *)this + 12) + 8LL * v11));
    }
    v4 = 1;
    if ( (unsigned __int64)v11 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    v13 = *((_QWORD *)this + 12);
    v14 = v11 + 1LL;
    v8 = *(_QWORD *)(v13 + 8LL * v11);
    if ( v14 < v11 || (v15 = *((_QWORD *)this + 13), v14 > v15) )
      ATL::AtlThrowImpl(-2147024809);
    v16 = v15 - v14;
    if ( v16 )
    {
      v17 = (const void *)(v13 + 8 * v14);
      v18 = (void *)(v13 + 8LL * v11);
      if ( 8 * v16 )
      {
        if ( !v18 || !v17 )
        {
          *(_DWORD *)_o__errno(v18, v16) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove(v18, v17, 8 * v16);
      }
    }
    --*((_QWORD *)this + 13);
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 200);
    v46 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v19 = *((_QWORD *)this + 31);
    if ( v19 >= *((_QWORD *)this + 32)
      && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                             (char *)this + 240,
                             v19 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v20 = (_QWORD *)(*((_QWORD *)this + 30) + 8 * v19);
    if ( v20 )
      *v20 = v8;
    ++*((_QWORD *)this + 31);
    if ( v46 )
      LeaveCriticalSection(lpCriticalSection);
    --*((_DWORD *)this + 22);
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        81LL,
        &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        *((unsigned int *)this + 22));
    }
    v5 = v52;
  }
LABEL_32:
  if ( (_BYTE)v48 )
    LeaveCriticalSection(v47);
  if ( !v4 )
  {
    ATL::CCritSecLock::CCritSecLock(
      (ATL::CCritSecLock *)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 128),
      (bool)v10);
    v39 = 0;
    if ( *((_QWORD *)this + 22) )
    {
      v40 = (_QWORD *)((char *)this + 168);
      v41 = 0LL;
      while ( *(struct CAudioStream **)(*v40 + 8 * v41) != a2 )
      {
        v41 = ++v39;
        if ( (unsigned __int64)v39 >= *((_QWORD *)this + 22) )
          goto LABEL_91;
      }
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        if ( (unsigned __int64)v39 >= *((_QWORD *)this + 22) )
          ATL::AtlThrowImpl(-2147024809);
        WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 82LL, v39, v39, *(_QWORD *)(*v40 + 8LL * v39));
      }
      if ( (unsigned __int64)v39 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      v8 = *(_QWORD *)(*v40 + 8LL * v39);
      v50 = v8;
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(
        (char *)this + 168,
        v39);
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v47, (struct _RTL_CRITICAL_SECTION *)this + 5, v42);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((char *)this + 240, &v50);
      if ( (_BYTE)v48 )
        ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v47);
    }
LABEL_91:
    if ( v46 )
      ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&lpCriticalSection);
    v5 = v52;
  }
  if ( v8 )
  {
    if ( v5 )
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      v48 = this;
      v47 = (LPCRITICAL_SECTION)&CAudioStreamDestroy::`vftable';
      v49 = v8;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)((char *)this + 624),
        (void (__fastcall ***)(_QWORD, volatile signed __int32 **))&v47);
      v21 = *(__int64 (__fastcall **)(CPerEndpointVolumeAudioSession *))(*(_QWORD *)this + 16LL);
      if ( v21 == CAudioSession::Release )
      {
        CAudioSession::Release(this);
      }
      else if ( v21 == CPerEndpointVolumeAudioSession::Release )
      {
        CPerEndpointVolumeAudioSession::Release(this);
      }
      else
      {
        v21(this);
      }
    }
    if ( v51 )
    {
      if ( *(_DWORD *)(v8 + 124) == 2 )
      {
        if ( *(_QWORD *)(v8 + 168) )
        {
          ATL::CComPtrBase<IPart>::Release(v8 + 168);
          if ( *(_QWORD *)(v8 + 168) )
            ATL::AtlComPtrAssign((struct IUnknown **)(v8 + 168), 0LL);
        }
        if ( *(_QWORD *)(v8 + 176) )
        {
          ATL::CComPtrBase<IPart>::Release(v8 + 176);
          if ( *(_QWORD *)(v8 + 176) )
            ATL::AtlComPtrAssign((struct IUnknown **)(v8 + 176), 0LL);
        }
        if ( *(_QWORD *)(v8 + 184) )
        {
          ATL::CComPtrBase<IAudioMeter>::Release(v8 + 184);
          if ( *(_QWORD *)(v8 + 184) )
            ATL::AtlComPtrAssign((struct IUnknown **)(v8 + 184), 0LL);
        }
      }
      v22 = *(struct IStreamGroupProxy **)(v8 + 56);
      v23 = (struct IAudioStreamInfo *)(v8 + 8);
      v24 = *(int (**)(CAudioResourceManager *__hidden, struct IStreamGroupProxy *, struct IAudioStreamInfo *))(*(_QWORD *)g_AudioResourceManager + 32LL);
      if ( v24 == CAudioResourceManager::DestroyStream )
        v25 = CAudioResourceManager::DestroyStream(g_AudioResourceManager, v22, v23);
      else
        v25 = ((__int64 (__fastcall *)(CAudioResourceManager *, struct IStreamGroupProxy *, struct IAudioStreamInfo *))v24)(
                g_AudioResourceManager,
                v22,
                v23);
      v26 = *(_QWORD *)(v8 + 56);
      v27 = *(unsigned int *)(v8 + 348);
      v28 = v25;
      v29 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v26 + 192LL);
      if ( (char *)v29 == (char *)CBaseStreamGroupProxy::UpdateStreamResourcePriority )
        CBaseStreamGroupProxy::UpdateStreamResourcePriority(v26, 2LL, 0xFFFFFFFFLL, v27);
      else
        v29(v26, 2LL, 0xFFFFFFFFLL, v27);
      v30 = *(_QWORD *)(v8 + 56);
      if ( v30 )
      {
        *(_QWORD *)(v8 + 56) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      *(_QWORD *)(v8 + 48) = 0LL;
      if ( v28 < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioStream::CloseAudioHandle", 0x201u, v28);
      v31 = *(char **)(v8 + 456);
      if ( (unsigned __int64)(v31 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        SetEvent(v31);
    }
    else
    {
      CAudioStream::SetAudioHandle((CAudioStream *)v8, 0LL, v10, 0LL, 0xFFFFFFFF);
    }
    *(_QWORD *)(v8 + 64) = 0LL;
    v47 = (LPCRITICAL_SECTION)((char *)this + 200);
    LOBYTE(v48) = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v47);
    if ( *((_QWORD *)this + 31) )
    {
      v32 = 0LL;
      while ( 1 )
      {
        v33 = *((_QWORD *)this + 30);
        if ( *(_QWORD *)(v33 + 8 * v32) == v8 )
          break;
        v32 = ++v6;
        if ( (unsigned __int64)v6 >= *((_QWORD *)this + 31) )
          goto LABEL_59;
      }
      v34 = v6 + 1LL;
      if ( v34 < v6 || v6 == -1LL || (v35 = *((_QWORD *)this + 31), v34 > v35) )
        ATL::AtlThrowImpl(-2147024809);
      v36 = v35 - v34;
      if ( v36 )
      {
        v43 = (const void *)(v33 + 8 * v34);
        v44 = (void *)(v33 + 8LL * v6);
        if ( 8 * v36 )
        {
          if ( !v44 || !v43 )
          {
            *(_DWORD *)_o__errno(v44, v36) = 22;
            invalid_parameter_noinfo();
            ATL::AtlThrowImpl(-2147024809);
          }
          memmove(v44, v43, 8 * v36);
        }
      }
      --*((_QWORD *)this + 31);
    }
LABEL_59:
    v37 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v8 + 72LL);
    if ( v37 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference((CAudioStream *)v8);
    else
      v37((CAudioStream *)v8);
    if ( (_BYTE)v48 )
      LeaveCriticalSection(v47);
  }
  return 0LL;
}
