/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18001FA00
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800153A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AllocateBytes@?$CHeapPtrBase@USYSTEM_AUDIO_STREAM_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800677E8 (-AllocateBytes@-$CHeapPtrBase@USYSTEM_AUDIO_STREAM_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_.c)
 *     WPP_SF__guid_d @ 0x18007C374 (WPP_SF__guid_d.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A8D14 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall InitializeStreamAndModeDescriptors(
        CEndpointCharacteristics *a1,
        int a2,
        int a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        _QWORD *a6,
        GUID *a7,
        GUID **a8,
        _QWORD *a9)
{
  unsigned int v9; // r15d
  CEndpointCharacteristics *v11; // r13
  GUID *v12; // rsi
  char *v13; // rdi
  OLECHAR *v14; // r14
  bool v15; // zf
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v16; // r12d
  GUID v17; // xmm6
  GUID v18; // xmm7
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v19; // eax
  BOOL v20; // r12d
  CEndpointCharacteristics *v21; // rcx
  __int64 v22; // r15
  _QWORD *v23; // rax
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rax
  GUID fmtid; // xmm0
  DWORD pid; // eax
  int v30; // ecx
  void (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // r15
  __int64 v32; // rbx
  __int64 v33; // rcx
  WCHAR *v34; // rdx
  int v35; // r10d
  __int64 v36; // r8
  WCHAR v37; // ax
  OLECHAR *v38; // rdx
  int v39; // ecx
  unsigned int v40; // r8d
  __int64 v41; // r15
  __int64 v42; // rcx
  unsigned int v43; // eax
  unsigned __int64 v44; // rcx
  GUID *v45; // rax
  unsigned int v46; // edx
  __int64 v47; // rbx
  __int64 v48; // rax
  BOOL v49; // r12d
  __int64 v50; // r15
  _QWORD *v51; // rax
  __int64 v52; // r10
  int v53; // edx
  int v54; // r8d
  __int64 v55; // r9
  __int64 v56; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v57; // r13d
  BOOL v58; // r12d
  __int64 v59; // r15
  CEndpointCharacteristics *v60; // r12
  _QWORD *v61; // r15
  int v62; // r11d
  int v63; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v64; // ebx
  BOOL v65; // r13d
  __int64 v66; // r12
  _QWORD *v67; // rax
  int v68; // edx
  int v69; // r8d
  __int64 v70; // r9
  __int64 v71; // rax
  GUID v72; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v73; // r13d
  BOOL v74; // r12d
  __int64 v75; // r15
  CEndpointCharacteristics *v76; // r15
  _QWORD *v77; // rax
  int v78; // edx
  int v79; // r8d
  __int64 v80; // r9
  __int64 v81; // rax
  GUID v82; // xmm1
  DWORD v83; // eax
  __int64 v84; // r9
  void (__fastcall ***v85)(_QWORD, GUID *, CEndpointCharacteristics **); // r15
  CEndpointCharacteristics *v86; // rbx
  __int64 v87; // rax
  WCHAR *v88; // rdx
  int v89; // r10d
  __int64 v90; // r8
  WCHAR v91; // cx
  OLECHAR *v92; // rdx
  int v93; // r11d
  __int64 v94; // rax
  GUID *v95; // rax
  char *v96; // rax
  int Lfx; // eax
  __int64 v99; // r15
  __int64 v100; // rcx
  unsigned int v101; // ecx
  __int64 v102; // rbx
  __int32 v103; // ebx
  struct IAudioSystemEffects2 **phkResult; // [rsp+28h] [rbp-E0h]
  __int64 v105; // [rsp+38h] [rbp-D0h] BYREF
  CEndpointCharacteristics *v106; // [rsp+40h] [rbp-C8h] BYREF
  int v107; // [rsp+48h] [rbp-C0h]
  unsigned int v108; // [rsp+4Ch] [rbp-BCh]
  __int64 v109; // [rsp+50h] [rbp-B8h]
  __int64 v110; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v111; // [rsp+60h] [rbp-A8h] BYREF
  GUID *v112; // [rsp+68h] [rbp-A0h] BYREF
  PROPVARIANT v113; // [rsp+70h] [rbp-98h] BYREF
  LPCOLESTR lpsz; // [rsp+78h] [rbp-90h]
  __int64 v115; // [rsp+80h] [rbp-88h]
  PROPVARIANT pvar; // [rsp+88h] [rbp-80h] BYREF
  LPCOLESTR v117; // [rsp+90h] [rbp-78h]
  __int64 v118; // [rsp+98h] [rbp-70h]
  GUID rguid; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v120; // [rsp+B8h] [rbp-50h]
  OLECHAR *v121; // [rsp+C8h] [rbp-40h]
  GUID *v122; // [rsp+D0h] [rbp-38h]
  HKEY v123; // [rsp+D8h] [rbp-30h] BYREF
  HKEY hKey; // [rsp+E0h] [rbp-28h] BYREF
  char *v125; // [rsp+E8h] [rbp-20h]
  GUID **v126; // [rsp+F0h] [rbp-18h]
  _QWORD *v127; // [rsp+F8h] [rbp-10h]
  __int64 v128; // [rsp+100h] [rbp-8h]
  GUID pclsid; // [rsp+108h] [rbp+0h] BYREF
  WCHAR SubKey[80]; // [rsp+118h] [rbp+10h] BYREF

  v128 = -2LL;
  v108 = a4;
  v9 = a3;
  v107 = a3;
  LODWORD(v110) = a2;
  v11 = a1;
  v106 = a1;
  v122 = a7;
  v126 = a8;
  v127 = a9;
  LODWORD(v105) = 0;
  v12 = 0LL;
  v112 = 0LL;
  v13 = 0LL;
  v125 = 0LL;
  v14 = (OLECHAR *)*((_QWORD *)a1 + 2);
  v121 = v14;
  (*(void (__fastcall **)(OLECHAR *))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = a2 == 0;
  v16 = a5;
  LODWORD(v109) = a5;
  if ( !v15 || (a5 & 0xFFFFFFFC) != 0 || a5 == eOffloadConnector )
  {
    ATL::CHeapPtrBase<SYSTEM_AUDIO_STREAM_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(&v112, 144LL);
    v12 = v112;
    if ( v112 )
    {
      v40 = v108;
      v112->Data1 = v108;
      v12[5].Data1 = v9;
      *(_QWORD *)v12[5].Data4 = 0LL;
      *(_DWORD *)&v12[7].Data4[4] = 0;
      *(_DWORD *)&v12->Data2 = 0;
      goto LABEL_59;
    }
    LODWORD(v105) = -2147024882;
    v84 = 2147942414LL;
    goto LABEL_226;
  }
  v17 = GUID_00000000_0000_0000_0000_000000000000;
  pclsid = GUID_00000000_0000_0000_0000_000000000000;
  if ( a5 == eLoopbackConnector )
    goto LABEL_47;
  if ( !*((_DWORD *)v11 + a5 + 10) )
  {
    Lfx = CEndpointCharacteristics::GetLfx(v11, a5, &pclsid, 0LL, phkResult);
    LODWORD(v105) = Lfx;
    if ( Lfx < 0 )
    {
      v84 = (unsigned int)Lfx;
      goto LABEL_226;
    }
    v17 = pclsid;
    goto LABEL_47;
  }
  pclsid = *v122;
  LODWORD(v105) = 0;
  v18 = GUID_00000000_0000_0000_0000_000000000000;
  v19 = a5;
  LODWORD(v111) = a5;
  v20 = 1;
  v21 = v106;
  v22 = *((_QWORD *)v106 + 7);
  if ( v22 )
  {
    pvar = 0LL;
    v117 = 0LL;
    v118 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v22 + 40LL))(
           v22,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v20 = (_DWORD)v117 == 0;
    }
    PropVariantClear(&pvar);
    v19 = (int)v111;
    if ( !v20 && (_DWORD)v111 != 3 )
    {
      v23 = (_QWORD *)((char *)v106 + 352);
      v17 = GUID_00000000_0000_0000_0000_000000000000;
      goto LABEL_13;
    }
    v17 = GUID_00000000_0000_0000_0000_000000000000;
    v21 = v106;
  }
  v23 = (_QWORD *)((char *)v21 + 16 * v19 + 144);
LABEL_13:
  v24 = 0;
  v25 = *((_DWORD *)v23 + 2);
  if ( v25 <= 0 )
    goto LABEL_158;
  v26 = *v23;
  while ( 1 )
  {
    v27 = *(_QWORD *)(v26 + 16LL * v24) - *(_QWORD *)&pclsid.Data1;
    if ( !v27 )
      v27 = *(_QWORD *)(v26 + 16LL * v24 + 8) - *(_QWORD *)pclsid.Data4;
    if ( !v27 )
      break;
    if ( ++v24 >= v25 )
      goto LABEL_158;
  }
  if ( v24 == -1 )
  {
LABEL_158:
    v30 = v105;
  }
  else
  {
    LODWORD(v105) = 0;
    if ( a5 )
    {
      if ( a5 == eKeywordDetectorConnector )
      {
        fmtid = PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid;
        pid = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
        goto LABEL_22;
      }
      LODWORD(v105) = -2147023728;
      pid = v120;
      fmtid = rguid;
    }
    else
    {
      fmtid = PKEY_FX_StreamEffectClsid.fmtid;
      pid = PKEY_FX_StreamEffectClsid.pid;
    }
    v30 = v105;
    if ( (int)v105 >= 0 )
    {
LABEL_22:
      v11 = v106;
      v31 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v106 + 2);
      pclsid = v17;
      v123 = 0LL;
      rguid = fmtid;
      LODWORD(v120) = pid;
      v32 = 0LL;
      v111 = 0LL;
      v105 = 0LL;
      v113 = 0LL;
      lpsz = 0LL;
      v115 = 0LL;
      if ( v31 )
      {
        v111 = 0LL;
        (**v31)(v31, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v111);
        v32 = v111;
      }
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v32 + 40LL))(v32, 0LL, &v105) >= 0
        && (*(int (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v105 + 40LL))(v105, &rguid, &v113) >= 0
        && (_WORD)v113 == 31
        && CLSIDFromString(lpsz, &pclsid) >= 0 )
      {
        rguid = pclsid;
        v33 = 75LL;
        v34 = SubKey;
        v35 = 0;
        v36 = 0LL;
        while ( v33 != -2147483571 )
        {
          v37 = *(WCHAR *)((char *)v34 + (char *)L"AudioEngine\\AudioProcessingObjects\\" - (char *)SubKey);
          if ( !v37 )
            break;
          *v34++ = v37;
          ++v36;
          if ( !--v33 )
          {
            --v34;
            --v36;
            v35 = -2147024774;
            break;
          }
        }
        *v34 = 0;
        v38 = &SubKey[v36];
        v39 = 75 - v36;
        if ( (int)(v35 + 0x80000000) >= 0 && v35 != -2147024774 )
        {
          v39 = (int)v121;
          v38 = v121;
        }
        if ( v35 < 0
          || StringFromGUID2(&rguid, v38, v39) <= 0
          || RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &hKey) )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF__guid_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              10LL,
              &WPP_2bda92312337278facb79c049a01aa8d_Traceguids,
              &pclsid,
              -2005139398);
          }
          pclsid = GUID_00000000_0000_0000_0000_000000000000;
        }
        else
        {
          RegCloseKey(hKey);
        }
      }
      PropVariantClear(&v113);
      if ( v105 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 16LL))(v105);
      if ( v111 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 16LL))(v111);
      v18 = pclsid;
      if ( v123 )
        (*(void (__fastcall **)(HKEY))(*(_QWORD *)v123 + 16LL))(v123);
      v30 = 0;
      LODWORD(v105) = 0;
      goto LABEL_45;
    }
  }
  v11 = v106;
