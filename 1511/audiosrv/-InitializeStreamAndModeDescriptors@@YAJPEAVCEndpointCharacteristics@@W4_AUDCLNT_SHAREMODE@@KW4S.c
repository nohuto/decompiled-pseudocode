/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180005DE0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008A60 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800235C0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     _TlgKeywordOn @ 0x180005DB8 (_TlgKeywordOn.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BC0 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012CC4 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ??9@YA_NAEBU_GUID@@0@Z @ 0x180040F8C (--9@YA_NAEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AllocateBytes@?$CHeapPtrBase@UAUDIO_DEVICE_MODE_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180066064 (-AllocateBytes@-$CHeapPtrBase@UAUDIO_DEVICE_MODE_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@.c)
 *     ?AllocateBytes@?$CHeapPtrBase@USYSTEM_AUDIO_STREAM_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18006608C (-AllocateBytes@-$CHeapPtrBase@USYSTEM_AUDIO_STREAM_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180069C8C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _TlgWrite @ 0x180069F24 (_TlgWrite.c)
 *     WPP_SF__guid_d @ 0x180077664 (WPP_SF__guid_d.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A665C (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall InitializeStreamAndModeDescriptors(
        CEndpointCharacteristics *a1,
        int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        _QWORD *a6,
        GUID *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  _DWORD *v10; // rdi
  char *v11; // rsi
  OLECHAR *v12; // r14
  int ModeEffect; // r15d
  GUID v14; // xmm6
  BOOL v15; // r12d
  __int64 v16; // r13
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17; // r11d
  CEndpointCharacteristics *v18; // r13
  char *v19; // rax
  int v20; // ecx
  int v21; // edx
  __int64 v22; // r9
  DWORD pid; // eax
  GUID fmtid; // xmm1
  void (__fastcall ***v25)(_QWORD, GUID *, _DWORD **); // r15
  _DWORD *v26; // rbx
  __int64 v27; // rdx
  EVENT_DATA_DESCRIPTOR *v28; // rcx
  int v29; // r10d
  __int64 v30; // r8
  __int16 v31; // ax
  OLECHAR *v32; // rdx
  int v33; // ecx
  GUID v34; // xmm7
  BOOL v35; // r12d
  __int64 v36; // r13
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v37; // ebx
  CEndpointCharacteristics *v38; // r13
  char *v39; // rax
  int v40; // ecx
  int v41; // edx
  __int64 v42; // r9
  DWORD v43; // eax
  GUID v44; // xmm1
  void (__fastcall ***v45)(_QWORD, GUID *, _DWORD **); // r15
  _DWORD *v46; // rbx
  __int64 v47; // rdx
  EVENT_DATA_DESCRIPTOR *v48; // rcx
  int v49; // r9d
  __int64 v50; // r8
  __int16 v51; // ax
  OLECHAR *v52; // rdx
  int v53; // r11d
  const struct _TlgProvider_t *v54; // rcx
  struct IAudioProcessingObject **v55; // r11
  bool v56; // zf
  int v57; // eax
  int v58; // r12d
  GUID v59; // xmm6
  int Lfx; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v61; // eax
  unsigned __int64 v62; // rcx
  unsigned int v63; // r9d
  GUID v64; // xmm0
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  _DWORD *v67; // rax
  unsigned int v68; // r10d
  __int64 v69; // rcx
  unsigned int v70; // eax
  int v71; // r10d
  const struct _TlgProvider_t *v72; // rcx
  const GUID *v73; // r8
  const GUID *v74; // r9
  int v75; // ecx
  BOOL v76; // r12d
  __int64 v77; // r13
  CEndpointCharacteristics *v78; // r13
  char *v79; // rax
  int v80; // ecx
  int v81; // edx
  __int64 v82; // r9
  BOOL v83; // r12d
  __int64 v84; // r13
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v85; // ebx
  CEndpointCharacteristics *v86; // r13
  char *v87; // rcx
  __int64 v88; // rdx
  int v89; // r8d
  int v90; // eax
  BOOL v91; // r12d
  __int64 v92; // r13
  char *v93; // rax
  int v94; // ecx
  int v95; // edx
  __int64 v96; // r9
  GUID *v97; // r12
  GUID v98; // xmm0
  _DWORD *v99; // rax
  char *v100; // rax
  struct IAudioSystemEffects2 **phkResult; // [rsp+28h] [rbp-E0h]
  int v103; // [rsp+48h] [rbp-C0h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v104; // [rsp+4Ch] [rbp-BCh] BYREF
  _DWORD *v105; // [rsp+50h] [rbp-B8h] BYREF
  CEndpointCharacteristics *v106; // [rsp+58h] [rbp-B0h]
  __int64 v107; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD *v108; // [rsp+68h] [rbp-A0h] BYREF
  int v109; // [rsp+70h] [rbp-98h] BYREF
  int v110; // [rsp+74h] [rbp-94h] BYREF
  GUID v111; // [rsp+78h] [rbp-90h] BYREF
  __int64 v112; // [rsp+88h] [rbp-80h]
  PROPVARIANT v113; // [rsp+98h] [rbp-70h] BYREF
  LPCOLESTR lpsz; // [rsp+A0h] [rbp-68h]
  __int64 v115; // [rsp+A8h] [rbp-60h]
  PROPVARIANT pvar; // [rsp+B0h] [rbp-58h] BYREF
  LPCOLESTR v117; // [rsp+B8h] [rbp-50h]
  __int64 v118; // [rsp+C0h] [rbp-48h]
  GUID *v119; // [rsp+C8h] [rbp-40h]
  LPOLESTR v120; // [rsp+D0h] [rbp-38h]
  HKEY hKey; // [rsp+D8h] [rbp-30h] BYREF
  char *v122; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD *v123; // [rsp+E8h] [rbp-20h]
  _QWORD *v124; // [rsp+F0h] [rbp-18h]
  __int64 v125; // [rsp+F8h] [rbp-10h]
  GUID rguid; // [rsp+108h] [rbp+0h] BYREF
  GUID pclsid; // [rsp+118h] [rbp+10h] BYREF
  HKEY v128[2]; // [rsp+128h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR SubKey[2]; // [rsp+138h] [rbp+30h] BYREF
  int *v130; // [rsp+158h] [rbp+50h]
  __int64 v131; // [rsp+160h] [rbp+58h]
  int *v132; // [rsp+168h] [rbp+60h]
  __int64 v133; // [rsp+170h] [rbp+68h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v134; // [rsp+178h] [rbp+70h]
  __int64 v135; // [rsp+180h] [rbp+78h]
  int *v136; // [rsp+188h] [rbp+80h]
  __int64 v137; // [rsp+190h] [rbp+88h]

  v125 = -2LL;
  v103 = a4;
  v104 = a3;
  v110 = a2;
  v106 = a1;
  v119 = a7;
  v123 = a8;
  v124 = a9;
  v10 = 0LL;
  v108 = 0LL;
  v11 = 0LL;
  v122 = 0LL;
  v109 = 0;
  v12 = (OLECHAR *)*((_QWORD *)a1 + 2);
  v120 = v12;
  (*(void (__fastcall **)(OLECHAR *))(*(_QWORD *)v12 + 8LL))(v12);
  rguid = *a7;
  ModeEffect = 0;
  v14 = GUID_00000000_0000_0000_0000_000000000000;
  v15 = 1;
  v16 = *((_QWORD *)a1 + 7);
  if ( !v16 )
  {
    v17 = a5;
LABEL_9:
    v18 = v106;
    v19 = (char *)v106 + 16 * v17 + 144;
    goto LABEL_10;
  }
  pvar = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
         v16,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v15 = (_DWORD)v117 == 0;
  }
  PropVariantClear(&pvar);
  v17 = a5;
  if ( v15 || a5 == eKeywordDetectorConnector )
    goto LABEL_9;
  v18 = v106;
  v19 = (char *)v106 + 352;
LABEL_10:
  v20 = 0;
  v21 = *((_DWORD *)v19 + 2);
  if ( v21 > 0 )
  {
    v22 = *(_QWORD *)v19;
    while ( *(_QWORD *)(v22 + 16LL * v20) != *(_QWORD *)&rguid.Data1
         || *(_QWORD *)(v22 + 16LL * v20 + 8) != *(_QWORD *)rguid.Data4 )
    {
      if ( ++v20 >= v21 )
        goto LABEL_55;
    }
    if ( v20 != -1 )
    {
      if ( v17 )
      {
        if ( v17 == eOffloadConnector )
        {
          fmtid = PKEY_FX_Offload_StreamEffectClsid.fmtid;
          pid = PKEY_FX_Offload_StreamEffectClsid.pid;
        }
        else
        {
          if ( v17 != eKeywordDetectorConnector )
          {
            ModeEffect = -2147023728;
            pid = v112;
            fmtid = v111;
            goto LABEL_24;
          }
          fmtid = PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid;
          pid = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
        }
LABEL_25:
        v25 = (void (__fastcall ***)(_QWORD, GUID *, _DWORD **))*((_QWORD *)v18 + 2);
        pclsid = GUID_00000000_0000_0000_0000_000000000000;
        v128[0] = 0LL;
        v111 = fmtid;
        LODWORD(v112) = pid;
        v26 = 0LL;
        v105 = 0LL;
        v107 = 0LL;
        v113 = 0LL;
        lpsz = 0LL;
        v115 = 0LL;
        if ( v25 )
        {
          v105 = 0LL;
          (**v25)(v25, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v105);
          v26 = v105;
        }
        if ( (*(int (__fastcall **)(_DWORD *, _QWORD, __int64 *))(*(_QWORD *)v26 + 40LL))(v26, 0LL, &v107) >= 0
          && (*(int (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v107 + 40LL))(v107, &v111, &v113) >= 0
          && (_WORD)v113 == 31
          && CLSIDFromString(lpsz, &pclsid) >= 0 )
        {
          rguid = pclsid;
          v27 = 75LL;
          v28 = SubKey;
          v29 = 0;
          v30 = 0LL;
          while ( v27 != -2147483571 )
          {
            v31 = *(_WORD *)((char *)&v28->Ptr + (char *)L"AudioEngine\\AudioProcessingObjects\\" - (char *)SubKey);
            if ( !v31 )
              break;
            LOWORD(v28->Ptr) = v31;
            v28 = (EVENT_DATA_DESCRIPTOR *)((char *)v28 + 2);
            ++v30;
            if ( !--v27 )
            {
              v28 = (EVENT_DATA_DESCRIPTOR *)((char *)v28 - 2);
              --v30;
              v29 = -2147024774;
              break;
            }
          }
          LOWORD(v28->Ptr) = 0;
          v32 = (OLECHAR *)SubKey + v30;
          v33 = 75 - v30;
          if ( (int)(v29 + 0x80000000) >= 0 && v29 != -2147024774 )
          {
            v33 = (int)v120;
            v32 = v120;
          }
          if ( v29 < 0
            || StringFromGUID2(&rguid, v32, v33) <= 0
            || RegOpenKeyExW(HKEY_CLASSES_ROOT, (LPCWSTR)SubKey, 0, 0x20019u, &hKey) )
          {
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF__guid_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
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
        if ( v107 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
        if ( v105 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v105 + 16LL))(v105);
        v14 = pclsid;
        if ( v128[0] )
          (*(void (__fastcall **)(HKEY))(*(_QWORD *)v128[0] + 16LL))(v128[0]);
        ModeEffect = 0;
        goto LABEL_55;
      }
      fmtid = PKEY_FX_StreamEffectClsid.fmtid;
      pid = PKEY_FX_StreamEffectClsid.pid;
LABEL_24:
      if ( ModeEffect < 0 )
        goto LABEL_55;
      goto LABEL_25;
    }
  }
LABEL_55:
  rguid = v14;
  if ( ModeEffect < 0 )
    goto LABEL_244;
  pclsid = *v119;
  ModeEffect = 0;
  v34 = GUID_00000000_0000_0000_0000_000000000000;
  v35 = 1;
  v36 = *((_QWORD *)v18 + 7);
  if ( !v36 )
  {
    v37 = a5;
LABEL_64:
    v38 = v106;
    v39 = (char *)v106 + 16 * v37 + 208;
    goto LABEL_65;
  }
  v113 = 0LL;
  lpsz = 0LL;
  v115 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v36 + 40LL))(
         v36,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v113) >= 0
    && (_WORD)v113 == 19 )
  {
    v35 = (_DWORD)lpsz == 0;
  }
  PropVariantClear(&v113);
  v37 = a5;
  if ( v35 || a5 == eKeywordDetectorConnector )
    goto LABEL_64;
  v38 = v106;
  v39 = (char *)v106 + 336;
LABEL_65:
  v40 = 0;
  v41 = *((_DWORD *)v39 + 2);
  if ( v41 > 0 )
  {
    v42 = *(_QWORD *)v39;
    while ( *(_QWORD *)(v42 + 16LL * v40) != *(_QWORD *)&pclsid.Data1
         || *(_QWORD *)(v42 + 16LL * v40 + 8) != *(_QWORD *)pclsid.Data4 )
    {
      if ( ++v40 >= v41 )
        goto LABEL_110;
    }
    if ( v40 != -1 )
    {
      ModeEffect = 0;
      if ( v37 )
      {
        if ( v37 == eOffloadConnector )
        {
          v44 = PKEY_FX_Offload_ModeEffectClsid.fmtid;
          v43 = PKEY_FX_Offload_ModeEffectClsid.pid;
        }
        else
        {
          if ( v37 != eKeywordDetectorConnector )
          {
            ModeEffect = -2147023728;
            v43 = v112;
            v44 = v111;
            goto LABEL_79;
          }
          v44 = PKEY_FX_KeywordDetector_ModeEffectClsid.fmtid;
          v43 = PKEY_FX_KeywordDetector_ModeEffectClsid.pid;
        }
LABEL_80:
        v45 = (void (__fastcall ***)(_QWORD, GUID *, _DWORD **))*((_QWORD *)v38 + 2);
        pclsid = GUID_00000000_0000_0000_0000_000000000000;
        hKey = 0LL;
        v111 = v44;
        LODWORD(v112) = v43;
        v46 = 0LL;
        v105 = 0LL;
        v107 = 0LL;
        pvar = 0LL;
        v117 = 0LL;
        v118 = 0LL;
        if ( v45 )
        {
          v105 = 0LL;
          (**v45)(v45, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v105);
          v46 = v105;
        }
        if ( (*(int (__fastcall **)(_DWORD *, _QWORD, __int64 *))(*(_QWORD *)v46 + 40LL))(v46, 0LL, &v107) >= 0
          && (*(int (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v107 + 40LL))(v107, &v111, &pvar) >= 0
          && (_WORD)pvar == 31
          && CLSIDFromString(v117, &pclsid) >= 0 )
        {
          v111 = pclsid;
          v47 = 75LL;
          v48 = SubKey;
          v49 = 0;
          v50 = 0LL;
          while ( v47 != -2147483571 )
          {
            v51 = *(_WORD *)((char *)&v48->Ptr + (char *)L"AudioEngine\\AudioProcessingObjects\\" - (char *)SubKey);
            if ( !v51 )
              break;
            LOWORD(v48->Ptr) = v51;
            v48 = (EVENT_DATA_DESCRIPTOR *)((char *)v48 + 2);
            ++v50;
            if ( !--v47 )
            {
              v48 = (EVENT_DATA_DESCRIPTOR *)((char *)v48 - 2);
              --v50;
              v49 = -2147024774;
              break;
            }
          }
          LOWORD(v48->Ptr) = 0;
          v52 = (OLECHAR *)SubKey + v50;
          v53 = 75 - v50;
          if ( (int)(v49 + 0x80000000) >= 0 && v49 != -2147024774 )
          {
            v53 = (int)v120;
            v52 = v120;
          }
          if ( v49 < 0
            || StringFromGUID2(&v111, v52, v53) <= 0
            || RegOpenKeyExW(HKEY_CLASSES_ROOT, (LPCWSTR)SubKey, 0, 0x20019u, v128) )
          {
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF__guid_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                10LL,
                &WPP_2bda92312337278facb79c049a01aa8d_Traceguids,
                &pclsid,
                -2005139398);
            }
            pclsid = GUID_00000000_0000_0000_0000_000000000000;
          }
          else
          {
            RegCloseKey(v128[0]);
          }
        }
        PropVariantClear(&pvar);
        if ( v107 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
        if ( v105 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v105 + 16LL))(v105);
        v34 = pclsid;
        if ( hKey )
          (*(void (__fastcall **)(HKEY))(*(_QWORD *)hKey + 16LL))(hKey);
        ModeEffect = 0;
        v37 = a5;
        goto LABEL_110;
      }
      v44 = PKEY_FX_ModeEffectClsid.fmtid;
      v43 = PKEY_FX_ModeEffectClsid.pid;
LABEL_79:
      if ( ModeEffect < 0 )
        goto LABEL_110;
      goto LABEL_80;
    }
  }
LABEL_110:
  pclsid = v34;
  if ( ModeEffect < 0 )
    goto LABEL_244;
  if ( (unsigned __int8)operator!=(&rguid, &GUID_00000000_0000_0000_0000_000000000000)
    || (v56 = (unsigned __int8)operator!=(&pclsid, &GUID_00000000_0000_0000_0000_000000000000) == 0, v57 = (int)v55, !v56) )
  {
    v57 = 1;
  }
  v109 = v57;
  v58 = v110;
  if ( v110 )
  {
    if ( v110 == 1 || v37 == eOffloadConnector && !v57 && g_AudioSrvEnableInProcOffloadIfPossible )
      goto LABEL_167;
    goto LABEL_164;
  }
  if ( (v37 & 0xFFFFFFFC) == 0 )
  {
    if ( v37 != eOffloadConnector )
    {
      v59 = GUID_00000000_0000_0000_0000_000000000000;
      *(GUID *)v128 = GUID_00000000_0000_0000_0000_000000000000;
      if ( v37 != eLoopbackConnector )
      {
        if ( *((_DWORD *)v38 + v37 + 10) == v110 )
        {
          Lfx = CEndpointCharacteristics::GetLfx(v38, v37, (struct _GUID *)v128, 0LL, phkResult);
        }
        else
        {
          v111 = *v119;
          Lfx = CEndpointCharacteristics::GetStreamEffect(
                  v38,
                  &v111,
                  0,
                  v37,
                  (struct _GUID *)v128,
                  v55,
                  (struct IAudioSystemEffects2 **)v55);
        }
        ModeEffect = Lfx;
        if ( Lfx < 0 )
          goto LABEL_244;
        v59 = *(GUID *)v128;
      }
      if ( v103 )
      {
        if ( v103 != 1 )
        {
          if ( v103 != 2 )
          {
LABEL_126:
            ModeEffect = -2147024809;
            goto LABEL_244;
          }
          ATL::CHeapPtrBase<SYSTEM_AUDIO_STREAM_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(&v108, 184LL);
          v10 = v108;
          if ( !v108 )
          {
            ModeEffect = -2147024882;
            goto LABEL_244;
          }
          *v108 = (v37 != eLoopbackConnector) + 1;
          v61 = v104;
          v10[22] = v104;
          *((_QWORD *)v10 + 12) = 0LL;
          v10[33] = 3;
          *(GUID *)(v10 + 34) = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
          *(GUID *)(v10 + 38) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
          *(GUID *)(v10 + 42) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
          v10[28] = 0;
          v10[1] = (unsigned int)v61 >> 31;
          goto LABEL_170;
        }
        v62 = *(_QWORD *)&v59.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
        if ( *(_QWORD *)&v59.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
          v62 = _mm_srli_si128((__m128i)v59, 8).m128i_u64[0]
              - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
        ATL::CHeapPtrBase<SYSTEM_AUDIO_STREAM_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(
          &v108,
          16LL * ((unsigned int)(v62 != 0) + 2) + 136);
        v10 = v108;
        if ( !v108 )
        {
          ModeEffect = -2147024882;
          goto LABEL_244;
        }
        *v108 = 1;
        v10[22] = v104;
        *((_QWORD *)v10 + 12) = 0LL;
        v10[28] = 0;
        v10[33] = 0;
        if ( (unsigned __int8)operator!=(v128, &GUID_00000000_0000_0000_0000_000000000000) )
        {
          v10[28] |= 1u;
          *(GUID *)&v10[4 * v10[33]++ + 34] = v59;
        }
        *(GUID *)&v10[4 * v10[33]++ + 34] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
        v64 = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
        goto LABEL_137;
      }
      v65 = *(_QWORD *)&v59.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v59.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v65 = _mm_srli_si128((__m128i)v59, 8).m128i_u64[0] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      v66 = 16LL * ((unsigned int)(v65 != 0) + 3) + 136;
      if ( v66 <= 0x7FFFFFFF )
      {
        v67 = CoTaskMemAlloc((unsigned int)v66);
        v10 = v67;
        v108 = v67;
        if ( v67 )
        {
          *v67 = 0;
          v67[22] = v104;
          *((_QWORD *)v67 + 12) = 0LL;
          v67[33] = 0;
          v67[28] = 0;
          if ( (unsigned __int8)operator!=(v128, &GUID_00000000_0000_0000_0000_000000000000) )
          {
            if ( v68 > 0x1F )
            {
              ModeEffect = -2147418113;
              goto LABEL_244;
            }
            v10[28] = 1 << v68;
            *(GUID *)&v10[4 * v10[33]++ + 34] = v59;
          }
          *(GUID *)&v10[4 * v10[33]++ + 34] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
          *(GUID *)&v10[4 * v10[33]++ + 34] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
          v64 = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
LABEL_137:
          *(GUID *)&v10[4 * v10[33]++ + 34] = v64;
          v10[1] = v63 >> 31;
LABEL_170:
          v75 = v103;
          goto LABEL_171;
        }
      }
      else
      {
        v10 = 0LL;
      }
      ModeEffect = -2147024882;
      goto LABEL_244;
    }
    goto LABEL_150;
  }
  if ( v37 != eOffloadConnector )
  {
LABEL_164:
    if ( (unsigned int)dword_1800E5500 > 4 && TlgKeywordOn(v54, 0LL) )
    {
      v130 = &g_AudioSrvEnableInProcOffloadIfPossible;
      v131 = 4LL;
      v110 = v58;
      v132 = &v110;
      v133 = 4LL;
      v104 = v37;
      v134 = &v104;
      v135 = 4LL;
      v136 = &v109;
      v137 = 4LL;
      TlgWrite(v72, &unk_1800C4BBF, v73, v74, 6u, SubKey);
    }
    goto LABEL_170;
  }
LABEL_150:
  if ( v57 || !g_AudioSrvEnableInProcOffloadIfPossible )
  {
    if ( v103 )
      goto LABEL_126;
    v69 = *(_QWORD *)&rguid.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&rguid.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v69 = *(_QWORD *)rguid.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    v70 = (unsigned int)v55;
    LOBYTE(v70) = v69 != 0;
    ATL::CHeapPtrBase<SYSTEM_AUDIO_STREAM_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(&v108, 16LL * v70 + 136);
    v10 = v108;
    if ( !v108 )
    {
      ModeEffect = -2147024882;
      goto LABEL_244;
    }
    *v108 = 0;
    v10[22] = v104;
    *((_QWORD *)v10 + 12) = 0LL;
    v10[33] = 0;
    v10[28] = 0;
    if ( (unsigned __int8)operator!=(&rguid, &GUID_00000000_0000_0000_0000_000000000000) )
    {
      v10[33] = 1;
      v10[28] = 1;
      *(GUID *)(v10 + 34) = v14;
    }
    v10[1] = v71;
    goto LABEL_170;
  }
LABEL_167:
  ATL::CHeapPtrBase<SYSTEM_AUDIO_STREAM_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(&v108, 152LL);
  v10 = v108;
  if ( !v108 )
  {
    ModeEffect = -2147024882;
    goto LABEL_244;
  }
  v75 = v103;
  *v108 = v103;
  v10[22] = v104;
  *((_QWORD *)v10 + 12) = 0LL;
  v10[33] = 0;
  v10[1] = 0;
LABEL_171:
  *(GUID *)(v10 + 29) = *v119;
  v10[3] = v37;
  if ( v58 )
    goto LABEL_243;
  if ( v37 && v37 != eKeywordDetectorConnector
    || v75 == 2
    || *a6 != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
    || a6[1] != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
  {
    if ( v37 == eOffloadConnector && (v109 || !g_AudioSrvEnableInProcOffloadIfPossible) )
    {
      ATL::CHeapPtrBase<AUDIO_DEVICE_MODE_DESCRIPTOR,ATL::CComAllocator>::AllocateBytes(&v122);
      v11 = v122;
      if ( !v122 )
      {
        ModeEffect = -2147024882;
        goto LABEL_244;
      }
      *(_DWORD *)v122 = v103;
      *((_DWORD *)v11 + 1) = 0;
      *((_DWORD *)v11 + 13) = 0;
      if ( (unsigned __int8)operator!=(&pclsid, &GUID_00000000_0000_0000_0000_000000000000) )
      {
        *((_DWORD *)v11 + 13) = 1;
        *((_DWORD *)v11 + 8) = 1;
        *(GUID *)(v11 + 56) = v34;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids);
        }
      }
      v98 = *v119;
LABEL_242:
      *(GUID *)(v11 + 36) = v98;
    }
    goto LABEL_243;
  }
  rguid = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( v37 )
    goto LABEL_185;
  v76 = 1;
  v77 = *((_QWORD *)v38 + 7);
  if ( !v77 )
    goto LABEL_185;
  v113 = 0LL;
  lpsz = 0LL;
  v115 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v77 + 40LL))(
         v77,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v113) >= 0
    && (_WORD)v113 == 19 )
  {
    v76 = (_DWORD)lpsz == 0;
  }
  PropVariantClear(&v113);
  if ( v76 )
  {
    v37 = a5;
LABEL_185:
    v78 = v106;
    v79 = (char *)v106 + 16 * v37 + 64;
    goto LABEL_186;
  }
  v78 = v106;
  v79 = (char *)v106 + 128;
LABEL_186:
  v80 = 0;
  v81 = *((_DWORD *)v79 + 2);
  if ( v81 <= 0 )
    goto LABEL_243;
  v82 = *(_QWORD *)v79;
  while ( *(_QWORD *)(v82 + 16LL * v80) != *(_QWORD *)&rguid.Data1
       || *(_QWORD *)(v82 + 16LL * v80 + 8) != *(_QWORD *)rguid.Data4 )
  {
    if ( ++v80 >= v81 )
      goto LABEL_243;
  }
  if ( v80 == -1 )
  {
LABEL_243:
    v99 = v10;
    v10 = 0LL;
    *v123 = v99;
    v100 = v11;
    v11 = 0LL;
    *v124 = v100;
    if ( ModeEffect < 0 )
      goto LABEL_244;
    goto LABEL_248;
  }
  v83 = 1;
  v84 = *((_QWORD *)v78 + 7);
  if ( v84 )
  {
    pvar = 0LL;
    v117 = 0LL;
    v118 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v84 + 40LL))(
           v84,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v83 = (_DWORD)v117 == 0;
    }
    PropVariantClear(&pvar);
    v85 = a5;
    if ( !v83 && a5 != eKeywordDetectorConnector )
    {
      v86 = v106;
      v87 = (char *)v106 + 336;
      goto LABEL_202;
    }
  }
  else
  {
    v85 = a5;
  }
  v86 = v106;
  v87 = (char *)v106 + 16 * v85 + 208;
