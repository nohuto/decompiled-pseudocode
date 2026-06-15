/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18001DAE0
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x18000AB50 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     ?AllocateBytes@?$CHeapPtrBase@USYSTEM_AUDIO_STREAM_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800046CC (-AllocateBytes@-$CHeapPtrBase@USYSTEM_AUDIO_STREAM_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_.c)
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x1800046F4 (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B39C (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B49C (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@@Z @ 0x18001D750 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?IsCriticalAPO@CEndpointCharacteristics@@QEAAHW4APO_TYPE@@@Z @ 0x18004F074 (-IsCriticalAPO@CEndpointCharacteristics@@QEAAHW4APO_TYPE@@@Z.c)
 *     ?AllocateBytes@?$CHeapPtrBase@UAUDIO_DEVICE_MODE_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800507D0 (-AllocateBytes@-$CHeapPtrBase@UAUDIO_DEVICE_MODE_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF__guid_d @ 0x18005FCC8 (WPP_SF__guid_d.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180088DF4 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall InitializeStreamAndModeDescriptors(
        CEndpointCharacteristics *a1,
        int a2,
        int a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        _QWORD *a6,
        GUID *a7,
        GUID **a8,
        _QWORD *a9)
{
  int v9; // r14d
  int StreamEffect; // r13d
  GUID *v13; // rbx
  char *v14; // rdi
  OLECHAR *v15; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v16; // r15d
  GUID v17; // xmm6
  struct _GUID v18; // xmm7
  BOOL v19; // r12d
  __int64 v20; // rcx
  struct IMMDevice **v21; // r14
  char *v22; // rax
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rax
  GUID fmtid; // xmm0
  DWORD pid; // eax
  __int64 v29; // r12
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned __int64 v32; // rcx
  GUID *v33; // rax
  int v34; // edx
  __int64 v35; // r14
  int v36; // eax
  char v37; // r12
  int v38; // eax
  GUID *v39; // r14
  __int64 v40; // rax
  CEndpointCharacteristics *v41; // r12
  BOOL v42; // r14d
  __int64 v43; // rcx
  char *v44; // rax
  __int64 v45; // r10
  int v46; // edx
  int v47; // r8d
  __int64 v48; // r9
  __int64 v49; // rax
  BOOL v50; // r14d
  __int64 v51; // rcx
  char *v52; // r14
  int v53; // r11d
  int v54; // eax
  BOOL v55; // r12d
  __int64 v56; // rcx
  bool v57; // zf
  char *v58; // rax
  int v59; // edx
  int v60; // r8d
  __int64 v61; // r9
  __int64 v62; // rax
  GUID v63; // xmm6
  BOOL v64; // r14d
  __int64 v65; // rcx
  char *v66; // rax
  int v67; // edx
  int v68; // r8d
  __int64 v69; // r9
  __int64 v70; // rax
  GUID v71; // xmm7
  DWORD v72; // r14d
  unsigned int v73; // r15d
  __int64 v74; // rax
  void (__fastcall ***v75)(_QWORD, GUID *, CEndpointCharacteristics **); // r9
  CEndpointCharacteristics *v76; // rcx
  HRESULT v77; // r14d
  __int64 v78; // rax
  WCHAR *v79; // rdx
  int v80; // r11d
  __int64 v81; // r8
  WCHAR v82; // cx
  OLECHAR *v83; // rdx
  int v84; // r10d
  char *v85; // rax
  BOOL v86; // r14d
  __int64 v87; // rcx
  __int64 v88; // rax
  GUID *v89; // rax
  char *v90; // rax
  __int64 v92; // r12
  __int64 v93; // rcx
  GUID *v94; // rax
  unsigned int v95; // edx
  __int64 v96; // r14
  int v97; // eax
  __int64 v98; // r14
  __int64 v99; // r12
  __int64 v100; // rcx
  char *v101; // rax
  __int64 v102; // r14
  __int32 v103; // r15d
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  char *v113; // rax
  struct IAudioSystemEffects2 **phkResult; // [rsp+28h] [rbp-E0h]
  CEndpointCharacteristics *v116; // [rsp+60h] [rbp-A8h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v118; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v119[2]; // [rsp+78h] [rbp-90h] BYREF
  PROPVARIANT v120[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v121; // [rsp+98h] [rbp-70h]
  PROPVARIANT pvar; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v123; // [rsp+B0h] [rbp-58h]
  __int64 v124; // [rsp+B8h] [rbp-50h]
  GUID *v125; // [rsp+C0h] [rbp-48h]
  char *v126; // [rsp+C8h] [rbp-40h] BYREF
  OLECHAR *v127; // [rsp+D0h] [rbp-38h]
  PROPVARIANT v128; // [rsp+D8h] [rbp-30h] BYREF
  LPCOLESTR lpsz; // [rsp+E0h] [rbp-28h]
  __int64 v130; // [rsp+E8h] [rbp-20h]
  GUID **v131; // [rsp+F0h] [rbp-18h]
  _QWORD *v132; // [rsp+F8h] [rbp-10h]
  __int64 v133; // [rsp+100h] [rbp-8h]
  GUID rguid; // [rsp+108h] [rbp+0h] BYREF
  DWORD v135; // [rsp+118h] [rbp+10h]
  struct _GUID v136; // [rsp+128h] [rbp+20h] BYREF
  PROPVARIANT v137[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v138; // [rsp+148h] [rbp+40h]
  WCHAR SubKey[80]; // [rsp+158h] [rbp+50h] BYREF

  v133 = -2LL;
  v9 = a3;
  LODWORD(hKey) = a3;
  LODWORD(v118) = a2;
  v116 = a1;
  v125 = a7;
  v131 = a8;
  v132 = a9;
  StreamEffect = 0;
  v13 = 0LL;
  v119[0] = 0LL;
  v14 = 0LL;
  v126 = 0LL;
  v136 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)v137 = GUID_00000000_0000_0000_0000_000000000000;
  v15 = (OLECHAR *)*((_QWORD *)a1 + 2);
  v127 = v15;
  (*(void (__fastcall **)(OLECHAR *))(*(_QWORD *)v15 + 8LL))(v15);
  if ( a2 )
  {
    v16 = a5;
LABEL_186:
    if ( v16 != eOffloadConnector )
      goto LABEL_206;
    goto LABEL_187;
  }
  v16 = a5;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_186;
  if ( a5 == eOffloadConnector )
  {
LABEL_187:
    if ( !(_DWORD)v118 )
    {
      rguid = *v125;
      StreamEffect = CEndpointCharacteristics::GetStreamEffect(a1, &rguid, 0, eOffloadConnector, &v136, 0LL, 0LL);
      if ( StreamEffect < 0 )
        goto LABEL_289;
      rguid = *v125;
      StreamEffect = CEndpointCharacteristics::GetModeEffect(
                       a1,
                       &rguid,
                       0,
                       eOffloadConnector,
                       (struct _GUID *)v137,
                       0LL,
                       0LL);
      if ( StreamEffect < 0 )
        goto LABEL_289;
      v98 = *(_QWORD *)&v136.Data1;
      v99 = *(_QWORD *)v136.Data4;
      v100 = *(_QWORD *)&v136.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v136.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v100 = *(_QWORD *)v136.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v100 )
        goto LABEL_198;
      v101 = (char *)v137[0] - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( v137[0] == *(PROPVARIANT *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v101 = (char *)v137[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v101 || !g_AudioSrvEnableInProcOffloadIfPossible )
      {
LABEL_198:
        if ( a4 )
          goto LABEL_178;
        ATL::CHeapPtrBase<SYSTEM_AUDIO_STREAM_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(
          v119,
          16 * ((v100 != 0) + 8LL));
        v13 = (GUID *)v119[0];
        if ( !v119[0] )
        {
          StreamEffect = -2147024882;
          goto LABEL_289;
        }
        *(_DWORD *)v119[0] = 0;
        v13[5].Data1 = (unsigned int)hKey;
        *(_QWORD *)v13[5].Data4 = 0LL;
        *(_DWORD *)&v13[7].Data4[4] = 0;
        *(_DWORD *)v13[6].Data4 = 0;
        v102 = v98 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
        if ( !v102 )
          v102 = v99 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
        if ( v102 )
        {
          *(_DWORD *)&v13[7].Data4[4] = 1;
          *(_DWORD *)v13[6].Data4 = 1;
          v13[8] = v136;
        }
        v37 = 1;
        v38 = 0;
LABEL_209:
        *(_DWORD *)&v13->Data2 = 0;
        goto LABEL_38;
      }
      v9 = (int)hKey;
    }
LABEL_206:
    v37 = 0;
    ATL::CHeapPtrBase<SYSTEM_AUDIO_STREAM_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(v119, 0x90uLL);
    v13 = (GUID *)v119[0];
    if ( !v119[0] )
    {
      StreamEffect = -2147024882;
      goto LABEL_289;
    }
    v38 = a4;
    *(_DWORD *)v119[0] = a4;
    v13[5].Data1 = v9;
    *(_QWORD *)v13[5].Data4 = 0LL;
    *(_DWORD *)&v13[7].Data4[4] = 0;
    goto LABEL_209;
  }
  v17 = GUID_00000000_0000_0000_0000_000000000000;
  v136 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a5 == eLoopbackConnector )
    goto LABEL_24;
  if ( !*((_DWORD *)a1 + a5 + 10) )
  {
    StreamEffect = CEndpointCharacteristics::GetLfx(a1, a5, &v136, 0LL, phkResult);
    if ( StreamEffect < 0 )
      goto LABEL_289;
    v17 = v136;
    goto LABEL_23;
  }
  v18 = *v125;
  v136 = *v125;
  StreamEffect = 0;
  rguid = GUID_00000000_0000_0000_0000_000000000000;
  v19 = 1;
  v20 = *((_QWORD *)v116 + 7);
  if ( !v20 )
    goto LABEL_11;
  pvar = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v20 + 40LL))(
         v20,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v19 = v123 == 0;
  }
  PropVariantClear(&pvar);
  if ( v19 || a5 == eKeywordDetectorConnector )
  {
LABEL_11:
    v21 = (struct IMMDevice **)v116;
    v22 = (char *)v116 + 16 * a5 + 144;
  }
  else
  {
    v21 = (struct IMMDevice **)v116;
    v22 = (char *)v116 + 352;
  }
  v23 = 0;
  v24 = *((_DWORD *)v22 + 2);
  if ( v24 > 0 )
  {
    v25 = *(_QWORD *)v22;
    while ( 1 )
    {
      v26 = *(_QWORD *)(v25 + 16LL * v23) - *(_QWORD *)&v136.Data1;
      if ( !v26 )
        v26 = *(_QWORD *)(v25 + 16LL * v23 + 8) - *(_QWORD *)v136.Data4;
      if ( !v26 )
        break;
      if ( ++v23 >= v24 )
        goto LABEL_22;
    }
    if ( v23 != -1 )
    {
      StreamEffect = 0;
      if ( a5 )
      {
        if ( a5 == eKeywordDetectorConnector )
        {
          fmtid = PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid;
          pid = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
LABEL_21:
          v136 = v18;
          *(GUID *)v120 = fmtid;
          LODWORD(v121) = pid;
          StreamEffect = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                           v21,
                           (struct _tagpropertykey *)v120,
                           &v136,
                           0,
                           0,
                           a5,
                           &rguid,
                           0LL,
                           0LL);
          v17 = rguid;
          goto LABEL_22;
        }
        StreamEffect = -2147023728;
        pid = v121;
        fmtid = *(GUID *)v120;
      }
      else
      {
        fmtid = PKEY_FX_StreamEffectClsid.fmtid;
        pid = PKEY_FX_StreamEffectClsid.pid;
      }
      if ( StreamEffect < 0 )
        goto LABEL_22;
      goto LABEL_21;
    }
  }
LABEL_22:
  v136 = v17;
  if ( StreamEffect < 0 )
    goto LABEL_289;
LABEL_23:
  v9 = (int)hKey;
LABEL_24:
  if ( !a4 )
  {
    v29 = *(_QWORD *)v136.Data4;
    v30 = *(_QWORD *)&v17.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&v17.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v30 = *(_QWORD *)v136.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    v31 = 4;
    if ( !v30 )
      v31 = 3;
    v32 = 16 * (v31 + 8LL);
    if ( v32 > 0x7FFFFFFF )
    {
      v13 = 0LL;
    }
    else
    {
      v33 = (GUID *)CoTaskMemAlloc((unsigned int)v32);
      v13 = v33;
      v119[0] = v33;
      if ( v33 )
      {
        v33->Data1 = 0;
        v34 = (int)hKey;
        v33[5].Data1 = (unsigned int)hKey;
        *(_QWORD *)v33[5].Data4 = 0LL;
        *(_DWORD *)&v33[7].Data4[4] = 0;
        *(_DWORD *)v33[6].Data4 = 0;
        v35 = *(_QWORD *)&v17.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
        if ( *(_QWORD *)&v17.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
          v35 = v29 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
        if ( v35 )
        {
          *(_DWORD *)v33[6].Data4 = 1;
          v33[(unsigned int)(*(_DWORD *)&v33[7].Data4[4])++ + 8] = v17;
        }
        v33[(unsigned int)(*(_DWORD *)&v33[7].Data4[4])++ + 8] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
        v33[(unsigned int)(*(_DWORD *)&v33[7].Data4[4])++ + 8] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
        v33[(unsigned int)(*(_DWORD *)&v33[7].Data4[4])++ + 8] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
        if ( v34 < 0 )
        {
          v36 = 1;
          goto LABEL_37;
        }
        goto LABEL_36;
      }
    }
    StreamEffect = -2147024882;
    goto LABEL_289;
  }
  if ( a4 != 1 )
  {
    if ( a4 == 2 )
    {
      ATL::CHeapPtrBase<SYSTEM_AUDIO_STREAM_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(v119, 0xB0uLL);
      v13 = (GUID *)v119[0];
      if ( !v119[0] )
      {
        StreamEffect = -2147024882;
        goto LABEL_289;
      }
      if ( a5 == eLoopbackConnector )
        v97 = 1;
      else
        v97 = 2;
      *(_DWORD *)v119[0] = v97;
      v13[5].Data1 = v9;
      *(_QWORD *)v13[5].Data4 = 0LL;
      *(_DWORD *)&v13[7].Data4[4] = 3;
      v13[8] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
      v13[9] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
      v13[10] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
      *(_DWORD *)v13[6].Data4 = 0;
      if ( v9 < 0 )
      {
        v36 = 1;
        goto LABEL_37;
      }
LABEL_36:
      v36 = 0;
LABEL_37:
      *(_DWORD *)&v13->Data2 = v36;
      v37 = 0;
      v38 = a4;
      goto LABEL_38;
    }
LABEL_178:
    StreamEffect = -2147024809;
    goto LABEL_289;
  }
  v92 = *(_QWORD *)v136.Data4;
  v93 = *(_QWORD *)&v17.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v17.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v93 = *(_QWORD *)v136.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v94 = (GUID *)ATL::CComAllocator::Allocate(16 * ((unsigned int)(v93 != 0) + 2 + 8LL));
  v13 = v94;
  v119[0] = v94;
  if ( !v94 )
  {
    StreamEffect = -2147024882;
    goto LABEL_289;
  }
  v94->Data1 = 1;
  v95 = (unsigned int)hKey;
  v94[5].Data1 = (unsigned int)hKey;
  *(_QWORD *)v94[5].Data4 = 0LL;
  *(_DWORD *)v94[6].Data4 = 0;
  *(_DWORD *)&v94[7].Data4[4] = 0;
  v96 = *(_QWORD *)&v17.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v17.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v96 = v92 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v96 )
  {
    *(_DWORD *)v94[6].Data4 |= 1u;
    v94[(unsigned int)(*(_DWORD *)&v94[7].Data4[4])++ + 8] = v17;
  }
  v94[(unsigned int)(*(_DWORD *)&v94[7].Data4[4])++ + 8] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
  v94[(unsigned int)(*(_DWORD *)&v94[7].Data4[4])++ + 8] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
  *(_DWORD *)&v94->Data2 = v95 >> 31;
  v37 = 0;
  v38 = a4;
LABEL_38:
  v39 = v125;
  *(GUID *)((char *)v13 + 108) = *v125;
  *(_DWORD *)v13->Data4 = v16;
  if ( (_DWORD)v118 )
    goto LABEL_145;
  if ( v16 && v16 != eKeywordDetectorConnector || v38 == 2 )
    goto LABEL_167;
  v40 = *a6 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *a6 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v40 = a6[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  if ( v40 )
  {
LABEL_167:
    if ( !v37 )
      goto LABEL_145;
    ATL::CHeapPtrBase<AUDIO_DEVICE_MODE_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(&v126);
    v14 = v126;
    if ( !v126 )
    {
      StreamEffect = -2147024882;
      goto LABEL_289;
    }
    *(_DWORD *)v126 = a4;
    *((_DWORD *)v14 + 1) = 0;
    *((_DWORD *)v14 + 13) = 0;
    v113 = (char *)v137[0] - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( v137[0] == *(PROPVARIANT *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v113 = (char *)v137[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v113 )
    {
      *((_DWORD *)v14 + 13) = 1;
      *((_DWORD *)v14 + 8) = 1;
      *(_OWORD *)(v14 + 56) = *(_OWORD *)v137;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids);
      }
    }
    *(GUID *)(v14 + 36) = *v39;
    goto LABEL_145;
  }
  rguid = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v41 = v116;
  if ( v16 )
    goto LABEL_50;
  v42 = 1;
  v43 = *((_QWORD *)v116 + 7);
  if ( !v43 )
    goto LABEL_50;
  pvar = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v43 + 40LL))(
         v43,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v42 = v123 == 0;
  }
  PropVariantClear(&pvar);
  if ( v42 )
LABEL_50:
    v44 = (char *)v116 + 16 * v16 + 64;
  else
    v44 = (char *)v116 + 128;
  v45 = 0LL;
  v46 = 0;
  v47 = *((_DWORD *)v44 + 2);
  if ( v47 <= 0 )
    goto LABEL_145;
  v48 = *(_QWORD *)v44;
  while ( 1 )
  {
    v49 = *(_QWORD *)(v48 + 16LL * v46) - *(_QWORD *)&rguid.Data1;
    if ( !v49 )
      v49 = *(_QWORD *)(v48 + 16LL * v46 + 8) - *(_QWORD *)rguid.Data4;
    if ( !v49 )
      break;
    if ( ++v46 >= v47 )
      goto LABEL_145;
  }
  if ( v46 == -1 )
    goto LABEL_145;
  v50 = 1;
  v51 = *((_QWORD *)v116 + 7);
  if ( !v51 )
    goto LABEL_62;
  v120[0] = 0LL;
  v120[1] = 0LL;
  v121 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v51 + 40LL))(
         v51,
         &PKEY_AudioEndpoint_Disable_SysFx,
         v120) >= 0
    && LOWORD(v120[0]) == 19 )
  {
    v50 = LODWORD(v120[1]) == 0;
  }
  PropVariantClear(v120);
  v45 = 0LL;
  if ( v50 || v16 == eKeywordDetectorConnector )
