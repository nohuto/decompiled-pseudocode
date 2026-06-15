/*
 * XREFs of AudioServerIsFormatSupported @ 0x180006E00
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800731C0 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800038A4 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800039E4 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180003B80 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180003BB4 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     TemplateEventDescriptor @ 0x180008958 (TemplateEventDescriptor.c)
 *     Template_zqttq @ 0x180008980 (Template_zqttq.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001A7C0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B720 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C9C4 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x18001E800 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18002765C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180069398 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18006A298 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x180070F20 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x180071C90 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180071DFC (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     WPP_SF_dddd @ 0x18007390C (WPP_SF_dddd.c)
 */

__int64 __fastcall AudioServerIsFormatSupported(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        unsigned __int16 *Src,
        struct tWAVEFORMATEX **a6)
{
  struct tWAVEFORMATEX **v6; // rax
  struct IAudioPolicyManager *v8; // rcx
  struct IMMDevice *v10; // rbx
  int AcceptableSPDIFTypeForDevice; // edi
  __int64 v14; // rdi
  struct tWAVEFORMATEX *v15; // rax
  struct tWAVEFORMATEX *v16; // r15
  WORD wFormatTag; // cx
  __int64 v18; // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v19; // eax
  struct _GUID *v20; // r8
  CEndpointCharacteristics *v21; // r14
  unsigned int v22; // r12d
  unsigned int v23; // r13d
  bool v24; // zf
  BOOL v25; // r15d
  int (*v26)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct _GUID v27; // xmm6
  struct _GUID v28; // xmm8
  struct _GUID v29; // xmm7
  _DWORD *v30; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v31; // edx
  int MixFormat; // eax
  void *v33; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v34; // r8d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v35; // esi
  __int64 v36; // rcx
  BOOL v37; // edi
  char *v38; // rax
  int v39; // edx
  int v40; // ecx
  __int64 v41; // rcx
  BOOL v42; // edi
  char *v43; // rax
  int v44; // edx
  int v45; // ecx
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  __int64 v47; // rcx
  BOOL v48; // edi
  int v49; // eax
  char *v50; // rax
  int v51; // edx
  int v52; // ecx
  GUID *v53; // rax
  unsigned int v54; // r12d
  __int64 v55; // rcx
  BOOL v56; // edi
  char *v57; // rax
  int v58; // edx
  int v59; // ecx
  __int64 v60; // rcx
  BOOL v61; // edi
  char *v62; // rax
  int v63; // edx
  int v64; // ecx
  BOOL v65; // edi
  __int64 v66; // rcx
  char *v67; // rax
  int v68; // edx
  int v69; // ecx
  GUID *v70; // rax
  int v71; // r14d
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v73; // esi
  int v74; // eax
  int v75; // edi
  BOOL v76; // esi
  struct IMMDeviceVtbl *v77; // rax
  int v78; // eax
  int v79; // edi
  _DWORD *v80; // rax
  unsigned int *v81; // rdi
  struct tWAVEFORMATEX **v83; // [rsp+28h] [rbp-E0h]
  struct tWAVEFORMATEX **v84; // [rsp+28h] [rbp-E0h]
  __int64 v85; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v86; // [rsp+70h] [rbp-98h] BYREF
  CEndpointCharacteristics *v87; // [rsp+78h] [rbp-90h] BYREF
  __int64 v88; // [rsp+80h] [rbp-88h] BYREF
  struct tWAVEFORMATEX **v89; // [rsp+88h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v90; // [rsp+90h] [rbp-78h] BYREF
  _DWORD *v91; // [rsp+98h] [rbp-70h] BYREF
  __int64 v92; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-60h] BYREF
  LPVOID v94[2]; // [rsp+B0h] [rbp-58h] BYREF
  PROPVARIANT v95; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v96; // [rsp+C8h] [rbp-40h]
  __int64 v97; // [rsp+D0h] [rbp-38h]
  PROPVARIANT v98; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v99; // [rsp+E0h] [rbp-28h]
  __int64 v100; // [rsp+E8h] [rbp-20h]
  LPVOID pv; // [rsp+F0h] [rbp-18h] BYREF
  struct IMMDevice *v102; // [rsp+F8h] [rbp-10h]
  __int64 v103; // [rsp+100h] [rbp-8h] BYREF
  struct _GUID v104; // [rsp+108h] [rbp+0h] BYREF
  struct _GUID v105; // [rsp+118h] [rbp+10h] BYREF
  PROPVARIANT v106; // [rsp+128h] [rbp+20h] BYREF
  __int64 v107; // [rsp+130h] [rbp+28h]
  __int64 v108; // [rsp+138h] [rbp+30h]
  PROPVARIANT pvar; // [rsp+140h] [rbp+38h] BYREF
  __int64 v110; // [rsp+148h] [rbp+40h]
  __int64 v111; // [rsp+150h] [rbp+48h]
  PROPVARIANT v112; // [rsp+158h] [rbp+50h] BYREF
  __int64 v113; // [rsp+160h] [rbp+58h]
  __int64 v114; // [rsp+168h] [rbp+60h]
  PROPVARIANT v115; // [rsp+170h] [rbp+68h] BYREF
  __int64 v116; // [rsp+178h] [rbp+70h]
  __int64 v117; // [rsp+180h] [rbp+78h]
  PROPVARIANT v118; // [rsp+188h] [rbp+80h] BYREF
  __int64 v119; // [rsp+190h] [rbp+88h]
  __int64 v120; // [rsp+198h] [rbp+90h]
  PROPVARIANT v121; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v122; // [rsp+1A8h] [rbp+A0h]
  __int64 v123; // [rsp+1B0h] [rbp+A8h]
  struct tWAVEFORMATEX *v124; // [rsp+1B8h] [rbp+B0h] BYREF
  GUID v125; // [rsp+1C8h] [rbp+C0h]
  GUID v126; // [rsp+1D8h] [rbp+D0h]
  struct _GUID v127; // [rsp+1E8h] [rbp+E0h]
  __int128 v128; // [rsp+1F8h] [rbp+F0h]
  GUID v129; // [rsp+208h] [rbp+100h]
  __int128 v130; // [rsp+218h] [rbp+110h]
  struct _GUID v131; // [rsp+228h] [rbp+120h] BYREF
  struct _GUID v132; // [rsp+238h] [rbp+130h] BYREF
  struct _GUID v133; // [rsp+248h] [rbp+140h] BYREF
  struct _GUID v134; // [rsp+258h] [rbp+150h] BYREF
  struct _GUID v135; // [rsp+268h] [rbp+160h] BYREF
  struct _GUID v136; // [rsp+278h] [rbp+170h] BYREF
  char v137; // [rsp+288h] [rbp+180h] BYREF
  GUID v138; // [rsp+298h] [rbp+190h] BYREF
  GUID v139; // [rsp+2A8h] [rbp+1A0h] BYREF
  GUID v140; // [rsp+2B8h] [rbp+1B0h] BYREF
  struct _GUID v141; // [rsp+2C8h] [rbp+1C0h] BYREF
  struct _GUID v142; // [rsp+2D8h] [rbp+1D0h] BYREF
  GUID v143; // [rsp+2E8h] [rbp+1E0h]
  GUID v144; // [rsp+2F8h] [rbp+1F0h]
  struct _GUID v145; // [rsp+308h] [rbp+200h] BYREF
  struct _GUID v146; // [rsp+318h] [rbp+210h] BYREF
  void *v147; // [rsp+328h] [rbp+220h] BYREF
  int v148; // [rsp+330h] [rbp+228h]
  int v149; // [rsp+334h] [rbp+22Ch]
  void *v150; // [rsp+338h] [rbp+230h]
  int v151; // [rsp+340h] [rbp+238h]
  int v152; // [rsp+344h] [rbp+23Ch]
  const char *v153; // [rsp+348h] [rbp+240h]
  __int64 v154; // [rsp+350h] [rbp+248h]
  __int64 *v155; // [rsp+358h] [rbp+250h]
  __int64 v156; // [rsp+360h] [rbp+258h]
  struct tWAVEFORMATEX **v157; // [rsp+368h] [rbp+260h]
  __int64 v158; // [rsp+370h] [rbp+268h]

  v6 = a6;
  v8 = 0LL;
  v10 = 0LL;
  v91 = a4;
  v89 = a6;
  pv = 0LL;
  v124 = 0LL;
  v94[0] = 0LL;
  v102 = 0LL;
  v93 = 0LL;
  v103 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
  {
    Template_zqttq(0, (unsigned int)&AudioSrv_IsFormatSupported_Task_Start, a2, *a4, a4[2], a4[5], a4[1]);
    v6 = v89;
    v8 = 0LL;
  }
  if ( a3 || v6 )
  {
    AcceptableSPDIFTypeForDevice = 0;
    v8 = g_PolicyManager;
    if ( !g_PolicyManager )
    {
      AcceptableSPDIFTypeForDevice = -2147418113;
      goto LABEL_208;
    }
    if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 64LL))(
            g_PolicyManager,
            *a4)
      || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a4[1]) )
    {
      AcceptableSPDIFTypeForDevice = -2147024809;
    }
    if ( AcceptableSPDIFTypeForDevice < 0 )
      goto LABEL_208;
    if ( v89 )
    {
      v8 = 0LL;
      *v89 = 0LL;
    }
    if ( *Src == 0xFFFE && Src[8] < 0x16u )
    {
      AcceptableSPDIFTypeForDevice = -2147024809;
      goto LABEL_208;
    }
    AcceptableSPDIFTypeForDevice = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                     g_pEndpointCharacteristicsCache,
                                     a2,
                                     &v87);
    if ( AcceptableSPDIFTypeForDevice < 0 )
      goto LABEL_208;
    v102 = (struct IMMDevice *)*((_QWORD *)v87 + 2);
    v10 = v102;
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->AddRef)(v10);
    if ( Src[1] > 2u && ((*Src - 1) & 0xFFFD) == 0 )
    {
      AcceptableSPDIFTypeForDevice = -2004287480;
      goto LABEL_215;
    }
    v14 = Src[8];
    v15 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v14 + 18);
    v90 = v15;
    v16 = v15;
    if ( !v15 )
    {
      AcceptableSPDIFTypeForDevice = -2147024882;
      goto LABEL_208;
    }
    memcpy_0(v15, Src, v14 + 18);
    wFormatTag = v16->wFormatTag;
    if ( v16->wFormatTag == 0xFFFE )
      wFormatTag = HIWORD(v16[1].nSamplesPerSec);
    v18 = wFormatTag;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dddd(*((_QWORD *)WPP_GLOBAL_Control + 2));
    }
    v19 = a4[1];
    LODWORD(v85) = v19;
    if ( v19 == eOffloadConnector )
    {
      AcceptableSPDIFTypeForDevice = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *, __int64))(*(_QWORD *)g_PolicyManager + 32LL))(
                                       g_PolicyManager,
                                       a1,
                                       &v86,
                                       v18);
      if ( AcceptableSPDIFTypeForDevice >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v86 + 136LL))(v86, *a4, 0LL) )
        {
          if ( v86 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
            v86 = 0LL;
          }
          AcceptableSPDIFTypeForDevice = DeriveAudioProcessingModeConfiguration(
                                           *a4,
                                           a4[2],
                                           v87,
                                           0,
                                           a3,
                                           eOffloadConnector,
                                           0,
                                           a4[6],
                                           &v138,
                                           &v139,
                                           &v140,
                                           0LL);
          if ( AcceptableSPDIFTypeForDevice >= 0 )
          {
            v144 = v138;
            v143 = v140;
            v141 = v139;
            AcceptableSPDIFTypeForDevice = DeriveOffloadConnectorFormatFromStreamFormat(
                                             v87,
                                             v16,
                                             v20,
                                             &v141,
                                             (struct _GUID *)v83,
                                             &v124);
          }
        }
        else
        {
          AcceptableSPDIFTypeForDevice = 1;
        }
      }
      goto LABEL_205;
    }
    if ( !a3 )
    {
      v21 = v87;
      v22 = a4[6];
      v23 = *a4;
      v88 = 0LL;
      v24 = *((_DWORD *)v87 + 93) == 1;
      v145 = GUID_00000000_0000_0000_0000_000000000000;
      v25 = v24;
      v104 = GUID_00000000_0000_0000_0000_000000000000;
      v105 = GUID_00000000_0000_0000_0000_000000000000;
      if ( v24 == 2 )
      {
        CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
          v87,
          eHostProcessConnector,
          &v145,
          &v104,
          &v105);
        v27 = v145;
        v28 = v104;
        v29 = v105;
        goto LABEL_39;
      }
      if ( v91[2] )
      {
        v142 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(v87, v19, &v142) )
        {
          v27 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          v28 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          v29 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
LABEL_39:
          v30 = v91;
          v31 = v91[1];
          if ( v91[5] )
          {
            v16 = v90;
            v89 = 0LL;
            v134 = v27;
            v135 = v28;
            v136 = v29;
            AcceptableSPDIFTypeForDevice = DeriveConnectorFormatFromStreamFormat(
                                             v87,
                                             v31,
                                             v90,
                                             &v136,
                                             &v135,
                                             &v134,
                                             1,
                                             (struct tWAVEFORMATEX **)&v89);
            CoTaskMemFree(v89);
          }
          else
          {
            v132 = v29;
            MixFormat = CEndpointCharacteristics::GetMixFormat(v87, v31, &v132, v26, (struct tWAVEFORMATEX **)&pv);
            v33 = pv;
            AcceptableSPDIFTypeForDevice = MixFormat;
            v16 = v90;
            if ( MixFormat >= 0 )
            {
              v34 = v30[1];
              v133 = v28;
              AcceptableSPDIFTypeForDevice = IsStreamFormatSupportedForMixFormat(
                                               v87,
                                               &v133,
                                               v34,
                                               (const struct tWAVEFORMATEX *)pv,
                                               v90,
                                               v89);
            }
            if ( v33 )
              CoTaskMemFree(v33);
          }
          goto LABEL_205;
        }
        v16 = v90;
        AcceptableSPDIFTypeForDevice = -2004287449;
        goto LABEL_205;
      }
      v35 = v19;
      v125 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      if ( v19 == eLoopbackConnector )
        v35 = eHostProcessConnector;
      if ( v35 )
        goto LABEL_57;
      v36 = *((_QWORD *)v87 + 7);
      v37 = 1;
      if ( !v36 )
        goto LABEL_57;
      pvar = 0LL;
      v110 = 0LL;
      v111 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *, __int64))(*(_QWORD *)v36 + 40LL))(
             v36,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &pvar,
             v18) >= 0
        && (_WORD)pvar == 19 )
      {
        v37 = v110 == 0;
      }
      PropVariantClear(&pvar);
      if ( v37 )