LABEL_202:
  v105 = v87;
  v88 = 0LL;
  v89 = 0;
  v104 = eHostProcessConnector;
  v90 = *((_DWORD *)v87 + 2);
  if ( v90 <= 0 )
    goto LABEL_243;
  v107 = 0LL;
  while ( 1 )
  {
    if ( v88 < 0 || v89 >= v90 )
    {
      ATL::_AtlRaiseException(0xC000008C, v88);
      __debugbreak();
    }
    rguid = *(GUID *)(v88 + *(_QWORD *)v87);
    if ( v85 )
      goto LABEL_214;
    v91 = 1;
    v92 = *((_QWORD *)v86 + 7);
    if ( !v92 )
    {
      v86 = v106;
LABEL_214:
      v93 = (char *)v86 + 16 * v85 + 64;
      goto LABEL_215;
    }
    *(_QWORD *)&v111.Data1 = 0LL;
    *(_QWORD *)v111.Data4 = 0LL;
    v112 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, GUID *))(*(_QWORD *)v92 + 40LL))(
           v92,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v111) >= 0
      && LOWORD(v111.Data1) == 19 )
    {
      v91 = *(_DWORD *)v111.Data4 == 0;
    }
    PropVariantClear((PROPVARIANT *)&v111);
    v86 = v106;
    v85 = a5;
    if ( v91 )
      goto LABEL_214;
    v93 = (char *)v106 + 128;
