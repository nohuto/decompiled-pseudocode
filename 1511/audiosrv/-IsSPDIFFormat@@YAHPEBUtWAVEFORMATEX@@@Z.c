/*
 * XREFs of ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800380D0
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180010180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSPDIFFormat(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // edx
  BOOL v2; // edi
  DWORD v4; // ebx
  HRESULT v5; // eax
  unsigned int v6; // r8d
  WORD wFormatTag; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  DWORD cchName; // [rsp+68h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+18h] BYREF

  v1 = g_cCompressedPassThruFormats;
  v2 = 0;
  hKey = 0LL;
  if ( !g_cCompressedPassThruFormats )
  {
    if ( RegOpenKeyExW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\SPDIF_Formats",
           0,
           8u,
           &hKey) )
    {
      goto LABEL_26;
    }
    v4 = 0;
    while ( 1 )
    {
      cchName = 260;
      if ( RegEnumKeyExW(hKey, v4, sz, &cchName, 0LL, 0LL, 0LL, 0LL) )
        break;
      v5 = CLSIDFromString(sz, &g_rgCompressedPassThruFormats + v4);
      v1 = g_cCompressedPassThruFormats;
      if ( v5 >= 0 )
        v1 = ++g_cCompressedPassThruFormats;
      if ( ++v4 >= 0x20 )
        goto LABEL_10;
    }
    v1 = g_cCompressedPassThruFormats;
  }
LABEL_10:
  if ( a1 )
  {
    v6 = 0;
    if ( v1 )
    {
      wFormatTag = a1->wFormatTag;
      while ( wFormatTag != 0xFFFE )
      {
        if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + 16 * v6 + 2)
          && *(_DWORD *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == *(_DWORD *)&g_rgCompressedPassThruFormats.Data4[16 * v6 + 2]
          && *(_WORD *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6] == *(_WORD *)&g_rgCompressedPassThruFormats.Data4[16 * v6 + 6] )
        {
          if ( *((_WORD *)&g_rgCompressedPassThruFormats.Data1 + 8 * v6) == wFormatTag )
          {
            v2 = 1;
            goto LABEL_26;
          }
          v2 = 0;
          goto LABEL_22;
        }
LABEL_23:
        if ( ++v6 >= v1 )
          goto LABEL_26;
      }
      v8 = 16LL * v6;
      v9 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
         - *(_QWORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v8);
      if ( !v9 )
        v9 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)&g_rgCompressedPassThruFormats.Data4[v8];
      v2 = v9 == 0;
LABEL_22:
      if ( v2 )
        goto LABEL_26;
      goto LABEL_23;
    }
  }
LABEL_26:
  if ( hKey )
    RegCloseKey(hKey);
  return v2;
}
