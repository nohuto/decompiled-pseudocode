/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001A7C0
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180006E00 (AudioServerIsFormatSupported.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180069398 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18006A298 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0008_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x1800168F0 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0008_.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001A650 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001AF20 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800700B8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180088DF4 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  struct IAudioProcessingObject *v9; // rbx
  const struct tWAVEFORMATEX *v10; // r15
  __int64 cbSize; // rdi
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // r13
  __int64 v14; // rdi
  __int16 *v15; // rax
  __int16 *v16; // rsi
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int16 v19; // cx
  __int64 v20; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v21; // r10d
  struct _GUID v22; // xmm6
  int InitializedSystemEffectInterface; // r14d
  BOOL v24; // r15d
  __int64 v25; // rcx
  char *v26; // rax
  int v27; // edx
  int v28; // r8d
  __int64 v29; // r9
  __int64 v30; // rax
  GUID fmtid; // xmm0
  DWORD pid; // eax
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  volatile signed __int32 *v34; // rsi
  volatile signed __int32 *v35; // rdi
  __int64 (__fastcall *IsOutputFormatSupported)(CAPOWrapperClient *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **); // rax
  int IsAudioFormatSupported; // eax
  _QWORD *v38; // r12
  unsigned int (__fastcall *v39)(CAudioMediaType *__hidden); // rax
  void *v40; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v42; // rax
  unsigned int (__fastcall *v43)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v44; // rbx
  struct IAudioMediaTypeVtbl *v45; // rdi
  HANDLE v46; // rax
  HANDLE v47; // rax
  unsigned int (__fastcall *v48)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v49; // rbx
  struct IAudioMediaTypeVtbl *v50; // rdi
  HANDLE v51; // rax
  HANDLE v52; // rax
  void *v53; // r14
  __int64 v54; // rsi
  HANDLE v55; // rax
  struct tWAVEFORMATEX *v56; // rax
  WORD nChannels; // r11
  DWORD nSamplesPerSec; // r8d
  DWORD nAvgBytesPerSec; // r9d
  WORD nBlockAlign; // r10
  WORD v62; // cx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  WORD wBitsPerSample; // cx
  WORD wFormatTag; // ax
  int v68; // ecx
  int v69; // ecx
  struct IAudioMediaType *v70; // rcx
  struct IAudioSystemEffects2 **v71; // [rsp+28h] [rbp-E0h]
  bool v72; // [rsp+58h] [rbp-B0h]
  struct IAudioMediaType *v73; // [rsp+60h] [rbp-A8h] BYREF
  struct IAudioProcessingObject *v74; // [rsp+68h] [rbp-A0h] BYREF
  struct IAudioMediaType *v75; // [rsp+70h] [rbp-98h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-90h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-88h]
  unsigned __int16 *v78; // [rsp+88h] [rbp-80h]
  void *v79; // [rsp+90h] [rbp-78h]
  PROPVARIANT pvar; // [rsp+98h] [rbp-70h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-68h]
  __int64 v82; // [rsp+A8h] [rbp-60h]
  struct _tagpropertykey v83; // [rsp+B8h] [rbp-50h] BYREF
  struct _GUID v84; // [rsp+D8h] [rbp-30h]
  __int64 v85; // [rsp+E8h] [rbp-20h]
  struct _GUID v86; // [rsp+F0h] [rbp-18h] BYREF
  struct _GUID v87; // [rsp+108h] [rbp+0h] BYREF

  v85 = -2LL;
  v79 = a4;
  LODWORD(v73) = a3;
  v9 = 0LL;
  v74 = 0LL;
  v72 = 1;
  v78 = 0LL;
  pv = 0LL;
  v10 = Src;
  cbSize = Src->cbSize;
  v12 = (unsigned __int16 *)CoTaskMemAlloc(cbSize + 18);
  v13 = v12;
  if ( !v12 )
  {
    v78 = 0LL;
    goto LABEL_154;
  }
  memcpy_0(v12, Src, cbSize + 18);
  v78 = v13;
  v14 = a4->cbSize;
  v15 = (__int16 *)CoTaskMemAlloc(v14 + 18);
  v16 = v15;
  if ( !v15 )
  {
    pv = 0LL;
LABEL_154:
    InitializedSystemEffectInterface = -2147024882;
    goto LABEL_63;
  }
  memcpy_0(v15, v79, v14 + 18);
  pv = v16;
  if ( (v13[7] & 0xFFF8u) > 0x100 )
  {
    InitializedSystemEffectInterface = -2004287480;
    goto LABEL_63;
  }
  v17 = *v13;
  if ( *v13 == 0xFFFE )
    v72 = (v13[9] & 0x80000007) == 0;
  if ( v17 == 1 )
    goto LABEL_93;
  if ( v17 == 0xFFFE )
  {
    v18 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v13 + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v13 + 3) )
      v18 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v13 + 4);
    if ( !v18 )
    {
LABEL_93:
      if ( v17 != 0xFFFE || (v13[9] & 0x80000007) == 0 )
      {
        if ( v17 == 1 )
        {
          *v13 = 3;
        }
        else
        {
          *(GUID *)(v13 + 12) = GUID_00000003_0000_0010_8000_00aa00389b71;
          v13[9] = 32;
        }
        v13[7] = 32;
        v68 = (unsigned __int16)(4 * v13[1]);
        v13[6] = v68;
        *((_DWORD *)v13 + 2) = v68 * *((_DWORD *)v13 + 1);
      }
    }
  }
  v19 = *v16;
  if ( *v16 == 1 )
    goto LABEL_98;
  if ( v19 == -2 )
  {
    v20 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v16 + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v16 + 3) )
      v20 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v16 + 4);
    if ( !v20 )
    {
LABEL_98:
      if ( v19 != -2 || ((unsigned __int16)v16[9] & 0x80000007) == 0 )
      {
        if ( v19 == 1 )
        {
          *v16 = 3;
        }
        else
        {
          *(GUID *)(v16 + 12) = GUID_00000003_0000_0010_8000_00aa00389b71;
          v16[9] = 32;
        }
        v16[7] = 32;
        v69 = (unsigned __int16)(4 * v16[1]);
        v16[6] = v69;
        *((_DWORD *)v16 + 2) = v69 * *((_DWORD *)v16 + 1);
      }
    }
  }
  v21 = (int)v73;
  if ( *((_DWORD *)a1 + (int)v73 + 10) )
  {
    v22 = *a2;
    v84 = *a2;
    InitializedSystemEffectInterface = 0;
    v86 = GUID_00000000_0000_0000_0000_000000000000;
    v9 = 0LL;
    v74 = 0LL;
    v24 = 1;
    v25 = *((_QWORD *)a1 + 7);
    if ( !v25 )
      goto LABEL_22;
    pvar = 0LL;
    v81 = 0LL;
    v82 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v25 + 40LL))(
           v25,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v24 = v81 == 0;
    }
    PropVariantClear(&pvar);
    v21 = (int)v73;
    if ( v24 || (_DWORD)v73 == 3 )
