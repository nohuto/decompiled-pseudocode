/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180020DA0
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180022F00 (AudioServerIsFormatSupported.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18008553C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001E820 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001EA40 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001ED50 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180021740 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180030474 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Dd @ 0x18007C094 (WPP_SF_Dd.c)
 *     WPP_SF__guid_d @ 0x18007C374 (WPP_SF__guid_d.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A8D14 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@_N1AEBU_GUID@@@Z @ 0x1800A9BCC (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@_N1AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // esi
  struct CEndpointCharacteristics *v8; // r15
  struct IAudioProcessingObject *v9; // r14
  __int64 cbSize; // rbx
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // r12
  unsigned __int16 v13; // cx
  __int64 v14; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // eax
  struct _GUID v16; // xmm6
  int Lfx; // r13d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v18; // r15d
  BOOL v19; // esi
  __int64 v20; // rdi
  LPVOID v21; // rdi
  char *v22; // rax
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v27; // r15d
  GUID fmtid; // xmm1
  DWORD pid; // eax
  __int64 v30; // rbx
  HRESULT v31; // esi
  __int64 v32; // rcx
  WCHAR *v33; // rdx
  int v34; // r11d
  __int64 v35; // r8
  WCHAR v36; // ax
  OLECHAR *v37; // rdx
  int v38; // r10d
  bool v39; // dl
  bool v40; // r8
  LPVOID v41; // rax
  LPVOID v42; // rbx
  void *v43; // rsi
  struct IMMDevice *v44; // rbx
  struct IAudioProcessingObject v45; // rax
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rsi
  volatile signed __int32 *v47; // rdi
  volatile signed __int32 *v48; // rbx
  int v49; // eax
  ULONG (__stdcall *v50)(IMMDevice *); // r12
  unsigned int (__fastcall *v51)(CAudioMediaType *__hidden); // r12
  _QWORD *v52; // rbx
  void *v53; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v55; // rax
  unsigned int (__fastcall *v56)(CAudioMediaType *__hidden); // rdi
  struct IAudioMediaType *v57; // rbx
  struct IAudioMediaTypeVtbl *lpVtbl; // rdi
  HANDLE v59; // rax
  HANDLE v60; // rax
  const struct tWAVEFORMATEX *v61; // rdi
  struct tWAVEFORMATEX **v62; // rsi
  __int64 v63; // rbx
  HANDLE v64; // rax
  struct tWAVEFORMATEX *v65; // rax
  int v67; // ecx
  unsigned int (__fastcall *v68)(CAudioMediaType *__hidden); // rsi
  ULONG (__stdcall *v69)(IAudioMediaType *); // rdi
  ULONG (__stdcall *Release)(IMMDevice *); // rdi
  ULONG (__stdcall *v71)(IMMDevice *); // rdi
  unsigned int (__fastcall *v72)(CAudioMediaType *__hidden); // rdi
  struct IAudioSystemEffects2 **phkResult; // [rsp+28h] [rbp-E0h]
  bool v74; // [rsp+48h] [rbp-C0h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v75; // [rsp+4Ch] [rbp-BCh]
  DWORD v76; // [rsp+4Ch] [rbp-BCh]
  LPVOID ppv; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID lpMem; // [rsp+58h] [rbp-B0h] BYREF
  struct IMMDevice *v79; // [rsp+60h] [rbp-A8h] BYREF
  struct IAudioMediaType *v80; // [rsp+68h] [rbp-A0h] BYREF
  struct IAudioProcessingObject *v81; // [rsp+70h] [rbp-98h] BYREF
  LPVOID v82; // [rsp+78h] [rbp-90h] BYREF
  const struct tWAVEFORMATEX *v83; // [rsp+80h] [rbp-88h]
  __int64 v84; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 *v85; // [rsp+90h] [rbp-78h]
  __int64 v86; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 *v87; // [rsp+A0h] [rbp-68h]
  struct tWAVEFORMATEX *v88; // [rsp+A8h] [rbp-60h]
  PROPVARIANT pvar; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v90; // [rsp+B8h] [rbp-50h]
  __int64 v91; // [rsp+C0h] [rbp-48h]
  PROPVARIANT v92; // [rsp+C8h] [rbp-40h] BYREF
  LPCOLESTR lpsz; // [rsp+D0h] [rbp-38h]
  __int64 v94; // [rsp+D8h] [rbp-30h]
  struct tWAVEFORMATEX **v95; // [rsp+E0h] [rbp-28h]
  WCHAR *v96; // [rsp+E8h] [rbp-20h]
  GUID v97; // [rsp+F8h] [rbp-10h] BYREF
  DWORD v98; // [rsp+108h] [rbp+0h]
  __int64 v99; // [rsp+118h] [rbp+10h]
  HKEY hKey; // [rsp+120h] [rbp+18h] BYREF
  struct _GUID v101; // [rsp+128h] [rbp+20h]
  __int64 v102; // [rsp+138h] [rbp+30h]
  struct _GUID v103; // [rsp+148h] [rbp+40h] BYREF
  GUID rguid; // [rsp+158h] [rbp+50h] BYREF
  GUID pclsid; // [rsp+168h] [rbp+60h] BYREF
  WCHAR SubKey[80]; // [rsp+178h] [rbp+70h] BYREF

  v102 = -2LL;
  v83 = a4;
  v6 = a3;
  v75 = a3;
  v8 = this;
  lpMem = this;
  v88 = Src;
  v95 = a6;
  v9 = 0LL;
  v81 = 0LL;
  v74 = 1;
  v87 = 0LL;
  cbSize = Src->cbSize;
  v11 = (unsigned __int16 *)CoTaskMemAlloc(cbSize + 18);
  v12 = v11;
  v85 = v11;
  if ( !v11 )
  {
    v87 = 0LL;
LABEL_172:
    Lfx = -2147024882;
    goto LABEL_93;
  }
  memcpy_0(v11, Src, cbSize + 18);
  v87 = v12;
  if ( (v12[7] & 0xFFF8u) > 0x100 )
  {
    Lfx = -2004287480;
    goto LABEL_93;
  }
  v13 = *v12;
  if ( *v12 == 0xFFFE )
    v74 = (v12[9] & 0x80000007) == 0;
  if ( v13 == 1 )
    goto LABEL_122;
  if ( v13 == 0xFFFE )
  {
    v14 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v12 + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v12 + 3) )
      v14 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v12 + 4);
    if ( !v14 )
    {
LABEL_122:
      if ( v13 != 0xFFFE || (v12[9] & 0x80000007) == 0 )
      {
        if ( v13 == 1 )
        {
          *v12 = 3;
        }
        else
        {
          *(GUID *)(v12 + 12) = GUID_00000003_0000_0010_8000_00aa00389b71;
          v12[9] = 32;
        }
        v12[7] = 32;
        v67 = (unsigned __int16)(4 * v12[1]);
        v12[6] = v67;
        *((_DWORD *)v12 + 2) = v67 * *((_DWORD *)v12 + 1);
      }
    }
  }
  v15 = v6;
  if ( v6 == eOffloadConnector )
    v15 = eHostProcessConnector;
  if ( *((_DWORD *)v8 + v15 + 10) )
  {
    v16 = *a2;
    v101 = *a2;
    Lfx = 0;
    v9 = 0LL;
    v81 = 0LL;
    if ( v6 == eOffloadConnector )
    {
      v6 = eHostProcessConnector;
      v75 = eHostProcessConnector;
    }
    v18 = v6;
    v19 = 1;
    v20 = *((_QWORD *)lpMem + 7);
    if ( !v20 )
      goto LABEL_20;
    pvar = 0LL;
    v90 = 0LL;
    v91 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v20 + 40LL))(
           v20,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v19 = v90 == 0;
    }
    PropVariantClear(&pvar);
    if ( v19 || v18 == eKeywordDetectorConnector )
    {
LABEL_20:
      v21 = lpMem;
      v22 = (char *)lpMem + 16 * v18 + 144;
    }
    else
    {
      v21 = lpMem;
      v22 = (char *)lpMem + 352;
    }
    v23 = 0;
    v24 = *((_DWORD *)v22 + 2);
    if ( v24 <= 0 )
      goto LABEL_66;
    v25 = *(_QWORD *)v22;
    while ( 1 )
    {
      v26 = *(_QWORD *)(v25 + 16LL * v23) - *(_QWORD *)&v101.Data1;
      if ( !v26 )
        v26 = *(_QWORD *)(v25 + 16LL * v23 + 8) - *(_QWORD *)v101.Data4;
      if ( !v26 )
        break;
      if ( ++v23 >= v24 )
        goto LABEL_66;
    }
    if ( v23 == -1 )
      goto LABEL_66;
    Lfx = 0;
    v27 = v75;
    if ( (unsigned int)v75 > eOffloadConnector )
    {
      if ( v75 == eKeywordDetectorConnector )
      {
        fmtid = PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid;
        pid = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
        v76 = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
        goto LABEL_30;
      }
      Lfx = -2147023728;
      pid = v98;
      fmtid = v97;
    }
    else
    {
      fmtid = PKEY_FX_StreamEffectClsid.fmtid;
      pid = PKEY_FX_StreamEffectClsid.pid;
    }
    v76 = pid;
    if ( Lfx < 0 )
    {
LABEL_66:
      v8 = (struct CEndpointCharacteristics *)lpMem;
      goto LABEL_67;
    }
