/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800210E0
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180080A50 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180081AB4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F8C0 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800110D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x180020DE0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 *     WPP_SF__guid_d @ 0x180077664 (WPP_SF__guid_d.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180086890 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A665C (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@_N1AEBU_GUID@@@Z @ 0x1800A76D8 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@_N1AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        struct IAudioMediaType *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  int v6; // r12d
  struct IAudioProcessingObject *v8; // r15
  char *v9; // r14
  __int64 cbSize; // rbx
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rdi
  __int64 v13; // rbx
  char *v14; // rax
  unsigned __int16 v15; // cx
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  __int16 v19; // cx
  int v20; // ecx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v21; // r11d
  struct IAudioMediaType *v22; // rbx
  int Lfx; // r13d
  struct _GUID v24; // xmm6
  BOOL v25; // edi
  struct IAudioMediaTypeVtbl *lpVtbl; // rsi
  struct IAudioMediaType *v27; // rax
  int v28; // ecx
  int v29; // edx
  struct IAudioMediaTypeVtbl *v30; // r9
  DWORD pid; // eax
  GUID fmtid; // xmm1
  struct IMMDevice *v33; // r12
  struct IAudioMediaType *v34; // rbx
  HRESULT v35; // esi
  __int64 v36; // rdx
  WCHAR *v37; // rcx
  int v38; // r10d
  __int64 v39; // r8
  WCHAR v40; // ax
  OLECHAR *v41; // rdx
  int v42; // r11d
  bool v43; // dl
  bool v44; // r8
  __int64 v45; // rax
  LPVOID v46; // rbx
  __int64 v47; // rsi
  struct IAudioMediaType *v48; // rbx
  struct IAudioProcessingObject v49; // rax
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rsi
  struct IAudioMediaType *v51; // rdi
  LPOLESTR v52; // rsi
  void *v53; // rdi
  __int64 v54; // rbx
  HANDLE ProcessHeap; // rax
  void *v56; // rax
  struct IAudioSystemEffects2 **phkResult; // [rsp+28h] [rbp-E0h]
  struct IAudioMediaType *v59; // [rsp+48h] [rbp-C0h] BYREF
  struct IAudioMediaType *v60; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-B0h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 rguid; // [rsp+60h] [rbp-A8h]
  DWORD rguid_4; // [rsp+64h] [rbp-A4h]
  GUID rguid_8; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+78h] [rbp-90h]
  struct IAudioProcessingObject *v66; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int16 *v67; // [rsp+88h] [rbp-80h]
  LPOLESTR v68; // [rsp+90h] [rbp-78h]
  char *v69; // [rsp+98h] [rbp-70h]
  __int64 v70; // [rsp+A0h] [rbp-68h] BYREF
  struct _GUID v71; // [rsp+A8h] [rbp-60h] BYREF
  DWORD v72; // [rsp+B8h] [rbp-50h]
  LPVOID pv; // [rsp+C8h] [rbp-40h]
  void *v74; // [rsp+D0h] [rbp-38h]
  struct tWAVEFORMATEX *v75; // [rsp+D8h] [rbp-30h]
  PROPVARIANT v76; // [rsp+E0h] [rbp-28h] BYREF
  LPCOLESTR lpsz; // [rsp+E8h] [rbp-20h]
  __int64 v78; // [rsp+F0h] [rbp-18h]
  PROPVARIANT pvar; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v80; // [rsp+100h] [rbp-8h]
  __int64 v81; // [rsp+108h] [rbp+0h]
  HKEY hKey[3]; // [rsp+110h] [rbp+8h] BYREF
  GUID pclsid; // [rsp+128h] [rbp+20h] BYREF
  WCHAR SubKey[80]; // [rsp+138h] [rbp+30h] BYREF

  hKey[1] = HKEY_DYN_DATA|0x7FFFFFF8LL;
  v74 = a4;
  rguid = a3;
  v59 = a1;
  v75 = Src;
  v68 = (LPOLESTR)a6;
  v8 = 0LL;
  v66 = 0LL;
  LOBYTE(v6) = 1;
  LODWORD(v65) = v6;
  v67 = 0LL;
  v9 = 0LL;
  v69 = 0LL;
  cbSize = Src->cbSize;
  v11 = (unsigned __int16 *)CoTaskMemAlloc(cbSize + 18);
  v12 = v11;
  pv = v11;
  if ( !v11 )
  {
    v67 = 0LL;
    Lfx = -2147024882;
    goto LABEL_151;
  }
  memcpy_0(v11, Src, cbSize + 18);
  v67 = v12;
  v13 = *((unsigned __int16 *)v74 + 8);
  v14 = (char *)CoTaskMemAlloc(v13 + 18);
  v9 = v14;
  if ( !v14 )
  {
    v9 = 0LL;
    v69 = 0LL;
    Lfx = -2147024882;
    goto LABEL_151;
  }
  memcpy_0(v14, v74, v13 + 18);
  v69 = v9;
  if ( (v12[7] & 0xFFF8u) > 0x100 )
    goto LABEL_150;
  v15 = *v12;
  if ( *v12 == 0xFFFE )
    LODWORD(v65) = (v12[9] & 0x80000007) == 0;
  v16 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
  v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
  if ( (v15 == 1
     || v15 == 0xFFFE
     && *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v12 + 3)
     && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *((_QWORD *)v12 + 4))
    && (v15 != 0xFFFE || (v12[9] & 0x80000007) == 0) )
  {
    if ( v15 == 1 )
    {
      *v12 = 3;
    }
    else
    {
      *(GUID *)(v12 + 12) = GUID_00000003_0000_0010_8000_00aa00389b71;
      v12[9] = 32;
    }
    v12[7] = 32;
    v18 = (unsigned __int16)(4 * v12[1]);
    v12[6] = v18;
    *((_DWORD *)v12 + 2) = v18 * *((_DWORD *)v12 + 1);
    v16 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
  }
  v19 = *(_WORD *)v9;
  if ( (*(_WORD *)v9 == 1 || v19 == -2 && v17 == *((_QWORD *)v9 + 3) && v16 == *((_QWORD *)v9 + 4))
    && (v19 != -2 || (*((unsigned __int16 *)v9 + 9) & 0x80000007) == 0) )
  {
    if ( v19 == 1 )
    {
      *(_WORD *)v9 = 3;
    }
    else
    {
      *(GUID *)(v9 + 24) = GUID_00000003_0000_0010_8000_00aa00389b71;
      *((_WORD *)v9 + 9) = 32;
    }
    *((_WORD *)v9 + 7) = 32;
    v20 = (unsigned __int16)(4 * *((_WORD *)v9 + 1));
    *((_WORD *)v9 + 6) = v20;
    *((_DWORD *)v9 + 2) = v20 * *((_DWORD *)v9 + 1);
  }
  v21 = rguid;
  v22 = v59;
  if ( !*((_DWORD *)&v59[5].lpVtbl + (int)rguid) )
  {
    Lfx = CEndpointCharacteristics::GetLfx((CEndpointCharacteristics *)v59, rguid, 0LL, &v66, phkResult);
    v8 = v66;
    goto LABEL_103;
  }
  v24 = *a2;
  pclsid = *a2;
  Lfx = 0;
  v8 = 0LL;
  v66 = 0LL;
  v25 = 1;
  lpVtbl = v59[7].lpVtbl;
  if ( !lpVtbl )
    goto LABEL_35;
  pvar = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( (*((int (__fastcall **)(struct IAudioMediaTypeVtbl *, const PROPERTYKEY *, PROPVARIANT *))lpVtbl->QueryInterface
        + 5))(
         lpVtbl,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v25 = v80 == 0;
  }
  PropVariantClear(&pvar);
  v21 = rguid;
  v22 = v59;
  if ( v25 || rguid == eKeywordDetectorConnector )
LABEL_35:
    v27 = &v22[2 * rguid + 18];
  else
    v27 = v59 + 44;
  v28 = 0;
  v29 = (int)v27[1].lpVtbl;
  if ( v29 <= 0 )
    goto LABEL_102;
  v30 = v27->lpVtbl;
  while ( *((_QWORD *)&v30->QueryInterface + 2 * v28) != *(_QWORD *)&pclsid.Data1
       || *((_QWORD *)&v30->AddRef + 2 * v28) != *(_QWORD *)pclsid.Data4 )
  {
    if ( ++v28 >= v29 )
      goto LABEL_102;
  }
  if ( v28 == -1 )
    goto LABEL_102;
  Lfx = 0;
  if ( v21 )
  {
    if ( v21 == eOffloadConnector )
    {
      fmtid = PKEY_FX_Offload_StreamEffectClsid.fmtid;
      pid = PKEY_FX_Offload_StreamEffectClsid.pid;
      rguid_4 = PKEY_FX_Offload_StreamEffectClsid.pid;
    }
    else
    {
      if ( v21 != eKeywordDetectorConnector )
      {
        Lfx = -2147023728;
        pid = v72;
        rguid_4 = v72;
        fmtid = v71;
        goto LABEL_50;
      }
      fmtid = PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid;
      pid = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
      rguid_4 = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
    }
LABEL_51:
    v33 = (struct IMMDevice *)v22[2].lpVtbl;
    Lfx = 0;
    pclsid = GUID_00000000_0000_0000_0000_000000000000;
    ppv = 0LL;
    v71 = fmtid;
    v72 = pid;
    v60 = 0LL;
    v70 = 0LL;
    v76 = 0LL;
    lpsz = 0LL;
    v78 = 0LL;
    v34 = 0LL;
    if ( v33 )
    {
      v60 = 0LL;
      ((void (__fastcall *)(struct IMMDevice *, GUID *, struct IAudioMediaType **))v33->lpVtbl->QueryInterface)(
        v33,
        &GUID_ed899cbb_5613_4541_a78f_66302f0ce211,
        &v60);
      v34 = v60;
    }
    v35 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, __int64 *))v34->lpVtbl->GetAudioFormat)(
            v34,
            0LL,
            &v70);
    if ( v35 >= 0 )
    {
      v35 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, PROPVARIANT *))(*(_QWORD *)v70 + 40LL))(v70, &v71, &v76);
      if ( v35 >= 0 )
      {
        if ( (_WORD)v76 == 31 )
        {
          v35 = CLSIDFromString(lpsz, &pclsid);
          if ( v35 >= 0 )
          {
            rguid_8 = pclsid;
            v36 = 75LL;
            v37 = SubKey;
            v38 = 0;
            v39 = 0LL;
            while ( v36 != -2147483571 )
            {
              v40 = *(WCHAR *)((char *)v37 + (char *)L"AudioEngine\\AudioProcessingObjects\\" - (char *)SubKey);
              if ( !v40 )
                break;
              *v37++ = v40;
              ++v39;
              if ( !--v36 )
              {
                --v37;
                --v39;
                v38 = -2147024774;
                break;
              }
            }
            *v37 = 0;
            v41 = &SubKey[v39];
            v42 = 75 - v39;
            if ( (int)(v38 + 0x80000000) >= 0 && v38 != -2147024774 )
            {
              v42 = (int)v68;
              v41 = v68;
            }
            if ( v38 < 0
              || StringFromGUID2(&rguid_8, v41, v42) <= 0
              || RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, hKey) )
            {
              v35 = -2005139398;
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
              RegCloseKey(hKey[0]);
              v35 = 0;
            }
          }
        }
        else
        {
          v35 = -2147467259;
        }
      }
    }
    PropVariantClear(&v76);
    if ( v70 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
    if ( v60 )
      ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
    if ( v35 < 0 )
      goto LABEL_94;
    *(_QWORD *)&rguid_8.Data1 = 0LL;
    Lfx = CoCreateInstance(&pclsid, 0LL, 1u, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &ppv);
    if ( Lfx >= 0 )
    {
      v45 = *(_QWORD *)&rguid_8.Data1;
      v46 = ppv;
      if ( *(LPVOID *)&rguid_8.Data1 != ppv )
      {
        v47 = *(_QWORD *)&rguid_8.Data1;
        v45 = 0LL;
        *(_QWORD *)&rguid_8.Data1 = 0LL;
        if ( ppv )
        {
          (**(void (__fastcall ***)(LPVOID, GUID *, GUID *))ppv)(
            ppv,
            &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
            &rguid_8);
          v46 = ppv;
          v45 = *(_QWORD *)&rguid_8.Data1;
        }
        if ( v47 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
          v46 = ppv;
          v45 = *(_QWORD *)&rguid_8.Data1;
        }
      }
      if ( !v45 )
      {
        if ( v46 )
        {
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v46 + 16LL))(v46);
          ppv = 0LL;
        }
        ppv = 0LL;
        Lfx = -2147467262;
      }
    }
    if ( *(_QWORD *)&rguid_8.Data1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rguid_8.Data1 + 16LL))(*(_QWORD *)&rguid_8.Data1);
    if ( Lfx < 0
      || (v71 = v24,
          Lfx = InitializeSystemEffectsInterface(
                  v33,
                  (struct IAudioProcessingObject *)ppv,
                  &pclsid,
                  &v71,
                  0,
                  rguid,
                  0LL),
          Lfx < 0) )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          12LL,
          &WPP_2bda92312337278facb79c049a01aa8d_Traceguids,
          rguid_4,
          Lfx);
      }
      TrackSystemEffectBehavior(v33, v43, v44, &pclsid);
    }
    else
    {
LABEL_94:
      v8 = (struct IAudioProcessingObject *)ppv;
      ppv = 0LL;
      v66 = v8;
    }
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    goto LABEL_102;
  }
  fmtid = PKEY_FX_StreamEffectClsid.fmtid;
  pid = PKEY_FX_StreamEffectClsid.pid;
  rguid_4 = PKEY_FX_StreamEffectClsid.pid;