LABEL_22:
      v26 = (char *)a1 + 16 * (int)v73 + 144;
    else
      v26 = (char *)a1 + 352;
    v27 = 0;
    v28 = *((_DWORD *)v26 + 2);
    if ( v28 <= 0 )
      goto LABEL_33;
    v29 = *(_QWORD *)v26;
    while ( 1 )
    {
      v30 = *(_QWORD *)(v29 + 16LL * v27) - *(_QWORD *)&v84.Data1;
      if ( !v30 )
        v30 = *(_QWORD *)(v29 + 16LL * v27 + 8) - *(_QWORD *)v84.Data4;
      if ( !v30 )
        break;
      if ( ++v27 >= v28 )
        goto LABEL_33;
    }
    if ( v27 == -1 )
      goto LABEL_33;
    InitializedSystemEffectInterface = 0;
    if ( v21 )
    {
      if ( v21 == eOffloadConnector )
      {
        fmtid = PKEY_FX_Offload_StreamEffectClsid.fmtid;
        pid = PKEY_FX_Offload_StreamEffectClsid.pid;
        goto LABEL_32;
      }
      if ( v21 == eKeywordDetectorConnector )
      {
        fmtid = PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid;
        pid = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
        goto LABEL_32;
      }
      InitializedSystemEffectInterface = -2147023728;
      pid = v83.pid;
      fmtid = v83.fmtid;
    }
    else
    {
      fmtid = PKEY_FX_StreamEffectClsid.fmtid;
      pid = PKEY_FX_StreamEffectClsid.pid;
    }
    if ( InitializedSystemEffectInterface < 0 )
    {
LABEL_33:
      v10 = Src;
      goto LABEL_34;
    }
LABEL_32:
    v87 = v22;
    v83.fmtid = fmtid;
    v83.pid = pid;
    InitializedSystemEffectInterface = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                                         a1,
                                         &v83,
                                         &v87,
                                         0,
                                         0,
                                         v21,
                                         &v86,
                                         &v74,
                                         0LL);
    v9 = v74;
    goto LABEL_33;
  }
  InitializedSystemEffectInterface = CEndpointCharacteristics::GetLfx(
                                       a1,
                                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v73,
                                       0LL,
                                       &v74,
                                       v71);
  v9 = v74;