LABEL_45:
  v17 = v18;
  pclsid = v18;
  if ( v30 < 0 )
  {
LABEL_187:
    v84 = (unsigned int)v105;
    goto LABEL_226;
  }
  v16 = a5;
  v9 = v107;
LABEL_47:
  v40 = v108;
  if ( !v108 )
  {
    v41 = *(_QWORD *)pclsid.Data4;
    v42 = *(_QWORD *)&v17.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&v17.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v42 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    v43 = 4;
    if ( !v42 )
      v43 = 3;
    v44 = 16 * (v43 + 8LL);
    if ( v44 <= 0x7FFFFFFF )
    {
      v45 = (GUID *)CoTaskMemAlloc((unsigned int)v44);
      v12 = v45;
      v112 = v45;
      if ( v45 )
      {
        v45->Data1 = 0;
        v46 = v107;
        v45[5].Data1 = v107;
        *(_QWORD *)v45[5].Data4 = 0LL;
        *(_DWORD *)&v45[7].Data4[4] = 0;
        *(_DWORD *)v45[6].Data4 = 0;
        v47 = *(_QWORD *)&v17.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
        if ( *(_QWORD *)&v17.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
          v47 = v41 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
        if ( v47 )
        {
          *(_DWORD *)v45[6].Data4 = 1;
          v45[(unsigned int)(*(_DWORD *)&v45[7].Data4[4])++ + 8] = v17;
        }
        v45[(unsigned int)(*(_DWORD *)&v45[7].Data4[4])++ + 8] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
        v45[(unsigned int)(*(_DWORD *)&v45[7].Data4[4])++ + 8] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
        v45[(unsigned int)(*(_DWORD *)&v45[7].Data4[4])++ + 8] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
        *(_DWORD *)&v45->Data2 = v46 >> 31;
        v40 = v108;
        goto LABEL_59;
      }
      LODWORD(v105) = -2147024882;
      v84 = 2147942414LL;
LABEL_226:
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          10LL,
          &WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
          v84);
      }
      goto LABEL_151;
    }
    v12 = 0LL;
