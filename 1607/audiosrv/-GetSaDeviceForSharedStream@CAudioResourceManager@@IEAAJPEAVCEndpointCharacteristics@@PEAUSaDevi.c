/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18001EE2C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001D78 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180023AC0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180024F6C (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800342A0 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     memcmp_0 @ 0x180038F04 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180070904 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@0@Z @ 0x1800723DC (-_Destroy@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceP.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x180076E4C (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_376692326ac56426bc4e7ed2e27e0f46_@@@std@@YA?AV_lambda_376692326ac56426bc4e7ed2e27e0f46_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x1800775D0 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_7156cef9570d693754a0562f20dccd1f_@@@std@@YA?AV_lambda_7156cef9570d693754a0562f20dccd1f_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x180077688 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_180077688.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_a8a63d51e8072b51e985e5868ab4f48b_@@@std@@YA?AV_lambda_a8a63d51e8072b51e985e5868ab4f48b_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18007780C (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_18007780C.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180078B30 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180079628 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
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
  struct CEndpointCharacteristics *v14; // r10
  struct ISaDeviceProxy **v15; // r13
  int (*v16)(CDeviceGraphManager *__hidden, struct CEndpointCharacteristics *, struct SaDeviceParams *, unsigned int, enum _AUDCLNT_SHAREMODE, unsigned __int64, unsigned int, struct ISaDeviceProxy **); // rax
  unsigned int SaDevice; // eax
  int SaDeviceForPackagedApp; // edi
  CAudioResourceManager *v20; // rcx
  CAudioSession *v21; // rcx
  __int64 v22; // r12
  char v23; // r13
  unsigned __int64 v24; // rax
  _QWORD *i; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  unsigned __int16 *v28; // rsi
  __int64 v29; // rdi
  const void *v30; // rax
  __int64 v31; // rsi
  signed __int64 v32; // rdi
  __int64 v33; // rax
  char v34; // r12
  char v35; // si
  _QWORD *j; // rbx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbx
  CAudioSession *v41; // rcx
  unsigned int v42; // ebx
  struct CEndpointCharacteristics *v43; // rsi
  struct CEndpointCharacteristics *v44; // rcx
  unsigned int v45; // eax
  int v46; // ebx
  void *v47; // rbx
  unsigned __int64 v48; // [rsp+30h] [rbp-A1h]
  struct ISaDeviceProxy **v49; // [rsp+40h] [rbp-91h]
  __int64 v50; // [rsp+58h] [rbp-79h] BYREF
  __int64 v51; // [rsp+60h] [rbp-71h] BYREF
  struct CEndpointCharacteristics *v52; // [rsp+68h] [rbp-69h] BYREF
  unsigned int v53; // [rsp+70h] [rbp-61h]
  __int64 v54; // [rsp+78h] [rbp-59h] BYREF
  void *v55; // [rsp+80h] [rbp-51h] BYREF
  void *v56[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v57; // [rsp+98h] [rbp-39h]
  void *v58[2]; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-21h]
  __int64 v60; // [rsp+B8h] [rbp-19h]
  _QWORD v61[2]; // [rsp+C0h] [rbp-11h] BYREF

  v60 = -2LL;
  v53 = a4;
  v14 = a2;
  v52 = a2;
  v15 = a13;
  v55 = a13;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids, *(_QWORD *)a3);
    v14 = v52;
    a4 = v53;
  }
  v16 = *(int (**)(CDeviceGraphManager *__hidden, struct CEndpointCharacteristics *, struct SaDeviceParams *, unsigned int, enum _AUDCLNT_SHAREMODE, unsigned __int64, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL);
  v49 = a13;
  v48 = 0LL;
  if ( v16 == CDeviceGraphManager::GetSaDevice )
    SaDevice = CDeviceGraphManager::GetSaDevice(g_DeviceGraphManager, v14, a3, a4, a5, 0LL, a7, a13);
  else
    SaDevice = ((__int64 (__fastcall *)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *))v16)(
                 g_DeviceGraphManager,
                 v14,
                 a3);
  SaDeviceForPackagedApp = SaDevice;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids, SaDevice);
  }
  if ( SaDeviceForPackagedApp == -2005139364 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a9 + 96LL))(a9) )
    {
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                                 v20,
                                 v52,
                                 a3,
                                 v53,
                                 a5,
                                 v48,
                                 a7,
                                 (struct IAudioProcess *)v49,
                                 a10,
                                 a13);
      goto LABEL_14;
    }
    goto LABEL_120;
  }
  if ( SaDeviceForPackagedApp != -2005139360 && SaDeviceForPackagedApp != -2005139389 )
    goto LABEL_14;
  v54 = 0LL;
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v54);
  SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(CDeviceGraphStore *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                             + 24LL))(
                             g_DeviceGraphStore,
                             *(_QWORD *)a3,
                             &v54);
  *(_OWORD *)v58 = 0LL;
  v59 = 0LL;
  if ( SaDeviceForPackagedApp >= 0 )
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v54 + 72LL))(v54, v58);
  v21 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      24LL,
      &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
      ((char *)v58[1] - (char *)v58[0]) >> 3);
  }
  if ( SaDeviceForPackagedApp >= 0 )
  {
    v22 = 0LL;
    v51 = 0LL;
    v23 = 0;
    v24 = 0xFFFFFFFFLL;
    v50 = 0xFFFFFFFFLL;
    for ( i = v58[0]; ; ++i )
    {
      if ( i == v58[1] )
      {
        if ( v22 && v24 && v23 )
        {
          Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v51);
          v22 = v51;
        }
        v51 = 0LL;
        v15 = (struct ISaDeviceProxy **)v55;
        *(_QWORD *)v55 = v22;
        SaDeviceForPackagedApp = v22 == 0 ? 0x887C001A : 0;
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v51);
        goto LABEL_55;
      }
      v26 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*i + 40LL))(*i, v61);
      v27 = *v26 - *((_QWORD *)a3 + 6);
      if ( *v26 == *((_QWORD *)a3 + 6) )
        v27 = v26[1] - *((_QWORD *)a3 + 7);
      if ( v27 )
        break;
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 80LL))(*i) != *((_DWORD *)a3 + 2) )
        break;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 88LL))(*i) )
        break;
      if ( a12 )
      {
        v28 = (unsigned __int16 *)*((_QWORD *)a3 + 2);
        v29 = v28[8];
        v30 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i);
        if ( memcmp_0(v30, v28, v29 + 18) )
          break;
      }
      if ( a11 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) != *((_QWORD *)a3 + 4) )
          break;
      }
      else
      {
        if ( v23 || (v23 = 0, (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 136LL))(*i)) )
          v23 = 1;
        if ( v22 )
        {
          v31 = *i;
          v32 = abs64((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22) - *((_QWORD *)a3 + 4));
          if ( v32 <= (__int64)abs64((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31) - *((_QWORD *)a3 + 4)) )
            break;
        }
      }
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids, v33);
      }
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v51, i);
      v24 = abs64((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) - *((_QWORD *)a3 + 4));
      v50 = v24;
      v22 = v51;
