/*
 * XREFs of PiDevCfgQueryDriverConfiguration @ 0x140587FA4
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140682C5C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406885D4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x140689244 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14068CF4C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140588050 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406885D4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgVerifyService @ 0x14068CD54 (PiDevCfgVerifyService.c)
 */

__int64 __fastcall PiDevCfgQueryDriverConfiguration(__int64 a1)
{
  int v1; // eax
  NTSTATUS ObjectProperties; // edi
  const WCHAR *v5; // rdi
  int RegistryValues; // eax
  const WCHAR *v7; // rcx
  const WCHAR *v8; // rsi
  __int64 v9; // rax
  const WCHAR *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // ecx
  char v15; // al
  _BYTE v16[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v17[16]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v18[56]; // [rsp+C8h] [rbp-40h] BYREF

  v1 = *(_DWORD *)(a1 + 168);
  v16[1] = 0;
  v16[0] = 0;
  if ( (v1 & 0x20) != 0 )
  {
    v5 = *(const WCHAR **)(a1 + 32);
  }
  else
  {
    ObjectProperties = PiDevCfgBuildDriverConfigurationId(a1, a1 + 376);
    if ( ObjectProperties < 0 )
      return (unsigned int)ObjectProperties;
    if ( !*(_QWORD *)(a1 + 24) )
      return (unsigned int)-1073741637;
    v5 = *(const WCHAR **)(a1 + 32);
  }
  if ( !v5 )
    return (unsigned int)-1073741637;
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
  RegistryValues = RtlpQueryRegistryValues(3221225472LL, v5, (__int64)v18, 0LL, 0LL, 1);
  ObjectProperties = RegistryValues;
  if ( RegistryValues == -1073741772 )
    return (unsigned int)-1073741637;
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
  v7 = *(const WCHAR **)(a1 + 280);
  if ( v7 )
  {
    if ( *(_WORD *)(a1 + 272) )
    {
      ObjectProperties = PiDevCfgVerifyService(v7);
      if ( ObjectProperties < 0 )
        return (unsigned int)-1073741637;
    }
  }
  v8 = *(const WCHAR **)(a1 + 296);
  if ( !v8 )
    goto LABEL_71;
  while ( *v8 )
  {
    ObjectProperties = PiDevCfgVerifyService(v8);
    if ( ObjectProperties < 0 )
    {
      ObjectProperties = -1073741637;
      break;
    }
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v8 += v9 + 1;
  }
  if ( ObjectProperties >= 0 )
  {
LABEL_71:
    v10 = *(const WCHAR **)(a1 + 312);
    if ( !v10 )
      goto LABEL_55;
    while ( *v10 )
    {
      ObjectProperties = PiDevCfgVerifyService(v10);
      if ( ObjectProperties < 0 )
      {
        ObjectProperties = -1073741637;
        break;
      }
      v11 = -1LL;
      do
        ++v11;
      while ( v10[v11] );
      v10 += v11 + 1;
    }
    if ( ObjectProperties >= 0 )
    {
LABEL_55:
      if ( (*(_DWORD *)(a1 + 168) & 0x20) != 0 )
        goto LABEL_68;
      memset(v17, 0, 0x78uLL);
      v12 = *(_QWORD *)(a1 + 16);
      v13 = *(_QWORD *)(a1 + 64);
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
      ObjectProperties = PiDevCfgQueryObjectProperties(v14, v13, 7, v12, (__int64)v17, 3);
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
        v15 = v16[0];
        if ( SLODWORD(v17[14]) < 0 )
          v15 = 0;
        v16[0] = v15;
        if ( v15 == -1 )
          *(_DWORD *)(a1 + 168) |= 0x40u;
        ObjectProperties = PiDevCfgQueryIncludedDriverConfigurations(a1);
        if ( ObjectProperties >= 0 )
LABEL_68:
          *(_DWORD *)(a1 + 168) |= 1u;
      }
    }
  }
  return (unsigned int)ObjectProperties;
}
