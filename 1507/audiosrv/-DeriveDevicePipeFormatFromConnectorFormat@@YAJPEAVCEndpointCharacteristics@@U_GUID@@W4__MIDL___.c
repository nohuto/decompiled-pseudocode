/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180033FFC
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180030080 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800336B0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18008553C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008C790 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001EA40 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x180021730 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180021740 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180030474 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x180032B24 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800342D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180034734 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180034B48 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180034BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A8C84 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DeriveDevicePipeFormatFromConnectorFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType *v7; // rsi
  struct IAudioProcessingObject *v8; // r14
  struct IAudioMediaType *v9; // rdi
  CAudioMediaType *v10; // r15
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // r12
  const struct tWAVEFORMATEX *AudioFormat; // rax
  int v13; // eax
  int v14; // r12d
  __int64 v15; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v16; // eax
  int v17; // eax
  const WAVEFORMATEX *(__stdcall *v18)(IAudioMediaType *); // rbx
  const struct tWAVEFORMATEX *v19; // rax
  struct tWAVEFORMATEX *v20; // rbx
  const WAVEFORMATEX *(__stdcall *v21)(IAudioMediaType *); // rbx
  CEndpointCharacteristics *v22; // rax
  const WAVEFORMATEX *(__stdcall *v23)(IAudioMediaType *); // rbx
  const struct tWAVEFORMATEX *v24; // rax
  struct IAudioMediaType *v25; // rax
  __int64 (__fastcall *v26)(CAudioMediaType *); // rbx
  ULONG (__stdcall *Release)(IAudioMediaType *); // rbx
  ULONG (__stdcall *v28)(IAudioMediaType *); // rbx
  __int64 (__fastcall *v30)(CAudioMediaType *); // r13
  __int64 (__fastcall *v31)(CAudioMediaType *); // rdi
  __int64 (__fastcall *v32)(CAudioMediaType *); // rdi
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v34; // eax
  int v35; // eax
  __int64 (__fastcall *v36)(CAudioMediaType *); // r12
  struct IAudioProcessingObject **v37; // [rsp+28h] [rbp-71h]
  LPVOID pv; // [rsp+38h] [rbp-61h] BYREF
  bool v39; // [rsp+40h] [rbp-59h]
  struct IAudioMediaType *v40; // [rsp+48h] [rbp-51h] BYREF
  int v41; // [rsp+50h] [rbp-49h] BYREF
  struct IAudioMediaType *v42; // [rsp+58h] [rbp-41h] BYREF
  CEndpointCharacteristics *v43; // [rsp+60h] [rbp-39h]
  struct IUnknown *v44; // [rsp+68h] [rbp-31h] BYREF
  struct IAudioProcessingObject *v45; // [rsp+70h] [rbp-29h] BYREF
  struct IAudioMediaType **v46; // [rsp+78h] [rbp-21h]
  __int64 v47; // [rsp+80h] [rbp-19h]
  _DWORD v48[6]; // [rsp+88h] [rbp-11h] BYREF
  GUID v49; // [rsp+A0h] [rbp+7h]

  v47 = -2LL;
  v43 = a1;
  v46 = a5;
  v7 = 0LL;
  v44 = 0LL;
  v8 = 0LL;
  v45 = 0LL;
  v9 = 0LL;
  v40 = 0LL;
  v10 = 0LL;
  v42 = 0LL;
  GetAudioFormat = a4->lpVtbl->GetAudioFormat;
  if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)a4);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *, struct _GUID *))GetAudioFormat)(
                                                  a4,
                                                  a2);
  v13 = ValidateUncompressedWaveFormatEx(AudioFormat);
  v14 = v13;
  v15 = 0LL;
  if ( v13 < 0 )
    goto LABEL_81;
  v39 = v13 == 1;
  v16 = a3;
  if ( a3 == eOffloadConnector )
    v16 = eHostProcessConnector;
  v17 = *((_DWORD *)v43 + v16 + 10)
      ? CEndpointCharacteristics::GetEndpointEffect(v43, 0, a3, 0LL, &v45, 0LL)
      : CEndpointCharacteristics::GetGfx(v43, a3, 0LL, &v45, (struct IAudioSystemEffects2 **)v37);
  v14 = v17;
  v15 = 0LL;
  v8 = v45;
  if ( v17 < 0 )
    goto LABEL_81;
  if ( !v39 )
  {
    pv = 0LL;
    v18 = a4->lpVtbl->GetAudioFormat;
    if ( (char *)v18 == (char *)CAudioMediaType::GetAudioFormat )
      v19 = CAudioMediaType::GetAudioFormat((CAudioMediaType *)a4);
    else
      v19 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD))v18)(a4, 0LL);
    if ( (int)CloneWaveFormat(v19, (struct tWAVEFORMATEX **)&pv) < 0 )
    {
      v14 = -2004287480;
      CoTaskMemFree(pv);
      pv = 0LL;
      v8 = v45;
      goto LABEL_81;
    }
    v20 = (struct tWAVEFORMATEX *)pv;
    ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
    v14 = CAudioMediaType::Create(v20, (unsigned int)v20->cbSize + 18, &v42, 0.0);
    if ( v14 >= 0 )
    {
      v10 = (CAudioMediaType *)v42;
      if ( v42 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)&v40, (struct IUnknown *)v42);
        v9 = v40;
      }
      CoTaskMemFree(v20);
      pv = 0LL;
      goto LABEL_17;
    }
    CoTaskMemFree(v20);
    v15 = 0LL;
    pv = 0LL;
    v10 = (CAudioMediaType *)v42;
