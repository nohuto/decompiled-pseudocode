/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180024F60
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180004D54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x1800290B0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030F90 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180042510 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     memcmp_0 @ 0x1800449EE (memcmp_0.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180089DE4 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x180091030 (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_3d5f7157259c9e7ebbadf0f565c7bcb4_@@@std@@YA?AV_lambda_3d5f7157259c9e7ebbadf0f565c7bcb4_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x1800916F4 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_1800916F4.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_868dd1e7e0950a14e8fa44815d99784f_@@@std@@YA?AV_lambda_868dd1e7e0950a14e8fa44815d99784f_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x18009180C (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UIStreamG_ea_18009180C.c)
 *     _lambda_30e2e5caa327ec2a56b5c2fe8942c44d_::operator() @ 0x180091B48 (_lambda_30e2e5caa327ec2a56b5c2fe8942c44d_--operator().c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800924F8 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180093630 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     WPP_SF_i @ 0x180093708 (WPP_SF_i.c)
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
  int (*v14)(CDeviceGraphManager *__hidden, struct CEndpointCharacteristics *, struct SaDeviceParams *, unsigned int, enum _AUDCLNT_SHAREMODE, unsigned __int64, unsigned int, struct ISaDeviceProxy **); // rdi
  unsigned int v15; // edi
  unsigned int SaDevice; // eax
  signed int SaDeviceForPackagedApp; // esi
  __int64 v18; // rcx
  CAudioResourceManager *v20; // rcx
  __int64 v21; // rcx
  struct ISaDeviceProxy *v22; // r15
  _QWORD *i; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r14
  signed __int64 v27; // rsi
  unsigned __int16 *v28; // r15
  __int64 v29; // rsi
  const void *v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  char v33; // r14
  char v34; // r15
  _QWORD *j; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rdi
  __int64 v41; // rcx
  struct ISaDeviceProxy **v42; // r14
  unsigned int v43; // r15d
  struct SaDeviceParams *v44; // r8
  struct _GUID *v45; // r13
  char *v46; // rdi
  char *v47; // rbx
  int v48; // ebx
  void *v49; // rbx
  unsigned __int64 v50; // [rsp+30h] [rbp-B1h]
  struct ISaDeviceProxy **v51; // [rsp+40h] [rbp-A1h]
  unsigned int v52; // [rsp+58h] [rbp-89h]
  struct ISaDeviceProxy *v53; // [rsp+60h] [rbp-81h] BYREF
  __int64 v54; // [rsp+68h] [rbp-79h] BYREF
  struct ISaDeviceProxy **v55; // [rsp+70h] [rbp-71h] BYREF
  void *v56; // [rsp+78h] [rbp-69h] BYREF
  __int64 v57; // [rsp+80h] [rbp-61h] BYREF
  struct _GUID *v58; // [rsp+88h] [rbp-59h]
  void *v59[2]; // [rsp+90h] [rbp-51h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-41h]
  void *v61[2]; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-29h]
  __int64 v63; // [rsp+C0h] [rbp-21h]
  _QWORD v64[2]; // [rsp+C8h] [rbp-19h] BYREF

  v63 = -2LL;
  v52 = a4;
  v58 = a2;
  v55 = a13;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      20LL,
      &WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
      *(_QWORD *)a3);
    a2 = v58;
    a4 = v52;
  }
  v14 = *(int (**)(CDeviceGraphManager *__hidden, struct CEndpointCharacteristics *, struct SaDeviceParams *, unsigned int, enum _AUDCLNT_SHAREMODE, unsigned __int64, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL);
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
    v51 = a13;
    v50 = 0LL;
    SaDevice = ((__int64 (__fastcall *)(CDeviceGraphManager *, struct _GUID *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE))v14)(
                 g_DeviceGraphManager,
                 v58,
                 a3,
                 v52,
                 a5);
    v15 = a7;
  }
  SaDeviceForPackagedApp = SaDevice;
  v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      21LL,
      &WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
      SaDevice);
    v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( SaDeviceForPackagedApp == -2005139389 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a9 + 88LL))(a9) )
    {
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                                 v20,
                                 (struct CEndpointCharacteristics *)v58,
                                 a3,
                                 v52,
                                 a5,
                                 v50,
                                 v15,
                                 (struct IAudioProcess *)v51,
                                 a10,
                                 v55);
      goto LABEL_116;
    }
    v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_117;
  }
  if ( SaDeviceForPackagedApp != -2005139368 )
    goto LABEL_13;
  v57 = 0LL;
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v57);
  SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(CDeviceGraphStore *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                             + 24LL))(
                             g_DeviceGraphStore,
                             *(_QWORD *)a3,
                             &v57);
  *(_OWORD *)v61 = 0LL;
  v62 = 0LL;
  if ( SaDeviceForPackagedApp >= 0 )
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v57 + 72LL))(v57, v61);
  v21 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      22LL,
      &WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
      ((char *)v61[1] - (char *)v61[0]) >> 3);
  }
  if ( SaDeviceForPackagedApp >= 0 )
  {
    v22 = 0LL;
    v56 = 0LL;
    v53 = 0LL;
    for ( i = v61[0]; ; ++i )
    {
      if ( i == v61[1] )
      {
        v53 = 0LL;
        *v55 = v22;
        SaDeviceForPackagedApp = v22 == 0LL ? 0x887C001A : 0;
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v53);
        break;
      }
      v24 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*i + 40LL))(*i, v64);
      v25 = *v24 - *((_QWORD *)a3 + 6);
      if ( *v24 == *((_QWORD *)a3 + 6) )
        v25 = v24[1] - *((_QWORD *)a3 + 7);
      if ( !v25 && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 80LL))(*i) == *((_DWORD *)a3 + 2) )
      {
        if ( a11 )
        {
          if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) != *((_QWORD *)a3 + 4) )
            continue;
        }
        else if ( v22 )
        {
          v26 = *i;
          v27 = abs64(
                  (*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v22 + 32LL))(v22)
                - *((_QWORD *)a3 + 4));
          if ( v27 <= (__int64)abs64((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26) - *((_QWORD *)a3 + 4)) )
            continue;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 88LL))(*i) )
        {
          if ( !a12
            || (v28 = (unsigned __int16 *)*((_QWORD *)a3 + 2),
                v29 = v28[8],
                v30 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i),
                !memcmp_0(v30, v28, v29 + 18)) )
          {
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              v31 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
              WPP_SF_i(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 23LL, v32, v31);
            }
            Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v53, i);
            v22 = v53;
            v56 = v53;
          }
          else
          {
            v22 = (struct ISaDeviceProxy *)v56;
          }
        }
      }
    }
  }
  if ( SaDeviceForPackagedApp != -2005139430 )
    goto LABEL_113;
  v53 = 0LL;
  v33 = 0;
  v34 = 0;
  for ( j = v61[0]; ; ++j )
  {
    if ( j == v61[1] )
      goto LABEL_106;
    v36 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*j + 40LL))(*j, v64);
    v37 = *v36 - *((_QWORD *)a3 + 6);
    if ( *v36 == *((_QWORD *)a3 + 6) )
      v37 = v36[1] - *((_QWORD *)a3 + 7);
    if ( !v37
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*j + 80LL))(*j) == *((_DWORD *)a3 + 2)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 88LL))(*j) )
    {
      break;
    }