LABEL_50:
  if ( Lfx >= 0 )
    goto LABEL_51;
LABEL_102:
  v12 = (unsigned __int16 *)pv;
  v22 = v59;
LABEL_103:
  if ( Lfx < 0 )
    goto LABEL_151;
  if ( !v8 )
  {
    if ( !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)v12) )
    {
      if ( *((_DWORD *)v12 + 1) == *((_DWORD *)v9 + 1)
        && v12[1] == *((_WORD *)v9 + 1)
        && (_BYTE)v65
        && !(unsigned int)ValidateWaveFormatEx(v75) )
      {
        Lfx = 0;
        goto LABEL_151;
      }
      Lfx = 1;
      goto LABEL_143;
    }
LABEL_150:
    Lfx = -2004287480;
    goto LABEL_151;
  }
  v59 = 0LL;
  v60 = 0LL;
  *(_QWORD *)&rguid_8.Data1 = 0LL;
  Lfx = CAudioMediaType::Create(
          (const struct tWAVEFORMATEX *)v9,
          (unsigned int)*((unsigned __int16 *)v9 + 8) + 18,
          &v59,
          0.0);
  if ( Lfx < 0 )
  {
    if ( *(_QWORD *)&rguid_8.Data1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rguid_8.Data1 + 16LL))(*(_QWORD *)&rguid_8.Data1);
    v48 = v59;