LABEL_62:
    v52 = (char *)v116 + 16 * v16 + 208;
  else
    v52 = (char *)v116 + 336;
  v53 = 0;
  LODWORD(hKey) = 0;
  v54 = *((_DWORD *)v52 + 2);
  if ( v54 <= 0 )
  {
LABEL_145:
    v89 = v13;
    v13 = 0LL;
    *v131 = v89;
    v90 = v14;
    v14 = 0LL;
    *v132 = v90;
    goto LABEL_146;
  }
  v118 = 0LL;
  while ( 1 )
  {
    if ( v45 < 0 || v53 >= v54 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800458BALL);
    }
    rguid = *(GUID *)(v45 + *(_QWORD *)v52);
    if ( v16 == eHostProcessConnector )
    {
      v55 = 1;
      v56 = *((_QWORD *)v116 + 7);
      if ( v56 )
      {
        v137[0] = 0LL;
        v137[1] = 0LL;
        v138 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v56 + 40LL))(
               v56,
               &PKEY_AudioEndpoint_Disable_SysFx,
               v137) >= 0
          && LOWORD(v137[0]) == 19 )
        {
          v55 = LODWORD(v137[1]) == 0;
        }
        PropVariantClear(v137);
        v45 = v118;
        v53 = (int)hKey;
        v57 = !v55;
        v41 = v116;
        if ( v57 )
        {
          v58 = (char *)v116 + 128;
          goto LABEL_74;
        }
      }
      else
      {
        v41 = v116;
      }
    }
    v58 = (char *)v41 + 16 * v16 + 64;