LABEL_57:
        v38 = (char *)v21 + 16 * v35 + 64;
      else
        v38 = (char *)v21 + 128;
      v39 = *((_DWORD *)v38 + 2);
      v40 = 0;
      if ( v39 <= 0 )
        goto LABEL_61;
      while ( *(_OWORD *)(*(_QWORD *)v38 + 16LL * v40) != *(_OWORD *)&v125 )
      {
        if ( ++v40 >= v39 )
          goto LABEL_61;
      }
      if ( v40 == -1 )
      {
LABEL_61:
        v126 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( v35 )
          goto LABEL_70;
        v41 = *((_QWORD *)v21 + 7);
        v42 = 1;
        if ( !v41 )
          goto LABEL_70;
        v106 = 0LL;
        v107 = 0LL;
        v108 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v41 + 40LL))(
               v41,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v106) >= 0
          && (_WORD)v106 == 19 )
        {
          v42 = v107 == 0;
        }
        PropVariantClear(&v106);
        if ( v42 )
LABEL_70:
          v43 = (char *)v21 + 16 * v35 + 64;
        else
          v43 = (char *)v21 + 128;
        v44 = *((_DWORD *)v43 + 2);
        v45 = 0;
        if ( v44 <= 0 )
          goto LABEL_74;
        while ( *(_OWORD *)(*(_QWORD *)v43 + 16LL * v45) != *(_OWORD *)&v126 )
        {
          if ( ++v45 >= v44 )
            goto LABEL_74;
        }
        if ( v45 == -1 )
        {
LABEL_74:
          SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(v21, v35);
          v27 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   SupportedConnectorModes,
                                   0LL);
        }
        else
        {
          v27 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        }
      }
      else
      {
        v27 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
      v47 = *((_QWORD *)v21 + 7);
      v48 = 1;
      v146 = v27;
      v127 = v27;
      if ( v47 )
      {
        v112 = 0LL;
        v113 = 0LL;
        v114 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v47 + 40LL))(
               v47,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v112) >= 0
          && (_WORD)v112 == 19 )
        {
          v48 = v113 == 0;
        }
        PropVariantClear(&v112);
        v49 = v85;
        if ( !v48 && (_DWORD)v85 != 3 )
        {
          v50 = (char *)v21 + 336;
          goto LABEL_86;
        }
      }
      else
      {
        v49 = v85;
      }
      v50 = (char *)v21 + 16 * v49 + 208;