LABEL_34:
  if ( InitializedSystemEffectInterface < 0 )
    goto LABEL_63;
  if ( v9 )
  {
    v73 = 0LL;
    v75 = 0LL;
    lpMem = 0LL;
    InitializedSystemEffectInterface = CAudioMediaType::Create(
                                         (const struct tWAVEFORMATEX *)v16,
                                         (unsigned int)(unsigned __int16)v16[8] + 18,
                                         &v73,
                                         0.0);
    if ( InitializedSystemEffectInterface < 0 )
    {
      if ( lpMem )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)lpMem + 16LL))(lpMem);
      v70 = v73;
      if ( !v73 )
        goto LABEL_63;
    }
    else
    {
      InitializedSystemEffectInterface = CAudioMediaType::Create(
                                           (const struct tWAVEFORMATEX *)v13,
                                           (unsigned int)v13[8] + 18,
                                           &v75,
                                           0.0);
      if ( InitializedSystemEffectInterface >= 0 )
      {
        lpVtbl = v9->lpVtbl;
        v34 = (volatile signed __int32 *)v75;
        v35 = (volatile signed __int32 *)v73;
        if ( *((_DWORD *)a1 + 93) )
        {
          IsOutputFormatSupported = (__int64 (__fastcall *)(CAPOWrapperClient *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))lpVtbl->IsOutputFormatSupported;
        }
        else
        {
          IsOutputFormatSupported = (__int64 (__fastcall *)(CAPOWrapperClient *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))lpVtbl->IsInputFormatSupported;
          if ( IsOutputFormatSupported == CAPOWrapperClient::IsInputFormatSupported )
          {
            IsAudioFormatSupported = CAPOWrapperClient::IsAudioFormatSupported(
                                       (__int64)&v9[-1],
                                       0LL,
                                       (CAudioMediaType *)v73,
                                       v75,
                                       (struct IAudioMediaType **)&lpMem);
            goto LABEL_41;
          }
        }
        IsAudioFormatSupported = IsOutputFormatSupported(
                                   (CAPOWrapperClient *)v9,
                                   v73,
                                   v75,
                                   (struct IAudioMediaType **)&lpMem);
LABEL_41:
        InitializedSystemEffectInterface = IsAudioFormatSupported;
        if ( IsAudioFormatSupported < 0 )
        {
          if ( lpMem )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)lpMem + 16LL))(lpMem);
          if ( v34 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
          if ( v35 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
          goto LABEL_63;
        }
        if ( IsAudioFormatSupported != 1 )
        {
          nChannels = v10->nChannels;
          if ( nChannels )
          {
            nSamplesPerSec = v10->nSamplesPerSec;
            if ( nSamplesPerSec )
            {
              nAvgBytesPerSec = v10->nAvgBytesPerSec;
              if ( nAvgBytesPerSec )
              {
                nBlockAlign = v10->nBlockAlign;
                if ( nBlockAlign )
                {
                  v62 = v10->cbSize;
                  if ( v62 <= 0x400u )
                  {
                    if ( ((v10->wFormatTag - 1) & 0xFFFD) != 0 )
                    {
                      if ( v10->wFormatTag != 0xFFFE )
                        goto LABEL_44;
                      if ( v62 >= 0x16u )
                      {
                        v63 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
                            - *(_QWORD *)((char *)&v10[1].nSamplesPerSec + 2);
                        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v10[1].nSamplesPerSec + 2) )
                          v63 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4
                              - *(_QWORD *)&v10[1].wBitsPerSample;
                        if ( v63 )
                        {
                          v64 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
                              - *(_QWORD *)((char *)&v10[1].nSamplesPerSec + 2);
                          if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v10[1].nSamplesPerSec + 2) )
                            v64 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4
                                - *(_QWORD *)&v10[1].wBitsPerSample;
                          if ( v64 )
                            goto LABEL_44;
                        }
                        v65 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
                            - *(_QWORD *)((char *)&v10[1].nSamplesPerSec + 2);
                        if ( !v65 )
                          v65 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4
                              - *(_QWORD *)&v10[1].wBitsPerSample;
                        wBitsPerSample = v10->wBitsPerSample;
                        if ( v65 )
                        {
                          if ( ((wBitsPerSample - 32) & 0xFFDF) == 0 )
                          {
LABEL_84:
                            wFormatTag = v10[1].wFormatTag;
                            if ( wFormatTag
                              && wBitsPerSample >= wFormatTag
                              && nAvgBytesPerSec == (nSamplesPerSec * nChannels * wBitsPerSample) >> 3
                              && nBlockAlign == nChannels * wBitsPerSample / 8 )
                            {
                              goto LABEL_44;
                            }
                          }
                        }
                        else if ( ((wBitsPerSample - 8) & 0xFFE7) == 0 )
                        {
                          goto LABEL_84;
                        }
                      }
                    }
                    else if ( !v62
                           && (v10->wBitsPerSample & 0x80000007) == 0
                           && nChannels <= 2u
                           && nAvgBytesPerSec == (nSamplesPerSec * v10->wBitsPerSample * nChannels) >> 3 )
                    {
                      goto LABEL_44;
                    }
                  }
                }
              }
            }
          }
        }
        InitializedSystemEffectInterface = 1;