LABEL_74:
    v59 = 0;
    v60 = *((_DWORD *)v58 + 2);
    if ( v60 <= 0 )
      break;
    v61 = *(_QWORD *)v58;
    while ( 1 )
    {
      v62 = *(_QWORD *)(v61 + 16LL * v59) - *(_QWORD *)&rguid.Data1;
      if ( !v62 )
        v62 = *(_QWORD *)(v61 + 16LL * v59 + 8) - *(_QWORD *)rguid.Data4;
      if ( !v62 )
        break;
      if ( ++v59 >= v60 )
        goto LABEL_80;
    }
    if ( v59 == -1 )
      break;
    LODWORD(hKey) = ++v53;
    v45 += 16LL;
    v118 = v45;
    v54 = *((_DWORD *)v52 + 2);
    if ( v53 >= v54 )
      goto LABEL_145;
  }
LABEL_80:
  v14 = (char *)CoTaskMemAlloc(0x48uLL);
  v126 = v14;
  if ( !v14 )
  {
    StreamEffect = -2147024882;
    goto LABEL_289;
  }
  rguid = *v125;
  StreamEffect = 0;
  v63 = GUID_00000000_0000_0000_0000_000000000000;
  v64 = 1;
  v65 = *((_QWORD *)v41 + 7);
  if ( !v65 )
    goto LABEL_86;
  pvar = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v65 + 40LL))(
         v65,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v64 = v123 == 0;
  }
  PropVariantClear(&pvar);
  if ( v64 || v16 == eKeywordDetectorConnector )
