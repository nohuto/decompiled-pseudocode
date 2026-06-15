/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x1800080BC
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008A60 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001AC4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180007810 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x180037F60 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180038B98 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ??1?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ @ 0x180039564 (--1-$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18003F6EC (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     memcmp_0 @ 0x180048C3E (memcmp_0.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ??1?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180087128 (--1-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStreamGroupPr.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180087164 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_2bcc51b66ca93e18e4fdf62693613b22_@@@std@@YA?AV_lambda_2bcc51b66ca93e18e4fdf62693613b22_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18008EF10 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_18008EF10.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_ce403711a563f9ee83ce29a07f7b5c18_@@@std@@YA?AV_lambda_ce403711a563f9ee83ce29a07f7b5c18_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18008F028 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_18008F028.c)
 *     _lambda_40165558e5be6ae7e79678fda383f096_::operator() @ 0x18008F370 (_lambda_40165558e5be6ae7e79678fda383f096_--operator().c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18008FDB8 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180090EC0 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream(
        CAudioResourceManager *this,
        struct _GUID *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned __int64 a6,
        unsigned int a7,
        bool a8,
        struct IAudioProcess *a9,
        struct CAudioSessionManager *a10,
        bool a11,
        bool a12,
        struct ISaDeviceProxy **a13)
{
  __int64 (__fastcall *v14)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, unsigned int, enum _AUDCLNT_SHAREMODE, unsigned __int64, unsigned int, struct ISaDeviceProxy **); // rdi
  unsigned int v15; // edi
  unsigned int SaDevice; // eax
  signed int SaDeviceForPackagedApp; // esi
  TraceLoggingHProvider v18; // rcx
  CAudioResourceManager *v19; // rcx
  struct ISaDeviceProxy *v20; // r15
  _QWORD *i; // rbx
  _QWORD *v22; // rax
  __int64 v23; // r14
  signed __int64 v24; // rsi
  unsigned __int16 *v25; // r15
  __int64 v26; // rsi
  const void *v27; // rax
  __int64 v28; // rax
  char v29; // r14
  char v30; // r15
  _QWORD *j; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  TraceLoggingHProvider v35; // rcx
  struct ISaDeviceProxy **v36; // r14
  unsigned int v37; // r15d
  struct SaDeviceParams *v38; // r8
  struct _GUID *v39; // r13
  __int64 v40; // rdi
  __int64 v41; // rbx
  int v42; // ebx
  char *v43; // rbx
  unsigned __int64 v45; // [rsp+28h] [rbp-B1h]
  struct ISaDeviceProxy **v46; // [rsp+38h] [rbp-A1h]
  unsigned int v47; // [rsp+50h] [rbp-89h]
  struct ISaDeviceProxy *v48; // [rsp+58h] [rbp-81h] BYREF
  __int64 v49; // [rsp+60h] [rbp-79h] BYREF
  struct ISaDeviceProxy **v50; // [rsp+68h] [rbp-71h] BYREF
  void *v51; // [rsp+70h] [rbp-69h] BYREF
  __int64 v52; // [rsp+78h] [rbp-61h] BYREF
  struct _GUID *v53; // [rsp+80h] [rbp-59h]
  __int128 v54; // [rsp+88h] [rbp-51h] BYREF
  __int64 v55; // [rsp+98h] [rbp-41h]
  __int128 v56; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-29h]
  __int64 v58; // [rsp+B8h] [rbp-21h]
  _QWORD v59[2]; // [rsp+C0h] [rbp-19h] BYREF

  v58 = -2LL;
  v47 = a4;
  v53 = a2;
  v50 = a13;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids, *(_QWORD *)a3);
    a2 = v53;
    a4 = v47;
  }
  v14 = *(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, unsigned int, enum _AUDCLNT_SHAREMODE, unsigned __int64, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL);
  if ( v14 == CDeviceGraphManager::GetSaDevice )
  {
    v15 = a7;
    SaDevice = CDeviceGraphManager::GetSaDevice(
                 g_DeviceGraphManager,
                 (struct CEndpointCharacteristics *)a2,
                 a3,
                 a4,
                 a5,
                 0LL,
                 a7,
                 a13);
  }
  else
  {
    v46 = a13;
    v45 = 0LL;
    SaDevice = ((__int64 (__fastcall *)(CDeviceGraphManager *, struct _GUID *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE))v14)(
                 g_DeviceGraphManager,
                 v53,
                 a3,
                 v47,
                 a5);
    v15 = a7;
  }
  SaDeviceForPackagedApp = SaDevice;
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids, SaDevice);
    v18 = WPP_GLOBAL_Control;
  }
  if ( SaDeviceForPackagedApp == -2005139389 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a9 + 88LL))(a9) )
    {
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                                 v19,
                                 (struct CEndpointCharacteristics *)v53,
                                 a3,
                                 v47,
                                 a5,
                                 v45,
                                 v15,
                                 (struct IAudioProcess *)v46,
                                 a10,
                                 v50);
      goto LABEL_107;
    }
    v18 = WPP_GLOBAL_Control;
    goto LABEL_109;
  }
  if ( SaDeviceForPackagedApp != -2005139368 )
    goto LABEL_108;
  v52 = 0LL;
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v52);
  SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(CDeviceGraphStore *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                             + 24LL))(
                             g_DeviceGraphStore,
                             *(_QWORD *)a3,
                             &v52);
  v56 = 0LL;
  v57 = 0LL;
  if ( SaDeviceForPackagedApp >= 0 )
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v52 + 72LL))(v52, &v56);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      27LL,
      &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
      (__int64)(*((_QWORD *)&v56 + 1) - v56) >> 3);
  }
  if ( SaDeviceForPackagedApp >= 0 )
  {
    v20 = 0LL;
    v51 = 0LL;
    v48 = 0LL;
    for ( i = (_QWORD *)v56; ; ++i )
    {
      if ( i == *((_QWORD **)&v56 + 1) )
      {
        v48 = 0LL;
        *v50 = v20;
        SaDeviceForPackagedApp = v20 == 0LL ? 0x887C001A : 0;
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v48);
        break;
      }
      v22 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*i + 40LL))(*i, v59);
      if ( *v22 == *((_QWORD *)a3 + 6)
        && v22[1] == *((_QWORD *)a3 + 7)
        && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 80LL))(*i) == *((_DWORD *)a3 + 2) )
      {
        if ( a11 )
        {
          if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) != *((_QWORD *)a3 + 4) )
            continue;
        }
        else if ( v20 )
        {
          v23 = *i;
          v24 = abs64(
                  (*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v20 + 32LL))(v20)
                - *((_QWORD *)a3 + 4));
          if ( v24 <= (__int64)abs64((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23) - *((_QWORD *)a3 + 4)) )
            continue;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 88LL))(*i) )
        {
          if ( a12
            && (v25 = (unsigned __int16 *)*((_QWORD *)a3 + 2),
                v26 = v25[8],
                v27 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i),
                memcmp_0(v27, v25, v26 + 18)) )
          {
            v20 = (struct ISaDeviceProxy *)v51;
          }
          else
          {
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v28 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
              WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids, v28);
            }
            Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v48, i);
            v20 = v48;
            v51 = v48;
          }
        }
      }
    }
  }
  if ( SaDeviceForPackagedApp != -2005139430 )
    goto LABEL_106;
  v48 = 0LL;
  v29 = 0;
  v30 = 0;
  for ( j = (_QWORD *)v56; ; ++j )
  {
    if ( j == *((_QWORD **)&v56 + 1) )
      goto LABEL_99;
    v32 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*j + 40LL))(*j, v59);
    if ( *v32 == *((_QWORD *)a3 + 6)
      && v32[1] == *((_QWORD *)a3 + 7)
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*j + 80LL))(*j) == *((_DWORD *)a3 + 2)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 88LL))(*j) )
    {
      break;
    }