LABEL_44:
        v38 = lpMem;
        if ( lpMem )
        {
          v39 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)lpMem + 16LL);
          if ( v39 == CAudioMediaType::Release )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem + 2, 0xFFFFFFFF) == 1 && v38 )
            {
              *v38 = &CAudioMediaType::`vftable';
              v40 = (void *)v38[2];
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, v40);
              v38[2] = 0LL;
              v42 = GetProcessHeap();
              HeapFree(v42, 0, v38);
              v9 = v74;
              v35 = (volatile signed __int32 *)v73;
              v34 = (volatile signed __int32 *)v75;
            }
            else
            {
              v9 = v74;
              v35 = (volatile signed __int32 *)v73;
              v34 = (volatile signed __int32 *)v75;
            }
          }
          else
          {
            ((void (__fastcall *)(LPVOID, void **))v39)(lpMem, &CAudioMediaType::`vftable');
          }
        }
        if ( v34 )
        {
          v43 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v34 + 16LL);
          if ( v43 == CAudioMediaType::Release )
          {
            if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
            {
              v44 = v75;
              v75->lpVtbl = (struct IAudioMediaTypeVtbl *)&CAudioMediaType::`vftable';
              v45 = v44[2].lpVtbl;
              v46 = GetProcessHeap();
              HeapFree(v46, 0, v45);
              v44[2].lpVtbl = 0LL;
              v47 = GetProcessHeap();
              HeapFree(v47, 0, v44);
            }
            v9 = v74;
            v35 = (volatile signed __int32 *)v73;
          }
          else
          {
            ((void (__fastcall *)(volatile signed __int32 *, void **))v43)(v34, &CAudioMediaType::`vftable');
          }
        }
        if ( v35 )
        {
          v48 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v35 + 16LL);
          if ( v48 == CAudioMediaType::Release )
          {
            if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
            {
              v49 = v73;
              v73->lpVtbl = (struct IAudioMediaTypeVtbl *)&CAudioMediaType::`vftable';
              v50 = v49[2].lpVtbl;
              v51 = GetProcessHeap();
              HeapFree(v51, 0, v50);
              v49[2].lpVtbl = 0LL;
              v52 = GetProcessHeap();
              HeapFree(v52, 0, v49);
            }
            v9 = v74;
          }
          else
          {
            v48((CAudioMediaType *)v35);
          }
        }
        goto LABEL_59;
      }
      if ( lpMem )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)lpMem + 16LL))(lpMem);
      if ( v75 )
        ((void (__fastcall *)(struct IAudioMediaType *))v75->lpVtbl->Release)(v75);
      v70 = v73;
      if ( !v73 )
        goto LABEL_63;
    }
    ((void (__fastcall *)(struct IAudioMediaType *))v73->lpVtbl->Release)(v70);
    goto LABEL_63;
  }
  if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)v13) )
  {
    InitializedSystemEffectInterface = -2004287480;
    goto LABEL_63;
  }
  if ( *((_DWORD *)v13 + 1) == *((_DWORD *)v16 + 1)
    && v13[1] == v16[1]
    && v72
    && !(unsigned int)ValidateWaveFormatEx(v10) )
  {
    InitializedSystemEffectInterface = 0;
    goto LABEL_63;
  }
  InitializedSystemEffectInterface = 1;
LABEL_59:
  if ( a6 && InitializedSystemEffectInterface )
  {
    v53 = v79;
    v54 = *((unsigned __int16 *)v79 + 8);
    v55 = GetProcessHeap();
    v56 = (struct tWAVEFORMATEX *)HeapAlloc(v55, 0, v54 + 18);
    *a6 = v56;
    if ( v56 )
    {
      memcpy_0(v56, v53, v54 + 18);
      InitializedSystemEffectInterface = 1;
      goto LABEL_63;
    }
    goto LABEL_154;
  }
LABEL_63:
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v13);
  v78 = 0LL;
  if ( v9 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->Release)(v9);
  return (unsigned int)InitializedSystemEffectInterface;
}
