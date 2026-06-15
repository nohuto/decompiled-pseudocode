/*
 * XREFs of ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x18008A5A8
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180022F00 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180030080 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEBGPEBUtWAVEFORMATEX@@PEAPEAU1@H@Z @ 0x18008A904 (-GetAcceptableSPDIFTypeForDevice@@YAJPEBGPEBUtWAVEFORMATEX@@PEAPEAU1@H@Z.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180031424 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180034BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x18008A52C (-FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z.c)
 *     ?SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x18008C184 (-SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z.c)
 *     ?SpdifSampleRateFlag@@YAKK@Z @ 0x18008C300 (-SpdifSampleRateFlag@@YAKK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetAcceptableSPDIFTypeForDevice(
        struct IMMDevice *a1,
        const struct tWAVEFORMATEX *a2,
        struct tWAVEFORMATEX **a3,
        int a4)
{
  struct KSDATAFORMAT_WAVEFORMATEX *v7; // r14
  int v8; // esi
  _DWORD *v9; // rbx
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  int v12; // r8d
  int wBitsPerSample; // ecx
  int v14; // eax
  unsigned int v15; // r11d
  int v16; // r11d
  unsigned int v17; // r15d
  GUID *v18; // rdx
  unsigned int v19; // r10d
  __int64 *v21; // [rsp+20h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-30h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h]
  _DWORD *v27; // [rsp+60h] [rbp-10h]
  struct KSDATAFORMAT_WAVEFORMATEX *v28; // [rsp+B0h] [rbp+40h] BYREF
  int v29; // [rsp+C8h] [rbp+58h]

  v29 = a4;
  v24[1] = -2LL;
  v7 = 0LL;
  v28 = 0LL;
  v23 = 0LL;
  v24[0] = 0LL;
  v22 = 0LL;
  pvar = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v22);
  if ( v8 < 0 )
    goto LABEL_36;
  v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v22 + 40LL))(
         v22,
         &PKEY_Endpoint_SPDIFFormatSupport,
         &pvar);
  if ( v8 < 0 )
    goto LABEL_36;
  if ( (_WORD)pvar != 65 || (unsigned int)v26 < 0x1C )
    goto LABEL_4;
  v9 = v27;
  v10 = v27[2];
  v11 = 16LL * v10;
  if ( v11 > 0xFFFFFFFF || (unsigned int)v11 >= 0xFFFFFFF4 || (_DWORD)v26 != (_DWORD)v11 + 12 )
  {
    v8 = -2004287467;
    goto LABEL_36;
  }
  if ( (SpdifSampleRateFlag(a2->nSamplesPerSec) & *v9) == 0 )
    goto LABEL_4;
  wBitsPerSample = a2->wBitsPerSample;
  v14 = 8;
  switch ( wBitsPerSample )
  {
    case 8:
      v14 = 1;
      break;
    case 16:
      v14 = 2;
      break;
    case 24:
      v14 = 4;
      break;
    default:
      if ( wBitsPerSample != 32 )
        v14 = v12;
      break;
  }
  if ( (v14 & v9[1]) == 0 )
    goto LABEL_4;
  v15 = v12;
  if ( !v10 )
    goto LABEL_4;
  while ( !(unsigned int)FormatHasSpecifiedSubtype(a2, (const struct _GUID *)&v9[4 * v15 + 3]) )
  {
    v15 = v16 + 1;
    if ( v15 >= v10 )
      goto LABEL_4;
  }
  v8 = CreateKSFormatFromWFXFormat(a2, &v28);
  if ( v8 < 0
    || (v21 = &v23,
        v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
               a1,
               &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
               23LL),
        v8 < 0) )
  {
    v7 = v28;
    goto LABEL_36;
  }
  v17 = 0;
  v7 = v28;
  if ( !g_cCompressedPassThruFormats )
  {
LABEL_4:
    v8 = -2004287480;
    goto LABEL_36;
  }
  while ( 1 )
  {
    v18 = &g_rgCompressedPassThruFormats + v17;
    v7->DataFormat.SubFormat = *v18;
    if ( (unsigned int)SetFormatSubType(&v7->WaveFormatEx, v18) )
      break;
LABEL_30:
    if ( ++v17 >= v19 )
      goto LABEL_4;
  }
  LODWORD(v21) = v29;
  v8 = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, _QWORD, _QWORD, __int64 *, _QWORD *))(*(_QWORD *)v23 + 80LL))(
         v23,
         v7,
         v7->DataFormat.FormatSize,
         0LL,
         v21,
         v24);
  if ( v8 )
  {
    v19 = g_cCompressedPassThruFormats;
    goto LABEL_30;
  }
  if ( a3 )
    v8 = CloneWaveFormat(&v7->WaveFormatEx, a3);
LABEL_36:
  PropVariantClear(&pvar);
  if ( v7 )
    CoTaskMemFree(v7);
  if ( v8 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x77u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      v8);
  }
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v24[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24[0] + 16LL))(v24[0]);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return (unsigned int)v8;
}
