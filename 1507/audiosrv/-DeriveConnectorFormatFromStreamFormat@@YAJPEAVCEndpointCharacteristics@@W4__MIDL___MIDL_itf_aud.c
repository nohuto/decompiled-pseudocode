/*
 * XREFs of ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18008553C
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180022F00 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180030080 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008C790 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x18008D670 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001EA40 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F1A0 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180020DA0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180021740 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180024AB0 (-GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800330E8 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180033FFC (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180034BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180084F28 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x180085E80 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall DeriveConnectorFormatFromStreamFormat(
        struct IMMDevice **a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct _GUID *a6,
        int a7,
        struct tWAVEFORMATEX **a8)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v10; // edi
  struct CEndpointCharacteristics *v11; // r15
  struct IMMDevice *v12; // r12
  struct tWAVEFORMATEX **v13; // rbx
  struct _GUID *v14; // r13
  int v15; // eax
  struct tWAVEFORMATEX *v16; // r14
  struct _GUID *v17; // rdx
  CAudioMediaType *v18; // rbx
  __int64 (__fastcall *v19)(CAudioMediaType *); // rdi
  bool v20; // zf
  ULONG (__stdcall *Release)(IAudioMediaType *); // rsi
  CAudioMediaType *v22; // rdi
  CAudioMediaType *v23; // rsi
  __int64 (__fastcall *v24)(CAudioMediaType *); // r13
  __int64 (__fastcall *v25)(CAudioMediaType *); // rsi
  const struct tWAVEFORMATEX *v26; // rax
  int v27; // eax
  const struct tWAVEFORMATEX *v28; // rax
  __int64 (__fastcall *v29)(CAudioMediaType *); // r13
  __int64 (__fastcall *v30)(CAudioMediaType *); // rsi
  __int64 (__fastcall *v31)(CAudioMediaType *); // r13
  __int64 (__fastcall *v32)(CAudioMediaType *); // r13
  __int64 (__fastcall *v33)(CAudioMediaType *); // rdi
  struct tWAVEFORMATEX *v34; // r13
  struct _GUID *v35; // r9
  void *v36; // rcx
  int v37; // ecx
  struct tWAVEFORMATEX *v38; // r15
  struct _GUID *v39; // rdx
  CAudioMediaType *v40; // rbx
  CAudioMediaType *v41; // rdi
  CAudioMediaType *v42; // rsi
  const struct tWAVEFORMATEX *v43; // rax
  int v44; // eax
  const struct tWAVEFORMATEX *v45; // rax
  __int64 (__fastcall *v46)(CAudioMediaType *); // rsi
  __int64 (__fastcall *v47)(CAudioMediaType *); // rdi
  bool v48; // zf
  unsigned int v49; // edi
  LPVOID pv; // [rsp+48h] [rbp-69h] BYREF
  struct tWAVEFORMATEX *v52; // [rsp+50h] [rbp-61h] BYREF
  struct tWAVEFORMATEX *Src; // [rsp+58h] [rbp-59h] BYREF
  struct tWAVEFORMATEX **v54; // [rsp+60h] [rbp-51h] BYREF
  struct _GUID v55; // [rsp+68h] [rbp-49h] BYREF
  struct IAudioMediaType *v56; // [rsp+78h] [rbp-39h] BYREF
  struct IAudioMediaType *v57; // [rsp+80h] [rbp-31h] BYREF
  struct tWAVEFORMATEX *v58; // [rsp+88h] [rbp-29h] BYREF
  struct IAudioMediaType *v59; // [rsp+90h] [rbp-21h] BYREF
  struct _GUID v60; // [rsp+98h] [rbp-19h] BYREF
  struct IMMDevice *v61; // [rsp+A8h] [rbp-9h]
  __int64 v62; // [rsp+B0h] [rbp-1h]
  ULONG (__stdcall *v64)(IAudioMediaType *); // [rsp+F8h] [rbp+47h]
  ULONG (__stdcall *v65)(IAudioMediaType *); // [rsp+F8h] [rbp+47h]
  __int64 (__fastcall *v66)(CAudioMediaType *); // [rsp+F8h] [rbp+47h]
  struct CEndpointCharacteristics *v67; // [rsp+F8h] [rbp+47h]
  struct CEndpointCharacteristics *v68; // [rsp+F8h] [rbp+47h]
  struct CEndpointCharacteristics *v69; // [rsp+F8h] [rbp+47h]

  v62 = -2LL;
  v10 = a2;
  v11 = (struct CEndpointCharacteristics *)a1;
  v61 = 0LL;
  v58 = 0LL;
  *a8 = 0LL;
  v12 = a1[2];
  v61 = v12;
  ((void (__fastcall *)(struct IMMDevice *))v12->lpVtbl->AddRef)(v12);
  v54 = 0LL;
  if ( (int)CloneWaveFormat(a3, (struct tWAVEFORMATEX **)&v54) >= 0 )
  {
    v55 = *a4;
    if ( (int)CPolicyConfig::GetMixFormatInternal(g_PolicyConfig, v12, v10, &v55, &v58) >= 0 )
    {
      v55 = *a5;
      v13 = v54;
      if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(v11, &v55, v10, v58, (struct tWAVEFORMATEX *)v54, 0LL) )
      {
        v55 = *a6;
        CSaProvider::GetDeviceDefaults(v11, v10, &v55, a8, 0LL, 0LL, 0LL);
        goto LABEL_104;
      }
      if ( a7 )
      {
        v52 = 0LL;
        v14 = a6;
        v55 = *a6;
        v15 = DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(v11, v10, a3, &v55, &v52);
        v16 = v52;
        if ( v15 >= 0 )
        {
          Src = 0LL;
          v56 = 0LL;
          v57 = 0LL;
          if ( (int)CAudioMediaType::Create(v52, (unsigned int)v52->cbSize + 18, (struct IAudioMediaType **)&Src, 0.0) < 0 )
          {
            v18 = (CAudioMediaType *)Src;
            if ( Src )
            {
              v19 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)&Src->wFormatTag + 16LL);
              v20 = v19 == CAudioMediaType::Release;
              goto LABEL_10;
            }
LABEL_103:
            CoTaskMemFree(v16);
            v52 = 0LL;
            goto LABEL_104;
          }
          v60 = *a5;
          v18 = (CAudioMediaType *)Src;
          if ( (int)DeriveDevicePipeFormatFromConnectorFormat(v11, v17, v10, (struct IAudioMediaType *)Src, &v56) < 0 )
          {
            if ( v56 )
            {
              Release = v56->lpVtbl->Release;
              if ( (char *)Release == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v56);
              else
                ((void (__fastcall *)(struct IAudioMediaType *))Release)(v56);
            }
            if ( !v18 )
              goto LABEL_103;
            v19 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v18 + 16LL);
            v20 = v19 == CAudioMediaType::Release;
            goto LABEL_10;
          }
          v55 = *a5;
          v22 = (CAudioMediaType *)v56;
          if ( (int)DeriveMixFormatFromDevicePipeFormat(v11, &v55, a2, (struct IUnknown *)v56, &v57) < 0 )
          {
            v23 = (CAudioMediaType *)v57;
            if ( !v57 )
              goto LABEL_25;
            goto LABEL_22;
          }
          v55 = *a5;
          v23 = (CAudioMediaType *)v57;
          v26 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->GetAudioFormat)(v57);
          v11 = (struct CEndpointCharacteristics *)a1;
          v27 = IsStreamFormatSupportedForMixFormat((struct CEndpointCharacteristics *)a1, &v55, a2, v26, a3, 0LL);
          LODWORD(pv) = v27;
          if ( v27 < 0 )
          {
LABEL_22:
            v24 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v23 + 16LL);
            if ( v24 == CAudioMediaType::Release )
              CAudioMediaType::Release(v23);
            else
              v24(v23);
LABEL_25:
            if ( v22 )
            {
              v25 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v22 + 16LL);
              if ( v25 == CAudioMediaType::Release )
                CAudioMediaType::Release(v22);
              else
                v25(v22);
            }
            if ( !v18 )
              goto LABEL_103;
            goto LABEL_30;
          }
          if ( !v27 )
          {
            v28 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v18 + 40LL))(v18);
            CloneWaveFormat(v28, a8);
            v29 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v23 + 16LL);
            if ( v29 == CAudioMediaType::Release )
              CAudioMediaType::Release(v23);
            else
              v29(v23);
            if ( v22 )
            {
              v30 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v22 + 16LL);
              if ( v30 == CAudioMediaType::Release )
                CAudioMediaType::Release(v22);
              else
                v30(v22);
            }
LABEL_30:
            v19 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v18 + 16LL);
            v20 = v19 == CAudioMediaType::Release;
LABEL_10:
            if ( v20 )
              CAudioMediaType::Release(v18);
            else
              v19(v18);
            goto LABEL_103;
          }
          v31 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v23 + 16LL);
          if ( v31 == CAudioMediaType::Release )
            CAudioMediaType::Release(v23);
          else
            v31(v23);
          if ( v22 )
          {
            v32 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v22 + 16LL);
            if ( v32 == CAudioMediaType::Release )
              CAudioMediaType::Release(v22);
            else
              v32(v22);
          }
          if ( v18 )
          {
            v33 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v18 + 16LL);
            if ( v33 == CAudioMediaType::Release )
              CAudioMediaType::Release(v18);
            else
              v33(v18);
          }
          v13 = v54;
          v10 = a2;
          v15 = (int)pv;
          v14 = a6;
        }
        if ( v15 != -2004287480 )
          goto LABEL_103;
        Src = 0LL;
        v55 = *v14;
        CSaProvider::GetDeviceDefaults(v11, v10, &v55, &Src, 0LL, 0LL, 0LL);
        v34 = Src;
        if ( *((_DWORD *)v13 + 1) == Src->nSamplesPerSec )
        {
LABEL_102:
          CoTaskMemFree(v34);
          Src = 0LL;
          goto LABEL_103;
        }
        pv = 0LL;
        if ( (int)CloneWaveFormat(Src, (struct tWAVEFORMATEX **)&pv) < 0 )
        {
          v36 = pv;
LABEL_101:
          CoTaskMemFree(v36);
          pv = 0LL;
          goto LABEL_102;
        }
        v37 = *((_DWORD *)v13 + 1);
        v38 = (struct tWAVEFORMATEX *)pv;
        *((_DWORD *)pv + 1) = v37;
        v38->nAvgBytesPerSec = v37 * v38->nBlockAlign;
        v60 = *a6;
        if ( (int)ConnectorSupportsFormat((struct CEndpointCharacteristics *)a1, (unsigned int)v10, v38, v35) < 0 )
          goto LABEL_100;
        v57 = 0LL;
        v56 = 0LL;
        v59 = 0LL;
        if ( (int)CAudioMediaType::Create(v38, (unsigned int)v38->cbSize + 18, &v57, 0.0) < 0 )
        {
          v40 = (CAudioMediaType *)v57;
          goto LABEL_95;
        }
        v60 = *a5;
        v40 = (CAudioMediaType *)v57;
        if ( (int)DeriveDevicePipeFormatFromConnectorFormat((struct CEndpointCharacteristics *)a1, v39, v10, v57, &v56) < 0 )
        {
          v41 = (CAudioMediaType *)v56;
          if ( !v56 )
            goto LABEL_95;
          v64 = v56->lpVtbl->Release;
          if ( (char *)v64 != (char *)CAudioMediaType::Release )
          {
            ((void (__fastcall *)(struct IAudioMediaType *))v64)(v56);
            goto LABEL_95;
          }
          goto LABEL_93;
        }
        v55 = *a5;
        v41 = (CAudioMediaType *)v56;
        if ( (int)DeriveMixFormatFromDevicePipeFormat(
                    (struct CEndpointCharacteristics *)a1,
                    &v55,
                    a2,
                    (struct IUnknown *)v56,
                    &v59) >= 0 )
        {
          v60 = *a5;
          v42 = (CAudioMediaType *)v59;
          *(_QWORD *)&v55.Data1 = v59->lpVtbl->GetAudioFormat;
          v43 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct IAudioMediaType *))&v55.Data1)(v59);
          v44 = IsStreamFormatSupportedForMixFormat(
                  (struct CEndpointCharacteristics *)a1,
                  &v60,
                  a2,
                  v43,
                  (struct tWAVEFORMATEX *)v54,
                  0LL);
          if ( v44 >= 0 )
          {
            if ( !v44 )
            {
              v45 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v40 + 40LL))(v40);
              CloneWaveFormat(v45, a8);
              v68 = *(struct CEndpointCharacteristics **)(*(_QWORD *)v42 + 16LL);
              if ( v68 == (struct CEndpointCharacteristics *)CAudioMediaType::Release )
                CAudioMediaType::Release(v42);
              else
                ((void (__fastcall *)(CAudioMediaType *))v68)(v42);
              if ( v41 )
              {
                v46 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v41 + 16LL);
                if ( v46 == CAudioMediaType::Release )
                  CAudioMediaType::Release(v41);
                else
                  v46(v41);
              }
              v47 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v40 + 16LL);
              v48 = v47 == CAudioMediaType::Release;
              goto LABEL_97;
            }
            v69 = *(struct CEndpointCharacteristics **)(*(_QWORD *)v42 + 16LL);
            if ( v69 == (struct CEndpointCharacteristics *)CAudioMediaType::Release )
              CAudioMediaType::Release(v42);
            else
              ((void (__fastcall *)(CAudioMediaType *))v69)(v42);
            if ( !v41 )
              goto LABEL_95;
            v66 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v41 + 16LL);
            if ( v66 != CAudioMediaType::Release )
              goto LABEL_94;
            goto LABEL_93;
          }
          v67 = *(struct CEndpointCharacteristics **)(*(_QWORD *)v42 + 16LL);
          if ( v67 == (struct CEndpointCharacteristics *)CAudioMediaType::Release )
            CAudioMediaType::Release(v42);
          else
            ((void (__fastcall *)(CAudioMediaType *))v67)(v42);
          if ( v41 )
          {
            v66 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v41 + 16LL);
            if ( v66 != CAudioMediaType::Release )
              goto LABEL_94;
            goto LABEL_93;
          }
        }
        else
        {
          if ( v59 )
          {
            v65 = v59->lpVtbl->Release;
            if ( (char *)v65 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v59);
            else
              ((void (__fastcall *)(struct IAudioMediaType *))v65)(v59);
          }
          if ( v41 )
          {
            v66 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v41 + 16LL);
            if ( v66 != CAudioMediaType::Release )
            {
LABEL_94:
              v66(v41);
              goto LABEL_95;
            }
LABEL_93:
            CAudioMediaType::Release(v41);
          }
        }
LABEL_95:
        if ( v40 )
        {
          v47 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v40 + 16LL);
          v48 = v47 == CAudioMediaType::Release;
LABEL_97:
          if ( v48 )
            CAudioMediaType::Release(v40);
          else
            v47(v40);
        }
LABEL_100:
        v36 = v38;
        goto LABEL_101;
      }
    }
  }
LABEL_104:
  v49 = *a8 == 0LL ? 0x88890008 : 0;
  CoTaskMemFree(v54);
  v54 = 0LL;
  CoTaskMemFree(v58);
  v58 = 0LL;
  if ( v12 )
    ((void (__fastcall *)(struct IMMDevice *))v12->lpVtbl->Release)(v12);
  return v49;
}
