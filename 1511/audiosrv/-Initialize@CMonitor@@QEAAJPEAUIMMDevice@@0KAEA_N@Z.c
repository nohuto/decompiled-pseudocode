/*
 * XREFs of ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180096C4C
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x180093980 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180095A64 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x180043160 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     WPP_SF_dg @ 0x18006F8A4 (WPP_SF_dg.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 *     ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x18009230C (-Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z.c)
 *     ??0?$CComQIPtr@UIAudioSessionControlInternal@@$1?_GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800963B8 (--0-$CComQIPtr@UIAudioSessionControlInternal@@$1-_GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98@@3U_.c)
 *     ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x1800968AC (-Attach@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonit.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180097FC4 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 *     ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x180098C40 (-SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMonitor::Initialize(
        CMonitor *this,
        struct IMMDevice *a2,
        struct IMMDevice *a3,
        __int64 a4,
        bool *a5)
{
  CMonitor *v7; // r13
  int Instance; // esi
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  int v11; // eax
  _QWORD *v12; // r14
  __int64 (__fastcall *v13)(CPolicyConfig *); // rdi
  __int64 (__fastcall *v14)(CPolicyConfig *); // rdi
  _QWORD *v15; // rax
  CPolicyConfig *v16; // rbx
  _QWORD *v17; // r15
  TraceLoggingHProvider v18; // rcx
  CPolicyConfig *v19; // rbx
  _QWORD *v20; // rax
  struct _SECURITY_ATTRIBUTES *v21; // rdx
  struct _SECURITY_ATTRIBUTES *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _SECURITY_ATTRIBUTES *v25; // rdx
  HANDLE Thread; // rax
  signed int v27; // eax
  int *v29; // rbx
  int *v30; // rbx
  int *v31; // rbx
  LPVOID *ppv; // [rsp+20h] [rbp-B8h]
  CPolicyConfig *v33; // [rsp+40h] [rbp-98h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-90h] BYREF
  LPCOLESTR lpsz; // [rsp+50h] [rbp-88h]
  __int64 v36; // [rsp+58h] [rbp-80h]
  CPolicyConfig *v37; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v38; // [rsp+68h] [rbp-70h] BYREF
  LPCRITICAL_SECTION v39; // [rsp+70h] [rbp-68h] BYREF
  char v40; // [rsp+78h] [rbp-60h]
  ATL::CAtlException *v41[2]; // [rsp+80h] [rbp-58h] BYREF
  ATL::CAtlException *v42; // [rsp+90h] [rbp-48h] BYREF
  ATL::CAtlException *v43; // [rsp+98h] [rbp-40h] BYREF

  v41[1] = (ATL::CAtlException *)-2LL;
  v7 = this;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v39, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids,
      (__int64)v7);
  }
  if ( *((_DWORD *)v7 + 14) && *((_DWORD *)v7 + 14) != 6 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids);
    }
    Instance = -2147467259;
    goto LABEL_120;
  }
  *a5 = 1;
  *((_DWORD *)v7 + 14) = 1;
  *((_QWORD *)v7 + 54) = 600000LL;
  ThreadpoolWork = CreateThreadpoolWork(CMonitor::TerminateMonitorInWorkerThread, v7, 0LL);
  *((_QWORD *)v7 + 61) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    Instance = LastError;
    if ( LastError > 0 )
      Instance = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids,
        Instance);
    }
    goto LABEL_119;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids,
      v7,
      ThreadpoolWork);
  }
  ppv = (LPVOID *)((char *)v7 + 72);
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(
               a2,
               &IID_IAudioClient,
               1LL);
  if ( Instance < 0 )
    goto LABEL_120;
  ppv = (LPVOID *)((char *)v7 + 176);
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a3->lpVtbl->Activate)(
               a3,
               &IID_IAudioClient,
               1LL);
  if ( Instance < 0 )
    goto LABEL_120;
  *a5 = 0;
  v11 = CMonitor::MuteInputLineControls(a2, a3);
  if ( v11 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids, v11);
  }
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)v7 + 64);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a3->lpVtbl->GetId)(a3, (char *)v7 + 168);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 9) + 64LL))(
               *((_QWORD *)v7 + 9),
               (__int64)v7 + 96);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 22) + 64LL))(
               *((_QWORD *)v7 + 22),
               (__int64)v7 + 200);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(**((_QWORD **)v7 + 9)
                                                                                                 + 24LL))(
               *((_QWORD *)v7 + 9),
               0LL,
               0x40000LL,
               *((_QWORD *)v7 + 54) / 2LL,
               0LL,
               *((_QWORD *)v7 + 12),
               0LL);
  if ( Instance == -2004287485 )
    *a5 = 1;
  if ( Instance < 0 )
    goto LABEL_120;
  v12 = (_QWORD *)((char *)v7 + 72);
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 9) + 112LL))(
               *((_QWORD *)v7 + 9),
               &GUID_c8adbd64_e71e_48a0_a4de_185c395cd317,
               (__int64)v7 + 80);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v12 + 112LL))(
               *v12,
               &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
               (__int64)v7 + 88);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 32LL))(*v12, (__int64)v7 + 120);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 11) + 24LL))(
               *((_QWORD *)v7 + 11),
               (__int64)v7 + 128);
  if ( Instance < 0 )
    goto LABEL_120;
  v33 = 0LL;
  Instance = CoCreateInstance(
               &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
               0LL,
               0x17u,
               &GUID_6be54be8_a068_4875_a49d_0c2966473b11,
               (LPVOID *)&v33);
  if ( Instance < 0
    || (Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, _QWORD, _QWORD, CPolicyConfig **, _QWORD **))(*(_QWORD *)v33 + 56LL))(
                     v33,
                     *((_QWORD *)v7 + 8),
                     0LL,
                     &v37,
                     &v38),
        Instance < 0) )
  {
    if ( v33 )
    {
      v13 = *(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v33 + 16LL);
      if ( v13 == CPolicyConfig::Release )
        CPolicyConfig::Release(v33);
      else
        v13(v33);
    }
    goto LABEL_119;
  }
  *((double *)v7 + 17) = (double)(int)v37 / 10000.0;
  if ( v33 )
  {
    v14 = *(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v33 + 16LL);
    if ( v14 == CPolicyConfig::Release )
      CPolicyConfig::Release(v33);
    else
      v14(v33);
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v12 + 112LL))(
               *v12,
               &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
               (__int64)v7 + 104);
  if ( Instance < 0 )
    goto LABEL_120;
  v15 = operator new(0x18uLL);
  v38 = v15;
  if ( v15 )
  {
    *v15 = &CMonitor::CMonitorNotification::`vftable';
    v15[1] = v7;
    *((_DWORD *)v15 + 4) = 1;
    *((_DWORD *)v15 + 5) = 1;
  }
  else
  {
    v15 = 0LL;
  }
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
    (CMonitor::CMonitorNotification **)v7 + 20,
    (CMonitor::CMonitorNotification *)v15);
  if ( !*((_QWORD *)v7 + 20) )
    goto LABEL_56;
  v33 = 0LL;
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, CPolicyConfig **))a2->lpVtbl->OpenPropertyStore)(
               a2,
               0LL,
               &v33);
  if ( Instance < 0 )
    goto LABEL_58;
  pvar = 0LL;
  lpsz = 0LL;
  v36 = 0LL;
  Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, PROPVARIANT *))(*(_QWORD *)v33 + 40LL))(
               v33,
               &PKEY_MonitorPauseOnBattery,
               &pvar);
  if ( Instance < 0 )
    goto LABEL_58;
  if ( (_WORD)pvar == 11 )
    *((_BYTE *)v7 + 61) = (_WORD)lpsz == 0xFFFF;
  PropVariantClear(&pvar);
  pvar = 0LL;
  lpsz = 0LL;
  v36 = 0LL;
  Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v33 + 40LL))(
               v33,
               &PKEY_AudioEndpoint_GUID,
               &pvar);
  if ( Instance < 0 || (_WORD)pvar == 31 && (Instance = CLSIDFromString(lpsz, (LPCLSID)v7 + 9), Instance < 0) )
  {
LABEL_58:
    v16 = v33;
LABEL_59:
    if ( v16 )
      (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_119;
  }
  PropVariantClear(&pvar);
  if ( v33 )
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v33 + 16LL))(v33);
  Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v7 + 22)
                                                                                                  + 24LL))(
               *((_QWORD *)v7 + 22),
               0LL,
               3489923072LL,
               *((_QWORD *)v7 + 54) / 2LL,
               0LL,
               *((_QWORD *)v7 + 12),
               (__int64)v7 + 144);
  if ( Instance == -2004287485 )
    *a5 = 1;
  if ( Instance < 0 )
    goto LABEL_120;
  v17 = (_QWORD *)((char *)v7 + 176);
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 22) + 112LL))(
               *((_QWORD *)v7 + 22),
               &GUID_f294acfc_3146_4483_a7bf_addca7c260e2,
               (__int64)v7 + 184);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v17 + 112LL))(
               *v17,
               &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
               (__int64)v7 + 192);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v17 + 32LL))(*v17, (__int64)v7 + 240);
  if ( Instance < 0 )
    goto LABEL_120;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 24) + 24LL))(
               *((_QWORD *)v7 + 24),
               (__int64)v7 + 248);
  if ( Instance < 0 )
    goto LABEL_120;
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 16);
      WPP_SF_dg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids,
        *((_DWORD *)v7 + 30));
      v18 = WPP_GLOBAL_Control;
    }
    if ( v18 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v18 + 7) & 0x800000) != 0
      && *((_BYTE *)v18 + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 31);
      WPP_SF_dg(
        *((_QWORD *)v18 + 2),
        0x10u,
        (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids,
        *((_DWORD *)v7 + 60));
    }
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 22) + 112LL))(
               *((_QWORD *)v7 + 22),
               &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
               (__int64)v7 + 216);
  if ( Instance < 0 )
    goto LABEL_120;
  ATL::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98>::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98>(
    &v37,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v7 + 27));
  v33 = 0LL;
  pvar = 0LL;
  lpsz = 0LL;
  v36 = 0LL;
  Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, CPolicyConfig **))(*(_QWORD *)v37 + 168LL))(v37, &v33);
  if ( Instance < 0
    || (LOWORD(pvar) = 11,
        LOWORD(lpsz) = -1,
        Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, PROPVARIANT *))(*(_QWORD *)v33 + 48LL))(
                     v33,
                     &PKEY_AudioSession_IsCaptureMonitorSession,
                     &pvar),
        Instance < 0) )
  {
    v19 = v33;
LABEL_87:
    if ( v19 )
      (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v19 + 16LL))(v19);
    v16 = v37;
    goto LABEL_59;
  }
  pvar = (PROPVARIANT)31;
  v36 = 0LL;
  lpsz = (LPCOLESTR)*((_QWORD *)v7 + 8);
  Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, PROPVARIANT *))(*(_QWORD *)v33 + 48LL))(
               v33,
               &PKEY_AudioSession_CaptureMonitorEndpointId,
               &pvar);
  v19 = v33;
  if ( Instance < 0 )
    goto LABEL_87;
  if ( v33 )
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v37 )
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v37 + 16LL))(v37);
  v20 = operator new(0x18uLL);
  v38 = v20;
  if ( v20 )
  {
    *v20 = &CMonitor::CMonitorNotification::`vftable';
    v20[1] = v7;
    *((_DWORD *)v20 + 4) = 0;
    *((_DWORD *)v20 + 5) = 1;
  }
  else
  {
    v20 = 0LL;
  }
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
    (CMonitor::CMonitorNotification **)v7 + 28,
    (CMonitor::CMonitorNotification *)v20);
  if ( !*((_QWORD *)v7 + 28) )
  {
LABEL_56:
    Instance = -2147024882;
    goto LABEL_120;
  }
  Instance = CMonitor::SetSessionTitleAndIcon(v7, a2);
  if ( Instance >= 0 )
  {
    try
    {
      ATL::CEvent::Create((CMonitor *)((char *)v7 + 112), v21);
    }
    catch ( ATL::CAtlException *v41 )
    {
      v29 = (int *)v41[0];
      if ( *(_DWORD *)v41[0] == -1073741571 )
        _resetstkoflw();
      Instance = *v29;
      v7 = this;
      if ( *v29 < 0 )
        goto LABEL_120;
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 9) + 104LL))(
                 *((_QWORD *)v7 + 9),
                 *((_QWORD *)v7 + 14));
    if ( Instance >= 0 )
    {
      try
      {
        ATL::CEvent::Create((CMonitor *)((char *)v7 + 232), v22);
      }
      catch ( ATL::CAtlException *v43 )
      {
        v30 = (int *)v43;
        if ( *(_DWORD *)v43 == -1073741571 )
          _resetstkoflw();
        Instance = *v30;
        v7 = this;
        if ( *v30 < 0 )
          goto LABEL_120;
      }
      Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 22) + 104LL))(
                   *((_QWORD *)v7 + 22),
                   *((_QWORD *)v7 + 29));
      if ( Instance >= 0 )
      {
        v23 = *((_QWORD *)v7 + 12);
        v24 = *(unsigned __int16 *)(v23 + 2) * (*(unsigned __int16 *)(v23 + 14) >> 3);
        *((_QWORD *)v7 + 55) = v24;
        v25 = (struct _SECURITY_ATTRIBUTES *)(v24 * (*((_QWORD *)v7 + 54) * *(unsigned int *)(v23 + 4) / 10000LL));
        *((_QWORD *)v7 + 56) = v25;
        try
        {
          ATL::CEvent::Create((CMonitor *)((char *)v7 + 288), v25);
        }
        catch ( ATL::CAtlException *v42 )
        {
          v31 = (int *)v42;
          if ( *(_DWORD *)v42 == -1073741571 )
            _resetstkoflw();
          Instance = *v31;
          v7 = this;
          if ( *v31 < 0 )
            goto LABEL_120;
        }
        Thread = CreateThread(
                   0LL,
                   0LL,
                   (LPTHREAD_START_ROUTINE)CMonitor::CaptureMonitorThreadWrapper,
                   v7,
                   0,
                   (LPDWORD)v7 + 70);
        *((_QWORD *)v7 + 34) = Thread;
        if ( Thread )
        {
          Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 13) + 80LL))(
                       *((_QWORD *)v7 + 13),
                       *((_QWORD *)v7 + 20));
          if ( Instance < 0 )
            goto LABEL_120;
          Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 27) + 80LL))(
                       *((_QWORD *)v7 + 27),
                       *((_QWORD *)v7 + 28));
          if ( Instance < 0 )
            goto LABEL_120;
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x11u,
              (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids);
          }
          *((_DWORD *)v7 + 14) = 2;
          *((_BYTE *)v7 + 60) = 0;
        }
        else
        {
          v27 = GetLastError();
          Instance = v27;
          if ( v27 > 0 )
            Instance = (unsigned __int16)v27 | 0x80070000;
        }
LABEL_119:
        if ( Instance >= 0 )
          goto LABEL_126;
      }
    }
  }
LABEL_120:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    LODWORD(ppv) = Instance;
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids,
      v7,
      ppv);
  }
  *((_BYTE *)v7 + 60) = 1;
  if ( *a5 )
    *((_DWORD *)v7 + 14) = 7;
LABEL_126:
  if ( v40 )
    ATL::CCritSecLock::Unlock(&v39);
  return (unsigned int)Instance;
}
