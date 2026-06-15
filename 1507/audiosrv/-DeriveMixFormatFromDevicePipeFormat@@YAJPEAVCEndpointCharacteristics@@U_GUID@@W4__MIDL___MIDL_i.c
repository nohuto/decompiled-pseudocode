/*
 * XREFs of ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800330E8
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180030080 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800336B0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18008553C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008C790 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180021740 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x180032B24 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800342D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800345F8 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?IsCompressedFormat@CAudioMediaType@@UEAAJPEAH@Z @ 0x180037D60 (-IsCompressedFormat@CAudioMediaType@@UEAAJPEAH@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DeriveMixFormatFromDevicePipeFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5)
{
  int ModeEffect; // r15d
  struct IAudioMediaType *v8; // rsi
  struct IAudioProcessingObject *v9; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v10; // eax
  CAudioMediaType *v11; // rdi
  __int64 (__fastcall *v12)(CAudioMediaType *); // rbx
  struct IAudioMediaType *v13; // rcx
  ULONG (__stdcall *v14)(IAudioMediaType *); // rbx
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  struct IUnknown *v17; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r15
  int IsCompressedFormat; // eax
  ULONG (__stdcall *Release)(IUnknown *); // r15
  ULONG (__stdcall *v21)(IUnknown *); // r12
  __int64 (__fastcall *v22)(CAudioMediaType *); // rbx
  __int64 (__fastcall *v23)(CAudioMediaType *); // rbx
  struct IUnknown *v24; // [rsp+40h] [rbp-30h] BYREF
  struct IAudioProcessingObject *v25; // [rsp+48h] [rbp-28h] BYREF
  struct _GUID v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h]
  struct IUnknown *v28; // [rsp+B0h] [rbp+40h] BYREF
  int v29; // [rsp+C0h] [rbp+50h] BYREF

  v27 = -2LL;
  ModeEffect = 0;
  v8 = 0LL;
  v24 = 0LL;
  v9 = 0LL;
  v25 = 0LL;
  v10 = a3;
  if ( a3 == eOffloadConnector )
    v10 = eHostProcessConnector;
  if ( !*((_DWORD *)a1 + v10 + 10) )
  {
    if ( a4 )
    {
      ATL::AtlComPtrAssign(&v24, a4);
      v8 = (struct IAudioMediaType *)v24;
    }
    goto LABEL_12;
  }
  v26 = *a2;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(a1, &v26, 0, a3, 0LL, &v25, 0LL);
  if ( ModeEffect >= 0 )
  {
    v11 = 0LL;
    *(_QWORD *)&v26.Data1 = 0LL;
    v9 = v25;
    if ( !v25 )
    {
      if ( a4 )
      {
        ATL::AtlComPtrAssign(&v24, a4);
        v8 = (struct IAudioMediaType *)v24;
      }
LABEL_8:
      ModeEffect = ValidateAPOInputFormat(v8);
      if ( ModeEffect < 0 )
      {
        if ( v11 )
        {
          v23 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v11 + 16LL);
          if ( v23 == CAudioMediaType::Release )
            CAudioMediaType::Release(v11);
          else
            v23(v11);
        }
LABEL_13:
        if ( ModeEffect >= 0 )
          goto LABEL_14;
        goto LABEL_57;
      }
      if ( v11 )
      {
        v12 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v11 + 16LL);
        if ( v12 == CAudioMediaType::Release )
          CAudioMediaType::Release(v11);
        else
          v12(v11);
      }
LABEL_12:
      v13 = v8;
      v8 = 0LL;
      v24 = 0LL;
      *a5 = v13;
      goto LABEL_13;
    }
    v29 = 0;
    v28 = 0LL;
    if ( a4 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)&v26, a4);
      v11 = *(CAudioMediaType **)&v26.Data1;
    }
    lpVtbl = v9->lpVtbl;
    if ( *((_DWORD *)a1 + 93) )
    {
      if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, CAudioMediaType *, struct IUnknown **))lpVtbl->IsOutputFormatSupported)(
             v9,
             a4,
             v11,
             &v28) >= 0
        && ((int (__fastcall *)(struct IUnknown *, int *))v28->lpVtbl[1].QueryInterface)(v28, &v29) >= 0
        && !v29 )
      {
        v17 = v28;
LABEL_28:
        if ( v17 )
        {
          ATL::AtlComPtrAssign(&v24, v17);
          v8 = (struct IAudioMediaType *)v24;
          v17 = v28;
        }
        if ( v17 )
        {
          Release = v17->lpVtbl->Release;
          if ( (char *)Release == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v17);
          else
            ((void (__fastcall *)(struct IUnknown *))Release)(v17);
        }
        goto LABEL_8;
      }
    }
    else if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, CAudioMediaType *, struct IUnknown **))lpVtbl->IsInputFormatSupported)(
                v9,
                a4,
                v11,
                &v28) >= 0 )
    {
      v17 = v28;
      QueryInterface = v28->lpVtbl[1].QueryInterface;
      if ( (char *)QueryInterface == (char *)CAudioMediaType::IsCompressedFormat )
      {
        IsCompressedFormat = CAudioMediaType::IsCompressedFormat((CAudioMediaType *)v28, &v29);
      }
      else
      {
        IsCompressedFormat = ((__int64 (__fastcall *)(struct IUnknown *, int *))QueryInterface)(v28, &v29);
        v17 = v28;
      }
      if ( IsCompressedFormat >= 0 && !v29 )
        goto LABEL_28;
      ModeEffect = -2004287480;
      goto LABEL_35;
    }
    ModeEffect = -2004287480;
    v17 = v28;
LABEL_35:
    if ( v17 )
    {
      v21 = v17->lpVtbl->Release;
      if ( (char *)v21 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v17);
      else
        ((void (__fastcall *)(struct IUnknown *))v21)(v17);
    }
    if ( v11 )
    {
      v22 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v11 + 16LL);
      if ( v22 == CAudioMediaType::Release )
        CAudioMediaType::Release(v11);
      else
        v22(v11);
    }
    goto LABEL_57;
  }
  v9 = v25;
LABEL_57:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x18u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      ModeEffect);
  }
LABEL_14:
  if ( v9 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->Release)(v9);
  if ( v8 )
  {
    v14 = v8->lpVtbl->Release;
    if ( (char *)v14 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v8);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v14)(v8);
  }
  return (unsigned int)ModeEffect;
}