LABEL_60:
    ;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 136LL))(*j) )
  {
    v34 = 1;
    goto LABEL_60;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 120LL))(*j) )
  {
    v33 = 1;
    goto LABEL_60;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v38 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 32LL))(*j);
    WPP_SF_i(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 24LL, v39, v38);
  }
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v53, j);
  v40 = (__int64)v53;
  if ( v53 )
  {
    v56 = 0LL;
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, void **))(*(_QWORD *)v53 + 104LL))(
                               v53,
                               &v56);
    *(_OWORD *)v59 = 0LL;
    v60 = 0LL;
    if ( SaDeviceForPackagedApp < 0 )
      goto LABEL_73;
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v57 + 80LL))(
                               v57,
                               v40,
                               v59);
    v41 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        25LL,
        &WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
        ((char *)v59[1] - (char *)v59[0]) >> 3);
      v41 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( SaDeviceForPackagedApp >= 0 )
    {
      v54 = v40;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v54);
      std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_3d5f7157259c9e7ebbadf0f565c7bcb4_>(
        v64,
        v59[0],
        v59[1],
        &v54);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v64);
LABEL_73:
      v41 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (struct _GUID *)v41 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v41 + 28) & 0x100) != 0
      && *(_BYTE *)(v41 + 25) >= 4u )
    {
      WPP_SF_(*(_QWORD *)(v41 + 16), 0x1Bu, (__int64)&WPP_87a960f07f9f0e33e55207b25344727f_Traceguids);
      v41 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( SaDeviceForPackagedApp < 0 )
    {
      v42 = v55;
      v43 = a7;
      v45 = v58;
    }
    else
    {
      std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(v61);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v53);
      v42 = v55;
      v43 = a7;
      v44 = a3;
      v45 = v58;
      SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct _GUID *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, _QWORD, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                                 g_DeviceGraphManager,
                                 v58,
                                 v44,
                                 v52,
                                 a5,
                                 0LL,
                                 a7,
                                 v55);
      v41 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (struct _GUID *)v41 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v41 + 28) & 0x100) != 0
      && *(_BYTE *)(v41 + 25) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(v41 + 16),
        28LL,
        &WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
        (unsigned int)SaDeviceForPackagedApp);
      v41 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( SaDeviceForPackagedApp < 0 )
    {
      v54 = 0LL;
      v48 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct _GUID *, void *, __int64, _DWORD, _QWORD, unsigned int, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              v45,
              v56,
              2LL,
              0,
              0LL,
              v43,
              &v54);
      v41 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          31LL,
          &WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
          (unsigned int)v48);
      }
      if ( v48 >= 0 )
      {
        ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v55, v54);
        std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>>,_lambda_868dd1e7e0950a14e8fa44815d99784f_>(
          v64,
          v59[0],
          v59[1],
          &v55);
        if ( v64[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v64[0] + 16LL))(v64[0]);
      }
      if ( v54 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    else
    {
      v64[0] = v42;
      v46 = (char *)v59[1];
      v47 = (char *)v59[0];
      if ( v59[0] != v59[1] )
      {
        do
        {
          lambda_30e2e5caa327ec2a56b5c2fe8942c44d_::operator()(v64, v47);
          v47 += 8;
        }
        while ( v47 != v46 );
        v41 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( (struct _GUID *)v41 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v41 + 28) & 0x100) != 0
        && *(_BYTE *)(v41 + 25) >= 4u )
      {
        WPP_SF_(*(_QWORD *)(v41 + 16), 0x1Eu, (__int64)&WPP_87a960f07f9f0e33e55207b25344727f_Traceguids);
      }
    }
    if ( v59[0] )
    {
      std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(v41, v59[0], v59[1]);
      operator delete(v59[0]);
      *(_OWORD *)v59 = 0LL;
      v60 = 0LL;
    }
    v49 = v56;
    if ( v56 )
    {
      CoTaskMemFree(*((LPVOID *)v56 + 3));
      *((_QWORD *)v49 + 3) = 0LL;
      CoTaskMemFree(*((LPVOID *)v49 + 2));
      *((_QWORD *)v49 + 2) = 0LL;
      CoTaskMemFree(*(LPVOID *)v49);
      *(_QWORD *)v49 = 0LL;
      operator delete(v49);
    }
    goto LABEL_112;
  }
LABEL_106:
  SaDeviceForPackagedApp = -2005139389;
  if ( a12 || a11 )
  {
    if ( v33 )
    {
      SaDeviceForPackagedApp = -2004287448;
    }
    else if ( v34 )
    {
      SaDeviceForPackagedApp = -2004287447;
    }
  }
LABEL_112:
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v53);
LABEL_113:
  if ( v61[0] )
  {
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(v21, v61[0], v61[1]);
    operator delete(v61[0]);
    *(_OWORD *)v61 = 0LL;
    v62 = 0LL;
  }
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v57);
LABEL_116:
  v18 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_13:
  if ( SaDeviceForPackagedApp < 0 )
  {
LABEL_117:
    if ( (struct _GUID *)v18 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v18 + 28) & 0x100) != 0
      && *(_BYTE *)(v18 + 25) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(v18 + 16),
        33LL,
        &WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
        (unsigned int)SaDeviceForPackagedApp);
    }
  }
  return (unsigned int)SaDeviceForPackagedApp;
}
