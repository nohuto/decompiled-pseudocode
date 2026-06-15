/*
 * XREFs of ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180030080
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180092768 (-RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001EA40 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F1A0 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180021740 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180024AB0 (-GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800307FC (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800330E8 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180033FFC (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180034BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18008553C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x18008A5A8 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x18008B984 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DeriveDeviceGraphFormatsForStream(
        struct CEndpointCharacteristics *a1,
        char a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        enum _AUDCLNT_SHAREMODE a4,
        struct _GUID *a5,
        struct _GUID *a6,
        struct _GUID *a7,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a9,
        struct tWAVEFORMATEX **a10,
        struct tWAVEFORMATEX **a11)
{
  struct tWAVEFORMATEX **v14; // rdi
  signed int DeviceDefaults; // r14d
  __int64 v16; // rcx
  struct IMMDevice *v17; // rdi
  struct tWAVEFORMATEX *v18; // rax
  struct tWAVEFORMATEX *v19; // rax
  struct tWAVEFORMATEX *v20; // rax
  CAudioMediaType *v22; // rdi
  CAudioMediaType *v23; // rbx
  struct _GUID *v24; // rdx
  CAudioMediaType *v25; // rsi
  struct _GUID *v26; // rdi
  const struct tWAVEFORMATEX *v27; // rax
  const struct tWAVEFORMATEX *v28; // rax
  __int64 (__fastcall *v29)(CAudioMediaType *); // r15
  __int64 (__fastcall *v30)(CAudioMediaType *); // rbx
  __int64 (__fastcall *v31)(CAudioMediaType *); // rbx
  struct IMMDevice *v32; // rbx
  const struct tWAVEFORMATEX *v33; // rdi
  struct tWAVEFORMATEX *v34; // [rsp+40h] [rbp-69h] BYREF
  struct tWAVEFORMATEX **v35; // [rsp+48h] [rbp-61h]
  struct tWAVEFORMATEX *v36; // [rsp+50h] [rbp-59h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-51h] BYREF
  struct _GUID v38; // [rsp+60h] [rbp-49h] BYREF
  struct _GUID v39; // [rsp+70h] [rbp-39h] BYREF
  struct _GUID v40; // [rsp+80h] [rbp-29h] BYREF
  struct _GUID v41; // [rsp+90h] [rbp-19h] BYREF
  struct tWAVEFORMATEX **v42; // [rsp+A0h] [rbp-9h]
  __int64 v43; // [rsp+A8h] [rbp-1h]

  v43 = -2LL;
  *(_QWORD *)&v38.Data1 = a6;
  *(_QWORD *)&v40.Data1 = Src;
  v14 = a10;
  v35 = a10;
  v42 = a11;
  v34 = 0LL;
  v36 = 0LL;
  pv = 0LL;
  if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE || a3 == eOffloadConnector )
  {
    DeviceDefaults = CloneWaveFormat(Src, &v36);
    if ( DeviceDefaults < 0 )
      goto LABEL_13;
    *(_QWORD *)&v38.Data1 = 0LL;
    v32 = (struct IMMDevice *)*((_QWORD *)a1 + 2);
    *(_QWORD *)&v38.Data1 = v32;
    ((void (__fastcall *)(struct IMMDevice *))v32->lpVtbl->AddRef)(v32);
    v33 = *(const struct tWAVEFORMATEX **)&v40.Data1;
    if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE
      && (unsigned int)IsSPDIFFormat(*(const struct tWAVEFORMATEX **)&v40.Data1)
      && (unsigned int)IsSPDIFEndpoint(v32) )
    {
      DeviceDefaults = GetAcceptableSPDIFTypeForDevice(v32, v33, &v34, 0) != 0 ? 0x88890008 : 0;
    }
    else
    {
      DeviceDefaults = CloneWaveFormat(v33, &v34);
    }
    if ( v32 )
      ((void (__fastcall *)(struct IMMDevice *))v32->lpVtbl->Release)(v32);
    goto LABEL_10;
  }
  if ( a2 )
  {
    v40 = *a7;
    v39 = *a6;
    v41 = *a5;
    DeviceDefaults = DeriveConnectorFormatFromStreamFormat(a1, a3, Src, &v41, &v39, &v40, 1, &v34);
    if ( DeviceDefaults < 0 )
      goto LABEL_13;
    *(_QWORD *)&v40.Data1 = 0LL;
    v22 = 0LL;
    *(_QWORD *)&v39.Data1 = 0LL;
    v23 = 0LL;
    *(_QWORD *)&v41.Data1 = 0LL;
    DeviceDefaults = CAudioMediaType::Create(v34, (unsigned int)v34->cbSize + 18, (struct IAudioMediaType **)&v40, 0.0);
    v25 = *(CAudioMediaType **)&v40.Data1;
    if ( DeviceDefaults >= 0 )
    {
      v26 = *(struct _GUID **)&v38.Data1;
      v38 = *(struct _GUID *)*(_QWORD *)&v38.Data1;
      DeviceDefaults = DeriveDevicePipeFormatFromConnectorFormat(
                         a1,
                         v24,
                         a3,
                         *(struct IAudioMediaType **)&v40.Data1,
                         (struct IAudioMediaType **)&v39);
      if ( DeviceDefaults < 0 )
      {
        v22 = *(CAudioMediaType **)&v39.Data1;
      }
      else
      {
        v38 = *v26;
        v22 = *(CAudioMediaType **)&v39.Data1;
        DeviceDefaults = DeriveMixFormatFromDevicePipeFormat(
                           a1,
                           &v38,
                           a3,
                           *(struct IAudioMediaType **)&v39.Data1,
                           (struct IAudioMediaType **)&v41);
        if ( DeviceDefaults < 0 )
        {
          v23 = *(CAudioMediaType **)&v41.Data1;
        }
        else
        {
          v27 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v22 + 40LL))(v22);
          DeviceDefaults = CloneWaveFormat(v27, &v36);
          v23 = *(CAudioMediaType **)&v41.Data1;
          if ( DeviceDefaults >= 0 )
          {
            v28 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v41.Data1 + 40LL))(*(_QWORD *)&v41.Data1);
            DeviceDefaults = CloneWaveFormat(v28, (struct tWAVEFORMATEX **)&pv);
          }
        }
      }
    }
    if ( v23 )
    {
      v29 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v23 + 16LL);
      if ( v29 == CAudioMediaType::Release )
        CAudioMediaType::Release(v23);
      else
        v29(v23);
    }
    if ( v22 )
    {
      v30 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v22 + 16LL);
      if ( v30 == CAudioMediaType::Release )
        CAudioMediaType::Release(v22);
      else
        v30(v22);
    }
    if ( v25 )
    {
      v31 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v25 + 16LL);
      if ( v31 == CAudioMediaType::Release )
        CAudioMediaType::Release(v25);
      else
        v31(v25);
    }
    goto LABEL_10;
  }
  v38 = *a7;
  DeviceDefaults = CSaProvider::GetDeviceDefaults(a1, a3, &v38, &v34, &v36, 0LL, 0LL);
  if ( DeviceDefaults < 0 )
    goto LABEL_13;
  v16 = *(_QWORD *)&a7->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *(_QWORD *)&a7->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v16 = *(_QWORD *)a7->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  if ( !v16 )
  {
    *(_QWORD *)&v39.Data1 = 0LL;
    v17 = (struct IMMDevice *)*((_QWORD *)a1 + 2);
    *(_QWORD *)&v39.Data1 = v17;
    ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->AddRef)(v17);
    v38 = *a5;
    DeviceDefaults = CPolicyConfig::GetMixFormatInternal(g_PolicyConfig, v17, a3, &v38, (struct tWAVEFORMATEX **)&pv);
    if ( v17 )
    {
      *(_QWORD *)&v39.Data1 = 0LL;
      ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->Release)(v17);
    }
LABEL_10:
    v14 = v35;
  }
  if ( DeviceDefaults >= 0 )
  {
    v18 = v34;
    v34 = 0LL;
    *v42 = v18;
    v19 = v36;
    v36 = 0LL;
    *v14 = v19;
    v20 = (struct tWAVEFORMATEX *)pv;
    pv = 0LL;
    *a9 = v20;
  }
LABEL_13:
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v36);
  v36 = 0LL;
  CoTaskMemFree(v34);
  v34 = 0LL;
  return (unsigned int)DeviceDefaults;
}
