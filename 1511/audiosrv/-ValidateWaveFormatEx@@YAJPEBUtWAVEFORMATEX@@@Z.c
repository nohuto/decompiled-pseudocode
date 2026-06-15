/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800110D0
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180010630 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180010EC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_a.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800210E0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800235C0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?GetDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180083034 (-GetDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengi.c)
 *     ?UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800863B8 (-UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180086890 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@Z @ 0x1800A4570 (--$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r8d
  WORD nChannels; // r9
  DWORD nSamplesPerSec; // r11d
  DWORD nAvgBytesPerSec; // ebx
  WORD nBlockAlign; // di
  WORD cbSize; // dx
  WORD wBitsPerSample; // dx
  WORD wFormatTag; // ax
  bool v10; // zf

  v1 = 0;
  if ( !a1 )
    return 2147500035LL;
  nChannels = a1->nChannels;
  if ( !nChannels )
    return (unsigned int)-2147024809;
  nSamplesPerSec = a1->nSamplesPerSec;
  if ( !nSamplesPerSec )
    return (unsigned int)-2147024809;
  nAvgBytesPerSec = a1->nAvgBytesPerSec;
  if ( !nAvgBytesPerSec )
    return (unsigned int)-2147024809;
  nBlockAlign = a1->nBlockAlign;
  if ( !nBlockAlign )
    return (unsigned int)-2147024809;
  cbSize = a1->cbSize;
  if ( cbSize > 0x400u )
    return (unsigned int)-2147024809;
  if ( ((a1->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    if ( cbSize || (a1->wBitsPerSample & 0x80000007) != 0 || nChannels > 2u )
      return (unsigned int)-2147024809;
    v10 = nAvgBytesPerSec == (nSamplesPerSec * a1->wBitsPerSample * nChannels) >> 3;
    goto LABEL_28;
  }
  if ( a1->wFormatTag != 0xFFFE )
    return v1;
  if ( cbSize < 0x16u )
    return (unsigned int)-2147024809;
  if ( (*(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
     || *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)&a1[1].wBitsPerSample)
    && (*(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
     || *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)&a1[1].wBitsPerSample) )
  {
    return v1;
  }
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
    && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *(_QWORD *)&a1[1].wBitsPerSample )
  {
    wBitsPerSample = a1->wBitsPerSample;
    if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
      return (unsigned int)-2147024809;
    goto LABEL_20;
  }
  wBitsPerSample = a1->wBitsPerSample;
  if ( ((wBitsPerSample - 32) & 0xFFDF) != 0 )
    return (unsigned int)-2147024809;
LABEL_20:
  wFormatTag = a1[1].wFormatTag;
  if ( !wFormatTag
    || wBitsPerSample < wFormatTag
    || nAvgBytesPerSec != (nSamplesPerSec * nChannels * wBitsPerSample) >> 3 )
  {
    return (unsigned int)-2147024809;
  }
  v10 = nBlockAlign == nChannels * wBitsPerSample / 8;
LABEL_28:
  if ( !v10 )
    return (unsigned int)-2147024809;
  return v1;
}
