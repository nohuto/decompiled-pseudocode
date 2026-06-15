/*
 * XREFs of ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180069398
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180006E00 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180022B30 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180072670 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800731C0 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001A7C0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001AF20 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B720 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180020B70 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180067EC0 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800699E8 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180069B84 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A020 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DeriveConnectorFormatFromStreamFormat(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct _GUID *a6,
        int a7,
        struct tWAVEFORMATEX **a8)
{
  CEndpointCharacteristics *v11; // rdi
  struct tWAVEFORMATEX *v12; // r13
  int (*v13)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // eax
  struct tWAVEFORMATEX *v15; // rbx
  int v16; // r15d
  void *v17; // rsi
  struct _GUID *v18; // rdx
  __int64 v19; // rax
  struct tWAVEFORMATEX *v20; // rbx
  __int64 v21; // rax
  struct tWAVEFORMATEX *v22; // rdi
  struct IAudioMediaType *v23; // r14
  struct tWAVEFORMATEX *v24; // rax
  int v25; // eax
  const struct tWAVEFORMATEX *v26; // rax
  struct tWAVEFORMATEX *v27; // r15
  DWORD nSamplesPerSec; // ecx
  struct tWAVEFORMATEX *v29; // r14
  struct _GUID *v30; // rdx
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  struct IAudioMediaType *v32; // rbx
  struct IAudioMediaTypeVtbl *v33; // rax
  struct IAudioMediaType *v34; // rdi
  __int64 v35; // rax
  __int64 *v36; // r12
  struct tWAVEFORMATEX *v37; // rax
  const struct tWAVEFORMATEX *v38; // rax
  unsigned int v39; // ebx
  LPVOID pv; // [rsp+48h] [rbp-69h] BYREF
  struct tWAVEFORMATEX *v42; // [rsp+50h] [rbp-61h] BYREF
  struct tWAVEFORMATEX *Src[2]; // [rsp+58h] [rbp-59h] BYREF
  struct _GUID v44; // [rsp+68h] [rbp-49h] BYREF
  struct tWAVEFORMATEX *v45; // [rsp+78h] [rbp-39h] BYREF
  struct IAudioMediaType *v46; // [rsp+80h] [rbp-31h] BYREF
  struct tWAVEFORMATEX *v47; // [rsp+88h] [rbp-29h] BYREF
  struct IAudioMediaType *v48; // [rsp+90h] [rbp-21h] BYREF
  struct _GUID v49; // [rsp+98h] [rbp-19h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-9h]

  v50 = -2LL;
  v11 = this;
  v12 = 0LL;
  v47 = 0LL;
  *a8 = 0LL;
  v45 = 0LL;
  if ( (int)CloneWaveFormat(a3, &v45) >= 0 )
  {
    v44 = *a4;
    MixFormat = CEndpointCharacteristics::GetMixFormat(v11, a2, &v44, v13, &v47);
    v12 = v47;
    if ( MixFormat >= 0 )
    {
      v44 = *a5;
      v15 = v45;
      if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(v11, &v44, a2, v47, v45, 0LL) )
      {
        v44 = *a6;
        GetDeviceDefaults(v11, a2, &v44, a8, 0LL, 0LL, 0LL);
        goto LABEL_63;
      }
      if ( !a7 )
        goto LABEL_63;
      pv = 0LL;
      v44 = *a6;
      v16 = DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(v11, a2, a3, &v44, (struct tWAVEFORMATEX **)&pv);
      v17 = pv;
      if ( v16 >= 0 )
      {
        Src[0] = 0LL;
        v42 = 0LL;
        v46 = 0LL;
        if ( (int)CAudioMediaType::Create(
                    (const struct tWAVEFORMATEX *)pv,
                    (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                    (struct IAudioMediaType **)Src,
                    0.0) < 0 )
        {
          if ( !Src[0] )
          {
LABEL_11:
            CoTaskMemFree(v17);
            pv = 0LL;
            goto LABEL_63;
          }
          v19 = *(_QWORD *)Src[0];
LABEL_10:
          (*(void (**)(void))(v19 + 16))();
          goto LABEL_11;
        }
        v49 = *a5;
        v20 = Src[0];
        if ( (int)DeriveDevicePipeFormatFromConnectorFormat(
                    v11,
                    v18,
                    a2,
                    (struct IAudioMediaType *)Src[0],
                    (struct IAudioMediaType **)&v42) < 0 )
        {
          if ( !v42 )
            goto LABEL_16;
          v21 = *(_QWORD *)&v42->wFormatTag;
          goto LABEL_15;
        }
        v44 = *a5;
        v22 = v42;
        if ( DeriveMixFormatFromDevicePipeFormat(this, &v44, a2, (struct IAudioMediaType *)v42, &v46) < 0 )
        {
          if ( v46 )
            ((void (__fastcall *)(struct IAudioMediaType *))v46->lpVtbl->Release)(v46);
          goto LABEL_21;
        }
        v44 = *a5;
        v23 = v46;
        v24 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v46->lpVtbl->GetAudioFormat)(v46);
        v25 = IsStreamFormatSupportedForMixFormat(this, &v44, a2, v24, a3, 0LL);
        v16 = v25;
        if ( v25 < 0 )
        {
          ((void (__fastcall *)(struct IAudioMediaType *))v23->lpVtbl->Release)(v23);
LABEL_21:
          if ( !v22 )
          {
LABEL_16:
            if ( !v20 )
              goto LABEL_11;
            goto LABEL_17;
          }
          v21 = *(_QWORD *)&v22->wFormatTag;
LABEL_15:
          (*(void (**)(void))(v21 + 16))();
          goto LABEL_16;
        }
        if ( !v25 )
        {
          v26 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v20->wFormatTag
                                                                                                + 40LL))(v20);
          CloneWaveFormat(v26, a8);
          ((void (__fastcall *)(struct IAudioMediaType *))v23->lpVtbl->Release)(v23);
          if ( v22 )
            (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v22->wFormatTag + 16LL))(v22);
LABEL_17:
          v19 = *(_QWORD *)&v20->wFormatTag;
          goto LABEL_10;
        }
        ((void (__fastcall *)(struct IAudioMediaType *))v23->lpVtbl->Release)(v23);
        if ( v22 )
          (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v22->wFormatTag + 16LL))(v22);
        if ( v20 )
          (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v20->wFormatTag + 16LL))(v20);
        v15 = v45;
        v11 = this;
      }
      if ( v16 != -2004287480 )
        goto LABEL_11;
      Src[0] = 0LL;
      v44 = *a6;
      GetDeviceDefaults(v11, a2, &v44, Src, 0LL, 0LL, 0LL);
      v27 = Src[0];
      if ( v15->nSamplesPerSec == Src[0]->nSamplesPerSec )
      {
LABEL_39:
        CoTaskMemFree(v27);
        Src[0] = 0LL;
        goto LABEL_11;
      }
      v42 = 0LL;
      if ( (int)CloneWaveFormat(Src[0], &v42) < 0 )
      {
        CoTaskMemFree(v42);
LABEL_38:
        v42 = 0LL;
        goto LABEL_39;
      }
      nSamplesPerSec = v15->nSamplesPerSec;
      v29 = v42;
      v42->nSamplesPerSec = nSamplesPerSec;
      v29->nAvgBytesPerSec = nSamplesPerSec * v29->nBlockAlign;
      v44 = *a6;
      if ( (int)ConnectorSupportsFormat(v11, (unsigned int)a2, v29, &v44) < 0 )
        goto LABEL_45;
      v46 = 0LL;
      v48 = 0LL;
      *(_QWORD *)&v44.Data1 = 0LL;
      if ( (int)CAudioMediaType::Create(v29, (unsigned int)v29->cbSize + 18, &v46, 0.0) < 0 )
      {
        if ( v46 )
        {
          lpVtbl = v46->lpVtbl;
LABEL_44:
          ((void (*)(void))lpVtbl->Release)();
        }
LABEL_45:
        CoTaskMemFree(v29);
        goto LABEL_38;
      }
      v49 = *a5;
      v32 = v46;
      if ( (int)DeriveDevicePipeFormatFromConnectorFormat(v11, v30, a2, v46, &v48) < 0 )
      {
        if ( !v48 )
          goto LABEL_50;
        v33 = v48->lpVtbl;
        goto LABEL_49;
      }
      v49 = *a5;
      v34 = v48;
      if ( DeriveMixFormatFromDevicePipeFormat(this, &v49, a2, v48, (struct IAudioMediaType **)&v44) >= 0 )
      {
        v49 = *a5;
        v36 = *(__int64 **)&v44.Data1;
        v37 = (struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v44.Data1 + 40LL))(*(_QWORD *)&v44.Data1);
        if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(this, &v49, a2, v37, v45, 0LL) )
        {
          v38 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v32->lpVtbl->GetAudioFormat)(v32);
          CloneWaveFormat(v38, a8);
          (*(void (__fastcall **)(__int64 *))(*v36 + 16))(v36);
          if ( v34 )
            ((void (__fastcall *)(struct IAudioMediaType *))v34->lpVtbl->Release)(v34);
LABEL_51:
          lpVtbl = v32->lpVtbl;
          goto LABEL_44;
        }
        v35 = *v36;
      }
      else
      {
        if ( !*(_QWORD *)&v44.Data1 )
        {
LABEL_56:
          if ( !v34 )
          {
LABEL_50:
            if ( !v32 )
              goto LABEL_45;
            goto LABEL_51;
          }
          v33 = v34->lpVtbl;
LABEL_49:
          ((void (*)(void))v33->Release)();
          goto LABEL_50;
        }
        v35 = **(_QWORD **)&v44.Data1;
      }
      (*(void (**)(void))(v35 + 16))();
      goto LABEL_56;
    }
  }
LABEL_63:
  v39 = *a8 == 0LL ? 0x88890008 : 0;
  CoTaskMemFree(v45);
  v45 = 0LL;
  CoTaskMemFree(v12);
  return v39;
}