LABEL_86:
    v66 = (char *)v41 + 16 * v16 + 208;
  else
    v66 = (char *)v41 + 336;
  v67 = 0;
  v68 = *((_DWORD *)v66 + 2);
  if ( v68 <= 0 )
    goto LABEL_139;
  v69 = *(_QWORD *)v66;
  while ( 1 )
  {
    v70 = *(_QWORD *)(v69 + 16LL * v67) - *(_QWORD *)&rguid.Data1;
    if ( !v70 )
      v70 = *(_QWORD *)(v69 + 16LL * v67 + 8) - *(_QWORD *)rguid.Data4;
    if ( !v70 )
      break;
    if ( ++v67 >= v68 )
      goto LABEL_139;
  }
  if ( v67 == -1 )
    goto LABEL_139;
  StreamEffect = 0;
  if ( v16 == eHostProcessConnector )
  {
    v71 = PKEY_FX_ModeEffectClsid.fmtid;
    v72 = PKEY_FX_ModeEffectClsid.pid;
    goto LABEL_95;
  }
  v103 = v16 - 1;
  if ( !v103 )
  {
    v71 = PKEY_FX_Offload_ModeEffectClsid.fmtid;
    v72 = PKEY_FX_Offload_ModeEffectClsid.pid;
    goto LABEL_96;
  }
  if ( v103 == 2 )
  {
    v71 = PKEY_FX_KeywordDetector_ModeEffectClsid.fmtid;
    v72 = PKEY_FX_KeywordDetector_ModeEffectClsid.pid;
    goto LABEL_96;
  }
  StreamEffect = -2147023728;
  v72 = v121;
  v71 = *(GUID *)v120;
