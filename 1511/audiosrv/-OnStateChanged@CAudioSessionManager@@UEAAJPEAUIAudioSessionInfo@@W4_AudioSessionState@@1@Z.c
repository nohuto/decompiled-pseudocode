/*
 * XREFs of ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180016A50
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800141D0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x1800140E0 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18001412C (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x1800168A0 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x180018950 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180025970 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z @ 0x1800288F0 (-GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z.c)
 *     ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028A20 (-QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180069968 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x180079A8C (WPP_SF_SS.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionManager::OnStateChanged(
        CAudioSessionManager *this,
        __int64 (__fastcall ***a2)(CAudioSession *__hidden this, const struct _GUID *, void **),
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  enum _AudioSessionState v4; // r15d
  CAudioSessionManager *v5; // r13
  __int64 (__fastcall *v6)(CAudioSession *__hidden, const struct _GUID *, void **); // rdi
  int Interface; // eax
  __int64 (__fastcall *v8)(CAudioSession *__hidden, struct CAudioSession **); // rdi
  int Implementation; // eax
  struct CAudioSession *v10; // rsi
  char *v11; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v12)(ATL::CAtlStringMgr *__hidden); // r14
  struct ATL::IAtlStringMgr *v13; // rax
  char *v14; // rbx
  char *v15; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v16)(ATL::CAtlStringMgr *__hidden); // r14
  struct ATL::IAtlStringMgr *v17; // rax
  char *v18; // rbx
  char *v19; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v20)(ATL::CAtlStringMgr *__hidden); // r14
  struct ATL::IAtlStringMgr *v21; // rax
  char *v22; // rbx
  char *v23; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v24)(ATL::CAtlStringMgr *__hidden); // r14
  struct ATL::IAtlStringMgr *v25; // rax
  char *v26; // rbx
  char *v27; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v28)(ATL::CAtlStringMgr *__hidden); // rsi
  struct ATL::IAtlStringMgr *v29; // rax
  char *v30; // rbx
  unsigned int (__fastcall *v31)(CAudioSession *__hidden); // rdi
  __int64 v32; // r14
  char *v33; // r14
  char *v34; // r14
  char *v35; // r14
  char *v36; // rsi
  CAudioSession *v37; // rbx
  int (*v39)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rsi
  int (*v40)(CAudioSession *__hidden, struct ISessionInternalEvents *); // r14
  unsigned int (__fastcall *v41)(CAudioSession *__hidden); // r14
  ATL::CAtlException *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  rsize_t v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  rsize_t v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  rsize_t v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  rsize_t v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  rsize_t v72; // rdx
  struct CAudioSession *v73; // [rsp+30h] [rbp-E8h] BYREF
  enum _AudioSessionState v74; // [rsp+38h] [rbp-E0h]
  enum _AudioSessionState v75; // [rsp+40h] [rbp-D8h]
  CAudioSession *v76[2]; // [rsp+48h] [rbp-D0h] BYREF
  CAudioSessionManager *v77; // [rsp+58h] [rbp-C0h]
  char **v78; // [rsp+60h] [rbp-B8h]
  __int64 v79; // [rsp+68h] [rbp-B0h]
  ATL::CAtlException *v80; // [rsp+70h] [rbp-A8h] BYREF
  char *v81; // [rsp+80h] [rbp-98h] BYREF
  char *v82; // [rsp+88h] [rbp-90h] BYREF
  char *v83; // [rsp+90h] [rbp-88h]
  __int128 v84; // [rsp+98h] [rbp-80h]
  char *v85; // [rsp+A8h] [rbp-70h]
  int v86; // [rsp+B0h] [rbp-68h]
  __int64 v87; // [rsp+B8h] [rbp-60h]
  int v88; // [rsp+C0h] [rbp-58h]
  char *v89; // [rsp+C8h] [rbp-50h]

  v79 = -2LL;
  v4 = a4;
  v74 = a3;
  v5 = this;
  v77 = this;
  v75 = a4;
  v76[0] = 0LL;
  v73 = 0LL;
  v6 = **a2;
  if ( v6 == CAudioSession::QueryInterface )
    Interface = CAudioSession::QueryInterface(
                  (CAudioSession *)a2,
                  &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a,
                  (void **)v76);
  else
    Interface = v6((CAudioSession *)a2, &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a, (void **)v76);
  if ( Interface < 0
    || ((v8 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct CAudioSession **))(*(_QWORD *)v76[0] + 24LL),
         v8 != CAudioSession::GetImplementation)
      ? (Implementation = v8(v76[0], &v73))
      : (Implementation = CAudioSession::GetImplementation(v76[0], &v73)),
        Implementation < 0) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
    }
    v37 = v76[0];
    if ( v76[0] )
      goto LABEL_56;
    return 0LL;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      35,
      (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      0,
      v4);
  }
  v10 = v73;
  v11 = (char *)*((_QWORD *)v73 + 98);
  v12 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**((_QWORD **)v11 - 3) + 32LL);
  if ( v12 == ATL::CAtlStringMgr::Clone )
    v13 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v11 - 3));
  else
    v13 = v12(*((ATL::CAtlStringMgr **)v11 - 3));
  if ( *((int *)v11 - 2) >= 0 && v13 == *((struct ATL::IAtlStringMgr **)v11 - 3) )
  {
    v14 = v11 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v11 - 2);
  }
  else
  {
    v43 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v13)(
            v13,
            *((unsigned int *)v11 - 4),
            2LL);
    v14 = (char *)v43;
    if ( !v43 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v45, v44, v46, v47);
    *(_DWORD *)(v43 + 8) = *((_DWORD *)v11 - 4);
    v48 = 2LL * (*((_DWORD *)v11 - 4) + 1);
    memcpy_s((void *const)(v43 + 24), v48, v11, v48);
  }
  v81 = v14 + 24;
  v78 = &v82;
  v15 = (char *)*((_QWORD *)v10 + 99);
  v16 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**((_QWORD **)v15 - 3) + 32LL);
  if ( v16 == ATL::CAtlStringMgr::Clone )
    v17 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v15 - 3));
  else
    v17 = v16(*((ATL::CAtlStringMgr **)v15 - 3));
  if ( *((int *)v15 - 2) >= 0 && v17 == *((struct ATL::IAtlStringMgr **)v15 - 3) )
  {
    v18 = v15 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v15 - 2);
  }
  else
  {
    v49 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v17)(
            v17,
            *((unsigned int *)v15 - 4),
            2LL);
    v18 = (char *)v49;
    if ( !v49 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v51, v50, v52, v53);
    *(_DWORD *)(v49 + 8) = *((_DWORD *)v15 - 4);
    v54 = 2LL * (*((_DWORD *)v15 - 4) + 1);
    memcpy_s((void *const)(v49 + 24), v54, v15, v54);
  }
  v82 = v18 + 24;
  v19 = (char *)*((_QWORD *)v10 + 100);
  v20 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**((_QWORD **)v19 - 3) + 32LL);
  if ( v20 == ATL::CAtlStringMgr::Clone )
    v21 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v19 - 3));
  else
    v21 = v20(*((ATL::CAtlStringMgr **)v19 - 3));
  if ( *((int *)v19 - 2) >= 0 && v21 == *((struct ATL::IAtlStringMgr **)v19 - 3) )
  {
    v22 = v19 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v19 - 2);
  }
  else
  {
    v55 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v21)(
            v21,
            *((unsigned int *)v19 - 4),
            2LL);
    v22 = (char *)v55;
    if ( !v55 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v57, v56, v58, v59);
    *(_DWORD *)(v55 + 8) = *((_DWORD *)v19 - 4);
    v60 = 2LL * (*((_DWORD *)v19 - 4) + 1);
    memcpy_s((void *const)(v55 + 24), v60, v19, v60);
  }
  v83 = v22 + 24;
  v84 = *(_OWORD *)((char *)v10 + 808);
  v23 = (char *)*((_QWORD *)v10 + 103);
  v24 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**((_QWORD **)v23 - 3) + 32LL);
  if ( v24 == ATL::CAtlStringMgr::Clone )
    v25 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v23 - 3));
  else
    v25 = v24(*((ATL::CAtlStringMgr **)v23 - 3));
  if ( *((int *)v23 - 2) >= 0 && v25 == *((struct ATL::IAtlStringMgr **)v23 - 3) )
  {
    v26 = v23 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v23 - 2);
  }
  else
  {
    v61 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v25)(
            v25,
            *((unsigned int *)v23 - 4),
            2LL);
    v26 = (char *)v61;
    if ( !v61 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v63, v62, v64, v65);
    *(_DWORD *)(v61 + 8) = *((_DWORD *)v23 - 4);
    v66 = 2LL * (*((_DWORD *)v23 - 4) + 1);
    memcpy_s((void *const)(v61 + 24), v66, v23, v66);
  }
  v85 = v26 + 24;
  v86 = *((_DWORD *)v10 + 208);
  v87 = *((_QWORD *)v10 + 105);
  v88 = *((_DWORD *)v10 + 212);
  v27 = (char *)*((_QWORD *)v10 + 107);
  v28 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**((_QWORD **)v27 - 3) + 32LL);
  if ( v28 == ATL::CAtlStringMgr::Clone )
    v29 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v27 - 3));
  else
    v29 = v28(*((ATL::CAtlStringMgr **)v27 - 3));
  if ( *((int *)v27 - 2) >= 0 && v29 == *((struct ATL::IAtlStringMgr **)v27 - 3) )
  {
    v30 = v27 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v27 - 2);
  }
  else
  {
    v67 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v29)(
            v29,
            *((unsigned int *)v27 - 4),
            2LL);
    v30 = (char *)v67;
    if ( !v67 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v69, v68, v70, v71);
    *(_DWORD *)(v67 + 8) = *((_DWORD *)v27 - 4);
    v72 = 2LL * (*((_DWORD *)v27 - 4) + 1);
    memcpy_s((void *const)(v67 + 24), v72, v27, v72);
  }
  v89 = v30 + 24;
  if ( v74 == AudioSessionStateExpired )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        36LL,
        &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        (unsigned int)v4);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 24));
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        37,
        (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        0,
        (__int64)v89);
    }
    try
    {
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
        (__int64)v5 + 64,
        (const struct CAudioSessionInstanceId *)&v81,
        &v73);
    }
    catch ( ATL::CAtlException *v80 )
    {
      v42 = v80;
      if ( *(_DWORD *)v80 == -1073741571 )
        _resetstkoflw();
      v74 = *(_DWORD *)v42;
      v5 = v77;
      v4 = v75;
      if ( v74 < AudioSessionStateInactive )
        goto LABEL_114;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v5, v73);
    }
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v73 + 8LL))(v73);
LABEL_114:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 24));
  }
  if ( v4 == AudioSessionStateActive )
  {
    CAudioSessionManager::NotifyActiveSession(v5, v73);
  }
  else if ( v4 == AudioSessionStateExpired )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, 0LL);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 24));
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        43,
        (unsigned int)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        0,
        (__int64)v89);
    }
    if ( ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
           (__int64)v5 + 64,
           (__int64)&v81) )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
      }
      v39 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v73 + 184LL);
      if ( v39 == CAudioSession::DeleteSessionNotification )
        CAudioSession::DeleteSessionNotification(v73, v5);
      else
        ((void (__fastcall *)(struct CAudioSession *, CAudioSessionManager *))v39)(v73, v5);
      v40 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v73 + 184LL);
      if ( v40 == CAudioSession::DeleteSessionNotification )
        CAudioSession::DeleteSessionNotification(v73, g_PolicyEventsHandler);
      else
        ((void (__fastcall *)(struct CAudioSession *, struct ISessionInternalEvents *))v40)(v73, g_PolicyEventsHandler);
      v41 = *(unsigned int (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v73 + 16LL);
      if ( v41 == CAudioSession::Release )
        CAudioSession::Release(v73);
      else
        v41(v73);
    }
    else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v89);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 24));
  }
  if ( v73 )
  {
    v31 = *(unsigned int (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v73 + 16LL);
    if ( v31 == CAudioSession::Release )
      CAudioSession::Release(v73);
    else
      v31(v73);
    v73 = 0LL;
  }
  v32 = (__int64)v89;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v89 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v32 - 24) + 8LL))(*(_QWORD *)(v32 - 24), v32 - 24);
  v33 = v85;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v85 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v33 - 3) + 8LL))(*((_QWORD *)v33 - 3), v33 - 24);
  v34 = v83;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v83 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v34 - 3) + 8LL))(*((_QWORD *)v34 - 3), v34 - 24);
  v35 = v82;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v82 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v35 - 3) + 8LL))(*((_QWORD *)v35 - 3), v35 - 24);
  v36 = v81;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v81 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v36 - 3) + 8LL))(*((_QWORD *)v36 - 3), v36 - 24);
  v37 = v76[0];
  if ( v76[0] )
LABEL_56:
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v37 + 16LL))(v37);
  return 0LL;
}
