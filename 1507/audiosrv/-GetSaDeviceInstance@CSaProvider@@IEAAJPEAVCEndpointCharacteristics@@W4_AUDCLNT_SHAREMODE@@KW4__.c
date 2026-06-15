/*
 * XREFs of ?GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3K_K_J5PEBUtWAVEFORMATEX@@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800749B4
 * Callers:
 *     ?GetSaDevice@CSaProvider@@UEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEAPEAUIAudioDeviceGraph@@@Z @ 0x1800745D0 (-GetSaDevice@CSaProvider@@UEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEAPEAUIAudioDeviceGraph@@@Z @ 0x180021F10 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180066380 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ??0CSaDeviceInstance@@IEAA@PEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HU_GUID@@K_KPEAJ@Z @ 0x18007365C (--0CSaDeviceInstance@@IEAA@PEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ??_GCSaDeviceInstance@@QEAAPEAXI@Z @ 0x180073B50 (--_GCSaDeviceInstance@@QEAAPEAXI@Z.c)
 *     ?AddSaDevice@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEAVCSaDeviceInstance@@@Z @ 0x180073CD0 (-AddSaDevice@CSaProvider@@IEAAJPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?FindSaDeviceInstance@CSaProvider@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180074234 (-FindSaDeviceInstance@CSaProvider@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengin.c)
 *     ?ShouldSaDeviceBeCached@CEndpointCharacteristics@@QEAAHXZ @ 0x1800A99A0 (-ShouldSaDeviceBeCached@CEndpointCharacteristics@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSaProvider::GetSaDeviceInstance(
        CSaProvider *this,
        struct CEndpointCharacteristics *a2,
        __int32 a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct _GUID *a6,
        struct _GUID *a7,
        unsigned int a8,
        unsigned __int64 a9,
        __int64 a10,
        __int64 a11,
        struct tWAVEFORMATEX *a12,
        const struct tWAVEFORMATEX *a13,
        struct IAudioDeviceGraph **a14)
{
  CSaDeviceInstance *v16; // rbx
  struct IAudioDeviceGraph *v17; // rdi
  __int64 v18; // rsi
  int EndpointId; // r15d
  char *v20; // rcx
  CSaDeviceInstance *v21; // rdi
  unsigned __int16 *v22; // rbx
  int ShouldSaDeviceBeCached; // eax
  struct IAudioDeviceGraph *v24; // rsi
  __int64 v25; // rcx
  int v27[2]; // [rsp+68h] [rbp-89h] BYREF
  unsigned __int16 *v28; // [rsp+70h] [rbp-81h] BYREF
  struct IAudioDeviceGraph *v29; // [rsp+78h] [rbp-79h] BYREF
  __int64 v30; // [rsp+80h] [rbp-71h]
  CSaDeviceInstance *v31; // [rsp+88h] [rbp-69h]
  __int64 v32; // [rsp+90h] [rbp-61h]
  struct _GUID v33; // [rsp+98h] [rbp-59h] BYREF
  struct _GUID v34; // [rsp+A8h] [rbp-49h] BYREF
  struct _GUID v35; // [rsp+B8h] [rbp-39h] BYREF
  struct _GUID v36; // [rsp+C8h] [rbp-29h] BYREF
  CSaDeviceInstance *v37; // [rsp+D8h] [rbp-19h]
  struct _GUID v38; // [rsp+E8h] [rbp-9h] BYREF

  v32 = -2LL;
  v16 = 0LL;
  v31 = 0LL;
  v17 = 0LL;
  v29 = 0LL;
  v18 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  EndpointId = CEndpointCharacteristics::GetEndpointId(a2, &v28);
  if ( EndpointId < 0 )
    goto LABEL_20;
  v18 = *((_QWORD *)a2 + 2);
  v30 = v18;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v35 = *a6;
  EndpointId = CSaProvider::FindSaDeviceInstance(this, v28, a3, a5, &v35, a14);
  if ( EndpointId != -2005139430 )
    goto LABEL_17;
  v33 = GUID_00000000_0000_0000_0000_000000000000;
  v34 = *a7;
  v36 = *a6;
  EndpointId = CreateSaDevice(a2, (enum _AUDCLNT_SHAREMODE)a3, a4, a5, &v36, &v34, a10, a11, a12, a13, &v33, &v29);
  v27[0] = EndpointId;
  if ( EndpointId >= 0 )
  {
    v21 = (CSaDeviceInstance *)operator new(0xA0uLL);
    v37 = v21;
    if ( v21 )
    {
      v38 = *a6;
      v22 = v28;
      ShouldSaDeviceBeCached = CEndpointCharacteristics::ShouldSaDeviceBeCached(a2);
      v16 = CSaDeviceInstance::CSaDeviceInstance(
              v21,
              (size_t *)v22,
              (enum _AUDCLNT_SHAREMODE)a3,
              a5,
              ShouldSaDeviceBeCached,
              &v38,
              a8,
              a9,
              v27);
      EndpointId = v27[0];
    }
    else
    {
      v16 = 0LL;
    }
    v31 = v16;
    if ( !v16 )
    {
      EndpointId = -2147024882;
      goto LABEL_9;
    }
    if ( EndpointId < 0 )
      goto LABEL_9;
    EndpointId = CSaProvider::AddSaDevice(v20, (__int64)this + 104, (__int64 *)v16);
    v27[0] = EndpointId;
    if ( EndpointId < 0 )
      goto LABEL_9;
    _InterlockedIncrement((volatile signed __int32 *)v16 + 8);
    v24 = v29;
    *((_QWORD *)v16 + 3) = v29;
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v24 + 8LL))(v24);
    v17 = 0LL;
    v29 = 0LL;
    *a14 = v24;
    v16 = 0LL;
    v31 = 0LL;
    v25 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      EndpointId = v27[0];
      v18 = v30;
      goto LABEL_18;
    }
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x17u,
      (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
      v24);
    EndpointId = v27[0];
    v18 = v30;
LABEL_17:
    v25 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_18:
    if ( EndpointId >= 0 )
      goto LABEL_25;
    goto LABEL_21;
  }
LABEL_9:
  v17 = v29;
LABEL_20:
  v25 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_21:
  if ( (struct _GUID *)v25 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v25 + 28) & 0x40000) != 0
    && *(_BYTE *)(v25 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v25 + 16), 0x18u, (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids, EndpointId);
  }
LABEL_25:
  CoTaskMemFree(v28);
  v28 = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v17 )
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v16 )
    CSaDeviceInstance::`scalar deleting destructor'((struct _RTL_CRITICAL_SECTION *)v16);
  return (unsigned int)EndpointId;
}