LABEL_30:
    v79 = (struct IMMDevice *)*((_QWORD *)v21 + 2);
    Lfx = 0;
    pclsid = GUID_00000000_0000_0000_0000_000000000000;
    ppv = 0LL;
    v97 = fmtid;
    v98 = pid;
    v84 = 0LL;
    v86 = 0LL;
    v92 = 0LL;
    lpsz = 0LL;
    v94 = 0LL;
    v30 = 0LL;
    if ( v79 )
    {
      v84 = 0LL;
      ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v79->lpVtbl->QueryInterface)(
        v79,
        &GUID_ed899cbb_5613_4541_a78f_66302f0ce211,
        &v84);
      v30 = v84;
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v30 + 40LL))(v30, 0LL, &v86);
    if ( v31 >= 0 )
    {
      v31 = (*(__int64 (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v86 + 40LL))(v86, &v97, &v92);
      if ( v31 >= 0 )
      {
        if ( (_WORD)v92 == 31 )
        {
          v31 = CLSIDFromString(lpsz, &pclsid);
          if ( v31 >= 0 )
          {
            rguid = pclsid;
            v32 = 75LL;
            v33 = SubKey;
            v34 = 0;
            v35 = 0LL;
            while ( v32 != -2147483571 )
            {
              v36 = *(WCHAR *)((char *)v33 + (char *)L"AudioEngine\\AudioProcessingObjects\\" - (char *)SubKey);
              if ( !v36 )
                break;
              *v33++ = v36;
              ++v35;
              if ( !--v32 )
              {
                --v33;
                --v35;
                v34 = -2147024774;
                break;
              }
            }
            *v33 = 0;
            v37 = &SubKey[v35];
            v38 = 75 - v35;
            if ( (int)(v34 + 0x80000000) < 0 || v34 == -2147024774 )
            {
              v96 = &SubKey[v35];
              v99 = 75 - v35;
            }
            else
            {
              v38 = v99;
              v37 = v96;
            }
            if ( v34 < 0
              || StringFromGUID2(&rguid, v37, v38) <= 0
              || RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &hKey) )
            {
              v31 = -2005139398;
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
              v31 = 0;
            }
          }
        }
        else
        {
          v31 = -2147467259;
        }
      }
    }
    PropVariantClear(&v92);
    if ( v86 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
    if ( v84 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
    if ( v31 < 0 )
      goto LABEL_63;
    v82 = 0LL;
    Lfx = CoCreateInstance(&pclsid, 0LL, 1u, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &ppv);
    if ( Lfx >= 0 )
    {
      v41 = v82;
      v42 = ppv;
      if ( v82 != ppv )
      {
        v43 = v82;
        v41 = 0LL;
        v82 = 0LL;
        if ( ppv )
        {
          (**(void (__fastcall ***)(LPVOID, GUID *, void **))ppv)(ppv, &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b, &v82);
          v42 = ppv;
          v41 = v82;
        }
        if ( v43 )
        {
          (*(void (__fastcall **)(void *))(*(_QWORD *)v43 + 16LL))(v43);
          v42 = ppv;
          v41 = v82;
        }
      }
      if ( !v41 )
      {
        if ( v42 )
        {
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v42 + 16LL))(v42);
          ppv = 0LL;
        }
        ppv = 0LL;
        Lfx = -2147467262;
      }
    }
    if ( v82 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v82 + 16LL))(v82);
    v44 = v79;
    if ( Lfx < 0
      || (v103 = v16,
          Lfx = InitializeSystemEffectsInterface(v79, (struct IAudioProcessingObject *)ppv, &pclsid, &v103, 0, v27, 0LL),
          Lfx < 0) )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x20000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          12LL,
          &WPP_2bda92312337278facb79c049a01aa8d_Traceguids,
          v76,
          Lfx);
      }
      TrackSystemEffectBehavior(v44, v39, v40, &pclsid);
    }
    else
    {
LABEL_63:
      v9 = (struct IAudioProcessingObject *)ppv;
      ppv = 0LL;
      v81 = v9;
    }
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    goto LABEL_66;
  }
  Lfx = CEndpointCharacteristics::GetLfx(v8, v6, 0LL, &v81, phkResult);
  v9 = v81;