LABEL_86:
      v51 = *((_DWORD *)v50 + 2);
      v52 = 0;
      if ( v51 <= 0 )
        goto LABEL_91;
      while ( *(_OWORD *)(*(_QWORD *)v50 + 16LL * v52) != *(_OWORD *)&v127 )
      {
        if ( ++v52 >= v51 )
          goto LABEL_91;
      }
      v53 = &v146;
      if ( v52 == -1 )
LABEL_91:
        v53 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v28 = *v53;
      v29 = v27;
      if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, BOOL, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                                + 80LL))(
             g_PolicyManager,
             v25,
             v23,
             v22,
             &v88) >= 0 )
      {
        v54 = 0;
        if ( *(_DWORD *)v88 )
        {
          while ( 1 )
          {
            v128 = *(_OWORD *)(*(_QWORD *)(v88 + 8) + 16LL * v54);
            if ( (_DWORD)v85 )
              goto LABEL_101;
            v55 = *((_QWORD *)v21 + 7);
            v56 = 1;
            if ( !v55 )
              goto LABEL_101;
            v115 = 0LL;
            v116 = 0LL;
            v117 = 0LL;
            if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v55 + 40LL))(
                   v55,
                   &PKEY_AudioEndpoint_Disable_SysFx,
                   &v115) >= 0
              && (_WORD)v115 == 19 )
            {
              v56 = v116 == 0;
            }
            PropVariantClear(&v115);
            if ( v56 )
