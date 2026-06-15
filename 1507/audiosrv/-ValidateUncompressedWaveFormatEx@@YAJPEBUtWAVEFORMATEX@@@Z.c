/*
 * XREFs of ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180030474
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180020DA0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEAPEAUIAudioDeviceGraph@@@Z @ 0x180021F10 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x180033320 (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800336B0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033B28 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180033FFC (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180034840 (-SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x180085E80 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 *     ?SetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x180088710 (-SetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001ED50 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall ValidateUncompressedWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  int v2; // ecx
  __int64 v3; // rax
  __int64 v5; // rax

  if ( a1 )
  {
    v2 = ValidateWaveFormatEx(a1);
    if ( v2 >= 0 )
    {
      v2 = 1;
      if ( ((a1->wFormatTag - 1) & 0xFFFD) == 0 )
        return 0;
      if ( a1->wFormatTag == 0xFFFE )
      {
        v3 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
           - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
          v3 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
        if ( !v3 )
          return 0;
        v5 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
           - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
        if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
          v5 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
        if ( !v5 )
          return 0;
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v2;
}
