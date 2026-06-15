/*
 * XREFs of ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180020B70
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180022B30 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x1800257B8 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180069398 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x1800116C0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001A650 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B720 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001BF30 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001C550 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C9C4 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180024740 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18002765C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ??$GetDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086C40 (--$GetDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJ.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18008A600 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetDeviceDefaults(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4,
        struct tWAVEFORMATEX **a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 v8; // r12
  struct tWAVEFORMATEX **v10; // r13
  int ProposedConnectorFormatForProcessingMode; // edi
  int (*v12)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // ebx
  struct tWAVEFORMATEX *v14; // r15
  BOOL v15; // edi
  __int64 v16; // rcx
  char *v17; // rax
  int v18; // edx
  int v19; // r11d
  __int64 v20; // r9
  __int64 v21; // rax
  BOOL v22; // edi
  __int64 v23; // rcx
  char *v24; // rax
  int v25; // edx
  int v26; // r8d
  __int64 v27; // r9
  __int64 v28; // rax
  GUID v29; // xmm6
  BOOL v30; // ebx
  __int64 v31; // rcx
  char *v32; // rax
  int v33; // edx
  int v34; // r8d
  __int64 v35; // r9
  __int64 v36; // rax
  const PROPERTYKEY *v37; // rax
  const struct tWAVEFORMATEX *v38; // r8
  struct tWAVEFORMATEX *v39; // rax
  int v40; // edi
  __int64 v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  int v47; // r13d
  __int64 v48; // r12
  void *v49; // r15
  __int64 v50; // rbx
  struct tWAVEFORMATEX *v51; // rax
  struct tWAVEFORMATEX *v52; // rdi
  struct tWAVEFORMATEX *v53; // rbx
  struct _GUID *v54; // rdi
  __int64 v55; // rax
  BOOL v56; // ebx
  __int64 v57; // rcx
  char *v58; // rax
  int v59; // edx
  int v60; // r8d
  __int64 v61; // rax
  BOOL v62; // ebx
  __int64 v63; // rcx
  char *v64; // rbx
  int v65; // r12d
  int v66; // eax
  __int64 v67; // r15
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v68; // eax
  BOOL v69; // edi
  __int64 v70; // rcx
  char *v71; // rax
  __int64 v72; // rdx
  int v73; // r8d
  __int64 v74; // rax
  struct tWAVEFORMATEX *v75; // rbx
  int (*v76)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  __int64 (__fastcall *v78)(CPolicyConfig *, const unsigned __int16 *, int, __int64 *, __int64 *); // rax
  int v79; // eax
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  LPCGUID v81; // r8
  LPCGUID v82; // r9
  char v83; // [rsp+30h] [rbp-D0h]
  int v85; // [rsp+38h] [rbp-C8h] BYREF
  struct tWAVEFORMATEX *v86; // [rsp+40h] [rbp-C0h]
  struct tWAVEFORMATEX **v87; // [rsp+48h] [rbp-B8h] BYREF
  struct tWAVEFORMATEX *v88; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v89; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v90; // [rsp+70h] [rbp-90h]
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v92; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID *v93; // [rsp+90h] [rbp-70h]
  PROPVARIANT pvar; // [rsp+98h] [rbp-68h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-60h]
  __int64 v96; // [rsp+A8h] [rbp-58h]
  PROPVARIANT v97; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v98; // [rsp+B8h] [rbp-48h]
  __int64 v99; // [rsp+C0h] [rbp-40h]
  PROPVARIANT v100; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v101; // [rsp+D0h] [rbp-30h]
  __int64 v102; // [rsp+D8h] [rbp-28h]
  const struct tWAVEFORMATEX *v103; // [rsp+E0h] [rbp-20h]
  PROPVARIANT v104; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v105; // [rsp+F0h] [rbp-10h]
  void *Src; // [rsp+F8h] [rbp-8h]
  __m256i v107; // [rsp+100h] [rbp+0h]
  __int64 v108; // [rsp+120h] [rbp+20h]
  __int64 v109; // [rsp+128h] [rbp+28h]
  GUID fmtid; // [rsp+130h] [rbp+30h] BYREF
  DWORD pid; // [rsp+140h] [rbp+40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+170h] [rbp+70h] BYREF
  struct tWAVEFORMATEX ***v114; // [rsp+180h] [rbp+80h]
  __int64 v115; // [rsp+188h] [rbp+88h]
  int *v116; // [rsp+190h] [rbp+90h]
  __int64 v117; // [rsp+198h] [rbp+98h]

  v108 = -2LL;
  v93 = a3;
  v8 = a2;
  v10 = a5;
  v87 = a5;
  v109 = 0LL;
  v86 = 0LL;
  v92 = 0LL;
  pv = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                                               *((_QWORD *)this + 2),
                                               &pv);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
    goto LABEL_124;
  if ( a7 || a6 )
  {
    v78 = *(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, int, __int64 *, __int64 *))(*(_QWORD *)g_PolicyConfig + 56LL);
    v79 = v78 == CPolicyConfig::GetProcessingPeriod
        ? CPolicyConfig::GetProcessingPeriod(g_PolicyConfig, (const unsigned __int16 *)pv, 0, a6, a7)
        : ((__int64 (__fastcall *)(CPolicyConfig *, LPVOID, _QWORD, __int64 *))v78)(g_PolicyConfig, pv, 0LL, a6);
    ProposedConnectorFormatForProcessingMode = v79;
    if ( v79 < 0 )
      goto LABEL_124;
  }
  if ( a4 )
  {
    v89 = *v93;
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                                 this,
                                                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                                                 &v89,
                                                 &v92);
    if ( ProposedConnectorFormatForProcessingMode >= 0 )
    {
      v14 = v92;
      v86 = v92;
LABEL_77:
      if ( ProposedConnectorFormatForProcessingMode < 0 )
      {
LABEL_175:
        if ( v14 )
          CoTaskMemFree(v14);
        goto LABEL_124;
      }
      goto LABEL_78;
    }
    v13 = (int)v8;
    v14 = 0LL;
    if ( (_DWORD)v8 == 2 )
      v13 = eHostProcessConnector;
    v89 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    if ( v13 )
      goto LABEL_18;
    v15 = 1;
    v16 = *((_QWORD *)this + 7);
    if ( !v16 )
      goto LABEL_18;
    pvar = 0LL;
    v95 = 0LL;
    v96 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
           v16,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v15 = v95 == 0;
    }
    PropVariantClear(&pvar);
    if ( v15 )
LABEL_18:
      v17 = (char *)this + 16 * v13 + 64;
    else
      v17 = (char *)this + 128;
    v18 = 0;
    v19 = *((_DWORD *)v17 + 2);
    if ( v19 <= 0 )
      goto LABEL_25;
    v20 = *(_QWORD *)v17;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v20 + 16LL * v18) - *(_QWORD *)&v89.Data1;
      if ( !v21 )
        v21 = *(_QWORD *)(v20 + 16LL * v18 + 8) - *(_QWORD *)v89.Data4;
      if ( !v21 )
        break;
      if ( ++v18 >= v19 )
        goto LABEL_25;
    }
    if ( v18 == -1 )
    {
LABEL_25:
      v89 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      if ( v13 )
        goto LABEL_31;
      v22 = 1;
      v23 = *((_QWORD *)this + 7);
      if ( !v23 )
        goto LABEL_31;
      v97 = 0LL;
      v98 = 0LL;
      v99 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v23 + 40LL))(
             v23,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v97) >= 0
        && (_WORD)v97 == 19 )
      {
        v22 = v98 == 0;
      }
      PropVariantClear(&v97);
      if ( v22 )
LABEL_31:
        v24 = (char *)this + 16 * v13 + 64;
      else
        v24 = (char *)this + 128;
      v25 = 0;
      v26 = *((_DWORD *)v24 + 2);
      if ( v26 <= 0 )
        goto LABEL_142;
      v27 = *(_QWORD *)v24;
      while ( 1 )
      {
        v28 = *(_QWORD *)(v27 + 16LL * v25) - *(_QWORD *)&v89.Data1;
        if ( !v28 )
          v28 = *(_QWORD *)(v27 + 16LL * v25 + 8) - *(_QWORD *)v89.Data4;
        if ( !v28 )
          break;
        if ( ++v25 >= v26 )
          goto LABEL_142;
      }
      if ( v25 == -1 )
      {
LABEL_142:
        SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(this, v13);
        v29 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                         SupportedConnectorModes,
                         0LL);
      }
      else
      {
        v29 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      }
    }
    else
    {
      v29 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
    v89 = v29;
    v30 = 1;
    v31 = *((_QWORD *)this + 7);
    if ( !v31 )
      goto LABEL_44;
    v100 = 0LL;
    v101 = 0LL;
    v102 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(
           v31,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v100) >= 0
      && (_WORD)v100 == 19 )
    {
      v30 = v101 == 0;
    }
    PropVariantClear(&v100);
    if ( v30 || (_DWORD)v8 == 3 )
LABEL_44:
      v32 = (char *)this + 16 * v8 + 208;
    else
      v32 = (char *)this + 336;
    v33 = 0;
    v34 = *((_DWORD *)v32 + 2);
    if ( v34 > 0 )
    {
      v35 = *(_QWORD *)v32;
      do
      {
        v36 = *(_QWORD *)(v35 + 16LL * v33) - *(_QWORD *)&v89.Data1;
        if ( !v36 )
          v36 = *(_QWORD *)(v35 + 16LL * v33 + 8) - *(_QWORD *)v89.Data4;
        if ( !v36 )
          break;
        ++v33;
      }
      while ( v33 < v34 );
    }
    v107.m256i_i64[0] = (__int64)this;
    v107.m256i_i32[2] = v8;
    *(GUID *)((char *)&v107.m256i_u64[1] + 4) = v29;
    v85 = 0;
    v88 = 0LL;
    v86 = 0LL;
    v104 = 0LL;
    v105 = 0LL;
    Src = 0LL;
    v37 = &PKEY_AudioEngine_DeviceFormat;
    if ( (_DWORD)v8 == 3 )
      v37 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    fmtid = v37->fmtid;
    pid = v37->pid;
    if ( (*(int (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
           *((_QWORD *)this + 4),
           &fmtid,
           &v104) >= 0
      && (_WORD)v104 == 65
      && (unsigned int)v105 >= 0x12 )
    {
      v38 = (const struct tWAVEFORMATEX *)Src;
      v103 = (const struct tWAVEFORMATEX *)Src;
      if ( (unsigned int)v105 == *((unsigned __int16 *)Src + 8) + 18LL )
      {
        v89 = v29;
        if ( (_DWORD)v8 == 3 )
          v39 = (struct tWAVEFORMATEX *)((char *)this + 416);
        else
          v39 = (struct tWAVEFORMATEX *)((char *)this + 408);
        v92 = v39;
        v83 = 0;
        v40 = 0;
        v41 = 0LL;
        v42 = *(_QWORD *)v89.Data4;
        v43 = *(_QWORD *)&v89.Data1;
        while ( 1 )
        {
          v44 = *(_QWORD *)&v39->wFormatTag;
          if ( v40 >= *(_DWORD *)(v44 + 8) )
          {
            if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
            {
              WPP_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                12LL,
                &WPP_3dded2e6bf653ecbc334b4283f1211e8_Traceguids,
                (unsigned int)(v83 != 0) - 2005139366);
            }
            v14 = v86;
            LODWORD(v8) = a2;
            v10 = v87;
            goto LABEL_156;
          }
          if ( v41 < 0 || v40 >= *(_DWORD *)(v44 + 8) )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x180047299LL);
          }
          v45 = *(_QWORD *)(v41 + *(_QWORD *)v44);
          v46 = *(_QWORD *)v45 - v43;
          if ( *(_QWORD *)v45 == v43 )
            v46 = *(_QWORD *)(v45 + 8) - v42;
          if ( !v46 )
          {
            v83 = 1;
            v47 = 0;
            if ( *(int *)(v45 + 24) > 0 )
              break;
          }
LABEL_135:
          ++v40;
          v41 += 8LL;
          v39 = v92;
        }
        v48 = 0LL;
        while ( 1 )
        {
          if ( v48 < 0 || v47 >= *(_DWORD *)(v45 + 24) )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x180047283LL);
          }
          if ( (unsigned int)CompareWaveFormat(v38, **(const struct tWAVEFORMATEX ***)(v48 + *(_QWORD *)(v45 + 16))) )
            break;
          ++v47;
          v48 += 8LL;
          v38 = v103;
          if ( v47 >= *(_DWORD *)(v45 + 24) )
          {
            v42 = *(_QWORD *)v89.Data4;
            v43 = *(_QWORD *)&v89.Data1;
            goto LABEL_135;
          }
        }
        v49 = Src;
        v50 = *((unsigned __int16 *)Src + 8);
        v51 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v50 + 18);
        v52 = v51;
        if ( v51 )
        {
          memcpy_0(v51, v49, v50 + 18);
          v88 = v52;
          v85 = 0;
          v10 = v87;
          LODWORD(v8) = a2;
          v14 = v86;
          goto LABEL_73;
        }
        v53 = 0LL;
        v88 = 0LL;
        ProposedConnectorFormatForProcessingMode = -2147024882;
        v85 = -2147024882;
        v10 = v87;
        LODWORD(v8) = a2;
        v14 = v86;
        goto LABEL_159;
      }
    }
LABEL_156:
    v89 = *(struct _GUID *)v107.m256i_i8;
    v90 = *(_OWORD *)&v107.m256i_u64[2];
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDefaultFormat<_lambda_ea783823a3a088a32542d9fbc7fb427f_>(
                                                 (int)this,
                                                 0,
                                                 v8,
                                                 (int)&v89,
                                                 &v88);
    v85 = ProposedConnectorFormatForProcessingMode;
    if ( ProposedConnectorFormatForProcessingMode >= 0 )
    {
      ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                                                   this,
                                                   0,
                                                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                                                   v88);
      v85 = ProposedConnectorFormatForProcessingMode;
      if ( ProposedConnectorFormatForProcessingMode >= 0 )
      {
LABEL_73:
        PropVariantClear(&v104);
        ProposedConnectorFormatForProcessingMode = v85;
        if ( v85 >= 0 )
        {
          v53 = v88;
          ProposedConnectorFormatForProcessingMode = ValidateWaveFormatEx(v88);
          v85 = ProposedConnectorFormatForProcessingMode;
          if ( ProposedConnectorFormatForProcessingMode >= 0 )
          {
            v14 = v53;
            v86 = v53;
            v53 = 0LL;
            v88 = 0LL;
LABEL_76:
            CoTaskMemFree(v53);
            goto LABEL_77;
          }
LABEL_159:
          if ( (unsigned int)hProvider > 2 )
          {
            TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetDeviceFormatInternal");
            LODWORD(v87) = 5184;
            v114 = &v87;
            v115 = 4LL;
            v116 = &v85;
            v117 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v81, v82, 5u, &pData);
            ProposedConnectorFormatForProcessingMode = v85;
            v53 = v88;
          }
          goto LABEL_76;
        }
      }
    }
    v53 = v88;
    goto LABEL_159;
  }
  v14 = v86;
LABEL_78:
  if ( !v10 )
    goto LABEL_122;
  v54 = v93;
  v55 = *(_QWORD *)&v93->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *(_QWORD *)&v93->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v55 = *(_QWORD *)v93->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  if ( v55 )
    goto LABEL_136;
  v89 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( (_DWORD)v8 )
    goto LABEL_88;
  v56 = 1;
  v57 = *((_QWORD *)this + 7);
  if ( !v57 )
    goto LABEL_88;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v57 + 40LL))(
         v57,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v100) >= 0
    && (_WORD)v100 == 19 )
  {
    v56 = v101 == 0;
  }
  PropVariantClear(&v100);
  if ( v56 )
LABEL_88:
    v58 = (char *)this + 16 * (int)v8 + 64;
  else
    v58 = (char *)this + 128;
  v59 = 0;
  v60 = *((_DWORD *)v58 + 2);
  if ( v60 <= 0 )
    goto LABEL_136;
  v12 = *(int (**)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v58;
  while ( 1 )
  {
    v61 = *((_QWORD *)v12 + 2 * v59) - *(_QWORD *)&v89.Data1;
    if ( !v61 )
      v61 = *((_QWORD *)v12 + 2 * v59 + 1) - *(_QWORD *)v89.Data4;
    if ( !v61 )
      break;
    if ( ++v59 >= v60 )
      goto LABEL_136;
  }
  if ( v59 == -1 )
    goto LABEL_136;
  v62 = 1;
  v63 = *((_QWORD *)this + 7);
  if ( !v63 )
    goto LABEL_100;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v63 + 40LL))(
         v63,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v97) >= 0
    && (_WORD)v97 == 19 )
  {
    v62 = v98 == 0;
  }
  PropVariantClear(&v97);
  if ( v62 || (_DWORD)v8 == 3 )
LABEL_100:
    v64 = (char *)this + 16 * (int)v8 + 208;
  else
    v64 = (char *)this + 336;
  v65 = 0;
  v66 = *((_DWORD *)v64 + 2);
  if ( v66 <= 0 )
  {
LABEL_136:
    v89 = *v54;
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetMixFormat(this, a2, &v89, v12, v10);
    if ( ProposedConnectorFormatForProcessingMode >= 0 )
      goto LABEL_122;
    goto LABEL_175;
  }
  v67 = 0LL;
  while ( 1 )
  {
    if ( v67 < 0 || v65 >= v66 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18004749FLL);
    }
    v89 = *(struct _GUID *)(v67 + *(_QWORD *)v64);
    v68 = a2;
    if ( a2 == eHostProcessConnector )
    {
      v69 = 1;
      v70 = *((_QWORD *)this + 7);
      if ( v70 )
      {
        pvar = 0LL;
        v95 = 0LL;
        v96 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v70 + 40LL))(
               v70,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &pvar) >= 0
          && (_WORD)pvar == 19 )
        {
          v69 = v95 == 0;
        }
        PropVariantClear(&pvar);
        if ( !v69 )
        {
          v71 = (char *)this + 128;
          goto LABEL_113;
        }
        v68 = eHostProcessConnector;
      }
    }
    v71 = (char *)this + 16 * v68 + 64;
LABEL_113:
    v72 = 0LL;
    v73 = *((_DWORD *)v71 + 2);
    if ( v73 <= 0 )
      break;
    v12 = *(int (**)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v71;
    while ( 1 )
    {
      v74 = *((_QWORD *)v12 + 2 * (int)v72) - *(_QWORD *)&v89.Data1;
      if ( !v74 )
        v74 = *((_QWORD *)v12 + 2 * (int)v72 + 1) - *(_QWORD *)v89.Data4;
      if ( !v74 )
        break;
      v72 = (unsigned int)(v72 + 1);
      if ( (int)v72 >= v73 )
        goto LABEL_119;
    }
    if ( (_DWORD)v72 == -1 )
      break;
    ++v65;
    v67 += 16LL;
    v66 = *((_DWORD *)v64 + 2);
    if ( v65 >= v66 )
    {
      v14 = v86;
      v54 = v93;
      goto LABEL_136;
    }
  }
LABEL_119:
  v75 = (struct tWAVEFORMATEX *)*((_QWORD *)this + 2);
  v103 = v75;
  (*(void (__fastcall **)(struct tWAVEFORMATEX *, __int64))(*(_QWORD *)&v75->wFormatTag + 8LL))(v75, v72);
  v89 = *v93;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDevicePipeFormat(this, a2, &v89, v76, v10);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    if ( v75 )
      (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v75->wFormatTag + 16LL))(v75);
    v14 = v86;
    goto LABEL_175;
  }
  if ( v75 )
    (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v75->wFormatTag + 16LL))(v75);
LABEL_122:
  if ( a4 )
    *a4 = v86;
LABEL_124:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        70LL,
        &WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
        (unsigned int)ProposedConnectorFormatForProcessingMode);
    }
    AudSrvTraceLoggingErrorHelper("GetDeviceDefaults", 0x1B1Du, ProposedConnectorFormatForProcessingMode);
  }
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