LABEL_67:
  if ( Lfx < 0 )
    goto LABEL_93;
  if ( v9 )
  {
    v80 = 0LL;
    lpMem = 0LL;
    v79 = 0LL;
    Lfx = CAudioMediaType::Create(v83, (unsigned int)v83->cbSize + 18, &v80, 0.0);
    if ( Lfx < 0 )
    {
      if ( v79 )
      {
        Release = v79->lpVtbl->Release;
        if ( (char *)Release == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v79);
        else
          ((void (__fastcall *)(struct IMMDevice *))Release)(v79);
      }
      v48 = (volatile signed __int32 *)v80;
    }
    else
    {
      Lfx = CAudioMediaType::Create(
              (const struct tWAVEFORMATEX *)v12,
              (unsigned int)v12[8] + 18,
              (struct IAudioMediaType **)&lpMem,
              0.0);
      if ( Lfx < 0 )
      {
        if ( v79 )
        {
          v71 = v79->lpVtbl->Release;
          if ( (char *)v71 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v79);
          else
            ((void (__fastcall *)(struct IMMDevice *))v71)(v79);
        }
        if ( lpMem )
        {
          v72 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)lpMem + 16LL);
          if ( v72 == CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)lpMem);
          else
            v72((CAudioMediaType *)lpMem);
        }
        v48 = (volatile signed __int32 *)v80;
        if ( !v80 )
          goto LABEL_93;
        v69 = v80->lpVtbl->Release;
        if ( (char *)v69 == (char *)CAudioMediaType::Release )
        {
          CAudioMediaType::Release((CAudioMediaType *)v80);
          goto LABEL_93;
        }