LABEL_215:
    v94 = 0;
    v95 = *((_DWORD *)v93 + 2);
    if ( v95 <= 0 )
      break;
    v96 = *(_QWORD *)v93;
    while ( *(_QWORD *)(v96 + 16LL * v94) != *(_QWORD *)&rguid.Data1
         || *(_QWORD *)(v96 + 16LL * v94 + 8) != *(_QWORD *)rguid.Data4 )
    {
      if ( ++v94 >= v95 )
        goto LABEL_224;
    }
    if ( v94 == -1 )
      break;
    v89 = v104 + 1;
    v104 = v89;
    v88 = v107 + 16;
    v107 += 16LL;
    v87 = (char *)v105;
    v90 = v105[2];
    if ( v89 >= v90 )
      goto LABEL_243;
  }
LABEL_224:
  rguid = GUID_00000000_0000_0000_0000_000000000000;
  v11 = (char *)CoTaskMemAlloc(0x48uLL);
  v122 = v11;
  if ( !v11 )
  {
    ModeEffect = -2147024882;
    goto LABEL_244;
  }
  v97 = v119;
  v111 = *v119;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(v86, &v111, 0, v85, &rguid, 0LL, 0LL);
  if ( ModeEffect >= 0 )
  {
    *(_DWORD *)v11 = v103;
    *((_DWORD *)v11 + 1) = 0;
    *((_DWORD *)v11 + 13) = 0;
    if ( (unsigned __int8)operator!=(&rguid, &GUID_00000000_0000_0000_0000_000000000000) )
    {
      *((_DWORD *)v11 + 13) = 1;
      *((_DWORD *)v11 + 8) = 1;
      *(GUID *)(v11 + 56) = rguid;
    }
    v98 = *v97;
    goto LABEL_242;
  }
LABEL_244:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11LL,
      &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
      (unsigned int)ModeEffect);
  }
LABEL_248:
  CoTaskMemFree(v11);
  CoTaskMemFree(v10);
  if ( v12 )
    (*(void (__fastcall **)(OLECHAR *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)ModeEffect;
}