LABEL_101:
              v57 = (char *)v21 + 16 * (int)v85 + 64;
            else
              v57 = (char *)v21 + 128;
            v58 = *((_DWORD *)v57 + 2);
            v59 = 0;
            if ( v58 > 0 )
            {
              v26 = *(int (**)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v57;
              while ( *((_OWORD *)v26 + v59) != v128 )
              {
                if ( ++v59 >= v58 )
                  goto LABEL_108;
              }
              if ( v59 != -1 )
                break;
            }
LABEL_108:
            v129 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
            if ( (_DWORD)v85 )
              goto LABEL_115;
            v60 = *((_QWORD *)v21 + 7);
            v61 = 1;
            if ( !v60 )
              goto LABEL_115;
            v118 = 0LL;
            v119 = 0LL;
            v120 = 0LL;
            if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v60 + 40LL))(
                   v60,
                   &PKEY_AudioEndpoint_Disable_SysFx,
                   &v118) >= 0
              && (_WORD)v118 == 19 )
            {
              v61 = v119 == 0;
            }
            PropVariantClear(&v118);
            if ( v61 )
LABEL_115:
              v62 = (char *)v21 + 16 * (int)v85 + 64;
            else
              v62 = (char *)v21 + 128;
            v63 = *((_DWORD *)v62 + 2);
            v64 = 0;
            if ( v63 > 0 )
            {
              v26 = *(int (**)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v62;
              while ( *((_OWORD *)v26 + v64) != *(_OWORD *)&v129 )
              {
                if ( ++v64 >= v63 )
                  goto LABEL_136;
              }
              if ( v64 != -1 )
              {
                v65 = 1;
                v66 = *((_QWORD *)v21 + 7);
                v130 = *(_OWORD *)(*(_QWORD *)(v88 + 8) + 16LL * v54);
                if ( !v66 )
                  goto LABEL_129;
                v121 = 0LL;
                v122 = 0LL;
                v123 = 0LL;
                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v66 + 40LL))(
                       v66,
                       &PKEY_AudioEndpoint_Disable_SysFx,
                       &v121) >= 0
                  && (_WORD)v121 == 19 )
                {
                  v65 = v122 == 0;
                }
                PropVariantClear(&v121);
                if ( v65 || (_DWORD)v85 == 3 )
