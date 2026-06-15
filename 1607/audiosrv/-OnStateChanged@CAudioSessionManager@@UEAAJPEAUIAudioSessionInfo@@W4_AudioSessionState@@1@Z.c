/*
 * XREFs of ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000FD20
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180010FE0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x180002690 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003010 (-QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18000FB70 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180012CE0 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180012F30 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180015E90 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z @ 0x180015F00 (-GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z.c)
 *     ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015FC0 (-QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x18002C19C (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18002C1E8 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 *     WPP_SF_SS @ 0x1800615EC (WPP_SF_SS.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionManager::OnStateChanged(
        CAudioSessionManager *this,
        __int64 (__fastcall ***a2)(CPerEndpointVolumeAudioSession *this, const struct _GUID *a2, void **a3),
        enum _AudioSessionState a3,
        unsigned int a4)
{
  unsigned int v4; // esi
  CAudioSessionManager *v6; // r15
  __int64 (__fastcall *v7)(CPerEndpointVolumeAudioSession *, const struct _GUID *, void **); // rax
  int Interface; // eax
  __int64 (__fastcall *v9)(CAudioSession *__hidden, struct CAudioSession **); // rax
  int Implementation; // eax
  CAudioSession *v11; // rbx
  bool v12; // r8
  int (*v13)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int (*v14)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  __int64 (__fastcall *v15)(CAudioSession *__hidden, unsigned int *); // rax
  int ProcessId; // eax
  void (*v17)(void); // rax
  void (*v18)(void); // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx
  _QWORD *v21; // rdx
  _QWORD *v22; // rdx
  _QWORD *v23; // rdx
  CAudioSession *v24; // rcx
  ATL::CAtlException *v26; // rbx
  CAudioSession *v27; // [rsp+30h] [rbp-128h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-120h] BYREF
  CAudioSession *v29; // [rsp+40h] [rbp-118h] BYREF
  __int64 *v30; // [rsp+48h] [rbp-110h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-108h] BYREF
  char v32; // [rsp+58h] [rbp-100h]
  _QWORD v33[2]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v34[16]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+80h] [rbp-D8h]
  ATL::CAtlException *v36; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-B8h]
  __int128 v40; // [rsp+A8h] [rbp-B0h]
  __int64 v41; // [rsp+B8h] [rbp-A0h]
  int v42; // [rsp+C0h] [rbp-98h]
  __int64 v43; // [rsp+C8h] [rbp-90h]
  int v44; // [rsp+D0h] [rbp-88h]
  __int64 v45; // [rsp+D8h] [rbp-80h]
  void *v46; // [rsp+E0h] [rbp-78h] BYREF
  int v47; // [rsp+E8h] [rbp-70h]
  int v48; // [rsp+ECh] [rbp-6Ch]
  void *v49; // [rsp+F0h] [rbp-68h]
  int v50; // [rsp+F8h] [rbp-60h]
  int v51; // [rsp+FCh] [rbp-5Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp-58h] BYREF
  unsigned int *v53; // [rsp+110h] [rbp-48h]
  __int64 v54; // [rsp+118h] [rbp-40h]

  v35 = -2LL;
  v4 = a4;
  v6 = this;
  v33[0] = this;
  v28 = a4;
  v29 = 0LL;
  v27 = 0LL;
  v7 = **a2;
  if ( v7 == CAudioSession::QueryInterface )
  {
    Interface = CAudioSession::QueryInterface(
                  (CAudioSession *)a2,
                  &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a,
                  (void **)&v29);
  }
  else if ( v7 == CPerEndpointVolumeAudioSession::QueryInterface )
  {
    Interface = CPerEndpointVolumeAudioSession::QueryInterface(
                  (CPerEndpointVolumeAudioSession *)a2,
                  &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a,
                  (void **)&v29);
  }
  else
  {
    Interface = v7((CPerEndpointVolumeAudioSession *)a2, &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a, (void **)&v29);
  }
  if ( Interface < 0
    || ((v9 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct CAudioSession **))(*(_QWORD *)v29 + 24LL),
         v9 != CAudioSession::GetImplementation)
      ? (Implementation = v9(v29, &v27))
      : (Implementation = CAudioSession::GetImplementation(v29, &v27)),
        Implementation < 0) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids);
    }
    v24 = v29;
    if ( v29 )
      goto LABEL_56;
    return 0LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      30,
      (unsigned int)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
      0,
      v4);
  }
  v11 = v27;
  v37 = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)v27 + 98) - 24LL) + 24;
  v30 = &v38;
  v38 = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)v11 + 99) - 24LL) + 24;
  v39 = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)v11 + 100) - 24LL) + 24;
  v40 = *(_OWORD *)((char *)v11 + 808);
  v41 = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)v11 + 103) - 24LL) + 24;
  v42 = *((_DWORD *)v11 + 208);
  v43 = *((_QWORD *)v11 + 105);
  v44 = *((_DWORD *)v11 + 212);
  v45 = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)v11 + 107) - 24LL) + 24;
  if ( a3 == AudioSessionStateExpired )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, v4);
    }
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v34, (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 24), v12);
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32,
        (unsigned int)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
        0,
        v45);
    }
    try
    {
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
        (char *)v6 + 64,
        &v37,
        &v27);
    }
    catch ( ATL::CAtlException *v36 )
    {
      v26 = v36;
      if ( *(_DWORD *)v36 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v30) = *(_DWORD *)v26;
      v6 = (CAudioSessionManager *)v33[0];
      v4 = v28;
      if ( (int)v30 < 0 )
        goto LABEL_80;
    }
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x21u,
        (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
        v6,
        v27);
    }
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v27 + 8LL))(v27);
LABEL_80:
    if ( v34[8] )
      ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v34);
  }
  if ( v4 == 1 )
  {
    CAudioSessionManager::NotifyActiveSession(v6, v27);
  }
  else if ( v4 == 2 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, 0LL);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 24);
    v32 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38,
        (unsigned int)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
        0,
        v45);
    }
    if ( (unsigned __int8)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
                            (char *)v6 + 64,
                            &v37) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids);
      }
      v13 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v27 + 184LL);
      if ( v13 == CAudioSession::DeleteSessionNotification )
        CAudioSession::DeleteSessionNotification(v27, v6);
      else
        ((void (__fastcall *)(CAudioSession *, CAudioSessionManager *))v13)(v27, v6);
      v14 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v27 + 184LL);
      if ( v14 == CAudioSession::DeleteSessionNotification )
        CAudioSession::DeleteSessionNotification(v27, g_PolicyEventsHandler);
      else
        ((void (__fastcall *)(CAudioSession *, struct ISessionInternalEvents *))v14)(v27, g_PolicyEventsHandler);
      v15 = *(__int64 (__fastcall **)(CAudioSession *__hidden, unsigned int *))(*(_QWORD *)v27 + 120LL);
      if ( v15 == CAudioSession::GetProcessId )
        ProcessId = CAudioSession::GetProcessId(v27, &v28);
      else
        ProcessId = v15(v27, &v28);
      if ( ProcessId >= 0 && dword_1800CA040 > 4u )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)v27 + 107));
        v53 = &v28;
        v54 = 4LL;
        LODWORD(v33[0]) = ((unsigned int)&unk_1800A7F23 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        HIDWORD(v33[0]) = 4;
        v33[1] = 0LL;
        v46 = off_1800CA048;
        v47 = *(unsigned __int16 *)off_1800CA048;
        v48 = 2;
        v49 = &unk_1800A7F2E;
        v50 = 55;
        v51 = 1;
        EtwEventWriteTransfer(qword_1800CA060, v33, 0LL, 0LL, 4, &v46);
      }
      v17 = *(void (**)(void))(*(_QWORD *)v27 + 16LL);
      if ( (char *)v17 == (char *)CAudioSession::Release )
      {
        CAudioSession::Release(v27);
      }
      else if ( (char *)v17 == (char *)CPerEndpointVolumeAudioSession::Release )
      {
        CPerEndpointVolumeAudioSession::Release(v27);
      }
      else
      {
        v17();
      }
    }
    else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, v45);
    }
    if ( v32 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v27 )
  {
    v18 = *(void (**)(void))(*(_QWORD *)v27 + 16LL);
    if ( (char *)v18 == (char *)CAudioSession::Release )
    {
      CAudioSession::Release(v27);
    }
    else if ( (char *)v18 == (char *)CPerEndpointVolumeAudioSession::Release )
    {
      CPerEndpointVolumeAudioSession::Release(v27);
    }
    else
    {
      v18();
    }
    v27 = 0LL;
  }
  v19 = (_QWORD *)(v45 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 8LL))(*v19);
  v20 = (_QWORD *)(v41 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v41 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 8LL))(*v20);
  v21 = (_QWORD *)(v39 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v21 + 8LL))(*v21);
  v22 = (_QWORD *)(v38 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 8LL))(*v22);
  v23 = (_QWORD *)(v37 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v23 + 8LL))(*v23);
  v24 = v29;
  if ( v29 )
LABEL_56:
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v24 + 16LL))(v24);
  return 0LL;
}