LABEL_49:
      ;
    }
    v24 = v50;
    goto LABEL_49;
  }
LABEL_55:
  if ( SaDeviceForPackagedApp != -2005139430 )
    goto LABEL_117;
  v51 = 0LL;
  v34 = 0;
  v35 = 0;
  for ( j = v58[0]; ; ++j )
  {
    if ( j == v58[1] )
      goto LABEL_110;
    v37 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*j + 40LL))(*j, v61);
    v38 = *v37 - *((_QWORD *)a3 + 6);
    if ( *v37 == *((_QWORD *)a3 + 6) )
      v38 = v37[1] - *((_QWORD *)a3 + 7);
    if ( !v38
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*j + 80LL))(*j) == *((_DWORD *)a3 + 2)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 88LL))(*j) )
    {
      break;
    }
LABEL_67:
    ;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 152LL))(*j) )
  {
    v35 = 1;
    goto LABEL_67;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 120LL))(*j) )
  {
    v34 = 1;
    goto LABEL_67;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v39 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 32LL))(*j);
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids, v39);
  }
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v51, j);
  v40 = v51;
  if ( v51 )
  {
    v55 = 0LL;
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v51 + 104LL))(v51, &v55);
    *(_OWORD *)v56 = 0LL;
    v57 = 0LL;
    if ( SaDeviceForPackagedApp < 0 )
      goto LABEL_80;
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v54 + 80LL))(
                               v54,
                               v40,
                               v56);
    v41 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        27LL,
        &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
        ((char *)v56[1] - (char *)v56[0]) >> 3);
      v41 = WPP_GLOBAL_Control;
    }
    if ( SaDeviceForPackagedApp >= 0 )
    {
      v50 = v40;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v50);
      std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_376692326ac56426bc4e7ed2e27e0f46_>(
        v61,
        v56[0],
        v56[1],
        &v50);
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(v61);
LABEL_80:
      v41 = WPP_GLOBAL_Control;
    }
    if ( v41 != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v41 + 7) & 0x100) != 0
      && *((_BYTE *)v41 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v41 + 2), 28LL, &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids);
      v41 = WPP_GLOBAL_Control;
    }
    if ( SaDeviceForPackagedApp < 0 )
    {
      v42 = a7;
      v43 = v52;
    }
    else
    {
      std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(v58);
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v51);
      v42 = a7;
      v43 = v52;
      SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, _QWORD, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                                 g_DeviceGraphManager,
                                 v52,
                                 a3,
                                 v53,
                                 a5,
                                 0LL,
                                 a7,
                                 v15);
      v41 = WPP_GLOBAL_Control;
    }
    if ( v41 != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v41 + 7) & 0x100) != 0
      && *((_BYTE *)v41 + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)v41 + 2),
        29LL,
        &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
        (unsigned int)SaDeviceForPackagedApp);
    }
    if ( SaDeviceForPackagedApp < 0 )
    {
      v52 = 0LL;
      v45 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, void *, __int64, _DWORD, _QWORD, unsigned int, struct CEndpointCharacteristics **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              v43,
              v55,
              2LL,
              0,
              0LL,
              v42,
              &v52);
      v46 = v45;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids, v45);
      }
      if ( v46 >= 0 )
      {
        ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
          &v50,
          (__int64)v52);
        std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_a8a63d51e8072b51e985e5868ab4f48b_>(
          v61,
          v56[0],
          v56[1],
          &v50);
        if ( v61[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v61[0] + 16LL))(v61[0]);
      }
      v44 = v52;
      if ( v52 )
        (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v52 + 16LL))(v52);
    }
    else
    {
      std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_7156cef9570d693754a0562f20dccd1f_>(
        v61,
        v56[0],
        v56[1],
        v15);
      v44 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids);
      }
    }
    if ( v56[0] )
    {
      std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(v44, v56[0], v56[1]);
      std::_Deallocate(v56[0], (signed __int64)(v57 - (unsigned __int64)v56[0]) >> 3, 8uLL);
      *(_OWORD *)v56 = 0LL;
      v57 = 0LL;
    }
    v47 = v55;
    if ( v55 )
    {
      CoTaskMemFree(*((LPVOID *)v55 + 3));
      *((_QWORD *)v47 + 3) = 0LL;
      CoTaskMemFree(*((LPVOID *)v47 + 2));
      *((_QWORD *)v47 + 2) = 0LL;
      CoTaskMemFree(*(LPVOID *)v47);
      *(_QWORD *)v47 = 0LL;
      operator delete(v47, (const struct std::nothrow_t *)0x68);
    }
    goto LABEL_116;
  }
LABEL_110:
  SaDeviceForPackagedApp = -2005139360;
  if ( a12 || a11 )
  {
    if ( v34 )
    {
      SaDeviceForPackagedApp = -2004287448;
    }
    else if ( v35 )
    {
      SaDeviceForPackagedApp = -2004287447;
    }
  }
LABEL_116:
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v51);
LABEL_117:
  if ( v58[0] )
  {
    std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Destroy(v21, v58[0], v58[1]);
    std::_Deallocate(v58[0], (signed __int64)(v59 - (unsigned __int64)v58[0]) >> 3, 8uLL);
    *(_OWORD *)v58 = 0LL;
    v59 = 0LL;
  }
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v54);
LABEL_14:
  if ( SaDeviceForPackagedApp < 0 )
LABEL_120:
    AudSrvTraceLoggingErrorHelper("CAudioResourceManager::GetSaDeviceForSharedStream", 0x6C4u, SaDeviceForPackagedApp);
  return (unsigned int)SaDeviceForPackagedApp;
}