LABEL_129:
                  v67 = (char *)v21 + 16 * (int)v85 + 208;
                else
                  v67 = (char *)v21 + 336;
                v68 = *((_DWORD *)v67 + 2);
                v69 = 0;
                if ( v68 > 0 )
                {
                  v26 = *(int (**)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v67;
                  while ( *((_OWORD *)v26 + v69) != v130 )
                  {
                    if ( ++v69 >= v68 )
                      goto LABEL_136;
                  }
                  if ( v69 != -1 )
                  {
                    v27 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                    v28 = *(struct _GUID *)(*(_QWORD *)(v88 + 8) + 16LL * v54);
                    v29 = v28;
                    goto LABEL_39;
                  }
                }
              }
            }
LABEL_136:
            if ( ++v54 >= *(_DWORD *)v88 )
              goto LABEL_39;
          }
          v27 = *(struct _GUID *)(*(_QWORD *)(v88 + 8) + 16LL * v54);
          v145 = v27;
          v131 = v27;
          v24 = !CEndpointCharacteristics::IsAPOModeSupported(
                   v21,
                   &v131,
                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v85);
          v70 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          v29 = v27;
          if ( !v24 )
            v70 = &v145;
          v28 = *v70;
        }
      }
      goto LABEL_39;
    }
    v95 = 0LL;
    v71 = 0;
    v96 = 0LL;
    v97 = 0LL;
    lpVtbl = v10->lpVtbl;
    v73 = 0;
    v92 = 0LL;
    v74 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *, __int64))lpVtbl->OpenPropertyStore)(
            v10,
            0LL,
            &v92,
            v18);
    v75 = v74;
    if ( v74 < 0 )
      AudSrvTraceLoggingErrorHelper("GetDevicePropertyStore", 0xDCAu, v74);
    if ( v75 < 0 )
    {
      if ( v75 == -2147024894 )
      {
        v75 = 0;
        v95 = 0LL;
        v96 = 0LL;
        v97 = 0LL;
        goto LABEL_149;
      }
    }
    else
    {
      v75 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v92 + 40LL))(
              v92,
              &PKEY_Endpoint_AllowExclusive,
              &v95);
    }
    if ( v75 < 0 )
      AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 0x10BFu, v75);