LABEL_56:
    ;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 136LL))(*j) )
  {
    v30 = 1;
    goto LABEL_56;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 120LL))(*j) )
  {
    v29 = 1;
    goto LABEL_56;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 32LL))(*j);
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids, v33);
  }
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v48, j);
  v34 = (__int64)v48;
  if ( v48 )
  {
    v51 = 0LL;
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, void **))(*(_QWORD *)v48 + 104LL))(
                               v48,
                               &v51);
    v54 = 0LL;
    v55 = 0LL;
    if ( SaDeviceForPackagedApp < 0 )
      goto LABEL_69;
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v52 + 80LL))(
                               v52,
                               v34,
                               &v54);
    v35 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        30LL,
        &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
        (__int64)(*((_QWORD *)&v54 + 1) - v54) >> 3);
      v35 = WPP_GLOBAL_Control;
    }
    if ( SaDeviceForPackagedApp >= 0 )
    {
      v49 = v34;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v49);
      std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_2bcc51b66ca93e18e4fdf62693613b22_>(
        v59,
        v54,
        *((_QWORD *)&v54 + 1),
        &v49);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v59);
LABEL_69:
      v35 = WPP_GLOBAL_Control;
    }
    if ( v35 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v35 + 7) & 0x100) != 0
      && *((_BYTE *)v35 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v35 + 2), 0x20u, (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids);
      v35 = WPP_GLOBAL_Control;
    }
    if ( SaDeviceForPackagedApp < 0 )
    {
      v36 = v50;
      v37 = a7;
      v39 = v53;
    }
    else
    {
      std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v56);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v48);
      v36 = v50;
      v37 = a7;
      v38 = a3;
      v39 = v53;
      SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct _GUID *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, _QWORD, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                                 g_DeviceGraphManager,
                                 v53,
                                 v38,
                                 v47,
                                 a5,
                                 0LL,
                                 a7,
                                 v50);
      v35 = WPP_GLOBAL_Control;
    }
    if ( v35 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v35 + 7) & 0x100) != 0
      && *((_BYTE *)v35 + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)v35 + 2),
        33LL,
        &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
        (unsigned int)SaDeviceForPackagedApp);
      v35 = WPP_GLOBAL_Control;
    }
    if ( SaDeviceForPackagedApp < 0 )
    {
      v49 = 0LL;
      v42 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct _GUID *, void *, __int64, _DWORD, _QWORD, unsigned int, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              v39,
              v51,
              2LL,
              0,
              0LL,
              v37,
              &v49);
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          36LL,
          &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
          (unsigned int)v42);
      }
      if ( v42 >= 0 )
      {
        ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v50, v49);
        std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_ce403711a563f9ee83ce29a07f7b5c18_>(
          v59,
          v54,
          *((_QWORD *)&v54 + 1),
          &v50);
        ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(v59);
      }
      if ( v49 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    }
    else
    {
      v59[0] = v36;
      v40 = *((_QWORD *)&v54 + 1);
      v41 = v54;
      if ( (_QWORD)v54 != *((_QWORD *)&v54 + 1) )
      {
        do
        {
          lambda_40165558e5be6ae7e79678fda383f096_::operator()(v59, v41);
          v41 += 8LL;
        }
        while ( v41 != v40 );
        v35 = WPP_GLOBAL_Control;
      }
      if ( v35 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)v35 + 7) & 0x100) != 0
        && *((_BYTE *)v35 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v35 + 2), 0x23u, (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids);
      }
    }
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(&v54);
    v43 = (char *)v51;
    if ( v51 )
    {
      ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((char *)v51 + 24);
      ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(v43 + 16);
      ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(v43);
      operator delete(v43);
    }
    goto LABEL_105;
  }
LABEL_99:
  SaDeviceForPackagedApp = -2005139389;
  if ( a12 || a11 )
  {
    if ( v29 )
    {
      SaDeviceForPackagedApp = -2004287448;
    }
    else if ( v30 )
    {
      SaDeviceForPackagedApp = -2004287447;
    }
  }
LABEL_105:
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v48);
LABEL_106:
  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(&v56);
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v52);
LABEL_107:
  v18 = WPP_GLOBAL_Control;
LABEL_108:
  if ( SaDeviceForPackagedApp < 0 )
  {
LABEL_109:
    if ( v18 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v18 + 7) & 0x100) != 0
      && *((_BYTE *)v18 + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)v18 + 2),
        38LL,
        &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
        (unsigned int)SaDeviceForPackagedApp);
    }
  }
  return (unsigned int)SaDeviceForPackagedApp;
}
