/*
 * XREFs of ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180080A50
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180010180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180089190 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180089FA0 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180010630 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x180020DE0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800210E0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x18007FCE0 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x180081110 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180081298 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800817E0 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DeriveConnectorFormatFromStreamFormat(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct _GUID *a6,
        int a7,
        struct tWAVEFORMATEX **a8)
{
  struct CEndpointCharacteristics *v11; // rdi
  struct tWAVEFORMATEX *v12; // r13
  int MixFormatInternal; // eax
  struct tWAVEFORMATEX **v14; // rbx
  struct _GUID *v15; // r15
  int v16; // eax
  struct tWAVEFORMATEX *v17; // rsi
  struct _GUID *v18; // rdx
  struct tWAVEFORMATEX *v19; // rbx
  struct IAudioMediaType *v20; // rdi
  struct IAudioMediaType *v21; // r14
  struct tWAVEFORMATEX *v22; // rax
  int v23; // eax
  const struct tWAVEFORMATEX *v24; // rax
  struct tWAVEFORMATEX *v25; // r15
  struct _GUID *v26; // r9
  void *v27; // rcx
  int v28; // ecx
  struct tWAVEFORMATEX *v29; // r14
  struct _GUID *v30; // rdx
  struct IAudioMediaType *v31; // rbx
  struct IAudioMediaType *v32; // rdi
  struct IAudioMediaType *v33; // r12
  struct IAudioMediaType *v34; // r12
  struct tWAVEFORMATEX *v35; // rax
  const struct tWAVEFORMATEX *v36; // rax
  unsigned int v37; // ebx
  struct tWAVEFORMATEX *v39; // [rsp+48h] [rbp-79h] BYREF
  struct tWAVEFORMATEX *Src; // [rsp+50h] [rbp-71h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-69h] BYREF
  struct _GUID v42; // [rsp+68h] [rbp-59h] BYREF
  struct IAudioMediaType *v43; // [rsp+78h] [rbp-49h] BYREF
  struct tWAVEFORMATEX **v44; // [rsp+80h] [rbp-41h] BYREF
  struct IAudioMediaType *v45; // [rsp+88h] [rbp-39h] BYREF
  struct IAudioMediaType *Release; // [rsp+90h] [rbp-31h] BYREF
  struct tWAVEFORMATEX *v47; // [rsp+98h] [rbp-29h] BYREF
  struct _GUID v48; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-9h]

  v49 = -2LL;
  v11 = a1;
  v12 = 0LL;
  v47 = 0LL;
  *a8 = 0LL;
  v44 = 0LL;
  if ( (int)CloneWaveFormat(a3, (struct tWAVEFORMATEX **)&v44) >= 0 )
  {
    v42 = *a4;
    MixFormatInternal = CPolicyConfig::GetMixFormatInternal(g_PolicyConfig, v11, a2, &v42, &v47);
    v12 = v47;
    if ( MixFormatInternal >= 0 )
    {
      v42 = *a5;
      v14 = v44;
      if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(
                            (struct IAudioMediaType *)v11,
                            &v42,
                            a2,
                            v47,
                            (struct tWAVEFORMATEX *)v44,
                            0LL) )
      {
        v42 = *a6;
        GetDeviceDefaults(v11, a2, &v42, a8, 0LL, 0LL, 0LL);
        goto LABEL_55;
      }
      if ( !a7 )
        goto LABEL_55;
      v39 = 0LL;
      v15 = a6;
      v42 = *a6;
      v16 = DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(v11, a2, a3, &v42, &v39);
      v17 = v39;
      if ( v16 >= 0 )
      {
        Src = 0LL;
        v43 = 0LL;
        v45 = 0LL;
        if ( (int)CAudioMediaType::Create(v39, (unsigned int)v39->cbSize + 18, (struct IAudioMediaType **)&Src, 0.0) < 0 )
        {
          v19 = Src;
          goto LABEL_9;
        }
        v48 = *a5;
        v19 = Src;
        if ( DeriveDevicePipeFormatFromConnectorFormat(v11, v18, a2, (struct IAudioMediaType *)Src, &v43) < 0 )
        {
          v20 = v43;
          goto LABEL_13;
        }
        v42 = *a5;
        v20 = v43;
        if ( DeriveMixFormatFromDevicePipeFormat(a1, &v42, a2, v43, &v45) < 0 )
        {
          v21 = v45;
          if ( !v45 )
            goto LABEL_13;
          goto LABEL_18;
        }
        v42 = *a5;
        v21 = v45;
        v22 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v45->lpVtbl->GetAudioFormat)(v45);
        v23 = IsStreamFormatSupportedForMixFormat((struct IAudioMediaType *)a1, &v42, a2, v22, a3, 0LL);
        LODWORD(pv) = v23;
        if ( v23 < 0 )
        {
LABEL_18:
          ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
LABEL_13:
          if ( v20 )
            ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
LABEL_9:
          if ( !v19 )
          {
LABEL_54:
            CoTaskMemFree(v17);
            v39 = 0LL;
            goto LABEL_55;
          }
LABEL_10:
          (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v19->wFormatTag + 16LL))(v19);
          goto LABEL_54;
        }
        if ( !v23 )
        {
          v24 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v19->wFormatTag
                                                                                                + 40LL))(v19);
          CloneWaveFormat(v24, a8);
          ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
          if ( v20 )
            ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
          goto LABEL_10;
        }
        ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
        if ( v20 )
          ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
        if ( v19 )
          (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v19->wFormatTag + 16LL))(v19);
        v15 = a6;
        v16 = (int)pv;
        v11 = a1;
        v14 = v44;
      }
      if ( v16 != -2004287480 )
        goto LABEL_54;
      Src = 0LL;
      v42 = *v15;
      GetDeviceDefaults(v11, a2, &v42, &Src, 0LL, 0LL, 0LL);
      v25 = Src;
      if ( *((_DWORD *)v14 + 1) == Src->nSamplesPerSec )
      {
LABEL_53:
        CoTaskMemFree(v25);
        Src = 0LL;
        goto LABEL_54;
      }
      pv = 0LL;
      if ( (int)CloneWaveFormat(Src, (struct tWAVEFORMATEX **)&pv) < 0 )
      {
        v27 = pv;
LABEL_52:
        CoTaskMemFree(v27);
        pv = 0LL;
        goto LABEL_53;
      }
      v28 = *((_DWORD *)v14 + 1);
      v29 = (struct tWAVEFORMATEX *)pv;
      *((_DWORD *)pv + 1) = v28;
      v29->nAvgBytesPerSec = v28 * v29->nBlockAlign;
      v48 = *a6;
      if ( (int)ConnectorSupportsFormat(v11, (unsigned int)a2, v29, v26) >= 0 )
      {
        v45 = 0LL;
        v43 = 0LL;
        Release = 0LL;
        if ( (int)CAudioMediaType::Create(v29, (unsigned int)v29->cbSize + 18, &v45, 0.0) >= 0 )
        {
          v48 = *a5;
          v31 = v45;
          if ( DeriveDevicePipeFormatFromConnectorFormat(v11, v30, a2, v45, &v43) >= 0 )
          {
            v42 = *a5;
            v32 = v43;
            if ( DeriveMixFormatFromDevicePipeFormat(a1, &v42, a2, v43, &Release) >= 0 )
            {
              v48 = *a5;
              v34 = Release;
              *(_QWORD *)&v42.Data1 = Release->lpVtbl->GetAudioFormat;
              v35 = (struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct IAudioMediaType *))&v42.Data1)(Release);
              if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(
                                    (struct IAudioMediaType *)a1,
                                    &v48,
                                    a2,
                                    v35,
                                    (struct tWAVEFORMATEX *)v44,
                                    0LL) )
              {
                *(_QWORD *)&v42.Data1 = v31->lpVtbl->GetAudioFormat;
                v36 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct IAudioMediaType *))&v42.Data1)(v31);
                CloneWaveFormat(v36, a8);
                *(_QWORD *)&v42.Data1 = v34->lpVtbl->Release;
                (*(void (__fastcall **)(struct IAudioMediaType *))&v42.Data1)(v34);
                if ( v32 )
                  ((void (__fastcall *)(struct IAudioMediaType *))v32->lpVtbl->Release)(v32);
                goto LABEL_50;
              }
              *(_QWORD *)&v42.Data1 = v34->lpVtbl->Release;
              (*(void (__fastcall **)(struct IAudioMediaType *))&v42.Data1)(v34);
            }
            else
            {
              v33 = Release;
              if ( Release )
              {
                Release = (struct IAudioMediaType *)Release->lpVtbl->Release;
                ((void (__fastcall *)(struct IAudioMediaType *))Release)(v33);
              }
            }
          }
          else
          {
            v32 = v43;
          }
          if ( v32 )
            ((void (__fastcall *)(struct IAudioMediaType *))v32->lpVtbl->Release)(v32);
        }
        else
        {
          v31 = v45;
        }
        if ( v31 )
LABEL_50:
          ((void (__fastcall *)(struct IAudioMediaType *))v31->lpVtbl->Release)(v31);
      }
      v27 = v29;
      goto LABEL_52;
    }
  }
LABEL_55:
  v37 = *a8 == 0LL ? 0x88890008 : 0;
  CoTaskMemFree(v44);
  v44 = 0LL;
  CoTaskMemFree(v12);
  return v37;
}