LABEL_149:
    if ( v92 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
    if ( v75 >= 0 )
    {
      if ( (_WORD)v95 )
        LOBYTE(v73) = (_WORD)v96 == 0;
    }
    else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        60LL,
        &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
        (unsigned int)v75);
    }
    PropVariantClear(&v95);
    LOBYTE(v71) = v73 == 0;
    v98 = 0LL;
    v99 = 0LL;
    v76 = 0;
    v100 = 0LL;
    v77 = v10->lpVtbl;
    v91 = 0LL;
    v78 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, _DWORD **))v77->OpenPropertyStore)(v10, 0LL, &v91);
    v79 = v78;
    if ( v78 < 0 )
      AudSrvTraceLoggingErrorHelper("GetDevicePropertyStore", 0xDCAu, v78);
    if ( v79 < 0 )
    {
      if ( v79 == -2147024894 )
      {
        v98 = 0LL;
        v79 = 0;
        v99 = 0LL;
        v100 = 0LL;
LABEL_166:
        if ( v91 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v91 + 16LL))(v91);
        if ( v79 >= 0 )
        {
          if ( (_WORD)v98 )
            LOBYTE(v76) = (_WORD)v99 == 0;
        }
        else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            61LL,
            &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
            (unsigned int)v79);
        }
        PropVariantClear(&v98);
        if ( !v76 || v71 )
        {
          if ( g_PolicyManager )
          {
            AcceptableSPDIFTypeForDevice = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
                                             g_PolicyManager,
                                             a1,
                                             &v86);
            if ( AcceptableSPDIFTypeForDevice < 0 )
              goto LABEL_205;
            if ( v71 )
              v71 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v86 + 136LL))(v86, *a4, 1LL);
            if ( !v76 )
              v76 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v86 + 136LL))(v86, *a4, 0LL) == 0;
            if ( v86 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
              v86 = 0LL;
            }
          }
          if ( v71 )
          {
            if ( (unsigned int)IsSPDIFFormat(v16) && (unsigned int)IsSPDIFEndpoint(v10) )
            {
              AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v10, v16, 0LL, v76);
            }
            else
            {
              v84 = (struct tWAVEFORMATEX **)&v93;
              AcceptableSPDIFTypeForDevice = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v10->lpVtbl->Activate)(
                                               v10,
                                               &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                                               23LL);
              if ( AcceptableSPDIFTypeForDevice >= 0 )
              {
                if ( &v137 )
                {
                  if ( v16->wFormatTag == 0xFFFE && v16->cbSize < 0x16u )
                  {
                    AcceptableSPDIFTypeForDevice = -2147024809;
                  }
                  else
                  {
                    v80 = CoTaskMemAlloc(v16->cbSize + 82LL);
                    v94[0] = v80;
                    v81 = v80;
                    if ( v80 )
                    {
                      *v80 = v16->cbSize + 82;
                      *(_QWORD *)(v80 + 1) = 0LL;
                      v80[3] = 0;
                      *((GUID *)v80 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
                      *((GUID *)v80 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
                      memcpy_0(v80 + 16, v16, v16->cbSize + 18LL);
                      if ( v16->wFormatTag == 0xFFFE )
                      {
                        *((_OWORD *)v81 + 2) = *(_OWORD *)((char *)&v16[1].nSamplesPerSec + 2);
                      }
                      else
                      {
                        *((GUID *)v81 + 2) = GUID_00000000_0000_0010_8000_00aa00389b71;
                        v81[8] = v16->wFormatTag;
                      }
                      LODWORD(v84) = v76;
                      AcceptableSPDIFTypeForDevice = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD, struct tWAVEFORMATEX **, __int64 *))(*(_QWORD *)v93 + 80LL))(
                                                       v93,
                                                       v81,
                                                       *v81,
                                                       0LL,
                                                       v84,
                                                       &v103);
                      if ( AcceptableSPDIFTypeForDevice < 0 )
                        AcceptableSPDIFTypeForDevice = -2004287480;
                    }
                    else
                    {
                      AcceptableSPDIFTypeForDevice = -2147024882;
                    }
                  }
                }
                else
                {
                  AcceptableSPDIFTypeForDevice = -2147467261;
                }
              }
            }
            goto LABEL_205;
          }
        }
        AcceptableSPDIFTypeForDevice = -2004287474;