LABEL_186:
    LODWORD(v105) = -2147024882;
    goto LABEL_187;
  }
  if ( v108 != 1 )
  {
    if ( v108 != 2 )
      goto LABEL_59;
    ATL::CHeapPtrBase<SYSTEM_AUDIO_STREAM_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(&v112, 176LL);
    v12 = v112;
    if ( v112 )
    {
      v112->Data1 = (v16 != eLoopbackConnector) + 1;
      v12[5].Data1 = v9;
      *(_QWORD *)v12[5].Data4 = 0LL;
      *(_DWORD *)&v12[7].Data4[4] = 3;
      v12[8] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
      v12[9] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
      v12[10] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
      *(_DWORD *)v12[6].Data4 = 0;
      *(_DWORD *)&v12->Data2 = 0;
      v40 = v108;
      goto LABEL_59;
    }
    LODWORD(v105) = -2147024882;
    v84 = 2147942414LL;
    goto LABEL_226;
  }
  v99 = *(_QWORD *)pclsid.Data4;
  v100 = *(_QWORD *)&v17.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v17.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v100 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  ATL::CHeapPtrBase<SYSTEM_AUDIO_STREAM_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(
    &v112,
    16 * ((unsigned int)(v100 != 0) + 2 + 8LL));
  v12 = v112;
  if ( !v112 )
    goto LABEL_186;
  v112->Data1 = 1;
  v101 = v107;
  v12[5].Data1 = v107;
  *(_QWORD *)v12[5].Data4 = 0LL;
  *(_DWORD *)v12[6].Data4 = 0;
  *(_DWORD *)&v12[7].Data4[4] = 0;
  v102 = *(_QWORD *)&v17.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v17.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v102 = v99 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v102 )
  {
    *(_DWORD *)v12[6].Data4 |= 1u;
    v12[(unsigned int)(*(_DWORD *)&v12[7].Data4[4])++ + 8] = v17;
  }
  v12[(unsigned int)(*(_DWORD *)&v12[7].Data4[4])++ + 8] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
  v12[(unsigned int)(*(_DWORD *)&v12[7].Data4[4])++ + 8] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
  *(_DWORD *)&v12->Data2 = v101 >> 31;
  v40 = v108;
