/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001A650
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x18000AB50 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001A7C0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001BF30 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ??$GetDeviceFormatInternal@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001C378 (--$GetDeviceFormatInternal@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180020B70 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800700B8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??$ForEachCandidateFormatForMode@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@Z @ 0x1800854E4 (--$ForEachCandidateFormatForMode@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@CEndpointCharacter.c)
 *     ??$GetDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086A7C (--$GetDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJ.c)
 *     ??$GetDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086C40 (--$GetDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJ.c)
 *     ??$GetDeviceFormatInternal@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086DDC (--$GetDeviceFormatInternal@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18008A600 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r8d
  WORD nChannels; // r11
  DWORD nSamplesPerSec; // r10d
  DWORD nAvgBytesPerSec; // ebx
  WORD nBlockAlign; // di
  WORD cbSize; // dx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  WORD wBitsPerSample; // dx
  WORD wFormatTag; // ax

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-2147467261;
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
  if ( ((a1->wFormatTag - 1) & 0xFFFD) != 0 )
  {
    if ( a1->wFormatTag != 0xFFFE )
      return v1;
    if ( cbSize < 0x16u )
      return (unsigned int)-2147024809;
    v7 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v7 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v7 )
      goto LABEL_16;
    v8 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v8 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v8 )
    {
LABEL_16:
      v9 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
      if ( !v9 )
        v9 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
      wBitsPerSample = a1->wBitsPerSample;
      if ( v9 )
      {
        if ( ((wBitsPerSample - 32) & 0xFFDF) != 0 )
          return (unsigned int)-2147024809;
      }
      else if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
      {
        return (unsigned int)-2147024809;
      }
      wFormatTag = a1[1].wFormatTag;
      if ( wFormatTag
        && wBitsPerSample >= wFormatTag
        && nAvgBytesPerSec == (nSamplesPerSec * nChannels * wBitsPerSample) >> 3
        && nBlockAlign == nChannels * wBitsPerSample / 8 )
      {
        return v1;
      }
      return (unsigned int)-2147024809;
    }
  }
  else if ( cbSize
         || (a1->wBitsPerSample & 0x80000007) != 0
         || nChannels > 2u
         || nAvgBytesPerSec != (nSamplesPerSec * a1->wBitsPerSample * nChannels) >> 3 )
  {
    return (unsigned int)-2147024809;
  }
  return v1;
}
