/*
 * XREFs of ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x18007F77C
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x18007C8A0 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18007E758 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x180032D80 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_dg @ 0x180058F50 (WPP_SF_dg.c)
 *     ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x18007B348 (-Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z.c)
 *     ??0?$CComQIPtr@UIAudioSessionControlInternal@@$1?_GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x18007EFFC (--0-$CComQIPtr@UIAudioSessionControlInternal@@$1-_GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98@@3U_.c)
 *     ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x18007F3F4 (-Attach@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonit.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180080900 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 *     ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x1800815A0 (-SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMonitor::Initialize(
        CMonitor *this,
        struct IMMDevice *a2,
        struct IMMDevice *a3,
        __int64 a4,
        bool *a5)
{
  CMonitor *v7; // rsi
  int Instance; // ebx
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  _QWORD *v11; // r13
  int v12; // eax
  void (*v13)(void); // rax
  _QWORD *v14; // rax
  CPolicyConfig *v15; // rcx
  _QWORD *v16; // r13
  CAudioSession *v17; // rcx
  CPolicyConfig *v18; // rcx
  _QWORD *v19; // rax
  struct _SECURITY_ATTRIBUTES *v20; // rdx
  struct _SECURITY_ATTRIBUTES *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _SECURITY_ATTRIBUTES *v24; // rdx
  HANDLE Thread; // rax
  signed int v26; // eax
  ATL::CAtlException *v28; // rbx
  ATL::CAtlException *v29; // rbx
  ATL::CAtlException *v30; // rbx
  LPVOID *ppv; // [rsp+20h] [rbp-B8h]
  CPolicyConfig *v32; // [rsp+40h] [rbp-98h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-90h] BYREF
  LPCOLESTR lpsz; // [rsp+50h] [rbp-88h]
  __int64 v35; // [rsp+58h] [rbp-80h]
  CPolicyConfig *v36; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v37; // [rsp+68h] [rbp-70h] BYREF
  LPCRITICAL_SECTION v38; // [rsp+70h] [rbp-68h] BYREF
  char v39; // [rsp+78h] [rbp-60h]
  __int64 v40; // [rsp+80h] [rbp-58h]
  ATL::CAtlException *v41; // [rsp+88h] [rbp-50h] BYREF
  ATL::CAtlException *v42; // [rsp+90h] [rbp-48h] BYREF
  ATL::CAtlException *v43; // [rsp+98h] [rbp-40h] BYREF
  int v46; // [rsp+F8h] [rbp+20h]
  int v47; // [rsp+F8h] [rbp+20h]
  int v48; // [rsp+F8h] [rbp+20h]

  v40 = -2LL;
  v7 = this;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v38, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
      (__int64)v7);
  }
  if ( *((_DWORD *)v7 + 14) && *((_DWORD *)v7 + 14) != 6 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids);
    }
    Instance = -2147467259;
    goto LABEL_121;
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
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
        Instance);
    }
    goto LABEL_120;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
      v7,
      ThreadpoolWork);
  }
  v11 = (_QWORD *)((char *)v7 + 72);
  ppv = (LPVOID *)((char *)v7 + 72);
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(
               a2,
               &IID_IAudioClient,
               1LL);
  if ( Instance < 0 )
    goto LABEL_121;
  ppv = (LPVOID *)((char *)v7 + 176);
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a3->lpVtbl->Activate)(
               a3,
               &IID_IAudioClient,
               1LL);
  if ( Instance < 0 )
    goto LABEL_121;
  *a5 = 0;
  v12 = CMonitor::MuteInputLineControls(a2, a3);
  if ( v12 < 0
    && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids, v12);
  }
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)v7 + 64);
  if ( Instance < 0 )
    goto LABEL_121;
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a3->lpVtbl->GetId)(a3, (char *)v7 + 168);
  if ( Instance < 0 )
    goto LABEL_121;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 64LL))(*v11, (__int64)v7 + 96);
  if ( Instance < 0 )
    goto LABEL_121;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 22) + 64LL))(
               *((_QWORD *)v7 + 22),
               (__int64)v7 + 200);
  if ( Instance < 0 )
    goto LABEL_121;
  Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v11 + 24LL))(
               *v11,
               0LL,
               0x40000LL,
               *((_QWORD *)v7 + 54) / 2LL,
               0LL,
               *((_QWORD *)v7 + 12),
               0LL);
  if ( Instance == -2004287485 )
    *a5 = 1;
  if ( Instance < 0 )
    goto LABEL_121;
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v11 + 112LL))(
               *v11,
               &GUID_c8adbd64_e71e_48a0_a4de_185c395cd317,
               (__int64)v7 + 80);
  if ( Instance < 0 )
    goto LABEL_121;
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v11 + 112LL))(
               *v11,
               &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
               (__int64)v7 + 88);
  if ( Instance < 0 )
    goto LABEL_121;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 32LL))(*v11, (__int64)v7 + 120);
  if ( Instance < 0 )
    goto LABEL_121;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 11) + 24LL))(
               *((_QWORD *)v7 + 11),
               (__int64)v7 + 128);
  if ( Instance < 0 )
    goto LABEL_121;
  v32 = 0LL;
  Instance = CoCreateInstance(
               &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
               0LL,
               0x17u,
               &GUID_00632a31_4d49_4167_8ae1_27f82ce135b1,
               (LPVOID *)&v32);
  if ( Instance < 0
    || (Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, _QWORD, _QWORD, CPolicyConfig **, _QWORD **))(*(_QWORD *)v32 + 56LL))(
                     v32,
                     *((_QWORD *)v7 + 8),
                     0LL,
                     &v36,
                     &v37),
        Instance < 0) )
  {
    if ( !v32 )
      goto LABEL_120;
    if ( *(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v32 + 16LL) == CPolicyConfig::Release )
    {
      CPolicyConfig::Release(v32);
      goto LABEL_120;
    }
    v13 = *(void (**)(void))(*(_QWORD *)v32 + 16LL);
    goto LABEL_46;
  }
  *((double *)v7 + 17) = (double)(int)v36 / 10000.0;
  if ( v32 )
  {
    if ( *(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v32 + 16LL) == CPolicyConfig::Release )
      CPolicyConfig::Release(v32);
    else
      (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v32 + 16LL))(v32);
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v11 + 112LL))(
               *v11,
               &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
               (__int64)v7 + 104);
  if ( Instance < 0 )
    goto LABEL_121;
  v14 = operator new(0x18uLL);
  v37 = v14;
  if ( v14 )
  {
    *v14 = &CMonitor::CMonitorNotification::`vftable';
    v14[1] = v7;
    *((_DWORD *)v14 + 4) = 1;
    *((_DWORD *)v14 + 5) = 1;
  }
  else
  {
    v14 = 0LL;
  }
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
    (CMonitor::CMonitorNotification **)v7 + 20,
    (CMonitor::CMonitorNotification *)v14);
  if ( !*((_QWORD *)v7 + 20) )
    goto LABEL_57;
  v32 = 0LL;
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, CPolicyConfig **))a2->lpVtbl->OpenPropertyStore)(
               a2,
               0LL,
               &v32);
  if ( Instance < 0 )
    goto LABEL_59;
  pvar = 0LL;
  lpsz = 0LL;
  v35 = 0LL;
  Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, PROPVARIANT *))(*(_QWORD *)v32 + 40LL))(
               v32,
               &PKEY_MonitorPauseOnBattery,
               &pvar);
  if ( Instance < 0 )
    goto LABEL_59;
  if ( (_WORD)pvar == 11 )
    *((_BYTE *)v7 + 61) = (_WORD)lpsz == 0xFFFF;
  PropVariantClear(&pvar);
  pvar = 0LL;
  lpsz = 0LL;
  v35 = 0LL;
  Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v32 + 40LL))(
               v32,
               &PKEY_AudioEndpoint_GUID,
               &pvar);
  if ( Instance < 0 || (_WORD)pvar == 31 && (Instance = CLSIDFromString(lpsz, (LPCLSID)v7 + 9), Instance < 0) )
  {
LABEL_59:
    v15 = v32;
LABEL_60:
    if ( !v15 )
      goto LABEL_120;
    v13 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
LABEL_46:
    v13();
    goto LABEL_120;
  }
  PropVariantClear(&pvar);
  if ( v32 )
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v32 + 16LL))(v32);
  v16 = (_QWORD *)((char *)v7 + 176);
  Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v7 + 22)
                                                                                                  + 24LL))(
               *((_QWORD *)v7 + 22),
               0LL,
               3624140800LL,
               *((_QWORD *)v7 + 54) / 2LL,
               0LL,
               *((_QWORD *)v7 + 12),
               (__int64)v7 + 144);
  if ( Instance == -2004287485 )
    *a5 = 1;
  if ( Instance < 0 )
    goto LABEL_121;
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v16 + 112LL))(
               *v16,
               &GUID_f294acfc_3146_4483_a7bf_addca7c260e2,
               (__int64)v7 + 184);
  if ( Instance < 0 )
    goto LABEL_121;
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v16 + 112LL))(
               *v16,
               &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
               (__int64)v7 + 192);
  if ( Instance < 0 )
    goto LABEL_121;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 22) + 32LL))(
               *((_QWORD *)v7 + 22),
               (__int64)v7 + 240);
  if ( Instance < 0 )
    goto LABEL_121;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 24) + 24LL))(
               *((_QWORD *)v7 + 24),
               (__int64)v7 + 248);
  if ( Instance < 0 )
    goto LABEL_121;
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
        *((_DWORD *)v7 + 30),
        *((_QWORD *)v7 + 16));
      v17 = WPP_GLOBAL_Control;
    }
    if ( v17 != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v17 + 7) & 0x800000) != 0
      && *((_BYTE *)v17 + 25) >= 4u )
    {
      WPP_SF_dg(
        *((_QWORD *)v17 + 2),
        0x10u,
        (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
        *((_DWORD *)v7 + 60),
        *((_QWORD *)v7 + 31));
    }
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 22) + 112LL))(
               *((_QWORD *)v7 + 22),
               &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
               (__int64)v7 + 216);
  if ( Instance < 0 )
    goto LABEL_121;
  ATL::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98>::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98>(
    &v36,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v7 + 27));
  v32 = 0LL;
  pvar = 0LL;
  lpsz = 0LL;
  v35 = 0LL;
  Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, CPolicyConfig **))(*(_QWORD *)v36 + 168LL))(v36, &v32);
  if ( Instance < 0
    || (LOWORD(pvar) = 11,
        LOWORD(lpsz) = -1,
        Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, PROPVARIANT *))(*(_QWORD *)v32 + 48LL))(
                     v32,
                     &PKEY_AudioSession_IsCaptureMonitorSession,
                     &pvar),
        Instance < 0) )
  {
    v18 = v32;
LABEL_88:
    if ( v18 )
      (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v18 + 16LL))(v18);
    v15 = v36;
    goto LABEL_60;
  }
  pvar = (PROPVARIANT)31;
  v35 = 0LL;
  lpsz = (LPCOLESTR)*((_QWORD *)v7 + 8);
  Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, PROPVARIANT *))(*(_QWORD *)v32 + 48LL))(
               v32,
               &PKEY_AudioSession_CaptureMonitorEndpointId,
               &pvar);
  v18 = v32;
  if ( Instance < 0 )
    goto LABEL_88;
  if ( v32 )
    (*(void (**)(void))(*(_QWORD *)v32 + 16LL))();
  if ( v36 )
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v36 + 16LL))(v36);
  v19 = operator new(0x18uLL);
  v37 = v19;
  if ( v19 )
  {
    *v19 = &CMonitor::CMonitorNotification::`vftable';
    v19[1] = v7;
    *((_DWORD *)v19 + 4) = 0;
    *((_DWORD *)v19 + 5) = 1;
  }
  else
  {
    v19 = 0LL;
  }
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
    (CMonitor::CMonitorNotification **)v7 + 28,
    (CMonitor::CMonitorNotification *)v19);
  if ( !*((_QWORD *)v7 + 28) )
  {
LABEL_57:
    Instance = -2147024882;
    goto LABEL_121;
  }
  Instance = CMonitor::SetSessionTitleAndIcon(v7, a2);
  if ( Instance >= 0 )
  {
    try
    {
      ATL::CEvent::Create((CMonitor *)((char *)v7 + 112), v20);
    }
    catch ( ATL::CAtlException *v41 )
    {
      v28 = v41;
      if ( *(_DWORD *)v41 == -1073741571 )
        o__resetstkoflw_0();
      v46 = *(_DWORD *)v28;
      Instance = *(_DWORD *)v28;
      v7 = this;
      if ( v46 < 0 )
        goto LABEL_121;
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 9) + 104LL))(
                 *((_QWORD *)v7 + 9),
                 *((_QWORD *)v7 + 14));
    if ( Instance >= 0 )
    {
      try
      {
        ATL::CEvent::Create((CMonitor *)((char *)v7 + 232), v21);
      }
      catch ( ATL::CAtlException *v42 )
      {
        v29 = v42;
        if ( *(_DWORD *)v42 == -1073741571 )
          o__resetstkoflw_0();
        v47 = *(_DWORD *)v29;
        Instance = *(_DWORD *)v29;
        v7 = this;
        if ( v47 < 0 )
          goto LABEL_121;
      }
      Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 22) + 104LL))(
                   *((_QWORD *)v7 + 22),
                   *((_QWORD *)v7 + 29));
      if ( Instance >= 0 )
      {
        v22 = *((_QWORD *)v7 + 12);
        v23 = *(unsigned __int16 *)(v22 + 2) * (*(unsigned __int16 *)(v22 + 14) >> 3);
        *((_QWORD *)v7 + 55) = v23;
        v24 = (struct _SECURITY_ATTRIBUTES *)(v23 * (*((_QWORD *)v7 + 54) * *(unsigned int *)(v22 + 4) / 10000LL));
        *((_QWORD *)v7 + 56) = v24;
        try
        {
          ATL::CEvent::Create((CMonitor *)((char *)v7 + 288), v24);
        }
        catch ( ATL::CAtlException *v43 )
        {
          v30 = v43;
          if ( *(_DWORD *)v43 == -1073741571 )
            o__resetstkoflw_0();
          v48 = *(_DWORD *)v30;
          Instance = *(_DWORD *)v30;
          v7 = this;
          if ( v48 < 0 )
            goto LABEL_121;
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
            goto LABEL_121;
          Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 27) + 80LL))(
                       *((_QWORD *)v7 + 27),
                       *((_QWORD *)v7 + 28));
          if ( Instance < 0 )
            goto LABEL_121;
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x11u,
              (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids);
          }
          *((_DWORD *)v7 + 14) = 2;
          *((_BYTE *)v7 + 60) = 0;
        }
        else
        {
          v26 = GetLastError();
          Instance = v26;
          if ( v26 > 0 )
            Instance = (unsigned __int16)v26 | 0x80070000;
        }
LABEL_120:
        if ( Instance >= 0 )
          goto LABEL_127;
      }
    }
  }
LABEL_121:
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    LODWORD(ppv) = Instance;
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
      v7,
      ppv);
  }
  *((_BYTE *)v7 + 60) = 1;
  if ( *a5 )
    *((_DWORD *)v7 + 14) = 7;
LABEL_127:
  if ( v39 )
    ATL::CCritSecLock::Unlock(&v38);
  return (unsigned int)Instance;
}
