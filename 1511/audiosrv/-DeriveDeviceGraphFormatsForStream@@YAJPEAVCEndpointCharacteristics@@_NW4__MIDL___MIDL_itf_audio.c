/*
 * XREFs of ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180010180
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008A60 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180090028 (-RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180010630 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x180020DE0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800380D0 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180080350 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180080A50 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180081298 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800817E0 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180081AB4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800877C8 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x180088608 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DeriveDeviceGraphFormatsForStream(
        struct CEndpointCharacteristics *a1,
        char a2,
        struct _GUID *a3,
        enum _AUDCLNT_SHAREMODE a4,
        struct _GUID *a5,
        struct _GUID *a6,
        struct _GUID *a7,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a9,
        struct tWAVEFORMATEX **a10,
        struct tWAVEFORMATEX **a11)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // r13d
  struct tWAVEFORMATEX **v13; // rsi
  struct tWAVEFORMATEX *v14; // rbx
  signed int DeviceDefaults; // r12d
  struct IMMDevice *v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rsi
  struct _GUID *v20; // rdx
  __int64 v21; // r14
  struct _GUID *v22; // rsi
  const struct tWAVEFORMATEX *v23; // rax
  const struct tWAVEFORMATEX *v24; // rax
  struct tWAVEFORMATEX *v25; // rax
  struct tWAVEFORMATEX *v26; // rax
  struct tWAVEFORMATEX *v27; // rax
  struct IAudioMediaType **v29; // [rsp+20h] [rbp-A9h]
  struct tWAVEFORMATEX *v30; // [rsp+40h] [rbp-89h] BYREF
  struct tWAVEFORMATEX *v31; // [rsp+48h] [rbp-81h] BYREF
  LPVOID pv[2]; // [rsp+50h] [rbp-79h] BYREF
  struct _GUID v33; // [rsp+60h] [rbp-69h] BYREF
  struct _GUID v34; // [rsp+70h] [rbp-59h] BYREF
  struct tWAVEFORMATEX **v35; // [rsp+80h] [rbp-49h]
  struct _GUID v36; // [rsp+90h] [rbp-39h] BYREF
  struct _GUID v37; // [rsp+A0h] [rbp-29h] BYREF
  struct tWAVEFORMATEX **v38; // [rsp+B0h] [rbp-19h]
  struct tWAVEFORMATEX **v39; // [rsp+B8h] [rbp-11h]
  __int64 v40; // [rsp+C0h] [rbp-9h]

  v40 = -2LL;
  v11 = (int)a3;
  *(_QWORD *)&v33.Data1 = a6;
  v13 = a9;
  v35 = a9;
  v39 = a10;
  v38 = a11;
  v30 = 0LL;
  pv[0] = 0LL;
  v14 = 0LL;
  v31 = 0LL;
  if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    DeviceDefaults = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)pv);
    if ( DeviceDefaults < 0 )
      goto LABEL_37;
    *(_QWORD *)&v36.Data1 = 0LL;
    v16 = (struct IMMDevice *)*((_QWORD *)a1 + 2);
    *(_QWORD *)&v36.Data1 = v16;
    ((void (__fastcall *)(struct IMMDevice *))v16->lpVtbl->AddRef)(v16);
    if ( (unsigned int)IsSPDIFFormat(Src) && (unsigned int)IsSPDIFEndpoint(v16) )
      DeviceDefaults = GetAcceptableSPDIFTypeForDevice(v16, Src, &v30, 0) != 0 ? 0x88890008 : 0;
    else
      DeviceDefaults = CloneWaveFormat(Src, &v30);
    if ( v16 )
      ((void (__fastcall *)(struct IMMDevice *))v16->lpVtbl->Release)(v16);
LABEL_34:
    v13 = v35;
    goto LABEL_35;
  }
  if ( (_DWORD)a3 != 1 )
  {
    if ( !a2 )
    {
      v33 = *a7;
      DeviceDefaults = GetDeviceDefaults(
                         a1,
                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                         &v33,
                         &v30,
                         (struct tWAVEFORMATEX **)pv,
                         0LL,
                         0LL);
      if ( DeviceDefaults < 0 )
        goto LABEL_37;
      if ( *(_QWORD *)&a7->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
        && *(_QWORD *)a7->Data4 == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
      {
        *(_QWORD *)&v34.Data1 = 0LL;
        v17 = *((_QWORD *)a1 + 2);
        *(_QWORD *)&v34.Data1 = v17;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        v33 = *a5;
        DeviceDefaults = CPolicyConfig::GetMixFormatInternal(g_PolicyConfig, a1, v11, &v33, &v31);
        if ( v17 )
        {
          *(_QWORD *)&v34.Data1 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        v14 = v31;
      }
      goto LABEL_35;
    }
    v36 = *a7;
    v34 = *a6;
    v37 = *a5;
    DeviceDefaults = DeriveConnectorFormatFromStreamFormat(
                       a1,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                       Src,
                       &v37,
                       &v34,
                       &v36,
                       1,
                       &v30);
    if ( DeviceDefaults < 0 )
      goto LABEL_37;
    v18 = 0LL;
    *(_QWORD *)&v36.Data1 = 0LL;
    v19 = 0LL;
    *(_QWORD *)&v34.Data1 = 0LL;
    *(_QWORD *)&v37.Data1 = 0LL;
    DeviceDefaults = CAudioMediaType::Create(v30, (unsigned int)v30->cbSize + 18, (struct IAudioMediaType **)&v36, 0.0);
    v21 = *(_QWORD *)&v36.Data1;
    if ( DeviceDefaults >= 0 )
    {
      v22 = *(struct _GUID **)&v33.Data1;
      v33 = *(struct _GUID *)*(_QWORD *)&v33.Data1;
      DeviceDefaults = DeriveDevicePipeFormatFromConnectorFormat(
                         a1,
                         v20,
                         v11,
                         *(struct IAudioMediaType **)&v36.Data1,
                         (struct IAudioMediaType **)&v34);
      if ( DeviceDefaults < 0 )
      {
        v19 = *(_QWORD *)&v34.Data1;
      }
      else
      {
        v33 = *v22;
        v19 = *(_QWORD *)&v34.Data1;
        DeviceDefaults = DeriveMixFormatFromDevicePipeFormat(
                           a1,
                           &v33,
                           v11,
                           *(struct IAudioMediaType **)&v34.Data1,
                           (struct IAudioMediaType **)&v37);
        if ( DeviceDefaults < 0 )
        {
          v18 = *(_QWORD *)&v37.Data1;
        }
        else
        {
          v23 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 40LL))(v19);
          DeviceDefaults = CloneWaveFormat(v23, (struct tWAVEFORMATEX **)pv);
          v18 = *(_QWORD *)&v37.Data1;
          if ( DeviceDefaults >= 0 )
          {
            v24 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v37.Data1 + 40LL))(*(_QWORD *)&v37.Data1);
            DeviceDefaults = CloneWaveFormat(v24, &v31);
            v14 = v31;
          }
        }
      }
    }
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    goto LABEL_34;
  }
  v36 = *a7;
  v33 = *a6;
  v34 = *a5;
  DeviceDefaults = DeriveOffloadConnectorFormatFromStreamFormat(a1, Src, a3, &v33, (struct _GUID *)v29, &v30);
  if ( DeviceDefaults < 0 )
    goto LABEL_37;
  DeviceDefaults = CloneWaveFormat(v30, &v31);
  v14 = v31;
  ConvertPCMWfxToIEEEFloat(v31);
  if ( DeviceDefaults < 0 )
    goto LABEL_37;
  DeviceDefaults = CloneWaveFormat(v14, (struct tWAVEFORMATEX **)pv);
LABEL_35:
  if ( DeviceDefaults >= 0 )
  {
    v25 = v30;
    v30 = 0LL;
    *v38 = v25;
    v26 = (struct tWAVEFORMATEX *)pv[0];
    pv[0] = 0LL;
    *v39 = v26;
    v27 = v14;
    v14 = 0LL;
    v31 = 0LL;
    *v13 = v27;
  }
LABEL_37:
  CoTaskMemFree(v14);
  v31 = 0LL;
  CoTaskMemFree(pv[0]);
  pv[0] = 0LL;
  CoTaskMemFree(v30);
  return (unsigned int)DeviceDefaults;
}