LABEL_205:
        CoTaskMemFree(v16);
        if ( v94[0] )
          CoTaskMemFree(v94[0]);
        goto LABEL_208;
      }
    }
    else
    {
      v79 = (*(__int64 (__fastcall **)(_DWORD *, void *, PROPVARIANT *))(*(_QWORD *)v91 + 40LL))(
              v91,
              &PKEY_Endpoint_AllowOffloading,
              &v98);
    }
    if ( v79 < 0 )
      AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 0x10BFu, v79);
    goto LABEL_166;
  }
  AcceptableSPDIFTypeForDevice = -2147024809;
LABEL_208:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v8, &AudioSrv_IsFormatSupported_Task_Stop);
  if ( AcceptableSPDIFTypeForDevice < 0 )
  {
    LODWORD(v90) = AcceptableSPDIFTypeForDevice;
    LODWORD(v85) = 3950;
    if ( dword_1800CA040 > 4u )
    {
      v154 = 29LL;
      v153 = "AudioServerIsFormatSupported";
      v156 = 4LL;
      v155 = &v85;
      v157 = &v90;
      v158 = 4LL;
      HIDWORD(v94[0]) = 4;
      v147 = off_1800CA048;
      LODWORD(v94[0]) = ((unsigned int)&unk_1800A7C74 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v94[1] = 0LL;
      v148 = *(unsigned __int16 *)off_1800CA048;
      v150 = &unk_1800A7C7F;
      v149 = 2;
      v151 = 35;
      v152 = 1;
      EtwEventWriteTransfer(qword_1800CA060, v94, 0LL, 0LL, 5, &v147);
      v10 = v102;
    }
  }
  if ( v86 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
    v86 = 0LL;
  }
LABEL_215:
  if ( v87 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v87 + 16LL))(v87);
  if ( v103 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
  if ( v93 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
  if ( v10 )
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->Release)(v10);
  return (unsigned int)AcceptableSPDIFTypeForDevice;
}