LABEL_95:
  if ( StreamEffect < 0 )
    goto LABEL_139;
LABEL_96:
  StreamEffect = 0;
  *(_QWORD *)&v136.Data1 = 0LL;
  rguid = v71;
  v135 = v72;
  v73 = 0;
  switch ( v72 )
  {
    case 1u:
      v104 = *(_QWORD *)&rguid.Data1 - *(_QWORD *)&PKEY_FX_PreMixEffectClsid.fmtid.Data1;
      if ( *(_QWORD *)&rguid.Data1 == *(_QWORD *)&PKEY_FX_PreMixEffectClsid.fmtid.Data1 )
        v104 = *(_QWORD *)rguid.Data4 - *(_QWORD *)PKEY_FX_PreMixEffectClsid.fmtid.Data4;
      if ( v104 )
        goto LABEL_106;
LABEL_245:
      v73 = 1;
      goto LABEL_106;
    case 5u:
      v105 = *(_QWORD *)&rguid.Data1 - *(_QWORD *)&PKEY_FX_StreamEffectClsid.fmtid.Data1;
      if ( *(_QWORD *)&rguid.Data1 == *(_QWORD *)&PKEY_FX_StreamEffectClsid.fmtid.Data1 )
        v105 = *(_QWORD *)rguid.Data4 - *(_QWORD *)PKEY_FX_StreamEffectClsid.fmtid.Data4;
      if ( v105 )
        goto LABEL_106;
      goto LABEL_245;
    case 8u:
      v106 = *(_QWORD *)&rguid.Data1 - *(_QWORD *)&PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid.Data1;
      if ( *(_QWORD *)&rguid.Data1 == *(_QWORD *)&PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid.Data1 )
        v106 = *(_QWORD *)rguid.Data4 - *(_QWORD *)PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid.Data4;
      if ( v106 )
        goto LABEL_106;
      goto LABEL_245;
    case 0xBu:
      v107 = *(_QWORD *)&rguid.Data1 - *(_QWORD *)&PKEY_FX_Offload_StreamEffectClsid.fmtid.Data1;
      if ( *(_QWORD *)&rguid.Data1 == *(_QWORD *)&PKEY_FX_Offload_StreamEffectClsid.fmtid.Data1 )
        v107 = *(_QWORD *)rguid.Data4 - *(_QWORD *)PKEY_FX_Offload_StreamEffectClsid.fmtid.Data4;
      if ( v107 )
        goto LABEL_106;
      goto LABEL_245;
    case 2u:
      v108 = *(_QWORD *)&rguid.Data1 - *(_QWORD *)&PKEY_FX_PostMixEffectClsid.fmtid.Data1;
      if ( *(_QWORD *)&rguid.Data1 == *(_QWORD *)&PKEY_FX_PostMixEffectClsid.fmtid.Data1 )
        v108 = *(_QWORD *)rguid.Data4 - *(_QWORD *)PKEY_FX_PostMixEffectClsid.fmtid.Data4;
      if ( v108 )
        goto LABEL_106;
LABEL_105:
      v73 = 2;
      goto LABEL_106;
    case 6u:
      v74 = *(_QWORD *)&rguid.Data1 - *(_QWORD *)&PKEY_FX_ModeEffectClsid.fmtid.Data1;
      if ( *(_QWORD *)&rguid.Data1 == *(_QWORD *)&PKEY_FX_ModeEffectClsid.fmtid.Data1 )
        v74 = *(_QWORD *)rguid.Data4 - *(_QWORD *)PKEY_FX_ModeEffectClsid.fmtid.Data4;
      if ( !v74 )
        goto LABEL_105;
      goto LABEL_106;
    case 9u:
      v109 = *(_QWORD *)&rguid.Data1 - *(_QWORD *)&PKEY_FX_KeywordDetector_ModeEffectClsid.fmtid.Data1;
      if ( *(_QWORD *)&rguid.Data1 == *(_QWORD *)&PKEY_FX_KeywordDetector_ModeEffectClsid.fmtid.Data1 )
        v109 = *(_QWORD *)rguid.Data4 - *(_QWORD *)PKEY_FX_KeywordDetector_ModeEffectClsid.fmtid.Data4;
      if ( v109 )
        goto LABEL_106;
      goto LABEL_105;
    case 0xCu:
      v110 = *(_QWORD *)&rguid.Data1 - *(_QWORD *)&PKEY_FX_Offload_ModeEffectClsid.fmtid.Data1;
      if ( *(_QWORD *)&rguid.Data1 == *(_QWORD *)&PKEY_FX_Offload_ModeEffectClsid.fmtid.Data1 )
        v110 = *(_QWORD *)rguid.Data4 - *(_QWORD *)PKEY_FX_Offload_ModeEffectClsid.fmtid.Data4;
      if ( v110 )
        goto LABEL_106;
      goto LABEL_105;
    case 7u:
      v111 = *(_QWORD *)&rguid.Data1 - *(_QWORD *)&PKEY_FX_EndpointEffectClsid.fmtid.Data1;
      if ( *(_QWORD *)&rguid.Data1 == *(_QWORD *)&PKEY_FX_EndpointEffectClsid.fmtid.Data1 )
        v111 = *(_QWORD *)rguid.Data4 - *(_QWORD *)PKEY_FX_EndpointEffectClsid.fmtid.Data4;
      if ( v111 )
        goto LABEL_106;
      break;
    case 0xAu:
      v112 = *(_QWORD *)&rguid.Data1 - *(_QWORD *)&PKEY_FX_KeywordDetector_EndpointEffectClsid.fmtid.Data1;
      if ( *(_QWORD *)&rguid.Data1 == *(_QWORD *)&PKEY_FX_KeywordDetector_EndpointEffectClsid.fmtid.Data1 )
        v112 = *(_QWORD *)rguid.Data4 - *(_QWORD *)PKEY_FX_KeywordDetector_EndpointEffectClsid.fmtid.Data4;
      if ( v112 )
        goto LABEL_106;
      break;
    default:
      goto LABEL_106;
  }
  v73 = 3;
