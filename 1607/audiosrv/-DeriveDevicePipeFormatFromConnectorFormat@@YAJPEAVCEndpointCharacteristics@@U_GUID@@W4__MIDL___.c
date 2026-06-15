/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180069B84
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180022B30 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180068DB0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180069398 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180072670 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001AF20 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B27C (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18006857C (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18007003C (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800700B8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180088D68 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DeriveDevicePipeFormatFromConnectorFormat(
        struct CEndpointCharacteristics *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5)
{
  __int64 v6; // r14
  struct IAudioMediaType *v8; // rsi
  struct IAudioMediaType *v9; // rbx
  struct IAudioMediaType *v10; // rdi
  const struct tWAVEFORMATEX *v11; // rax
  int v12; // eax
  int v13; // r15d
  int v14; // eax
  const struct tWAVEFORMATEX *v15; // rax
  struct tWAVEFORMATEX *v16; // r14
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v18; // eax
  __int64 v19; // r14
  struct IAudioMediaType *v20; // rax
  struct IAudioProcessingObject **v22; // [rsp+28h] [rbp-61h]
  LPVOID pv; // [rsp+38h] [rbp-51h] BYREF
  bool v24; // [rsp+40h] [rbp-49h]
  int v25; // [rsp+44h] [rbp-45h] BYREF
  struct IAudioProcessingObject *v26; // [rsp+48h] [rbp-41h] BYREF
  struct IAudioMediaType *v27; // [rsp+50h] [rbp-39h] BYREF
  struct IAudioMediaType *v28; // [rsp+58h] [rbp-31h] BYREF
  struct IUnknown *v29; // [rsp+60h] [rbp-29h] BYREF
  struct IAudioMediaType **v30; // [rsp+68h] [rbp-21h]
  __int64 v31; // [rsp+70h] [rbp-19h]
  _DWORD v32[6]; // [rsp+78h] [rbp-11h] BYREF
  GUID v33; // [rsp+90h] [rbp+7h]

  v31 = -2LL;
  v6 = a3;
  v30 = a5;
  v8 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v9 = 0LL;
  v27 = 0LL;
  v10 = 0LL;
  v28 = 0LL;
  v11 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *, struct _GUID *))a4->lpVtbl[1].Release)(
                                        a4,
                                        a2);
  v12 = ValidateUncompressedWaveFormatEx(v11);
  v13 = v12;
  if ( v12 < 0 )
    goto LABEL_47;
  v24 = v12 == 1;
  v14 = *((_DWORD *)this + v6 + 10)
      ? CEndpointCharacteristics::GetEndpointEffect(
          this,
          0,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v6,
          0LL,
          &v26,
          0LL)
      : CEndpointCharacteristics::GetGfx(
          this,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v6,
          0LL,
          &v26,
          (struct IAudioSystemEffects2 **)v22);
  v13 = v14;
  if ( v14 < 0 )
    goto LABEL_47;
  if ( !v24 )
  {
    pv = 0LL;
    v15 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4);
    if ( (int)CloneWaveFormat(v15, (struct tWAVEFORMATEX **)&pv) < 0 )
    {
      v13 = -2004287480;
      CoTaskMemFree(pv);
      pv = 0LL;
      goto LABEL_47;
    }
    v16 = (struct tWAVEFORMATEX *)pv;
    ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
    v13 = CAudioMediaType::Create(v16, (unsigned int)v16->cbSize + 18, &v28, 0.0);
    if ( v13 < 0 )
    {
      CoTaskMemFree(v16);
      pv = 0LL;
      v10 = v28;
      goto LABEL_46;
    }
    v10 = v28;
    if ( v28 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)&v27, (struct IUnknown *)v28);
      v9 = v27;
    }
    CoTaskMemFree(v16);
    pv = 0LL;
    goto LABEL_27;
  }
  if ( v26 )
  {
    pv = 0LL;
    if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IUnknown *, LPVOID *))v26->lpVtbl->IsOutputFormatSupported)(
           v26,
           0LL,
           a4,
           &pv) )
    {
      v13 = -2004287480;
      goto LABEL_11;
    }
    v32[0] = 196606;
    v32[1] = *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4) + 4);
    v32[3] = 2097160;
    v32[2] = 8 * *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4) + 4);
    v32[4] = 2097174;
    v32[5] = 3;
    v33 = GUID_00000003_0000_0010_8000_00aa00389b71;
    v13 = CAudioMediaType::Create((const struct tWAVEFORMATEX *)v32, 0x28u, &v27, 0.0);
    if ( v13 < 0 )
    {
      if ( pv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
      v9 = v27;
      goto LABEL_46;
    }
    ATL::AtlComPtrAssign((struct IUnknown **)&v28, a4);
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    v9 = v27;
    v10 = v28;
LABEL_27:
    if ( v26 )
    {
      v25 = 0;
      pv = 0LL;
      lpVtbl = v26->lpVtbl;
      if ( *((_DWORD *)this + 93) )
        v18 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, LPVOID *))lpVtbl->IsOutputFormatSupported)(
                v26,
                v10,
                v9,
                &pv);
      else
        v18 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, LPVOID *))lpVtbl->IsInputFormatSupported)(
                v26,
                v10,
                v9,
                &pv);
      if ( v18 < 0 || (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v25) < 0 || v25 )
      {
        v13 = -2004287480;
LABEL_11:
        if ( pv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
        goto LABEL_47;
      }
      if ( pv )
      {
        ATL::AtlComPtrAssign(&v29, (struct IUnknown *)pv);
        v8 = (struct IAudioMediaType *)v29;
      }
      if ( pv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    }
    else if ( v9 )
    {
      ATL::AtlComPtrAssign(&v29, (struct IUnknown *)v9);
      v8 = (struct IAudioMediaType *)v29;
    }
    v13 = ValidateAPOInputFormat(v8);
    if ( v13 < 0 )
      goto LABEL_47;
    if ( !*((_DWORD *)this + 93) )
    {
      v19 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v8->lpVtbl->GetAudioFormat)(v8);
      if ( *(_DWORD *)(v19 + 4) != *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4) + 4) )
        goto LABEL_8;
    }
    v20 = v8;
    v8 = 0LL;
    v29 = 0LL;
    *v30 = v20;
LABEL_46:
    if ( v13 >= 0 )
      goto LABEL_48;
    goto LABEL_47;
  }
LABEL_8:
  v13 = -2004287480;
LABEL_47:
  AudSrvTraceLoggingErrorHelper("DeriveDevicePipeFormatFromConnectorFormat", 1245, v13);
LABEL_48:
  if ( v10 )
    ((void (__fastcall *)(struct IAudioMediaType *))v10->lpVtbl->Release)(v10);
  if ( v9 )
    ((void (__fastcall *)(struct IAudioMediaType *))v9->lpVtbl->Release)(v9);
  if ( v26 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v26->lpVtbl->Release)(v26);
  if ( v8 )
    ((void (__fastcall *)(struct IAudioMediaType *))v8->lpVtbl->Release)(v8);
  return (unsigned int)v13;
}