LABEL_155:
        ((void (__fastcall *)(volatile signed __int32 *))v69)(v48);
        goto LABEL_93;
      }
      v45.lpVtbl = v9->lpVtbl;
      if ( *((_DWORD *)v8 + 93) )
        IsOutputFormatSupported = v45.lpVtbl->IsOutputFormatSupported;
      else
        IsOutputFormatSupported = v45.lpVtbl->IsInputFormatSupported;
      v47 = (volatile signed __int32 *)lpMem;
      v48 = (volatile signed __int32 *)v80;
      v49 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, LPVOID, struct IMMDevice **))IsOutputFormatSupported)(
              v9,
              v80,
              lpMem,
              &v79);
      Lfx = v49;
      if ( v49 >= 0 )
      {
        if ( v49 == 1 || (unsigned int)ValidateWaveFormatEx(v88) )
          Lfx = 1;
        if ( v79 )
        {
          v50 = v79->lpVtbl->Release;
          if ( (char *)v50 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v79);
          else
            ((void (__fastcall *)(struct IMMDevice *))v50)(v79);
        }
        if ( v47 )
        {
          v51 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v47 + 16LL);
          if ( v51 == CAudioMediaType::Release )
          {
            if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
            {
              v52 = lpMem;
              *(_QWORD *)lpMem = &CAudioMediaType::`vftable';
              v53 = (void *)v52[2];
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, v53);
              v52[2] = 0LL;
              v55 = GetProcessHeap();
              HeapFree(v55, 0, v52);
              v9 = v81;
              v48 = (volatile signed __int32 *)v80;
            }
            else
            {
              v9 = v81;
              v48 = (volatile signed __int32 *)v80;
            }
          }
          else
          {
            v51((CAudioMediaType *)v47);
          }
        }
        if ( v48 )
        {
          v56 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v48 + 16LL);
          if ( v56 == CAudioMediaType::Release )
          {
            if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
            {
              v57 = v80;
              v80->lpVtbl = (struct IAudioMediaTypeVtbl *)&CAudioMediaType::`vftable';
              lpVtbl = v57[2].lpVtbl;
              v59 = GetProcessHeap();
              HeapFree(v59, 0, lpVtbl);
              v57[2].lpVtbl = 0LL;
              v60 = GetProcessHeap();
              HeapFree(v60, 0, v57);
            }
            v9 = v81;
          }
          else
          {
            v56((CAudioMediaType *)v48);
          }
        }
        v61 = v83;
        v12 = v85;
        goto LABEL_89;
      }
      if ( v79 )
        ((void (__fastcall *)(struct IMMDevice *))v79->lpVtbl->Release)(v79);
      if ( v47 )
      {
        v68 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v47 + 16LL);
        if ( v68 == CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v47);
        else
          v68((CAudioMediaType *)v47);
      }
    }
    if ( !v48 )
      goto LABEL_93;
    v69 = *(ULONG (__stdcall **)(IAudioMediaType *))(*(_QWORD *)v48 + 16LL);
    if ( (char *)v69 == (char *)CAudioMediaType::Release )
    {
      CAudioMediaType::Release((CAudioMediaType *)v48);
      goto LABEL_93;
    }
    goto LABEL_155;
  }
  if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)v12) )
  {
    Lfx = -2004287480;
    goto LABEL_93;
  }
  v61 = v83;
  if ( *((_DWORD *)v12 + 1) == v83->nSamplesPerSec
    && v12[1] == v83->nChannels
    && v74
    && !(unsigned int)ValidateWaveFormatEx(v88) )
  {
    Lfx = 0;
    goto LABEL_93;
  }
  Lfx = 1;
LABEL_89:
  v62 = v95;
  if ( v95 && Lfx )
  {
    v63 = v61->cbSize;
    v64 = GetProcessHeap();
    v65 = (struct tWAVEFORMATEX *)HeapAlloc(v64, 0, v63 + 18);
    *v62 = v65;
    if ( v65 )
    {
      memcpy_0(v65, v61, v63 + 18);
      Lfx = 1;
      goto LABEL_93;
    }
    goto LABEL_172;
  }
LABEL_93:
  CoTaskMemFree(v12);
  v87 = 0LL;
  if ( v9 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->Release)(v9);
  return (unsigned int)Lfx;
}
