/*
 * XREFs of ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800699E8
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180069398 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180067EC0 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z @ 0x18006BE64 (-InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800700B8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(
        struct CEndpointCharacteristics *a1,
        unsigned int a2,
        WAVEFORMATEXTENSIBLE *a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX **a5)
{
  struct tWAVEFORMATEX **v5; // rdi
  unsigned int dwChannelMask; // esi
  int v11; // eax
  int v12; // ecx
  unsigned __int16 *v13; // r15
  int v14; // r14d
  WAVEFORMATEXTENSIBLE *v15; // rcx
  struct _GUID v18; // [rsp+50h] [rbp-31h] BYREF
  struct tWAVEFORMATEX **v19; // [rsp+60h] [rbp-21h]
  WAVEFORMATEXTENSIBLE v20; // [rsp+68h] [rbp-19h] BYREF

  v5 = a5;
  v19 = a5;
  if ( a3->Format.wFormatTag == 0xFFFE )
    dwChannelMask = a3->dwChannelMask;
  else
    dwChannelMask = 0;
  *a5 = 0LL;
  v11 = ValidateUncompressedWaveFormatEx(&a3->Format);
  v12 = v11;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v18 = *a4;
      v12 = ConnectorSupportsFormat(a1, a2, &a3->Format, &v18);
      if ( v12 >= 0 )
      {
        v15 = a3;
        return (unsigned int)CloneWaveFormat(&v15->Format, v5);
      }
    }
  }
  else
  {
    memset(&v20, 0, sizeof(v20));
    InitWaveFormatEx(&v20, 1, a3->Format.nSamplesPerSec, 32, 32, a3->Format.nChannels, dwChannelMask);
    v18 = *a4;
    v12 = ConnectorSupportsFormat(a1, a2, &v20.Format, &v18);
    if ( v12 >= 0 )
      goto LABEL_10;
    v13 = (unsigned __int16 *)&unk_1800ABB40;
    v14 = 0;
    do
    {
      if ( (unsigned __int64)v14 >= 5 )
        break;
      InitWaveFormatEx(&v20, 0, a3->Format.nSamplesPerSec, *v13, v13[1], a3->Format.nChannels, dwChannelMask);
      v18 = *a4;
      ++v14;
      v13 += 2;
      v12 = ConnectorSupportsFormat(a1, a2, &v20.Format, &v18);
    }
    while ( v12 < 0 );
    v5 = v19;
    if ( v12 >= 0 )
    {
LABEL_10:
      v15 = &v20;
      return (unsigned int)CloneWaveFormat(&v15->Format, v5);
    }
  }
  return (unsigned int)v12;
}
