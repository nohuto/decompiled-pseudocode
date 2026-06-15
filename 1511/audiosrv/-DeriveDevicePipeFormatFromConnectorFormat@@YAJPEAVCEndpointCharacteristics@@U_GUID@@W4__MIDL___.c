/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180081298
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180010180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180080460 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180080A50 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180089190 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012A90 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x180020DE0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180071BD4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180080350 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x1800867D4 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180086890 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A65CC (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DeriveDevicePipeFormatFromConnectorFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType *v6; // r15
  struct IAudioProcessingObject *v7; // rdi
  struct IUnknown *v8; // rsi
  struct IUnknown *v9; // r14
  const struct tWAVEFORMATEX *v10; // rax
  int v11; // eax
  int v12; // r13d
  bool v13; // bl
  int v14; // eax
  const struct tWAVEFORMATEX *v15; // rax
  struct tWAVEFORMATEX *v16; // rbx
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v18; // eax
  __int64 v19; // r12
  struct IAudioMediaType *v20; // rax
  struct IAudioProcessingObject **v22; // [rsp+28h] [rbp-71h]
  LPVOID pv; // [rsp+38h] [rbp-61h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v24; // [rsp+40h] [rbp-59h] BYREF
  struct IUnknown *v25; // [rsp+48h] [rbp-51h] BYREF
  struct IUnknown *v26; // [rsp+50h] [rbp-49h] BYREF
  struct IAudioProcessingObject *v27; // [rsp+58h] [rbp-41h] BYREF
  struct IUnknown *v28; // [rsp+60h] [rbp-39h] BYREF
  CEndpointCharacteristics *v29; // [rsp+68h] [rbp-31h]
  struct IUnknown *v30; // [rsp+70h] [rbp-29h]
  struct IAudioMediaType **v31; // [rsp+78h] [rbp-21h]
  __int64 v32; // [rsp+80h] [rbp-19h]
  _DWORD v33[6]; // [rsp+88h] [rbp-11h] BYREF
  GUID v34; // [rsp+A0h] [rbp+7h]

  v32 = -2LL;
  v30 = a4;
  v24 = a3;
  v29 = a1;
  v31 = a5;
  v6 = 0LL;
  v28 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v8 = 0LL;
  v25 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v10 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *, struct _GUID *))a4->lpVtbl[1].Release)(
                                        a4,
                                        a2);
  v11 = ValidateUncompressedWaveFormatEx(v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = v11 == 1;
    v14 = *((_DWORD *)v29 + v24 + 10)
        ? CEndpointCharacteristics::GetEndpointEffect(v29, 0, v24, 0LL, &v27, 0LL)
        : CEndpointCharacteristics::GetGfx(v29, v24, 0LL, &v27, (struct IAudioSystemEffects2 **)v22);
    v12 = v14;
    v7 = v27;
    if ( v14 >= 0 )
    {
      if ( v13 )
      {
        if ( !v27 )
        {
LABEL_8:
          v12 = -2004287480;
          goto LABEL_47;
        }
        pv = 0LL;
        if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IUnknown *, LPVOID *))v27->lpVtbl->IsOutputFormatSupported)(
               v27,
               0LL,
               a4,
               &pv) )
        {
          v12 = -2004287480;
          goto LABEL_11;
        }
        v33[0] = 196606;
        v33[1] = *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4) + 4);
        v33[3] = 2097160;
        v33[2] = 8 * *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4) + 4);
        v33[4] = 2097174;
        v33[5] = 3;
        v34 = GUID_00000003_0000_0010_8000_00aa00389b71;
        v12 = CAudioMediaType::Create((const struct tWAVEFORMATEX *)v33, 0x28u, (struct IAudioMediaType **)&v25, 0.0);
        if ( v12 < 0 )
        {
          if ( pv )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
          v8 = v25;
          goto LABEL_46;
        }
        ATL::AtlComPtrAssign(&v26, a4);
        if ( pv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
        v8 = v25;
        v9 = v26;
      }
      else
      {
        pv = 0LL;
        v15 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4);
        if ( (int)CloneWaveFormat(v15, (struct tWAVEFORMATEX **)&pv) < 0 )
        {
          v12 = -2004287480;
          CoTaskMemFree(pv);
          pv = 0LL;
          v7 = v27;
          goto LABEL_47;
        }
        v16 = (struct tWAVEFORMATEX *)pv;
        ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
        v12 = CAudioMediaType::Create(v16, (unsigned int)v16->cbSize + 18, (struct IAudioMediaType **)&v26, 0.0);
        if ( v12 < 0 )
        {
          CoTaskMemFree(v16);
          pv = 0LL;
          v9 = v26;
          goto LABEL_46;
        }
        v9 = v26;
        if ( v26 )
        {
          ATL::AtlComPtrAssign(&v25, v26);
          v8 = v25;
        }
        CoTaskMemFree(v16);
        pv = 0LL;
      }
      if ( v7 )
      {
        v24 = eHostProcessConnector;
        pv = 0LL;
        lpVtbl = v7->lpVtbl;
        if ( *((_DWORD *)v29 + 93) )
          v18 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, struct IUnknown *, LPVOID *))lpVtbl->IsOutputFormatSupported)(
                  v7,
                  v9,
                  v8,
                  &pv);
        else
          v18 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, struct IUnknown *, LPVOID *))lpVtbl->IsInputFormatSupported)(
                  v7,
                  v9,
                  v8,
                  &pv);
        if ( v18 < 0
          || (*(int (__fastcall **)(LPVOID, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *))(*(_QWORD *)pv + 24LL))(
               pv,
               &v24) < 0
          || v24 )
        {
          v12 = -2004287480;
LABEL_11:
          if ( pv )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
          goto LABEL_47;
        }
        if ( pv )
        {
          ATL::AtlComPtrAssign(&v28, (struct IUnknown *)pv);
          v6 = (struct IAudioMediaType *)v28;
        }
        if ( pv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
      }
      else if ( v8 )
      {
        ATL::AtlComPtrAssign(&v28, v8);
        v6 = (struct IAudioMediaType *)v28;
      }
      v12 = ValidateAPOInputFormat(v6);
      if ( v12 < 0 )
        goto LABEL_47;
      if ( !*((_DWORD *)v29 + 93) )
      {
        v19 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v6->lpVtbl->GetAudioFormat)(v6);
        if ( *(_DWORD *)(v19 + 4) != *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))v30->lpVtbl[1].Release)(v30)
                                               + 4) )
          goto LABEL_8;
      }
      v20 = v6;
      v6 = 0LL;
      v28 = 0LL;
      *v31 = v20;
LABEL_46:
      if ( v12 >= 0 )
        goto LABEL_51;
    }
  }
LABEL_47:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v12);
  }
LABEL_51:
  if ( v9 )
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  if ( v7 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v7->lpVtbl->Release)(v7);
  if ( v6 )
    ((void (__fastcall *)(struct IAudioMediaType *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v12;
}