LABEL_29:
    if ( v14 >= 0 )
      goto LABEL_30;
    goto LABEL_81;
  }
  if ( !v45 )
  {
LABEL_47:
    v14 = -2004287480;
    goto LABEL_81;
  }
  pv = 0LL;
  if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, LPVOID *))v45->lpVtbl->IsOutputFormatSupported)(
         v45,
         0LL,
         a4,
         &pv) )
  {
    v14 = -2004287480;
    goto LABEL_49;
  }
  v48[0] = 196606;
  v48[1] = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4) + 4);
  v48[3] = 2097160;
  v48[2] = 8 * *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4) + 4);
  v48[4] = 2097174;
  v48[5] = 3;
  v49 = GUID_00000003_0000_0010_8000_00aa00389b71;
  v14 = CAudioMediaType::Create((const struct tWAVEFORMATEX *)v48, 0x28u, &v40, 0.0);
  if ( v14 < 0 )
  {
    if ( pv )
    {
      v31 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)pv + 16LL);
      if ( v31 == CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)pv);
      else
        v31((CAudioMediaType *)pv);
    }
    v9 = v40;
    goto LABEL_29;
  }
  ATL::AtlComPtrAssign((struct IUnknown **)&v42, (struct IUnknown *)a4);
  if ( pv )
  {
    v32 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)pv + 16LL);
    if ( v32 == CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)pv);
    else
      v32((CAudioMediaType *)pv);
  }
  v9 = v40;
  v10 = (CAudioMediaType *)v42;
LABEL_17:
  if ( !v8 )
  {
    if ( v9 )
    {
      ATL::AtlComPtrAssign(&v44, (struct IUnknown *)v9);
      v7 = (struct IAudioMediaType *)v44;
    }
    goto LABEL_20;
  }
  v41 = 0;
  pv = 0LL;
  lpVtbl = v8->lpVtbl;
  if ( *((_DWORD *)v43 + 93) )
    v34 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, CAudioMediaType *, struct IAudioMediaType *, LPVOID *))lpVtbl->IsOutputFormatSupported)(
            v8,
            v10,
            v9,
            &pv);
  else
    v34 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, CAudioMediaType *, struct IAudioMediaType *, LPVOID *))lpVtbl->IsInputFormatSupported)(
            v8,
            v10,
            v9,
            &pv);
  if ( v34 < 0
    || (v35 = (*(__int64 (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v41), v15 = 0LL, v35 < 0)
    || v41 )
  {
    v14 = -2004287480;
LABEL_49:
    if ( pv )
    {
      v30 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)pv + 16LL);
      if ( v30 == CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)pv);
      else
        v30((CAudioMediaType *)pv);
    }
    goto LABEL_81;
  }
  if ( pv )
  {
    ATL::AtlComPtrAssign(&v44, (struct IUnknown *)pv);
    v7 = (struct IAudioMediaType *)v44;
  }
  if ( pv )
  {
    v36 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)pv + 16LL);
    if ( v36 == CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)pv);
    else
      v36((CAudioMediaType *)pv);
  }
LABEL_20:
  v14 = ValidateAPOInputFormat(v7);
  v15 = 0LL;
  if ( v14 >= 0 )
  {
    if ( *((_DWORD *)v43 + 93) )
    {
LABEL_28:
      v25 = v7;
      v7 = 0LL;
      v44 = 0LL;
      *v46 = v25;
      goto LABEL_29;
    }
    v21 = v7->lpVtbl->GetAudioFormat;
    if ( (char *)v21 == (char *)CAudioMediaType::GetAudioFormat )
      v22 = (CEndpointCharacteristics *)CAudioMediaType::GetAudioFormat((CAudioMediaType *)v7);
    else
      v22 = (CEndpointCharacteristics *)((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD))v21)(v7, 0LL);
    v43 = v22;
    v23 = a4->lpVtbl->GetAudioFormat;
    if ( (char *)v23 == (char *)CAudioMediaType::GetAudioFormat )
      v24 = CAudioMediaType::GetAudioFormat((CAudioMediaType *)a4);
    else
      v24 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v23)(a4);
    if ( *((_DWORD *)v43 + 1) == v24->nSamplesPerSec )
    {
      v15 = 0LL;
      goto LABEL_28;
    }
    goto LABEL_47;
  }
LABEL_81:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x17u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v14);
  }
LABEL_30:
  if ( v10 )
  {
    v26 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v10 + 16LL);
    if ( v26 == CAudioMediaType::Release )
      CAudioMediaType::Release(v10);
    else
      ((void (__fastcall *)(CAudioMediaType *, __int64))v26)(v10, v15);
  }
  if ( v9 )
  {
    Release = v9->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v9);
    else
      ((void (__fastcall *)(struct IAudioMediaType *, __int64))Release)(v9, v15);
  }
  if ( v8 )
    ((void (__fastcall *)(struct IAudioProcessingObject *, __int64))v8->lpVtbl->Release)(v8, v15);
  if ( v7 )
  {
    v28 = v7->lpVtbl->Release;
    if ( (char *)v28 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v7);
    else
      ((void (__fastcall *)(struct IAudioMediaType *, __int64))v28)(v7, v15);
  }
  return (unsigned int)v14;
}
