/*
 * XREFs of ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800877C8
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180010180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18003A8F4 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x18008775C (-FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z.c)
 *     ?SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x180088B04 (-SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z.c)
 *     ?SpdifSampleRateFlag@@YAKK@Z @ 0x180088C80 (-SpdifSampleRateFlag@@YAKK@Z.c)
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
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  _DWORD *v12; // r11
  int wBitsPerSample; // ecx
  int v14; // eax
  unsigned int v15; // r10d
  int v16; // r10d
  unsigned int v17; // r15d
  GUID *v18; // rdx
  unsigned int v19; // r10d
  __int64 *v21; // [rsp+20h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-30h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h]
  __int64 v27; // [rsp+60h] [rbp-10h]
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
  v9 = *(_DWORD *)(v27 + 8);
  v10 = 16LL * v9;
  if ( v10 > 0xFFFFFFFF || (unsigned int)v10 >= 0xFFFFFFF4 || (_DWORD)v26 != (_DWORD)v10 + 12 )
  {
    v8 = -2004287467;
    goto LABEL_36;
  }
  v11 = SpdifSampleRateFlag(a2->nSamplesPerSec);
  if ( (v11 & *v12) == 0 )
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
        v14 = 0;
      break;
  }
  if ( (v14 & v12[1]) == 0 )
    goto LABEL_4;
  v15 = 0;
  if ( !v9 )
    goto LABEL_4;
  while ( !(unsigned int)FormatHasSpecifiedSubtype(a2, (const struct _GUID *)&v12[4 * v15 + 3]) )
  {
    v15 = v16 + 1;
    if ( v15 >= v9 )
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
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x74u, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v8);
  }
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v24[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24[0] + 16LL))(v24[0]);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return (unsigned int)v8;
}