LABEL_59:
  *(GUID *)((char *)v12 + 108) = *v122;
  if ( (_DWORD)v110 || v16 && v16 != eKeywordDetectorConnector || v40 == 2 )
    goto LABEL_160;
  v48 = *a6 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *a6 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v48 = a6[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  if ( v48 )
    goto LABEL_160;
  pclsid = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( v16 == eHostProcessConnector )
  {
    v49 = 1;
    v50 = *((_QWORD *)v11 + 7);
    if ( v50 )
    {
      v113 = 0LL;
      lpsz = 0LL;
      v115 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v50 + 40LL))(
             v50,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v113) >= 0
        && (_WORD)v113 == 19 )
      {
        v49 = (_DWORD)lpsz == 0;
      }
      PropVariantClear(&v113);
      v15 = !v49;
      v16 = a5;
      if ( v15 )
      {
        v51 = (_QWORD *)((char *)v11 + 128);
        goto LABEL_72;
      }
    }
    else
    {
      v16 = a5;
    }
  }
  v51 = (_QWORD *)((char *)v11 + 16 * v16 + 64);
LABEL_72:
  v52 = 0LL;
  v53 = 0;
  v54 = *((_DWORD *)v51 + 2);
  if ( v54 <= 0 )
    goto LABEL_160;
  v55 = *v51;
  while ( 1 )
  {
    v56 = *(_QWORD *)(v55 + 16LL * v53) - *(_QWORD *)&pclsid.Data1;
    if ( !v56 )
      v56 = *(_QWORD *)(v55 + 16LL * v53 + 8) - *(_QWORD *)pclsid.Data4;
    if ( !v56 )
      break;
    if ( ++v53 >= v54 )
      goto LABEL_160;
  }
  if ( v53 == -1 )
    goto LABEL_160;
  v57 = v16;
  if ( v16 == eOffloadConnector )
    v57 = eHostProcessConnector;
  v58 = 1;
  v59 = *((_QWORD *)v106 + 7);
  if ( !v59 )
    goto LABEL_85;
  pvar = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v59 + 40LL))(
         v59,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v58 = (_DWORD)v117 == 0;
  }
  PropVariantClear(&pvar);
  v52 = 0LL;
  if ( v58 || v57 == eKeywordDetectorConnector )
  {
LABEL_85:
    v60 = v106;
    v61 = (_QWORD *)((char *)v106 + 16 * v57 + 208);
  }
  else
  {
    v60 = v106;
    v61 = (_QWORD *)((char *)v106 + 336);
  }
  v62 = 0;
  v107 = 0;
  v63 = *((_DWORD *)v61 + 2);
  if ( v63 <= 0 )
  {
LABEL_160:
    v84 = (unsigned int)v105;
    goto LABEL_150;
  }
  v110 = 0LL;
  v64 = a5;
  while ( 1 )
  {
    if ( v52 < 0 || v62 >= v63 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180056B74LL);
    }
    pclsid = *(GUID *)(v52 + *v61);
    if ( v64 == eHostProcessConnector )
    {
      v65 = 1;
      v66 = *((_QWORD *)v60 + 7);
      if ( v66 )
      {
        *(_QWORD *)&rguid.Data1 = 0LL;
        *(_QWORD *)rguid.Data4 = 0LL;
        v120 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, GUID *))(*(_QWORD *)v66 + 40LL))(
               v66,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &rguid) >= 0
          && LOWORD(rguid.Data1) == 19 )
        {
          v65 = *(_DWORD *)rguid.Data4 == 0;
        }
        PropVariantClear((PROPVARIANT *)&rguid);
        v60 = v106;
        v52 = v110;
        v62 = v107;
        v64 = a5;
        if ( !v65 )
        {
          v67 = (_QWORD *)((char *)v106 + 128);
          goto LABEL_97;
        }
      }
      else
      {
        v60 = v106;
      }
    }
    v67 = (_QWORD *)((char *)v60 + 16 * v64 + 64);
