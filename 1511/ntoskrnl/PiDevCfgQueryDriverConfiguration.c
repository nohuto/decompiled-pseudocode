/*
 * XREFs of PiDevCfgQueryDriverConfiguration @ 0x1405113A0
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140511784 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140607950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x140609E1C (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14060D284 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140511784 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgVerifyService @ 0x1405117E4 (PiDevCfgVerifyService.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140511948 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 */

__int64 __fastcall PiDevCfgQueryDriverConfiguration(__int64 a1)
{
  int v1; // eax
  NTSTATUS ObjectProperties; // edi
  const WCHAR *v4; // rdi
  int RegistryValues; // eax
  const WCHAR *v6; // rcx
  const WCHAR *v7; // rsi
  const WCHAR *v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // ecx
  char v12; // al
  __int64 v14; // rax
  __int64 v15; // rax
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
    ObjectProperties = PiDevCfgBuildDriverConfigurationId(a1, a1 + 376);
    if ( ObjectProperties < 0 )
      return (unsigned int)ObjectProperties;
    if ( !*(_QWORD *)(a1 + 24) )
      return (unsigned int)-1073740653;
    v4 = *(const WCHAR **)(a1 + 32);
  }
  if ( !v4 )
    return (unsigned int)-1073740653;
  memset(v18, 0, sizeof(v18));
  LODWORD(v18[4]) = 0x1000000;
  LODWORD(v18[11]) = 117440512;
  LODWORD(v18[1]) = 288;
  LODWORD(v18[18]) = 117440512;
  v18[2] = L"Service";
  LODWORD(v18[25]) = 0x4000000;
  LODWORD(v18[8]) = 304;
  v18[9] = L"LowerFilters";
  LODWORD(v18[15]) = 304;
  v18[16] = L"UpperFilters";
  LODWORD(v18[32]) = 117440512;
  v18[23] = L"ConfigFlags";
  LODWORD(v18[29]) = 304;
  v18[24] = a1 + 368;
  LODWORD(v18[39]) = 117440512;
  v18[30] = L"IncludedInfs";
  LODWORD(v18[36]) = 304;
  v18[37] = L"IncludedConfigs";
  LODWORD(v18[46]) = 0x4000000;
  v18[44] = L"Reboot";
  LODWORD(v18[43]) = 288;
  v18[45] = a1 + 372;
  v18[3] = a1 + 272;
  v18[10] = a1 + 288;
  v18[17] = a1 + 304;
  LODWORD(v18[22]) = 292;
  v18[31] = a1 + 320;
  v18[38] = a1 + 336;
  RegistryValues = RtlpQueryRegistryValues(3221225472LL, v4, (__int64)v18, 0LL);
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
    goto LABEL_70;
  while ( *v7 )
  {
    ObjectProperties = PiDevCfgVerifyService(v7);
    if ( ObjectProperties < 0 )
    {
      ObjectProperties = -1073740653;
      break;
    }
    v14 = -1LL;
    do
      ++v14;
    while ( v7[v14] );
    v7 += v14 + 1;
  }
  if ( ObjectProperties >= 0 )
  {
LABEL_70:
    v8 = *(const WCHAR **)(a1 + 312);
    if ( !v8 )
      goto LABEL_26;
    while ( *v8 )
    {
      ObjectProperties = PiDevCfgVerifyService(v8);
      if ( ObjectProperties < 0 )
      {
        ObjectProperties = -1073740653;
        break;
      }
      v15 = -1LL;
      do
        ++v15;
      while ( v8[v15] );
      v8 += v15 + 1;
    }
    if ( ObjectProperties >= 0 )
    {
LABEL_26:
      if ( (*(_DWORD *)(a1 + 168) & 0x20) != 0 )
      {
LABEL_37:
        *(_DWORD *)(a1 + 168) |= 1u;
        return (unsigned int)ObjectProperties;
      }
      memset(v17, 0, 0x78uLL);
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *(_QWORD *)(a1 + 64);
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
      ObjectProperties = PiDevCfgQueryObjectProperties(v11, v10, 7, v9, (__int64)v17, 3);
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
        v12 = v16[0];
        if ( SLODWORD(v17[14]) < 0 )
          v12 = 0;
        v16[0] = v12;
        if ( v12 == -1 )
          *(_DWORD *)(a1 + 168) |= 0x40u;
        ObjectProperties = PiDevCfgQueryIncludedDriverConfigurations(a1);
        if ( ObjectProperties >= 0 )
          goto LABEL_37;
      }
    }
  }
  return (unsigned int)ObjectProperties;
}
