/*
 * XREFs of ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180022B30
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180078130 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001AF20 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B720 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x18001E800 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180020B70 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18006857C (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180069398 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180069B84 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A020 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18006A298 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x180070F20 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x180071C90 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DeriveDeviceGraphFormatsForStream(
        struct CEndpointCharacteristics *this,
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
  struct tWAVEFORMATEX **v13; // rsi
  struct tWAVEFORMATEX **v14; // r14
  struct tWAVEFORMATEX *v15; // rbx
  signed int DeviceDefaults; // r15d
  __int64 v17; // rax
  __int64 v18; // rbx
  int (*v19)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct tWAVEFORMATEX *v20; // rax
  struct tWAVEFORMATEX *v21; // rax
  struct tWAVEFORMATEX *v22; // rax
  struct IMMDevice *v24; // rdi
  const struct tWAVEFORMATEX *v25; // r15
  __int64 v26; // rdi
  __int64 v27; // rsi
  struct _GUID *v28; // rdx
  __int64 v29; // r14
  struct _GUID *v30; // rsi
  const struct tWAVEFORMATEX *v31; // rax
  const struct tWAVEFORMATEX *v32; // rax
  struct tWAVEFORMATEX **v33; // [rsp+20h] [rbp-A9h]
  struct tWAVEFORMATEX *v34; // [rsp+40h] [rbp-89h] BYREF
  struct tWAVEFORMATEX *v35; // [rsp+48h] [rbp-81h] BYREF
  LPVOID pv[2]; // [rsp+50h] [rbp-79h] BYREF
  struct _GUID v37; // [rsp+60h] [rbp-69h] BYREF
  struct _GUID v38; // [rsp+70h] [rbp-59h] BYREF
  struct _GUID v39; // [rsp+80h] [rbp-49h] BYREF
  struct _GUID v40; // [rsp+90h] [rbp-39h] BYREF
  struct _GUID v41; // [rsp+A0h] [rbp-29h]
  struct _GUID v42; // [rsp+B0h] [rbp-19h]
  struct tWAVEFORMATEX **v43; // [rsp+C0h] [rbp-9h]
  __int64 v44; // [rsp+C8h] [rbp-1h]

  v44 = -2LL;
  *(_QWORD *)&v37.Data1 = a6;
  *(_QWORD *)&v40.Data1 = Src;
  v13 = a9;
  *(_QWORD *)&v42.Data1 = a9;
  v14 = a10;
  *(_QWORD *)&v41.Data1 = a10;
  v43 = a11;
  v34 = 0LL;
  pv[0] = 0LL;
  v15 = 0LL;
  v35 = 0LL;
  if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    DeviceDefaults = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)pv);
    if ( DeviceDefaults < 0 )
      goto LABEL_13;
    *(_QWORD *)&v41.Data1 = 0LL;
    v24 = (struct IMMDevice *)*((_QWORD *)this + 2);
    *(_QWORD *)&v41.Data1 = v24;
    ((void (__fastcall *)(struct IMMDevice *))v24->lpVtbl->AddRef)(v24);
    v25 = *(const struct tWAVEFORMATEX **)&v40.Data1;
    if ( IsSPDIFFormat(*(const struct tWAVEFORMATEX **)&v40.Data1) && (unsigned int)IsSPDIFEndpoint(v24) )
      DeviceDefaults = GetAcceptableSPDIFTypeForDevice(v24, v25, &v34, 0) != 0 ? 0x88890008 : 0;
    else
      DeviceDefaults = CloneWaveFormat(v25, &v34);
    if ( v24 )
      ((void (__fastcall *)(struct IMMDevice *))v24->lpVtbl->Release)(v24);
  }
  else if ( a3 == eOffloadConnector )
  {
    v41 = *a7;
    v37 = *a6;
    v42 = *a5;
    DeviceDefaults = DeriveOffloadConnectorFormatFromStreamFormat(this, Src, a6, &v37, (struct _GUID *)v33, &v34);
    if ( DeviceDefaults < 0 )
      goto LABEL_13;
    DeviceDefaults = CloneWaveFormat(v34, &v35);
    v15 = v35;
    ConvertPCMWfxToIEEEFloat(v35);
    if ( DeviceDefaults < 0 )
      goto LABEL_13;
    DeviceDefaults = CloneWaveFormat(v15, (struct tWAVEFORMATEX **)pv);
  }
  else if ( a2 )
  {
    v40 = *a7;
    v38 = *a6;
    v39 = *a5;
    DeviceDefaults = DeriveConnectorFormatFromStreamFormat(this, a3, Src, &v39, &v38, &v40, 1, &v34);
    if ( DeviceDefaults < 0 )
      goto LABEL_13;
    v26 = 0LL;
    *(_QWORD *)&v40.Data1 = 0LL;
    v27 = 0LL;
    *(_QWORD *)&v38.Data1 = 0LL;
    *(_QWORD *)&v39.Data1 = 0LL;
    DeviceDefaults = CAudioMediaType::Create(v34, (unsigned int)v34->cbSize + 18, (struct IAudioMediaType **)&v40, 0.0);
    v29 = *(_QWORD *)&v40.Data1;
    if ( DeviceDefaults >= 0 )
    {
      v30 = *(struct _GUID **)&v37.Data1;
      v37 = *(struct _GUID *)*(_QWORD *)&v37.Data1;
      DeviceDefaults = DeriveDevicePipeFormatFromConnectorFormat(
                         this,
                         v28,
                         a3,
                         *(struct IAudioMediaType **)&v40.Data1,
                         (struct IAudioMediaType **)&v38);
      if ( DeviceDefaults < 0 )
      {
        v27 = *(_QWORD *)&v38.Data1;
      }
      else
      {
        v37 = *v30;
        v27 = *(_QWORD *)&v38.Data1;
        DeviceDefaults = DeriveMixFormatFromDevicePipeFormat(
                           this,
                           &v37,
                           a3,
                           *(struct IAudioMediaType **)&v38.Data1,
                           (struct IAudioMediaType **)&v39);
        if ( DeviceDefaults < 0 )
        {
          v26 = *(_QWORD *)&v39.Data1;
        }
        else
        {
          v31 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
          DeviceDefaults = CloneWaveFormat(v31, (struct tWAVEFORMATEX **)pv);
          v26 = *(_QWORD *)&v39.Data1;
          if ( DeviceDefaults >= 0 )
          {
            v32 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v39.Data1 + 40LL))(*(_QWORD *)&v39.Data1);
            DeviceDefaults = CloneWaveFormat(v32, &v35);
            v15 = v35;
          }
        }
      }
    }
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    v14 = *(struct tWAVEFORMATEX ***)&v41.Data1;
    v13 = *(struct tWAVEFORMATEX ***)&v42.Data1;
  }
  else
  {
    v37 = *a7;
    DeviceDefaults = GetDeviceDefaults(this, a3, &v37, &v34, (struct tWAVEFORMATEX **)pv, 0LL, 0LL);
    if ( DeviceDefaults < 0 )
      goto LABEL_13;
    v17 = *(_QWORD *)&a7->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *(_QWORD *)&a7->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v17 = *(_QWORD *)a7->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( !v17 )
    {
      *(_QWORD *)&v38.Data1 = 0LL;
      v18 = *((_QWORD *)this + 2);
      *(_QWORD *)&v38.Data1 = v18;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      v37 = *a5;
      DeviceDefaults = CEndpointCharacteristics::GetMixFormat(this, a3, &v37, v19, &v35);
      if ( v18 )
      {
        *(_QWORD *)&v38.Data1 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v15 = v35;
    }
  }
  if ( DeviceDefaults >= 0 )
  {
    v20 = v34;
    v34 = 0LL;
    *v43 = v20;
    v21 = (struct tWAVEFORMATEX *)pv[0];
    pv[0] = 0LL;
    *v14 = v21;
    v22 = v15;
    v15 = 0LL;
    v35 = 0LL;
    *v13 = v22;
  }
LABEL_13:
  CoTaskMemFree(v15);
  v35 = 0LL;
  CoTaskMemFree(pv[0]);
  pv[0] = 0LL;
  CoTaskMemFree(v34);
  v34 = 0LL;
  return (unsigned int)DeviceDefaults;
}
