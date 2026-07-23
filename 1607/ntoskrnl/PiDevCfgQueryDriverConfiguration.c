/*
 * XREFs of PiDevCfgQueryDriverConfiguration @ 0x14063BE34
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140632C24 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063CA4C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14063D598 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140641768 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlStringFromGUIDEx @ 0x1403F6D4C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140632698 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063CA4C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgVerifyService @ 0x140641240 (PiDevCfgVerifyService.c)
 */

__int64 __fastcall PiDevCfgQueryDriverConfiguration(__int64 a1)
{
  int v1; // eax
  int ObjectProperties; // edi
  const WCHAR *v4; // rdi
  int RegistryValues; // eax
  const WCHAR *v6; // rcx
  const WCHAR *v7; // rsi
  __int64 v8; // rax
  const WCHAR *v9; // rsi
  __int64 v10; // rax
  void *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  _BYTE v16[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v17[16]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v18[56]; // [rsp+C8h] [rbp-40h] BYREF

  v1 = *(_DWORD *)(a1 + 168);
  v16[1] = 0;
  v16[0] = 0;
  if ( (v1 & 0x20) != 0 )
  {
    v4 = *(const WCHAR **)(a1 + 32);
  }
  else
  {
    ObjectProperties = PiDevCfgBuildDriverConfigurationId(a1, (UNICODE_STRING *)(a1 + 376));
    if ( ObjectProperties < 0 )
      return (unsigned int)ObjectProperties;
    if ( !*(_QWORD *)(a1 + 24) )
      return (unsigned int)-1073740653;
    v4 = *(const WCHAR **)(a1 + 32);
  }
  if ( !v4 )
    return (unsigned int)-1073740653;
  memset(v18, 0, sizeof(v18));
  v18[2] = L"Service";
  LODWORD(v18[11]) = 117440512;
  LODWORD(v18[1]) = 288;
  LODWORD(v18[18]) = 117440512;
  v18[9] = L"LowerFilters";
  LODWORD(v18[25]) = 0x4000000;
  LODWORD(v18[8]) = 304;
  v18[16] = L"UpperFilters";
  LODWORD(v18[15]) = 304;
  v18[23] = L"ConfigFlags";
  LODWORD(v18[32]) = 117440512;
  v18[24] = a1 + 368;
  LODWORD(v18[29]) = 304;
  v18[30] = L"IncludedInfs";
  v18[37] = L"IncludedConfigs";
  v18[44] = L"Reboot";
  LODWORD(v18[39]) = 117440512;
  LODWORD(v18[36]) = 304;
  LODWORD(v18[46]) = 0x4000000;
  LODWORD(v18[43]) = 288;
  v18[45] = a1 + 372;
  LODWORD(v18[4]) = 0x1000000;
  v18[3] = a1 + 272;
  v18[10] = a1 + 288;
  v18[17] = a1 + 304;
  LODWORD(v18[22]) = 292;
  v18[31] = a1 + 320;
  v18[38] = a1 + 336;
  RegistryValues = RtlpQueryRegistryValues(3221225472LL, v4, (__int64)v18, 0LL, 0LL, 1);
  ObjectProperties = RegistryValues;
  if ( RegistryValues == -1073741772 )
    return (unsigned int)-1073740653;
  if ( RegistryValues < 0 )
    return (unsigned int)ObjectProperties;
  if ( *(_WORD *)(a1 + 288) <= 2u && *(_QWORD *)(a1 + 296) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 288));
  if ( *(_WORD *)(a1 + 304) <= 2u && *(_QWORD *)(a1 + 312) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
  if ( *(_WORD *)(a1 + 320) <= 2u && *(_QWORD *)(a1 + 328) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 320));
  if ( *(_WORD *)(a1 + 336) <= 2u && *(_QWORD *)(a1 + 344) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 336));
  if ( (*(_DWORD *)(a1 + 168) & 0x20) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 4) == 0 && *(_QWORD *)(a1 + 280) )
      RtlFreeAnsiString((PUNICODE_STRING)(a1 + 272));
    if ( (*(_DWORD *)(a1 + 104) & 2) == 0 )
    {
      if ( *(_QWORD *)(a1 + 296) )
        RtlFreeAnsiString((PUNICODE_STRING)(a1 + 288));
      if ( *(_QWORD *)(a1 + 312) )
        RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
    }
  }
  v6 = *(const WCHAR **)(a1 + 280);
  if ( v6 )
  {
    if ( *(_WORD *)(a1 + 272) )
    {
      ObjectProperties = PiDevCfgVerifyService(v6);
      if ( ObjectProperties < 0 )
        return (unsigned int)-1073740653;
    }
  }
  v7 = *(const WCHAR **)(a1 + 296);
  if ( !v7 )
    goto LABEL_71;
  while ( *v7 )
  {
    ObjectProperties = PiDevCfgVerifyService(v7);
    if ( ObjectProperties < 0 )
    {
      ObjectProperties = -1073740653;
      break;
    }
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v7 += v8 + 1;
  }
  if ( ObjectProperties >= 0 )
  {
LABEL_71:
    v9 = *(const WCHAR **)(a1 + 312);
    if ( !v9 )
      goto LABEL_54;
    while ( *v9 )
    {
      ObjectProperties = PiDevCfgVerifyService(v9);
      if ( ObjectProperties < 0 )
      {
        ObjectProperties = -1073740653;
        break;
      }
      v10 = -1LL;
      do
        ++v10;
      while ( v9[v10] );
      v9 += v10 + 1;
    }
    if ( ObjectProperties >= 0 )
    {
LABEL_54:
      if ( (*(_DWORD *)(a1 + 168) & 0x20) != 0 )
      {
LABEL_67:
        *(_DWORD *)(a1 + 168) |= 1u;
        return (unsigned int)ObjectProperties;
      }
      memset(v17, 0, 0x78uLL);
      v11 = *(void **)(a1 + 16);
      v12 = *(_QWORD *)(a1 + 64);
      v17[0] = &DEVPKEY_DriverPackage_ClassGuid;
      v17[5] = &DEVPKEY_DriverPackage_ProviderName;
      LODWORD(v17[1]) = 13;
      v17[10] = &DEVPKEY_DriverPackage_NeedsReconfig;
      v17[12] = v16;
      v17[2] = a1 + 224;
      LODWORD(v17[3]) = 16;
      LODWORD(v17[6]) = 18;
      v17[7] = a1 + 256;
      HIDWORD(v17[8]) = 6;
      LODWORD(v17[11]) = 17;
      LODWORD(v17[13]) = 1;
      ObjectProperties = PiDevCfgQueryObjectProperties(v13, v12, 7u, v11, (__int64)v17, 3u);
      if ( ObjectProperties >= 0 )
      {
        if ( SLODWORD(v17[4]) < 0 )
        {
          *(_QWORD *)(a1 + 224) = 0LL;
          *(_QWORD *)(a1 + 232) = 0LL;
        }
        else
        {
          ObjectProperties = RtlStringFromGUIDEx((PGUID)(a1 + 224), (PUNICODE_STRING)(a1 + 240), 1u);
          if ( ObjectProperties < 0 )
            return (unsigned int)ObjectProperties;
        }
        if ( SLODWORD(v17[9]) < 0 )
          RtlInitUnicodeString((PUNICODE_STRING)(a1 + 256), 0LL);
        v14 = v16[0];
        if ( SLODWORD(v17[14]) < 0 )
          v14 = 0;
        v16[0] = v14;
        if ( v14 == -1 )
          *(_DWORD *)(a1 + 168) |= 0x40u;
        ObjectProperties = PiDevCfgQueryIncludedDriverConfigurations(a1);
        if ( ObjectProperties >= 0 )
          goto LABEL_67;
      }
    }
  }
  return (unsigned int)ObjectProperties;
}
