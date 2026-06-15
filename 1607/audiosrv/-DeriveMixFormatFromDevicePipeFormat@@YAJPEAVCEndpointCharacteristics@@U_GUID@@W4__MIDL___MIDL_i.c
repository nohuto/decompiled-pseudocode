/*
 * XREFs of ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A020
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180022B30 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180068DB0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180069398 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180072670 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B49C (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18007003C (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DeriveMixFormatFromDevicePipeFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5)
{
  int ModeEffect; // r14d
  struct IAudioMediaType *v8; // rdi
  struct IAudioProcessingObject *v9; // rsi
  __int64 v10; // rbx
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v12; // eax
  struct IUnknown *v13; // rcx
  struct IAudioMediaType *v14; // rcx
  struct IUnknown *v16; // [rsp+40h] [rbp-30h] BYREF
  struct IAudioProcessingObject *v17; // [rsp+48h] [rbp-28h] BYREF
  struct _GUID v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  struct IUnknown *v20; // [rsp+A0h] [rbp+30h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF

  v19 = -2LL;
  ModeEffect = 0;
  v8 = 0LL;
  v16 = 0LL;
  v9 = 0LL;
  v17 = 0LL;
  if ( !*((_DWORD *)a1 + a3 + 10) )
  {
    if ( a4 )
    {
      ATL::AtlComPtrAssign(&v16, a4);
      v8 = (struct IAudioMediaType *)v16;
    }
    goto LABEL_32;
  }
  v18 = *a2;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(a1, &v18, 0, a3, 0LL, &v17, 0LL);
  if ( ModeEffect >= 0 )
  {
    v10 = 0LL;
    *(_QWORD *)&v18.Data1 = 0LL;
    v9 = v17;
    if ( v17 )
    {
      v21 = 0;
      v20 = 0LL;
      if ( a4 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)&v18, a4);
        v10 = *(_QWORD *)&v18.Data1;
      }
      lpVtbl = v9->lpVtbl;
      if ( *((_DWORD *)a1 + 93) )
        v12 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, __int64, struct IUnknown **))lpVtbl->IsOutputFormatSupported)(
                v9,
                a4,
                v10,
                &v20);
      else
        v12 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, __int64, struct IUnknown **))lpVtbl->IsInputFormatSupported)(
                v9,
                a4,
                v10,
                &v20);
      if ( v12 < 0
        || ((int (__fastcall *)(struct IUnknown *, int *))v20->lpVtbl[1].QueryInterface)(v20, &v21) < 0
        || v21 )
      {
        ModeEffect = -2004287480;
        if ( v20 )
          ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_34;
      }
      v13 = v20;
      if ( v20 )
      {
        ATL::AtlComPtrAssign(&v16, v20);
        v8 = (struct IAudioMediaType *)v16;
        v13 = v20;
      }
      if ( v13 )
        ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
    }
    else if ( a4 )
    {
      ATL::AtlComPtrAssign(&v16, a4);
      v8 = (struct IAudioMediaType *)v16;
    }
    ModeEffect = ValidateAPOInputFormat(v8);
    if ( ModeEffect < 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_33:
      if ( ModeEffect >= 0 )
        goto LABEL_35;
      goto LABEL_34;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_32:
    v14 = v8;
    v8 = 0LL;
    v16 = 0LL;
    *a5 = v14;
    goto LABEL_33;
  }
  v9 = v17;
LABEL_34:
  AudSrvTraceLoggingErrorHelper("DeriveMixFormatFromDevicePipeFormat", 1311, ModeEffect);
LABEL_35:
  if ( v9 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->Release)(v9);
  if ( v8 )
    ((void (__fastcall *)(struct IAudioMediaType *))v8->lpVtbl->Release)(v8);
  return (unsigned int)ModeEffect;
}