LABEL_106:
  *(GUID *)v137 = GUID_00000000_0000_0000_0000_000000000000;
  if ( (int)CEndpointCharacteristics::UpdateAPOEnableStatus((__int64)v41, v73) < 0 )
    goto LABEL_136;
  *(GUID *)v120 = v71;
  LODWORD(v121) = v72;
  v75 = (void (__fastcall ***)(_QWORD, GUID *, CEndpointCharacteristics **))*((_QWORD *)v41 + 2);
  v76 = 0LL;
  v116 = 0LL;
  v118 = 0LL;
  v128 = 0LL;
  lpsz = 0LL;
  v130 = 0LL;
  if ( v75 )
  {
    v116 = 0LL;
    (**v75)(v75, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990, &v116);
    v76 = v116;
  }
  v77 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *, _QWORD, __int64 *))(*(_QWORD *)v76 + 40LL))(
          v76,
          0LL,
          &v118);
  if ( v77 >= 0 )
  {
    v77 = (*(__int64 (__fastcall **)(__int64, PROPVARIANT *, PROPVARIANT *))(*(_QWORD *)v118 + 40LL))(v118, v120, &v128);
    if ( v77 >= 0 )
    {
      if ( (_WORD)v128 == 31 )
      {
        v77 = CLSIDFromString(lpsz, (LPCLSID)v137);
        if ( v77 >= 0 )
        {
          rguid = *(GUID *)v137;
          v78 = 75LL;
          v79 = SubKey;
          v80 = 0;
          v81 = 0LL;
          while ( v78 != -2147483571 )
          {
            v82 = *(WCHAR *)((char *)v79 + (char *)L"AudioEngine\\AudioProcessingObjects\\" - (char *)SubKey);
            if ( !v82 )
              break;
            *v79++ = v82;
            ++v81;
            if ( !--v78 )
            {
              --v79;
              --v81;
              v80 = -2147024774;
              break;
            }
          }
          *v79 = 0;
          v83 = &SubKey[v81];
          v84 = 75 - v81;
          if ( (int)(v80 + 0x80000000) >= 0 && v80 != -2147024774 )
          {
            v84 = (int)v127;
            v83 = v127;
          }
          if ( v80 < 0
            || StringFromGUID2(&rguid, v83, v84) <= 0
            || RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &hKey) )
          {
            v77 = -2005139398;
            if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF__guid_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                10LL,
                &WPP_94670bdcb35a3f5dca51f96e2122b87b_Traceguids,
                v137,
                -2005139398);
            }
            *(GUID *)v137 = GUID_00000000_0000_0000_0000_000000000000;
          }
          else
          {
            RegCloseKey(hKey);
            v77 = 0;
          }
        }
      }
      else
      {
        v77 = -2147467259;
      }
    }
  }
  PropVariantClear(&v128);
  if ( v118 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v118 + 16LL))(v118);
  if ( v116 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v116 + 16LL))(v116);
  if ( v77 < 0 )
    goto LABEL_136;
  v85 = (char *)v137[0] - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( v137[0] == *(PROPVARIANT *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v85 = (char *)v137[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v85 )
    goto LABEL_136;
  v86 = 0;
  v87 = *((_QWORD *)v41 + 4);
  if ( !v87 )
    goto LABEL_136;
  v120[0] = 0LL;
  v120[1] = 0LL;
  v121 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v87 + 40LL))(
         v87,
         &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
         v120) >= 0
    && LOWORD(v120[0]) == 19 )
  {
    v86 = LODWORD(v120[1]) == 1;
  }
  PropVariantClear(v120);
  if ( v86 && !(unsigned int)CEndpointCharacteristics::IsCriticalAPO(v41, v73) )
  {
    v63 = GUID_00000000_0000_0000_0000_000000000000;
    *(GUID *)v137 = GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
LABEL_136:
    v63 = *(GUID *)v137;
  }
  if ( *(_QWORD *)&v136.Data1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v136.Data1 + 16LL))(*(_QWORD *)&v136.Data1);
LABEL_139:
  rguid = v63;
  if ( StreamEffect >= 0 )
  {
    *(_DWORD *)v14 = a4;
    *((_DWORD *)v14 + 1) = 0;
    *((_DWORD *)v14 + 13) = 0;
    v88 = *(_QWORD *)&rguid.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&rguid.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v88 = *(_QWORD *)rguid.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v88 )
    {
      *((_DWORD *)v14 + 13) = 1;
      *((_DWORD *)v14 + 8) = 1;
      *(GUID *)(v14 + 56) = v63;
    }
    *(GUID *)(v14 + 36) = *v125;
    goto LABEL_145;
  }
LABEL_289:
  AudSrvTraceLoggingErrorHelper("InitializeStreamAndModeDescriptors", 0x1CAu, StreamEffect);
LABEL_146:
  CoTaskMemFree(v14);
  CoTaskMemFree(v13);
  if ( v15 )
    (*(void (__fastcall **)(OLECHAR *))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)StreamEffect;
}
