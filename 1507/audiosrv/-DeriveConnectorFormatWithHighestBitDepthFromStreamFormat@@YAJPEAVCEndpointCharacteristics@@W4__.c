/*
 * XREFs of ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x180085E80
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18008553C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180030474 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180034BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180084F28 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z @ 0x180087A90 (-InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z.c)
 */

__int64 __fastcall DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(
        struct CEndpointCharacteristics *a1,
        unsigned int a2,
        struct WAVEFORMATEXTENSIBLE *a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX **a5)
{
  unsigned int dwChannelMask; // esi
  int v9; // eax
  struct _GUID *v10; // r9
  int v11; // ecx
  struct _GUID *v12; // r9
  int v13; // ebp
  unsigned __int16 *v14; // r14
  struct _GUID *v15; // r9
  struct WAVEFORMATEXTENSIBLE *v16; // rcx
  struct WAVEFORMATEXTENSIBLE v18; // [rsp+50h] [rbp-68h] BYREF

  if ( a3->Format.wFormatTag == 0xFFFE )
    dwChannelMask = a3->dwChannelMask;
  else
    dwChannelMask = 0;
  *a5 = 0LL;
  v9 = ValidateUncompressedWaveFormatEx(&a3->Format);
  v11 = v9;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v11 = ConnectorSupportsFormat(a1, a2, &a3->Format, v10);
      if ( v11 >= 0 )
      {
        v16 = a3;
        return (unsigned int)CloneWaveFormat(&v16->Format, a5);
      }
    }
  }
  else
  {
    memset_0(&v18, 0, sizeof(v18));
    InitWaveFormatEx(&v18, 1, a3->Format.nSamplesPerSec, 32, 32, a3->Format.nChannels, dwChannelMask);
    v11 = ConnectorSupportsFormat(a1, a2, &v18.Format, v12);
    if ( v11 >= 0 )
      goto LABEL_10;
    v13 = 0;
    v14 = (unsigned __int16 *)&unk_1800C7EF0;
    do
    {
      if ( (unsigned __int64)v13 >= 5 )
        break;
      InitWaveFormatEx(&v18, 0, a3->Format.nSamplesPerSec, *v14, v14[1], a3->Format.nChannels, dwChannelMask);
      ++v13;
      v14 += 2;
      v11 = ConnectorSupportsFormat(a1, a2, &v18.Format, v15);
    }
    while ( v11 < 0 );
    if ( v11 >= 0 )
    {
LABEL_10:
      v16 = &v18;
      return (unsigned int)CloneWaveFormat(&v16->Format, a5);
    }
  }
  return (unsigned int)v11;
}
