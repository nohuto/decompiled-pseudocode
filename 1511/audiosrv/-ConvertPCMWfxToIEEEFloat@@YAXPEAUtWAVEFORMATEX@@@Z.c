/*
 * XREFs of ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180080350
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180010180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180081298 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?IsConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x180083B54 (-IsConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MID.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertPCMWfxToIEEEFloat(struct tWAVEFORMATEX *a1)
{
  WORD v2; // cx
  DWORD v3; // eax

  if ( a1
    && (a1->wFormatTag == 1
     || a1->wFormatTag == 0xFFFE
     && *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
     && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *(_QWORD *)&a1[1].wBitsPerSample)
    && (a1->wFormatTag != 0xFFFE || (a1[1].wFormatTag & 0x80000007) == 0) )
  {
    if ( a1->wFormatTag == 1 )
    {
      a1->wFormatTag = 3;
    }
    else
    {
      a1[1].wFormatTag = 32;
      *(GUID *)((char *)&a1[1].nSamplesPerSec + 2) = GUID_00000003_0000_0010_8000_00aa00389b71;
    }
    v2 = 4 * a1->nChannels;
    v3 = (unsigned __int16)(4 * a1->nChannels) * a1->nSamplesPerSec;
    a1->wBitsPerSample = 32;
    a1->nBlockAlign = v2;
    a1->nAvgBytesPerSec = v3;
  }
}