LABEL_116:
    if ( v48 )
      ((void (__fastcall *)(struct IAudioMediaType *))v48->lpVtbl->Release)(v48);
    goto LABEL_151;
  }
  Lfx = CAudioMediaType::Create((const struct tWAVEFORMATEX *)v12, (unsigned int)v12[8] + 18, &v60, 0.0);
  if ( Lfx >= 0 )
  {
    v49.lpVtbl = v8->lpVtbl;
    if ( HIDWORD(v22[46].lpVtbl) )
      IsOutputFormatSupported = v49.lpVtbl->IsOutputFormatSupported;
    else
      IsOutputFormatSupported = v49.lpVtbl->IsInputFormatSupported;
    v51 = v60;
    v48 = v59;
    Lfx = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, GUID *))IsOutputFormatSupported)(
            v8,
            v59,
            v60,
            &rguid_8);
    if ( Lfx >= 0 )
    {
      if ( Lfx == 1 || (unsigned int)ValidateWaveFormatEx(v75) )
        Lfx = 1;
      if ( *(_QWORD *)&rguid_8.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rguid_8.Data1 + 16LL))(*(_QWORD *)&rguid_8.Data1);
      if ( v51 )
        ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
      if ( v48 )
        ((void (__fastcall *)(struct IAudioMediaType *))v48->lpVtbl->Release)(v48);
LABEL_143:
      v52 = v68;
      if ( v68 && Lfx )
      {
        v53 = v74;
        v54 = *((unsigned __int16 *)v74 + 8);
        ProcessHeap = GetProcessHeap();
        v56 = HeapAlloc(ProcessHeap, 0, v54 + 18);
        *(_QWORD *)v52 = v56;
        if ( v56 )
        {
          memcpy_0(v56, v53, v54 + 18);
          Lfx = 1;
        }
        else
        {
          Lfx = -2147024882;
        }
      }
      goto LABEL_151;
    }
    if ( *(_QWORD *)&rguid_8.Data1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rguid_8.Data1 + 16LL))(*(_QWORD *)&rguid_8.Data1);
    if ( v51 )
      ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
    goto LABEL_116;
  }
  if ( *(_QWORD *)&rguid_8.Data1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rguid_8.Data1 + 16LL))(*(_QWORD *)&rguid_8.Data1);
  if ( v60 )
    ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
  if ( v59 )
    ((void (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->Release)(v59);
LABEL_151:
  CoTaskMemFree(v9);
  v69 = 0LL;
  CoTaskMemFree(pv);
  v67 = 0LL;
  if ( v8 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->Release)(v8);
  return (unsigned int)Lfx;
}