LABEL_97:
    v68 = 0;
    v69 = *((_DWORD *)v67 + 2);
    if ( v69 <= 0 )
      break;
    v70 = *v67;
    while ( 1 )
    {
      v71 = *(_QWORD *)(v70 + 16LL * v68) - *(_QWORD *)&pclsid.Data1;
      if ( !v71 )
        v71 = *(_QWORD *)(v70 + 16LL * v68 + 8) - *(_QWORD *)pclsid.Data4;
      if ( !v71 )
        break;
      if ( ++v68 >= v69 )
        goto LABEL_103;
    }
    if ( v68 == -1 )
      break;
    v107 = ++v62;
    v52 += 16LL;
    v110 = v52;
    v63 = *((_DWORD *)v61 + 2);
    if ( v62 >= v63 )
      goto LABEL_160;
  }
LABEL_103:
  v13 = (char *)CoTaskMemAlloc(0x48uLL);
  v125 = v13;
  if ( !v13 )
  {
    LODWORD(v105) = -2147024882;
    v84 = 2147942414LL;
    goto LABEL_226;
  }
  pclsid = *v122;
  LODWORD(v105) = 0;
  v72 = GUID_00000000_0000_0000_0000_000000000000;
  if ( v64 == eOffloadConnector )
  {
    v64 = eHostProcessConnector;
    LODWORD(v109) = 0;
  }
  v73 = v64;
  v74 = 1;
  v75 = *((_QWORD *)v106 + 7);
  if ( !v75 )
    goto LABEL_111;
  v113 = 0LL;
  lpsz = 0LL;
  v115 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v75 + 40LL))(
         v75,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v113) >= 0
    && (_WORD)v113 == 19 )
  {
    v74 = (_DWORD)lpsz == 0;
  }
  PropVariantClear(&v113);
  v64 = (int)v109;
  if ( v74 || v73 == eKeywordDetectorConnector )
  {
LABEL_111:
    v76 = v106;
    v77 = (_QWORD *)((char *)v106 + 16 * v73 + 208);
  }
  else
  {
    v76 = v106;
    v77 = (_QWORD *)((char *)v106 + 336);
  }
  v78 = 0;
  v79 = *((_DWORD *)v77 + 2);
  if ( v79 <= 0 )
    goto LABEL_223;
  v80 = *v77;
  while ( 1 )
  {
    v81 = *(_QWORD *)(v80 + 16LL * v78) - *(_QWORD *)&pclsid.Data1;
    if ( !v81 )
      v81 = *(_QWORD *)(v80 + 16LL * v78 + 8) - *(_QWORD *)pclsid.Data4;
    if ( !v81 )
      break;
    if ( ++v78 >= v79 )
      goto LABEL_223;
  }
  if ( v78 == -1 )
  {
LABEL_223:
    v84 = (unsigned int)v105;
  }
  else
  {
    LODWORD(v105) = 0;
    if ( v64 == eHostProcessConnector || (v103 = v64 - 1) == 0 )
    {
      v82 = PKEY_FX_ModeEffectClsid.fmtid;
      v83 = PKEY_FX_ModeEffectClsid.pid;
      goto LABEL_120;
    }
    if ( v103 == 2 )
    {
      v82 = PKEY_FX_KeywordDetector_ModeEffectClsid.fmtid;
      v83 = PKEY_FX_KeywordDetector_ModeEffectClsid.pid;
      goto LABEL_121;
    }
    LODWORD(v105) = -2147023728;
    v83 = v120;
    v82 = rguid;
LABEL_120:
    v84 = (unsigned int)v105;
    if ( (int)v105 >= 0 )
    {
LABEL_121:
      v85 = (void (__fastcall ***)(_QWORD, GUID *, CEndpointCharacteristics **))*((_QWORD *)v76 + 2);
      pclsid = GUID_00000000_0000_0000_0000_000000000000;
      hKey = 0LL;
      rguid = v82;
      LODWORD(v120) = v83;
      v86 = 0LL;
      v106 = 0LL;
      v110 = 0LL;
      pvar = 0LL;
      v117 = 0LL;
      v118 = 0LL;
      if ( v85 )
      {
        v106 = 0LL;
        (**v85)(v85, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v106);
        v86 = v106;
      }
      if ( (*(int (__fastcall **)(CEndpointCharacteristics *, _QWORD, __int64 *))(*(_QWORD *)v86 + 40LL))(
             v86,
             0LL,
             &v110) >= 0
        && (*(int (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v110 + 40LL))(v110, &rguid, &pvar) >= 0
        && (_WORD)pvar == 31
        && CLSIDFromString(v117, &pclsid) >= 0 )
      {
        rguid = pclsid;
        v87 = 75LL;
        v88 = SubKey;
        v89 = 0;
        v90 = 0LL;
        while ( v87 != -2147483571 )
        {
          v91 = *(WCHAR *)((char *)v88 + (char *)L"AudioEngine\\AudioProcessingObjects\\" - (char *)SubKey);
          if ( !v91 )
            break;
          *v88++ = v91;
          ++v90;
          if ( !--v87 )
          {
            --v88;
            --v90;
            v89 = -2147024774;
            break;
          }
        }
        *v88 = 0;
        v92 = &SubKey[v90];
        v93 = 75 - v90;
        if ( (int)(v89 + 0x80000000) >= 0 && v89 != -2147024774 )
        {
          v93 = (int)v121;
          v92 = v121;
        }
        if ( v89 < 0
          || StringFromGUID2(&rguid, v92, v93) <= 0
          || RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &v123) )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF__guid_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              10LL,
              &WPP_2bda92312337278facb79c049a01aa8d_Traceguids,
              &pclsid,
              -2005139398);
          }
          pclsid = GUID_00000000_0000_0000_0000_000000000000;
        }
        else
        {
          RegCloseKey(v123);
        }
      }
      PropVariantClear(&pvar);
      if ( v110 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v110 + 16LL))(v110);
      if ( v106 )
        (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v106 + 16LL))(v106);
      v72 = pclsid;
      if ( hKey )
        (*(void (__fastcall **)(HKEY))(*(_QWORD *)hKey + 16LL))(hKey);
      v84 = 0LL;
      LODWORD(v105) = 0;
    }
  }
  pclsid = v72;
  if ( (int)v84 < 0 )
    goto LABEL_226;
  *(_DWORD *)v13 = v108;
  *((_DWORD *)v13 + 1) = 0;
  *((_DWORD *)v13 + 13) = 0;
  v94 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v94 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v94 )
  {
    *((_DWORD *)v13 + 13) = 1;
    *((_DWORD *)v13 + 8) = 1;
    *(GUID *)(v13 + 56) = v72;
  }
  *(GUID *)(v13 + 36) = *v122;
LABEL_150:
  v95 = v12;
  v12 = 0LL;
  *v126 = v95;
  v96 = v13;
  v13 = 0LL;
  *v127 = v96;
  if ( (int)v84 < 0 )
    goto LABEL_226;
LABEL_151:
  CoTaskMemFree(v13);
  CoTaskMemFree(v12);
  if ( v14 )
    (*(void (__fastcall **)(OLECHAR *))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v105;
}
